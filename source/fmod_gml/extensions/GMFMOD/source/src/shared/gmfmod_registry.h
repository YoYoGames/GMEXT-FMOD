#pragma once

#include <cstdint>
#include <map>
#include <mutex>
#include <vector>

namespace gmfmod
{

// Owns the id <-> object mapping for one registry-backed FMOD type. Registry
// ids start at 1 so that 0 stays the invalid ref, and a released id is never
// reused. One instance per type, never one shared map: a freed object's
// address can be reused by an object of another type, and a shared reverse
// map would hand the new object the old id.
//
// Every entry records its owner - the FMOD::System the object belongs to,
// opaque here - so that releasing or closing a system can evict everything it
// owned instead of leaving refs that resolve to freed memory.
//
// Threading: only the game thread mutates a registry, and the game thread
// reads it without locking. idOf() and snapshot() are the entry points another
// thread may call - FMOD's error and mixer callbacks resolve an object to its
// ref through idOf(), the platform lifecycle hooks walk the systems through
// snapshot() - so the mutators and those two share a mutex and the plain
// readers do not. Nothing under the lock calls FMOD: an FMOD call can fire the
// error callback, which comes straight back here through idOf().
//
// Header-only - see gmfmod_ref.h. The mutex is a member, so no symbol.
template <typename T>
class Registry
{
public:
	// The id already assigned to `object`, or a fresh one. An object that is
	// already registered keeps its first owner - an FMOD object belongs to one
	// system for its whole life.
	uint32_t registerOrFind(T* object, const void* owner)
	{
		auto found = by_object_.find(object);
		if (found != by_object_.end())
			return found->second;

		std::lock_guard<std::mutex> lock(mutex_);
		const uint32_t id = ++next_id_;
		by_id_.emplace(id, Entry{ object, owner });
		by_object_.emplace(object, id);
		return id;
	}

	// The id `object` held, or 0 when it was never registered.
	uint32_t unregister(T* object)
	{
		auto found = by_object_.find(object);
		if (found == by_object_.end())
			return 0;

		std::lock_guard<std::mutex> lock(mutex_);
		const uint32_t id = found->second;
		by_object_.erase(found);
		by_id_.erase(id);
		return id;
	}

	// Drops every entry `owner` owns and hands the objects back, so the caller
	// can run its own per-object cleanup after this returns - outside the lock.
	std::vector<T*> unregisterOwnedBy(const void* owner)
	{
		std::vector<T*> evicted;
		std::lock_guard<std::mutex> lock(mutex_);
		for (auto it = by_id_.begin(); it != by_id_.end();)
		{
			if (it->second.owner == owner)
			{
				evicted.push_back(it->second.object);
				by_object_.erase(it->second.object);
				it = by_id_.erase(it);
			}
			else
			{
				++it;
			}
		}
		return evicted;
	}

	T* find(uint32_t id) const
	{
		auto found = by_id_.find(id);
		return found == by_id_.end() ? nullptr : found->second.object;
	}

	// The owner `object` was registered under, or nullptr when unregistered.
	const void* ownerOf(T* object) const
	{
		auto found = by_object_.find(object);
		return found == by_object_.end() ? nullptr : by_id_.at(found->second).owner;
	}

	// Safe from any thread. The id `object` holds, or 0.
	uint32_t idOf(T* object) const
	{
		std::lock_guard<std::mutex> lock(mutex_);
		auto found = by_object_.find(object);
		return found == by_object_.end() ? 0 : found->second;
	}

	// Safe from any thread. Every registered object, lowest id first; the
	// caller works on the copy after the lock is gone.
	std::vector<T*> snapshot() const
	{
		std::vector<T*> objects;
		std::lock_guard<std::mutex> lock(mutex_);
		objects.reserve(by_id_.size());
		for (const auto& entry : by_id_)
			objects.push_back(entry.second.object);
		return objects;
	}

	// The lowest-id object, or nullptr when empty.
	T* first() const
	{
		return by_id_.empty() ? nullptr : by_id_.begin()->second.object;
	}

	size_t size() const { return by_id_.size(); }
	bool empty() const { return by_id_.empty(); }

	template <typename Fn>
	void forEach(Fn&& fn) const
	{
		for (const auto& entry : by_id_)
			fn(entry.second.object);
	}

	// Drops every entry without touching the objects - the caller has already
	// released them, or FMOD has.
	void clear()
	{
		std::lock_guard<std::mutex> lock(mutex_);
		by_id_.clear();
		by_object_.clear();
		next_id_ = 0;
	}

private:
	struct Entry
	{
		T* object;
		const void* owner;
	};

	std::map<uint32_t, Entry> by_id_;
	std::map<T*, uint32_t> by_object_;
	uint32_t next_id_ = 0;
	mutable std::mutex mutex_;
};

} // namespace gmfmod
