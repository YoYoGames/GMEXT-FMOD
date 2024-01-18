
/**
 * @func fmod_geometry_set_polygon_attributes
 * @desc Sets individual attributes for a polygon inside a geometry object.
 * @param {double} index Identifier of the Geometry instance  
 * @param {double} _index_ Polygon index.
 * @param {double} directocclusion Occlusion factor of the polygon for the direct path where 0 represents no occlusion and 1 represents full occlusion.
 * @param {double} reverbocclusion Occlusion factor of the polygon for the reverb path where 0 represents no occlusion and 1 represents full occlusion.
 * @param {double} doublesided True: Polygon is double sided. False: Polygon is single sided, and the winding of the polygon (which determines the polygon's normal) determines which side of the polygon will cause occlusion.
 * @func_end
*/
function fmod_geometry_set_polygon_attributes(index_,_index_,directocclusion_,reverbocclusion_,doublesided_) {}


/**
 * @func fmod_geometry_get_polygon_attributes
 * @desc Retrieves the attributes for a polygon.
 * @param {double} index Identifier of the Geometry instance  
 * @param {double} _index_ Polygon index.
 * @returns {double} {direct_occlusion:double,reverb_occlusion:double,double_sided:double}
 * @func_end
*/
function fmod_geometry_get_polygon_attributes(index_,_index_) {}


/**
 * @func fmod_geometry_get_polygon_mum_vertices
 * @desc Gets the number of vertices in a polygon.
 * @param {double} index Identifier of the Geometry instance  
 * @param {double} _index_ Polygon index.
 * @returns {double}
 * @func_end
*/
function fmod_geometry_get_polygon_mum_vertices(index_,_index_) {}


/**
 * @func fmod_geometry_set_polygon_vertex
 * @desc Alters the position of a polygon's vertex inside a geometry object.
 * @param {double} index Identifier of the Geometry instance  
 * @param {double} _index_ Polygon index.
 * @param {double} vertex_index Polygon vertex index.
 * @param {constant.FMOD_VECTOR} vector 3D Position of the vertex.
 * @func_end
*/
function fmod_geometry_set_polygon_vertex(index_,_index_,vertex_index_,buff_args_) {}


/**
 * @func fmod_geometry_get_polygon_vertex
 * @desc Retrieves the position of a vertex.
 * @param {double} index Identifier of the Geometry instance  
 * @param {double} _index_ Polygon index.
 * @param {double} vertex_index_ Polygon vertex index.
 * @returns {constant.FMOD_VECTOR}
 * @func_end
*/
function fmod_geometry_get_polygon_vertex(index_,_index_,vertex_index_,buff_return_) {}


/**
 * @func fmod_geometry_set_position
 * @desc Sets the 3D position of the object.
 * @param {double} index Identifier of the Geometry instance  
 * @param {constant.FMOD_VECTOR} position 3D position. 
 * @func_end
*/
function fmod_geometry_set_position(index_,buff_args_) {}


/**
 * @func fmod_geometry_get_position
 * @desc Retrieves the 3D position of the object.
 * @param {double} index Identifier of the Geometry instance  
 * @returns {constant.FMOD_VECTOR}
 * @func_end
*/
function fmod_geometry_get_position(index_,buff_return_) {}


/**
 * @func fmod_geometry_set_rotation
 * @desc Sets the 3D orientation of the object.
 * @param {double} index Identifier of the Geometry instance  
 * @param {constant.FMOD_VECTOR} vec_forward Forwards orientation. This vector must be of unit length and perpendicular to the up vector.
 * @param {constant.FMOD_VECTOR} vec_up Upwards orientation. This vector must be of unit length and perpendicular to the forwards vector.
 * @func_end
*/
function fmod_geometry_set_rotation(index_,buff_args_) {}


/**
 * @func fmod_geometry_get_rotation_multiplatform
 * @desc Retrieves the 3D orientation of the object.
 * @param {double} index Identifier of the Geometry instance  
 * @returns {forward: FMOD_VECTOR,up: FMOD_VECTOR}
 * @func_end
*/
function fmod_geometry_get_rotation_multiplatform(index_,buff_return_) {}


/**
 * @func fmod_geometry_set_scale
 * @desc Sets the 3D scale of the object.
 * @param {double} index Identifier of the Geometry instance  
 * @param {constant.FMOD_VECTOR} scale
 * @func_end
*/
function fmod_geometry_set_scale(index_,buff_args_) {}


/**
 * @func fmod_geometry_get_scale
 * @desc Retrieves the 3D scale of the object.
 * @param {double} index Identifier of the Geometry instance  
 * @returns {FMOD_VECTOR} 
 * @func_end
*/
function fmod_geometry_get_scale(index_,buff_return_) {}


/**
 * @func fmod_geometry_add_polygon
 * @desc Adds a polygon.
 * @param {double} index Identifier of the Geometry instance  
 * @param {buffer} directocclusion Occlusion factor of the polygon for the direct path where 0 represents no occlusion and 1 represents full occlusion.
 * @param {buffer} reverbocclusion cclusion factor of the polygon for the reverb path where 0 represents no occlusion and 1 represents full occlusion.
 * @param {buffer} doublesided True: Polygon is double sided. False: Polygon is single sided, and the winding of the polygon (which determines the polygon's normal) determines which side of the polygon will cause occlusion.
 * @param {buffer} array Array of FMOD_VECTOR vertices located in object space of length numvertices. 
 * return {double}
 * @func_end
*/
function fmod_geometry_add_polygon(index) {}


/**
 * @func fmod_geometry_set_active
 * @desc Sets whether an object is processed by the geometry engine.
 * @param {double} index Identifier of the Geometry instance  
 * @param {double} active Allow object to be processed by the geometry engine.
 * @func_end
*/
function fmod_geometry_set_active(index,active) {}


/**
 * @func fmod_geometry_get_active
 * @desc Retrieves whether an object is processed by the geometry engine.
 * @param {double} index Identifier of the Geometry instance  
 * @returns {double} 
 * @func_end
*/
function fmod_geometry_get_active(index_) {}


/**
 * @func fmod_geometry_get_max_polygons
 * @desc Retrieves the maximum number of polygons and vertices allocatable for this object.
 * @param {double} index Identifier of the Geometry instance  
 * @returns {max_polygons:int,maxvertices:int}
 * @func_end
*/
function fmod_geometry_get_max_polygons(index_) {}


/**
 * @func fmod_geometry_get_num_polygons
 * @desc Retrieves the number of polygons in this object.
 * @param {double} index Identifier of the Geometry instance  
 * @returns {double}
 * @func_end
*/
function fmod_geometry_get_num_polygons(index_) {}


/**
 * @func fmod_geometry_release
 * @desc Frees a geometry object and releases its memory.
 * @param {double} index Identifier of the Geometry instance  
 * @func_end
*/
function fmod_geometry_release(index_) {}


/**
 * @func fmod_geometry_save
 * @desc Saves the geometry object as a serialized binary block to a user memory buffer.
 * @param {double} index Identifier of the Geometry instance  
 * @param {buffer} buff Serialized geometry object.
 * @func_end
*/
function fmod_geometry_save(index_,buff_) {}


/**
 * @module Geometry
 * @title Geometry
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func

 * @ref fmod_geometry_set_polygon_attributes
 * @ref fmod_geometry_get_polygon_attributes
 * @ref fmod_geometry_get_polygon_mum_vertices
 * @ref fmod_geometry_set_polygon_vertex
 * @ref fmod_geometry_get_polygon_vertex
 * @ref fmod_geometry_set_position
 * @ref fmod_geometry_get_position
 * @ref fmod_geometry_set_rotation
 * @ref fmod_geometry_get_rotation
 * @ref fmod_geometry_set_scale
 * @ref fmod_geometry_get_scale
 * @ref fmod_geometry_add_polygon
 * @ref fmod_geometry_set_active
 * @ref fmod_geometry_get_active
 * @ref fmod_geometry_get_max_polygons
 * @ref fmod_geometry_get_num_polygons
 * @ref fmod_geometry_release
 * @ref fmod_geometry_save

 * @section_end
 * @module_end
 */
 
 