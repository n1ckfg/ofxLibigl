#pragma once

// openFrameworks defines legacy math macros (PI, TWO_PI) that clash with
// libigl identifiers such as igl::PI. libigl is used header-only here, so its
// implementation is parsed on include; suspend the macros while that happens.
// Wrap any additional igl includes the same way (see README).
#pragma push_macro("PI")
#pragma push_macro("TWO_PI")
#undef PI
#undef TWO_PI

#include <igl/readOFF.h>
#include <igl/cotmatrix.h>
#include <igl/oriented_facets.h>
#include <igl/triangle_triangle_adjacency.h>
#include <igl/vertex_triangle_adjacency.h>
#include <igl/unique_simplices.h>
#include <igl/is_border_vertex.h>
#include <igl/read_triangle_mesh.h>
#include <igl/igl_inline.h>
#include <igl/get_seconds.h>
#include <igl/edges.h>

#include <igl/upsample.h>
#include <igl/per_face_normals.h>
#include <igl/per_vertex_normals.h>
#include <igl/doublearea.h>
#include <igl/internal_angles.h>
#include <igl/hausdorff.h>
#include <igl/parula.h>
#include <igl/colormap.h>
#include <igl/bounding_box_diagonal.h>
#include <igl/massmatrix.h>

#pragma pop_macro("TWO_PI")
#pragma pop_macro("PI")
