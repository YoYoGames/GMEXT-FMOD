#pragma once

#include <cstdint>
#include <map>

namespace gmfmod
{

// Owns the id <-> object mapping for one registry-backed FMOD type. Registry
// ids start at 1 so that 0 stays the invalid ref, and a released id is never
// reused. One instance per type, never one shared map: a freed object's
// address can be reused by an object of another type, and a shared reverse
// map would hand the new object the old id.
//
// Header-only and stateless by design - see gmfmod_ref.h.
template <typename T>
class Registry
{
public:
	// The id already assigned to `object`, or a fresh one.
	uint32_t registerOrFind(T* object)
	{
		auto found = by_object_.find(object);
		if (found != by_object_.end())
			return found->second;

		const uint32_t id = ++next_id_;
		by_id_.emplace(id, object);
		by_object_.emplace(object, id);
		return id;
	}

	// The id `object` held, or 0 when it was never registered.
	uint32_t unregister(T* object)
	{
		auto found = by_object_.find(object);
		if (found == by_object_.end())
			return 0;

		const uint32_t id = found->second;
		by_object_.erase(found);
		by_id_.erase(id);
		return id;
	}

	T* find(uint32_t id) const
	{
		auto found = by_id_.find(id);
		return found == by_id_.end() ? nullptr : found->second;
	}

	// The lowest-id object, or nullptr when empty.
	T* first() const
	{
		return by_id_.empty() ? nullptr : by_id_.begin()->second;
	}

	size_t size() const { return by_id_.size(); }
	bool empty() const { return by_id_.empty(); }

	template <typename Fn>
	void forEach(Fn&& fn) const
	{
		for (const auto& entry : by_id_)
			fn(entry.second);
	}

	// Drops every entry without touching the objects - the caller has already
	// released them, or FMOD has.
	void clear()
	{
		by_id_.clear();
		by_object_.clear();
		next_id_ = 0;
	}

private:
	std::map<uint32_t, T*> by_id_;
	std::map<T*, uint32_t> by_object_;
	uint32_t next_id_ = 0;
};

} // namespace gmfmod
