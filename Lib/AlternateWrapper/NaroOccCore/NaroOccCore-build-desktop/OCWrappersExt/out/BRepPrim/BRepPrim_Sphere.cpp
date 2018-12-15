// File generated by CPPExt (CPP file)
//

#include "BRepPrim_Sphere.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Ax2.h"
#include "../TopoDS/TopoDS_Face.h"


using namespace OCNaroWrappers;

OCBRepPrim_Sphere::OCBRepPrim_Sphere(BRepPrim_Sphere* nativeHandle) : OCBRepPrim_Revolution((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepPrim_Sphere::OCBRepPrim_Sphere(Standard_Real Radius) : OCBRepPrim_Revolution((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrim_Sphere(Radius);
}

OCBRepPrim_Sphere::OCBRepPrim_Sphere(OCNaroWrappers::OCgp_Pnt^ Center, Standard_Real Radius) : OCBRepPrim_Revolution((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrim_Sphere(*((gp_Pnt*)Center->Handle), Radius);
}

OCBRepPrim_Sphere::OCBRepPrim_Sphere(OCNaroWrappers::OCgp_Ax2^ Axes, Standard_Real Radius) : OCBRepPrim_Revolution((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrim_Sphere(*((gp_Ax2*)Axes->Handle), Radius);
}

OCTopoDS_Face^ OCBRepPrim_Sphere::MakeEmptyLateralFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((BRepPrim_Sphere*)nativeHandle)->MakeEmptyLateralFace();
  return gcnew OCTopoDS_Face(tmp);
}


