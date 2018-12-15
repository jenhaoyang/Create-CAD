// File generated by CPPExt (CPP file)
//

#include "gp_Vec2d.h"
#include "../Converter.h"
#include "gp_Dir2d.h"
#include "gp_XY.h"
#include "gp_Pnt2d.h"
#include "gp_Ax2d.h"
#include "gp_Trsf2d.h"


using namespace OCNaroWrappers;

OCgp_Vec2d::OCgp_Vec2d(gp_Vec2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_Vec2d::OCgp_Vec2d() 
{
  nativeHandle = new gp_Vec2d();
}

OCgp_Vec2d::OCgp_Vec2d(OCNaroWrappers::OCgp_Dir2d^ V) 
{
  nativeHandle = new gp_Vec2d(*((gp_Dir2d*)V->Handle));
}

OCgp_Vec2d::OCgp_Vec2d(OCNaroWrappers::OCgp_XY^ Coord) 
{
  nativeHandle = new gp_Vec2d(*((gp_XY*)Coord->Handle));
}

OCgp_Vec2d::OCgp_Vec2d(Standard_Real Xv, Standard_Real Yv) 
{
  nativeHandle = new gp_Vec2d(Xv, Yv);
}

OCgp_Vec2d::OCgp_Vec2d(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2) 
{
  nativeHandle = new gp_Vec2d(*((gp_Pnt2d*)P1->Handle), *((gp_Pnt2d*)P2->Handle));
}

 void OCgp_Vec2d::SetCoord(Standard_Integer Index, Standard_Real Xi)
{
  ((gp_Vec2d*)nativeHandle)->SetCoord(Index, Xi);
}

 void OCgp_Vec2d::SetCoord(Standard_Real Xv, Standard_Real Yv)
{
  ((gp_Vec2d*)nativeHandle)->SetCoord(Xv, Yv);
}

 void OCgp_Vec2d::SetX(Standard_Real X)
{
  ((gp_Vec2d*)nativeHandle)->SetX(X);
}

 void OCgp_Vec2d::SetY(Standard_Real Y)
{
  ((gp_Vec2d*)nativeHandle)->SetY(Y);
}

 void OCgp_Vec2d::SetXY(OCNaroWrappers::OCgp_XY^ Coord)
{
  ((gp_Vec2d*)nativeHandle)->SetXY(*((gp_XY*)Coord->Handle));
}

 Standard_Real OCgp_Vec2d::Coord(Standard_Integer Index)
{
  return ((gp_Vec2d*)nativeHandle)->Coord(Index);
}

 void OCgp_Vec2d::Coord(Standard_Real& Xv, Standard_Real& Yv)
{
  ((gp_Vec2d*)nativeHandle)->Coord(Xv, Yv);
}

 Standard_Real OCgp_Vec2d::X()
{
  return ((gp_Vec2d*)nativeHandle)->X();
}

 Standard_Real OCgp_Vec2d::Y()
{
  return ((gp_Vec2d*)nativeHandle)->Y();
}

OCgp_XY^ OCgp_Vec2d::XY()
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((gp_Vec2d*)nativeHandle)->XY();
  return gcnew OCgp_XY(tmp);
}

 System::Boolean OCgp_Vec2d::IsEqual(OCNaroWrappers::OCgp_Vec2d^ Other, Standard_Real LinearTolerance, Standard_Real AngularTolerance)
{
  return OCConverter::StandardBooleanToBoolean(((gp_Vec2d*)nativeHandle)->IsEqual(*((gp_Vec2d*)Other->Handle), LinearTolerance, AngularTolerance));
}

 System::Boolean OCgp_Vec2d::IsNormal(OCNaroWrappers::OCgp_Vec2d^ Other, Standard_Real AngularTolerance)
{
  return OCConverter::StandardBooleanToBoolean(((gp_Vec2d*)nativeHandle)->IsNormal(*((gp_Vec2d*)Other->Handle), AngularTolerance));
}

 System::Boolean OCgp_Vec2d::IsOpposite(OCNaroWrappers::OCgp_Vec2d^ Other, Standard_Real AngularTolerance)
{
  return OCConverter::StandardBooleanToBoolean(((gp_Vec2d*)nativeHandle)->IsOpposite(*((gp_Vec2d*)Other->Handle), AngularTolerance));
}

 System::Boolean OCgp_Vec2d::IsParallel(OCNaroWrappers::OCgp_Vec2d^ Other, Standard_Real AngularTolerance)
{
  return OCConverter::StandardBooleanToBoolean(((gp_Vec2d*)nativeHandle)->IsParallel(*((gp_Vec2d*)Other->Handle), AngularTolerance));
}

 Standard_Real OCgp_Vec2d::Angle(OCNaroWrappers::OCgp_Vec2d^ Other)
{
  return ((gp_Vec2d*)nativeHandle)->Angle(*((gp_Vec2d*)Other->Handle));
}

 Standard_Real OCgp_Vec2d::Magnitude()
{
  return ((gp_Vec2d*)nativeHandle)->Magnitude();
}

 Standard_Real OCgp_Vec2d::SquareMagnitude()
{
  return ((gp_Vec2d*)nativeHandle)->SquareMagnitude();
}

 void OCgp_Vec2d::Add(OCNaroWrappers::OCgp_Vec2d^ Other)
{
  ((gp_Vec2d*)nativeHandle)->Add(*((gp_Vec2d*)Other->Handle));
}

OCgp_Vec2d^ OCgp_Vec2d::Added(OCNaroWrappers::OCgp_Vec2d^ Other)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((gp_Vec2d*)nativeHandle)->Added(*((gp_Vec2d*)Other->Handle));
  return gcnew OCgp_Vec2d(tmp);
}

 Standard_Real OCgp_Vec2d::Crossed(OCNaroWrappers::OCgp_Vec2d^ Right)
{
  return ((gp_Vec2d*)nativeHandle)->Crossed(*((gp_Vec2d*)Right->Handle));
}

 Standard_Real OCgp_Vec2d::CrossMagnitude(OCNaroWrappers::OCgp_Vec2d^ Right)
{
  return ((gp_Vec2d*)nativeHandle)->CrossMagnitude(*((gp_Vec2d*)Right->Handle));
}

 Standard_Real OCgp_Vec2d::CrossSquareMagnitude(OCNaroWrappers::OCgp_Vec2d^ Right)
{
  return ((gp_Vec2d*)nativeHandle)->CrossSquareMagnitude(*((gp_Vec2d*)Right->Handle));
}

 void OCgp_Vec2d::Divide(Standard_Real Scalar)
{
  ((gp_Vec2d*)nativeHandle)->Divide(Scalar);
}

OCgp_Vec2d^ OCgp_Vec2d::Divided(Standard_Real Scalar)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((gp_Vec2d*)nativeHandle)->Divided(Scalar);
  return gcnew OCgp_Vec2d(tmp);
}

 Standard_Real OCgp_Vec2d::Dot(OCNaroWrappers::OCgp_Vec2d^ Other)
{
  return ((gp_Vec2d*)nativeHandle)->Dot(*((gp_Vec2d*)Other->Handle));
}

 void OCgp_Vec2d::Multiply(Standard_Real Scalar)
{
  ((gp_Vec2d*)nativeHandle)->Multiply(Scalar);
}

OCgp_Vec2d^ OCgp_Vec2d::Multiplied(Standard_Real Scalar)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((gp_Vec2d*)nativeHandle)->Multiplied(Scalar);
  return gcnew OCgp_Vec2d(tmp);
}

 void OCgp_Vec2d::Normalize()
{
  ((gp_Vec2d*)nativeHandle)->Normalize();
}

OCgp_Vec2d^ OCgp_Vec2d::Normalized()
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((gp_Vec2d*)nativeHandle)->Normalized();
  return gcnew OCgp_Vec2d(tmp);
}

 void OCgp_Vec2d::Reverse()
{
  ((gp_Vec2d*)nativeHandle)->Reverse();
}

OCgp_Vec2d^ OCgp_Vec2d::Reversed()
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((gp_Vec2d*)nativeHandle)->Reversed();
  return gcnew OCgp_Vec2d(tmp);
}

 void OCgp_Vec2d::Subtract(OCNaroWrappers::OCgp_Vec2d^ Right)
{
  ((gp_Vec2d*)nativeHandle)->Subtract(*((gp_Vec2d*)Right->Handle));
}

OCgp_Vec2d^ OCgp_Vec2d::Subtracted(OCNaroWrappers::OCgp_Vec2d^ Right)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((gp_Vec2d*)nativeHandle)->Subtracted(*((gp_Vec2d*)Right->Handle));
  return gcnew OCgp_Vec2d(tmp);
}

 void OCgp_Vec2d::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_Vec2d^ V1, Standard_Real A2, OCNaroWrappers::OCgp_Vec2d^ V2, OCNaroWrappers::OCgp_Vec2d^ V3)
{
  ((gp_Vec2d*)nativeHandle)->SetLinearForm(A1, *((gp_Vec2d*)V1->Handle), A2, *((gp_Vec2d*)V2->Handle), *((gp_Vec2d*)V3->Handle));
}

 void OCgp_Vec2d::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_Vec2d^ V1, Standard_Real A2, OCNaroWrappers::OCgp_Vec2d^ V2)
{
  ((gp_Vec2d*)nativeHandle)->SetLinearForm(A1, *((gp_Vec2d*)V1->Handle), A2, *((gp_Vec2d*)V2->Handle));
}

 void OCgp_Vec2d::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2)
{
  ((gp_Vec2d*)nativeHandle)->SetLinearForm(A1, *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle));
}

 void OCgp_Vec2d::SetLinearForm(OCNaroWrappers::OCgp_Vec2d^ Left, OCNaroWrappers::OCgp_Vec2d^ Right)
{
  ((gp_Vec2d*)nativeHandle)->SetLinearForm(*((gp_Vec2d*)Left->Handle), *((gp_Vec2d*)Right->Handle));
}

 void OCgp_Vec2d::Mirror(OCNaroWrappers::OCgp_Vec2d^ V)
{
  ((gp_Vec2d*)nativeHandle)->Mirror(*((gp_Vec2d*)V->Handle));
}

OCgp_Vec2d^ OCgp_Vec2d::Mirrored(OCNaroWrappers::OCgp_Vec2d^ V)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((gp_Vec2d*)nativeHandle)->Mirrored(*((gp_Vec2d*)V->Handle));
  return gcnew OCgp_Vec2d(tmp);
}

 void OCgp_Vec2d::Mirror(OCNaroWrappers::OCgp_Ax2d^ A1)
{
  ((gp_Vec2d*)nativeHandle)->Mirror(*((gp_Ax2d*)A1->Handle));
}

OCgp_Vec2d^ OCgp_Vec2d::Mirrored(OCNaroWrappers::OCgp_Ax2d^ A1)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((gp_Vec2d*)nativeHandle)->Mirrored(*((gp_Ax2d*)A1->Handle));
  return gcnew OCgp_Vec2d(tmp);
}

 void OCgp_Vec2d::Rotate(Standard_Real Ang)
{
  ((gp_Vec2d*)nativeHandle)->Rotate(Ang);
}

OCgp_Vec2d^ OCgp_Vec2d::Rotated(Standard_Real Ang)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((gp_Vec2d*)nativeHandle)->Rotated(Ang);
  return gcnew OCgp_Vec2d(tmp);
}

 void OCgp_Vec2d::Scale(Standard_Real S)
{
  ((gp_Vec2d*)nativeHandle)->Scale(S);
}

OCgp_Vec2d^ OCgp_Vec2d::Scaled(Standard_Real S)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((gp_Vec2d*)nativeHandle)->Scaled(S);
  return gcnew OCgp_Vec2d(tmp);
}

 void OCgp_Vec2d::Transform(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  ((gp_Vec2d*)nativeHandle)->Transform(*((gp_Trsf2d*)T->Handle));
}

OCgp_Vec2d^ OCgp_Vec2d::Transformed(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((gp_Vec2d*)nativeHandle)->Transformed(*((gp_Trsf2d*)T->Handle));
  return gcnew OCgp_Vec2d(tmp);
}


