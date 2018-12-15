// File generated by CPPExt (CPP file)
//

#include "Geom_VectorWithMagnitude.h"
#include "../Converter.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Pnt.h"
#include "Geom_Vector.h"
#include "../gp/gp_Trsf.h"
#include "Geom_Geometry.h"


using namespace OCNaroWrappers;

OCGeom_VectorWithMagnitude::OCGeom_VectorWithMagnitude(Handle(Geom_VectorWithMagnitude)* nativeHandle) : OCGeom_Vector((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom_VectorWithMagnitude(*nativeHandle);
}

OCGeom_VectorWithMagnitude::OCGeom_VectorWithMagnitude(OCNaroWrappers::OCgp_Vec^ V) : OCGeom_Vector((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_VectorWithMagnitude(new Geom_VectorWithMagnitude(*((gp_Vec*)V->Handle)));
}

OCGeom_VectorWithMagnitude::OCGeom_VectorWithMagnitude(Standard_Real X, Standard_Real Y, Standard_Real Z) : OCGeom_Vector((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_VectorWithMagnitude(new Geom_VectorWithMagnitude(X, Y, Z));
}

OCGeom_VectorWithMagnitude::OCGeom_VectorWithMagnitude(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCGeom_Vector((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_VectorWithMagnitude(new Geom_VectorWithMagnitude(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle)));
}

 void OCGeom_VectorWithMagnitude::SetCoord(Standard_Real X, Standard_Real Y, Standard_Real Z)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->SetCoord(X, Y, Z);
}

 void OCGeom_VectorWithMagnitude::SetVec(OCNaroWrappers::OCgp_Vec^ V)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->SetVec(*((gp_Vec*)V->Handle));
}

 void OCGeom_VectorWithMagnitude::SetX(Standard_Real X)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->SetX(X);
}

 void OCGeom_VectorWithMagnitude::SetY(Standard_Real Y)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->SetY(Y);
}

 void OCGeom_VectorWithMagnitude::SetZ(Standard_Real Z)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->SetZ(Z);
}

 Standard_Real OCGeom_VectorWithMagnitude::Magnitude()
{
  return (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Magnitude();
}

 Standard_Real OCGeom_VectorWithMagnitude::SquareMagnitude()
{
  return (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->SquareMagnitude();
}

 void OCGeom_VectorWithMagnitude::Add(OCNaroWrappers::OCGeom_Vector^ Other)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Add(*((Handle_Geom_Vector*)Other->Handle));
}

OCGeom_VectorWithMagnitude^ OCGeom_VectorWithMagnitude::Added(OCNaroWrappers::OCGeom_Vector^ Other)
{
  Handle(Geom_VectorWithMagnitude) tmp = (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Added(*((Handle_Geom_Vector*)Other->Handle));
  return gcnew OCGeom_VectorWithMagnitude(&tmp);
}

 void OCGeom_VectorWithMagnitude::Cross(OCNaroWrappers::OCGeom_Vector^ Other)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Cross(*((Handle_Geom_Vector*)Other->Handle));
}

OCGeom_Vector^ OCGeom_VectorWithMagnitude::Crossed(OCNaroWrappers::OCGeom_Vector^ Other)
{
  Handle(Geom_Vector) tmp = (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Crossed(*((Handle_Geom_Vector*)Other->Handle));
  return gcnew OCGeom_Vector(&tmp);
}

 void OCGeom_VectorWithMagnitude::CrossCross(OCNaroWrappers::OCGeom_Vector^ V1, OCNaroWrappers::OCGeom_Vector^ V2)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->CrossCross(*((Handle_Geom_Vector*)V1->Handle), *((Handle_Geom_Vector*)V2->Handle));
}

OCGeom_Vector^ OCGeom_VectorWithMagnitude::CrossCrossed(OCNaroWrappers::OCGeom_Vector^ V1, OCNaroWrappers::OCGeom_Vector^ V2)
{
  Handle(Geom_Vector) tmp = (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->CrossCrossed(*((Handle_Geom_Vector*)V1->Handle), *((Handle_Geom_Vector*)V2->Handle));
  return gcnew OCGeom_Vector(&tmp);
}

 void OCGeom_VectorWithMagnitude::Divide(Standard_Real Scalar)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Divide(Scalar);
}

OCGeom_VectorWithMagnitude^ OCGeom_VectorWithMagnitude::Divided(Standard_Real Scalar)
{
  Handle(Geom_VectorWithMagnitude) tmp = (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Divided(Scalar);
  return gcnew OCGeom_VectorWithMagnitude(&tmp);
}

OCGeom_VectorWithMagnitude^ OCGeom_VectorWithMagnitude::Multiplied(Standard_Real Scalar)
{
  Handle(Geom_VectorWithMagnitude) tmp = (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Multiplied(Scalar);
  return gcnew OCGeom_VectorWithMagnitude(&tmp);
}

 void OCGeom_VectorWithMagnitude::Multiply(Standard_Real Scalar)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Multiply(Scalar);
}

 void OCGeom_VectorWithMagnitude::Normalize()
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Normalize();
}

OCGeom_VectorWithMagnitude^ OCGeom_VectorWithMagnitude::Normalized()
{
  Handle(Geom_VectorWithMagnitude) tmp = (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Normalized();
  return gcnew OCGeom_VectorWithMagnitude(&tmp);
}

 void OCGeom_VectorWithMagnitude::Subtract(OCNaroWrappers::OCGeom_Vector^ Other)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Subtract(*((Handle_Geom_Vector*)Other->Handle));
}

OCGeom_VectorWithMagnitude^ OCGeom_VectorWithMagnitude::Subtracted(OCNaroWrappers::OCGeom_Vector^ Other)
{
  Handle(Geom_VectorWithMagnitude) tmp = (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Subtracted(*((Handle_Geom_Vector*)Other->Handle));
  return gcnew OCGeom_VectorWithMagnitude(&tmp);
}

 void OCGeom_VectorWithMagnitude::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Transform(*((gp_Trsf*)T->Handle));
}

OCGeom_Geometry^ OCGeom_VectorWithMagnitude::Copy()
{
  Handle(Geom_Geometry) tmp = (*((Handle_Geom_VectorWithMagnitude*)nativeHandle))->Copy();
  return gcnew OCGeom_Geometry(&tmp);
}


