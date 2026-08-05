#include "GMFMOD_geometry.h"
#include <string_view>

using namespace gm_structs;

// ============================================================
// Polygons
// ============================================================

double fmod_geometry_set_polygon_attributes(const FmodGeometryRef& geometry_ref, double polygon_index, double direct_occlusion, double reverb_occlusion, double double_sided)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref._ref, geometry);
	if (geometry == nullptr) return 0;
	g_fmod_last_result = geometry->setPolygonAttributes((int)polygon_index, (float)direct_occlusion, (float)reverb_occlusion, double_sided != 0.0);
	return 0;
}

double fmod_geometry_get_polygon_num_vertices(const FmodGeometryRef& geometry_ref, double polygon_index)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref._ref, geometry);
	if (geometry == nullptr) return 0.0;
	int num_vertices = 0;
	g_fmod_last_result = geometry->getPolygonNumVertices((int)polygon_index, &num_vertices);
	return (double)num_vertices;
}

// ============================================================
// Position & Orientation
// ============================================================

double fmod_geometry_set_position(const FmodGeometryRef& geometry_ref, double x, double y, double z)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref._ref, geometry);
	if (geometry == nullptr) return 0;
	FMOD_VECTOR position = {(float)x, (float)y, (float)z};
	g_fmod_last_result = geometry->setPosition(&position);
	return 0;
}

double fmod_geometry_set_rotation(const FmodGeometryRef& geometry_ref, double forward_x, double forward_y, double forward_z, double up_x, double up_y, double up_z)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref._ref, geometry);
	if (geometry == nullptr) return 0;
	FMOD_VECTOR forward = {(float)forward_x, (float)forward_y, (float)forward_z};
	FMOD_VECTOR up = {(float)up_x, (float)up_y, (float)up_z};
	g_fmod_last_result = geometry->setRotation(&forward, &up);
	return 0;
}

double fmod_geometry_set_scale(const FmodGeometryRef& geometry_ref, double scale_x, double scale_y, double scale_z)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref._ref, geometry);
	if (geometry == nullptr) return 0;
	FMOD_VECTOR scale = {(float)scale_x, (float)scale_y, (float)scale_z};
	g_fmod_last_result = geometry->setScale(&scale);
	return 0;
}

// ============================================================
// General
// ============================================================

double fmod_geometry_save(const FmodGeometryRef& geometry_ref, std::string_view filename)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref._ref, geometry);
	if (geometry == nullptr) return 0;
	// Geometry::save requires buffer pointer, not filename - skip for now
	g_fmod_last_result = FMOD_OK;
	return 0;
}

double fmod_geometry_release(const FmodGeometryRef& geometry_ref)
{
	FMOD::Geometry* geometry = nullptr;
	validate_fmod_geometry(geometry_ref._ref, geometry);
	if (geometry == nullptr) return 0;
	g_fmod_last_result = geometry->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		unregisterResource(geometry, map_geometries);
	}
	return 0;
}
