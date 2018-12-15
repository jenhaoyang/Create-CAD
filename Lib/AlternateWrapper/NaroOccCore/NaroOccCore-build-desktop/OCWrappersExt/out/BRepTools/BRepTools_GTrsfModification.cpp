// File generated by CPPExt (CPP file)
//

#include "BRepTools_GTrsfModification.h"
#include "../Converter.h"
#include "../gp/gp_GTrsf.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../Geom/Geom_Surface.h"
#include "../TopLoc/TopLoc_Location.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../Geom/Geom_Curve.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../gp/gp_Pnt.h"
#include "../Geom2d/Geom2d_Curve.h"


using namespace OCNaroWrappers;

OCBRepTools_GTrsfModification::OCBRepTools_GTrsfModification(Handle(BRepTools_GTrsfModification)* nativeHandle) : OCBRepTools_Modification((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepTools_GTrsfModification(*nativeHandle);
}

OCBRepTools_GTrsfModification::OCBRepTools_GTrsfModification(OCNaroWrappers::OCgp_GTrsf^ T) : OCBRepTools_Modification((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepTools_GTrsfModification(new BRepTools_GTrsfModification(*((gp_GTrsf*)T->Handle)));
}

OCgp_GTrsf^ OCBRepTools_GTrsfModification::GTrsf()
{
  gp_GTrsf* tmp = new gp_GTrsf();
  *tmp = (*((Handle_BRepTools_GTrsfModification*)nativeHandle))->GTrsf();
  return gcnew OCgp_GTrsf(tmp);
}

 System::Boolean OCBRepTools_GTrsfModification::NewSurface(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L, Standard_Real& Tol, System::Boolean& RevWires, System::Boolean& RevFace)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepTools_GTrsfModification*)nativeHandle))->NewSurface(*((TopoDS_Face*)F->Handle), *((Handle_Geom_Surface*)S->Handle), *((TopLoc_Location*)L->Handle), Tol, (Standard_Boolean&)(RevWires), (Standard_Boolean&)(RevFace)));
}

 System::Boolean OCBRepTools_GTrsfModification::NewCurve(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCGeom_Curve^ C, OCNaroWrappers::OCTopLoc_Location^ L, Standard_Real& Tol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepTools_GTrsfModification*)nativeHandle))->NewCurve(*((TopoDS_Edge*)E->Handle), *((Handle_Geom_Curve*)C->Handle), *((TopLoc_Location*)L->Handle), Tol));
}

 System::Boolean OCBRepTools_GTrsfModification::NewPoint(OCNaroWrappers::OCTopoDS_Vertex^ V, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real& Tol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepTools_GTrsfModification*)nativeHandle))->NewPoint(*((TopoDS_Vertex*)V->Handle), *((gp_Pnt*)P->Handle), Tol));
}

 System::Boolean OCBRepTools_GTrsfModification::NewCurve2d(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCTopoDS_Edge^ NewE, OCNaroWrappers::OCTopoDS_Face^ NewF, OCNaroWrappers::OCGeom2d_Curve^ C, Standard_Real& Tol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepTools_GTrsfModification*)nativeHandle))->NewCurve2d(*((TopoDS_Edge*)E->Handle), *((TopoDS_Face*)F->Handle), *((TopoDS_Edge*)NewE->Handle), *((TopoDS_Face*)NewF->Handle), *((Handle_Geom2d_Curve*)C->Handle), Tol));
}

 System::Boolean OCBRepTools_GTrsfModification::NewParameter(OCNaroWrappers::OCTopoDS_Vertex^ V, OCNaroWrappers::OCTopoDS_Edge^ E, Standard_Real& P, Standard_Real& Tol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepTools_GTrsfModification*)nativeHandle))->NewParameter(*((TopoDS_Vertex*)V->Handle), *((TopoDS_Edge*)E->Handle), P, Tol));
}

 OCGeomAbs_Shape OCBRepTools_GTrsfModification::Continuity(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F1, OCNaroWrappers::OCTopoDS_Face^ F2, OCNaroWrappers::OCTopoDS_Edge^ NewE, OCNaroWrappers::OCTopoDS_Face^ NewF1, OCNaroWrappers::OCTopoDS_Face^ NewF2)
{
  return (OCGeomAbs_Shape)((*((Handle_BRepTools_GTrsfModification*)nativeHandle))->Continuity(*((TopoDS_Edge*)E->Handle), *((TopoDS_Face*)F1->Handle), *((TopoDS_Face*)F2->Handle), *((TopoDS_Edge*)NewE->Handle), *((TopoDS_Face*)NewF1->Handle), *((TopoDS_Face*)NewF2->Handle)));
}


