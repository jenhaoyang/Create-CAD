// File generated by CPPExt (Package)
//

#ifndef _Prs3d_OCWrappers_HeaderFile
#define _Prs3d_OCWrappers_HeaderFile

// Include the wrapped header
#include <Prs3d.hxx>

#include "Prs3d_Presentation.h"
#include "Prs3d_BasicAspect.h"
#include "Prs3d_PointAspect.h"
#include "Prs3d_LineAspect.h"
#include "Prs3d_ShadingAspect.h"
#include "Prs3d_TextAspect.h"
#include "Prs3d_CompositeAspect.h"
#include "Prs3d_IsoAspect.h"
#include "Prs3d_PlaneAspect.h"
#include "Prs3d_ArrowAspect.h"
#include "Prs3d_LengthAspect.h"
#include "Prs3d_AngleAspect.h"
#include "Prs3d_RadiusAspect.h"
#include "Prs3d_DatumAspect.h"
#include "Prs3d_Drawer.h"
#include "Prs3d_Projector.h"
#include "Prs3d_PlaneSet.h"
#include "Prs3d_Root.h"
#include "Prs3d_Point.h"
#include "Prs3d_Line.h"
#include "Prs3d_WFDeflectionRestrictedFace.h"
#include "Prs3d_WFRestrictedFace.h"
#include "Prs3d_WFShape.h"
#include "Prs3d_HLRShape.h"
#include "Prs3d_SectionShapeTool.h"
#include "Prs3d_Vector.h"
#include "Prs3d_Datum.h"
#include "Prs3d_LengthPresentation.h"
#include "Prs3d_AnglePresentation.h"
#include "Prs3d_Text.h"
#include "Prs3d_PointTool.h"
#include "Prs3d_LineTool.h"
#include "Prs3d_CurvePresentation.h"
#include "Prs3d_RestrictionTool.h"
#include "Prs3d_ShapeTool.h"
#include "Prs3d_HLRShapeTool.h"
#include "Prs3d_VectorTool.h"
#include "Prs3d_DatumTool.h"
#include "Prs3d_Arrow.h"


namespace OCNaroWrappers
{
//! The Prs3d package provides the following services <br>
//! -   a presentation object (the context for all <br>
//!   modifications to the display, its presentation will be <br>
//!   displayed in every view of an active viewer) <br>
//! -   an attribute manager governing how objects such <br>
//!   as color, width, and type of line are displayed; <br>
//!   these are generic objects, whereas those in <br>
//!   StdPrs are specific geometries and topologies. <br>
//! -   generic   algorithms providing default settings for <br>
//!   objects such as points, curves, surfaces and shapes <br>
//! -   a root object which provides the abstract <br>
//!   framework for the DsgPrs definitions at work in <br>
//!   display of dimensions, relations and trihedra. <br>
public ref class OCPrs3d abstract sealed
{

public:
// Methods


static /*instead*/  System::Boolean MatchSegment(Quantity_Length X, Quantity_Length Y, Quantity_Length Z, Quantity_Length aDistance, OCNaroWrappers::OCgp_Pnt^ p1, OCNaroWrappers::OCgp_Pnt^ p2, Quantity_Length& dist) ;


};

}; // OCNaroWrappers

#endif
