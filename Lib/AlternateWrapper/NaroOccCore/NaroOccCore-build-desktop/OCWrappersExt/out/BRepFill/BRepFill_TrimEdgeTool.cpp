// File generated by CPPExt (CPP file)
//

#include "BRepFill_TrimEdgeTool.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../Bisector/Bisector_Bisec.h"
#include "../Geom2d/Geom2d_Geometry.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TColgp/TColgp_SequenceOfPnt.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCBRepFill_TrimEdgeTool::OCBRepFill_TrimEdgeTool(BRepFill_TrimEdgeTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepFill_TrimEdgeTool::OCBRepFill_TrimEdgeTool() 
{
  nativeHandle = new BRepFill_TrimEdgeTool();
}

OCBRepFill_TrimEdgeTool::OCBRepFill_TrimEdgeTool(OCNaroWrappers::OCBisector_Bisec^ Bisec, OCNaroWrappers::OCGeom2d_Geometry^ S1, OCNaroWrappers::OCGeom2d_Geometry^ S2, Standard_Real Offset) 
{
  nativeHandle = new BRepFill_TrimEdgeTool(*((Bisector_Bisec*)Bisec->Handle), *((Handle_Geom2d_Geometry*)S1->Handle), *((Handle_Geom2d_Geometry*)S2->Handle), Offset);
}

 void OCBRepFill_TrimEdgeTool::IntersectWith(OCNaroWrappers::OCTopoDS_Edge^ Edge1, OCNaroWrappers::OCTopoDS_Edge^ Edge2, OCNaroWrappers::OCTColgp_SequenceOfPnt^ Params)
{
  ((BRepFill_TrimEdgeTool*)nativeHandle)->IntersectWith(*((TopoDS_Edge*)Edge1->Handle), *((TopoDS_Edge*)Edge2->Handle), *((TColgp_SequenceOfPnt*)Params->Handle));
}

 void OCBRepFill_TrimEdgeTool::AddOrConfuse(System::Boolean Start, OCNaroWrappers::OCTopoDS_Edge^ Edge1, OCNaroWrappers::OCTopoDS_Edge^ Edge2, OCNaroWrappers::OCTColgp_SequenceOfPnt^ Params)
{
  ((BRepFill_TrimEdgeTool*)nativeHandle)->AddOrConfuse(OCConverter::BooleanToStandardBoolean(Start), *((TopoDS_Edge*)Edge1->Handle), *((TopoDS_Edge*)Edge2->Handle), *((TColgp_SequenceOfPnt*)Params->Handle));
}

 System::Boolean OCBRepFill_TrimEdgeTool::IsInside(OCNaroWrappers::OCgp_Pnt2d^ P)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFill_TrimEdgeTool*)nativeHandle)->IsInside(*((gp_Pnt2d*)P->Handle)));
}


