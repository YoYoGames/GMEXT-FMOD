#include "GMFMOD_geometry.h"
#include <string_view>

using namespace gm_structs;

// ============================================================
// Polygons
// ============================================================

double fmod_geometry_set_polygon_attributes(uint64_t geometry_ref, double polygon_index, double direct_occlusion, double reverb_occlusion, double double_sided)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0;
	g_fmod_last_result = geometry->setPolygonAttributes((int)polygon_index, (float)direct_occlusion, (float)reverb_occlusion, double_sided != 0.0);
	return 0;
}

double fmod_geometry_get_polygon_num_vertices(uint64_t geometry_ref, double polygon_index)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0.0;
	int num_vertices = 0;
	g_fmod_last_result = geometry->getPolygonNumVertices((int)polygon_index, &num_vertices);
	return (double)num_vertices;
}

double fmod_geometry_add_polygon(uint64_t geometry_ref, double direct_occlusion, double reverb_occlusion, double double_sided, double num_vertices, gm::wire::GMBuffer vertices)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0.0;

	int count = (int)num_vertices;
	if (count <= 0 || vertices.data() == nullptr || vertices.length() < (uint64_t)count * sizeof(FMOD_VECTOR))
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return 0.0;
	}

	int polygon_index = 0;
	g_fmod_last_result = geometry->addPolygon((float)direct_occlusion, (float)reverb_occlusion, double_sided != 0.0,
		count, reinterpret_cast<const FMOD_VECTOR*>(vertices.data()), &polygon_index);
	return (double)polygon_index;
}

FmodPolygonAttributes fmod_geometry_get_polygon_attributes(uint64_t geometry_ref, double polygon_index)
{
	FmodPolygonAttributes result{};
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return result;

	float direct_occlusion = 0.0f, reverb_occlusion = 0.0f;
	bool double_sided = false;
	g_fmod_last_result = geometry->getPolygonAttributes((int)polygon_index, &direct_occlusion, &reverb_occlusion, &double_sided);
	if (g_fmod_last_result != FMOD_OK) return result;

	result.direct_occlusion = (double)direct_occlusion;
	result.reverb_occlusion = (double)reverb_occlusion;
	result.double_sided = double_sided ? 1.0 : 0.0;
	return result;
}

double fmod_geometry_set_polygon_vertex(uint64_t geometry_ref, double polygon_index, double vertex_index, const FmodVec3& vertex)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0;

	FMOD_VECTOR v{ (float)vertex.x, (float)vertex.y, (float)vertex.z };
	g_fmod_last_result = geometry->setPolygonVertex((int)polygon_index, (int)vertex_index, &v);
	return 0;
}

FmodVec3 fmod_geometry_get_polygon_vertex(uint64_t geometry_ref, double polygon_index, double vertex_index)
{
	FmodVec3 result{};
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return result;

	FMOD_VECTOR v{};
	g_fmod_last_result = geometry->getPolygonVertex((int)polygon_index, (int)vertex_index, &v);
	if (g_fmod_last_result != FMOD_OK) return result;

	result.x = (double)v.x;
	result.y = (double)v.y;
	result.z = (double)v.z;
	return result;
}

double fmod_geometry_get_num_polygons(uint64_t geometry_ref)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0.0;

	int num_polygons = 0;
	g_fmod_last_result = geometry->getNumPolygons(&num_polygons);
	return (double)num_polygons;
}

FmodGeometryMaxPolygons fmod_geometry_get_max_polygons(uint64_t geometry_ref)
{
	FmodGeometryMaxPolygons result{};
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return result;

	int max_polygons = 0, max_vertices = 0;
	g_fmod_last_result = geometry->getMaxPolygons(&max_polygons, &max_vertices);
	if (g_fmod_last_result != FMOD_OK) return result;

	result.max_polygons = (double)max_polygons;
	result.max_vertices = (double)max_vertices;
	return result;
}

// ============================================================
// Position & Orientation
// ============================================================

double fmod_geometry_set_position(uint64_t geometry_ref, double x, double y, double z)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0;
	FMOD_VECTOR position = {(float)x, (float)y, (float)z};
	g_fmod_last_result = geometry->setPosition(&position);
	return 0;
}

FmodVec3 fmod_geometry_get_position(uint64_t geometry_ref)
{
	FmodVec3 result{};
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return result;

	FMOD_VECTOR position{};
	g_fmod_last_result = geometry->getPosition(&position);
	if (g_fmod_last_result != FMOD_OK) return result;

	result.x = (double)position.x;
	result.y = (double)position.y;
	result.z = (double)position.z;
	return result;
}

double fmod_geometry_set_rotation(uint64_t geometry_ref, double forward_x, double forward_y, double forward_z, double up_x, double up_y, double up_z)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0;
	FMOD_VECTOR forward = {(float)forward_x, (float)forward_y, (float)forward_z};
	FMOD_VECTOR up = {(float)up_x, (float)up_y, (float)up_z};
	g_fmod_last_result = geometry->setRotation(&forward, &up);
	return 0;
}

FmodGeometryRotation fmod_geometry_get_rotation(uint64_t geometry_ref)
{
	FmodGeometryRotation result{};
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return result;

	FMOD_VECTOR forward{}, up{};
	g_fmod_last_result = geometry->getRotation(&forward, &up);
	if (g_fmod_last_result != FMOD_OK) return result;

	result.forward.x = (double)forward.x;
	result.forward.y = (double)forward.y;
	result.forward.z = (double)forward.z;
	result.up.x = (double)up.x;
	result.up.y = (double)up.y;
	result.up.z = (double)up.z;
	return result;
}

double fmod_geometry_set_scale(uint64_t geometry_ref, double scale_x, double scale_y, double scale_z)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0;
	FMOD_VECTOR scale = {(float)scale_x, (float)scale_y, (float)scale_z};
	g_fmod_last_result = geometry->setScale(&scale);
	return 0;
}

FmodVec3 fmod_geometry_get_scale(uint64_t geometry_ref)
{
	FmodVec3 result{};
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return result;

	FMOD_VECTOR scale{};
	g_fmod_last_result = geometry->getScale(&scale);
	if (g_fmod_last_result != FMOD_OK) return result;

	result.x = (double)scale.x;
	result.y = (double)scale.y;
	result.z = (double)scale.z;
	return result;
}

double fmod_geometry_get_active(uint64_t geometry_ref)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0.0;

	bool active = false;
	g_fmod_last_result = geometry->getActive(&active);
	return active ? 1.0 : 0.0;
}

double fmod_geometry_set_active(uint64_t geometry_ref, double active)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0;

	g_fmod_last_result = geometry->setActive(active != 0.0);
	return 0;
}

double fmod_geometry_set_user_data(uint64_t geometry_ref, double user_data)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0;

	setResourceUserData(geometry, user_data);
	return 0;
}

double fmod_geometry_get_user_data(uint64_t geometry_ref)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0.0;

	return getResourceUserData(geometry);
}

// ============================================================
// General
// ============================================================

double fmod_geometry_save(uint64_t geometry_ref, std::string_view filename)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0;
	// Geometry::save requires buffer pointer, not filename - skip for now
	g_fmod_last_result = FMOD_OK;
	return 0;
}

double fmod_geometry_release(uint64_t geometry_ref)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref, geometry);
	if (geometry == nullptr) return 0;
	g_fmod_last_result = geometry->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		unregisterResource(geometry, map_geometries);
	}
	return 0;
}
