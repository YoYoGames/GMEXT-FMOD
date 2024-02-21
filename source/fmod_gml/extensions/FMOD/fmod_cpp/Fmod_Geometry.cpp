
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.02/api/core-api-geometry.html

std::map<uint32_t, FMOD::Geometry*> map_geometries = {};
uint32_t index_geometries = 0;

// Polygons

func double fmod_geometry_set_polygon_attributes(double geometry_ref,
												 double polygon_index,
												 double direct_occlusion,
												 double reverb_occlusion,
												 double double_sided)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	g_fmod_last_result = geometry->setPolygonAttributes((int)polygon_index, (float)direct_occlusion, (float)reverb_occlusion, double_sided >= 0.5);

	return 0;
}

func double fmod_geometry_get_polygon_attributes_multiplatform(double geometry_ref, double polygon_index, char* buff_return)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	float directocclusion = 0, reverbocclusion = 0;
	bool doublesided = false;
	g_fmod_last_result = geometry->getPolygonAttributes((int)polygon_index, &directocclusion, &reverbocclusion, &doublesided);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("direct_occlusion", directocclusion);
	map_return.addKeyValue("reverb_occlusion", reverbocclusion);
	map_return.addKeyValue("double_sided", doublesided);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_geometry_get_polygon_num_vertices(double geometry_ref, double polygon_index)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	int num = 0;
	g_fmod_last_result = geometry->getPolygonNumVertices((int)polygon_index, &num);

	return 0;
}

func double fmod_geometry_set_polygon_vertex_multiplatform(double geometry_ref, double polygon_index, double vertex_index, char* buff_args)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_position = YYGetStruct(args[0]);

	FMOD_VECTOR vector = FmodVectorFromMap(map_position);

	g_fmod_last_result = geometry->setPolygonVertex((int)polygon_index, (int)vertex_index, &vector);

	return 0;
}

func double fmod_geometry_get_polygon_vertex_multiplatform(double geometry_ref, double polygon_index, double vertex_index, char* buff_return)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	FMOD_VECTOR vertex;
	g_fmod_last_result = geometry->getPolygonVertex((int)polygon_index, (int)vertex_index, &vertex);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodVectorToGMStruct(vertex);

	map_return.writeTo(buff_return);

	return 0;
}

// Object Spatialization

func double fmod_geometry_set_position_multiplatform(double geometry_ref, char* buff_args)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_position = YYGetStruct(args[0]);

	FMOD_VECTOR vec_position = FmodVectorFromMap(map_position);

	g_fmod_last_result = geometry->setPosition(&vec_position);

	return 0;
}

func double fmod_geometry_get_position_multiplatform(double geometry_ref, char* buff_return)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	FMOD_VECTOR vec_position;
	g_fmod_last_result = geometry->getPosition(&vec_position);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodVectorToGMStruct(vec_position);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_geometry_set_rotation_multiplatform(double geometry_ref, char* buff_args)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_forward = YYGetStruct(args[0]);
	auto map_up = YYGetStruct(args[1]);

	FMOD_VECTOR vec_forward = FmodVectorFromMap(map_forward);
	FMOD_VECTOR vec_up = FmodVectorFromMap(map_up);

	g_fmod_last_result = geometry->setRotation(&vec_forward, &vec_up);

	return 0;
}

func double fmod_geometry_get_rotation_multiplatform(double geometry_ref, char* buff_return)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	FMOD_VECTOR forward{}, up{};
	g_fmod_last_result = geometry->getRotation(&forward, &up);

	StructStream map_forward = FmodVectorToGMStruct(forward);
	StructStream map_up = FmodVectorToGMStruct(up);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("forward", map_forward);
	map_return.addKeyValue("up", map_up);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_geometry_set_scale_multiplatform(double geometry_ref, char* buff_args)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_scale = YYGetStruct(args[0]);

	FMOD_VECTOR vec_scale = FmodVectorFromMap(map_scale);

	g_fmod_last_result = geometry->setScale(&vec_scale);

	return 0;
}

func double fmod_geometry_get_scale_multiplatform(double geometry_ref, char* buff_return)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	FMOD_VECTOR vec_scale;
	g_fmod_last_result = geometry->getScale(&vec_scale);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodVectorToGMStruct(vec_scale);

	map_return.writeTo(buff_return);

	return 0;
}

// Object General

func double fmod_geometry_add_polygon_multiplatform(double geometry_ref, char* buff_args)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto directocclusion = YYGetFloat(args[0]);
	auto reverbocclusion = YYGetFloat(args[1]);
	auto doublesided = YYGetBool(args[2]);
	auto array_vertices = YYGetArray(args[3]);

	size_t numvertices = array_vertices.size();

	FMOD_VECTOR vertices[100]{};
	for (int i = 0; i < numvertices; i++)
	{
		auto map_point = YYGetStruct(array_vertices[i]);
		vertices[i] = FmodVectorFromMap(map_point);
	}

	int polygonindex = 0;
	g_fmod_last_result = geometry->addPolygon(directocclusion, reverbocclusion, doublesided, (int)numvertices, vertices, &polygonindex);

	return polygonindex;
}

func double fmod_geometry_set_active(double geometry_ref, double active)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	g_fmod_last_result = geometry->setActive(active >= 0.5);

	return 0;
}

func double fmod_geometry_get_active(double geometry_ref)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	bool active;
	g_fmod_last_result = geometry->getActive(&active);

	return active ? 1.0 : 0.0;
}

func double fmod_geometry_get_max_polygons_multiplatform(double geometry_ref, char* buff_return)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	int maxpolygons;
	int maxvertices;
	g_fmod_last_result = geometry->getMaxPolygons(&maxpolygons, &maxvertices);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("max_polygons", maxpolygons);
	map_return.addKeyValue("max_vertices", maxvertices);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_geometry_get_num_polygons(double geometry_ref)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	int num;
	g_fmod_last_result = geometry->getNumPolygons(&num);

	return num;
}

func double fmod_geometry_set_user_data(double geometry_ref, double data)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	setCustomUserData(geometry, data);
	return 0;
}

func double fmod_geometry_get_user_data(double geometry_ref)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	return getCustomUserData(geometry);
}

func double fmod_geometry_release(double geometry_ref)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	unregisterResource(geometry, map_geometries);

	g_fmod_last_result = geometry->release();

	return 0;
}

func double fmod_geometry_save_multiplatform(double geometry_ref, char* buff_args)
{
	FMOD::Geometry* geometry;
	validate_fmod_geometry(geometry_ref, geometry);

	auto args = buffer_unpack((uint8_t*)buff_args);

	uint32_t length = 0;
	auto buff = YYGetBuffer(args[0], length);

	int datasize;
	g_fmod_last_result = geometry->save(nullptr, &datasize);

	if (length < (uint32_t)datasize) {
		g_fmod_last_result = (FMOD_RESULT)FMOD_ERROR_BUFFER_OVERFLOW;
		return datasize;
	}

	g_fmod_last_result = geometry->save(&buff, &datasize);

	return datasize;
}
