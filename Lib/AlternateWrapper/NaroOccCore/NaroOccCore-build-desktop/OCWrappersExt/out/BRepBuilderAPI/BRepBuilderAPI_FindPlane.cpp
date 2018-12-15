// File generated by CPPExt (CPP file)
//

#include "BRepBuilderAPI_FindPlane.h"
#include "../Converter.h"
#include "../Geom/Geom_Plane.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBRepBuilderAPI_FindPlane::OCBRepBuilderAPI_FindPlane(BRepBuilderAPI_FindPlane* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepBuilderAPI_FindPlane::OCBRepBuilderAPI_FindPlane() 
{
  nativeHandle = new BRepBuilderAPI_FindPlane();
}

OCBRepBuilderAPI_FindPlane::OCBRepBuilderAPI_FindPlane(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Real Tol) 
{
  nativeHandle = new BRepBuilderAPI_FindPlane(*((TopoDS_Shape*)S->Handle), Tol);
}

 void OCBRepBuilderAPI_FindPlane::Init(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Real Tol)
{
  ((BRepBuilderAPI_FindPlane*)nativeHandle)->Init(*((TopoDS_Shape*)S->Handle), Tol);
}

 System::Boolean OCBRepBuilderAPI_FindPlane::Found()
{
  return OCConverter::StandardBooleanToBoolean(((BRepBuilderAPI_FindPlane*)nativeHandle)->Found());
}

OCGeom_Plane^ OCBRepBuilderAPI_FindPlane::Plane()
{
  Handle(Geom_Plane) tmp = ((BRepBuilderAPI_FindPlane*)nativeHandle)->Plane();
  return gcnew OCGeom_Plane(&tmp);
}


