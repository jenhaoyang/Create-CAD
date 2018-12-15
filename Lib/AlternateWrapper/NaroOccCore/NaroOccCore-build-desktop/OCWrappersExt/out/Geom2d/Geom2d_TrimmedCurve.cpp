// File generated by CPPExt (CPP file)
//

#include "Geom2d_TrimmedCurve.h"
#include "../Converter.h"
#include "Geom2d_Curve.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"
#include "../gp/gp_Trsf2d.h"
#include "Geom2d_Geometry.h"


using namespace OCNaroWrappers;

OCGeom2d_TrimmedCurve::OCGeom2d_TrimmedCurve(Handle(Geom2d_TrimmedCurve)* nativeHandle) : OCGeom2d_BoundedCurve((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom2d_TrimmedCurve(*nativeHandle);
}

OCGeom2d_TrimmedCurve::OCGeom2d_TrimmedCurve(OCNaroWrappers::OCGeom2d_Curve^ C, Standard_Real U1, Standard_Real U2, System::Boolean Sense) : OCGeom2d_BoundedCurve((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_TrimmedCurve(new Geom2d_TrimmedCurve(*((Handle_Geom2d_Curve*)C->Handle), U1, U2, OCConverter::BooleanToStandardBoolean(Sense)));
}

 void OCGeom2d_TrimmedCurve::Reverse()
{
  (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->Reverse();
}

 Standard_Real OCGeom2d_TrimmedCurve::ReversedParameter(Standard_Real U)
{
  return (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->ReversedParameter(U);
}

 void OCGeom2d_TrimmedCurve::SetTrim(Standard_Real U1, Standard_Real U2, System::Boolean Sense)
{
  (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->SetTrim(U1, U2, OCConverter::BooleanToStandardBoolean(Sense));
}

OCGeom2d_Curve^ OCGeom2d_TrimmedCurve::BasisCurve()
{
  Handle(Geom2d_Curve) tmp = (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->BasisCurve();
  return gcnew OCGeom2d_Curve(&tmp);
}

 OCGeomAbs_Shape OCGeom2d_TrimmedCurve::Continuity()
{
  return (OCGeomAbs_Shape)((*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->Continuity());
}

 System::Boolean OCGeom2d_TrimmedCurve::IsCN(Standard_Integer N)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->IsCN(N));
}

OCgp_Pnt2d^ OCGeom2d_TrimmedCurve::EndPoint()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->EndPoint();
  return gcnew OCgp_Pnt2d(tmp);
}

 Standard_Real OCGeom2d_TrimmedCurve::FirstParameter()
{
  return (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->FirstParameter();
}

 System::Boolean OCGeom2d_TrimmedCurve::IsClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->IsClosed());
}

 System::Boolean OCGeom2d_TrimmedCurve::IsPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->IsPeriodic());
}

 Standard_Real OCGeom2d_TrimmedCurve::Period()
{
  return (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->Period();
}

 Standard_Real OCGeom2d_TrimmedCurve::LastParameter()
{
  return (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->LastParameter();
}

OCgp_Pnt2d^ OCGeom2d_TrimmedCurve::StartPoint()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->StartPoint();
  return gcnew OCgp_Pnt2d(tmp);
}

 void OCGeom2d_TrimmedCurve::D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P)
{
  (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->D0(U, *((gp_Pnt2d*)P->Handle));
}

 void OCGeom2d_TrimmedCurve::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1)
{
  (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->D1(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle));
}

 void OCGeom2d_TrimmedCurve::D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2)
{
  (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->D2(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle));
}

 void OCGeom2d_TrimmedCurve::D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2, OCNaroWrappers::OCgp_Vec2d^ V3)
{
  (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->D3(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle), *((gp_Vec2d*)V3->Handle));
}

OCgp_Vec2d^ OCGeom2d_TrimmedCurve::DN(Standard_Real U, Standard_Integer N)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->DN(U, N);
  return gcnew OCgp_Vec2d(tmp);
}

 void OCGeom2d_TrimmedCurve::Transform(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->Transform(*((gp_Trsf2d*)T->Handle));
}

 Standard_Real OCGeom2d_TrimmedCurve::TransformedParameter(Standard_Real U, OCNaroWrappers::OCgp_Trsf2d^ T)
{
  return (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->TransformedParameter(U, *((gp_Trsf2d*)T->Handle));
}

 Standard_Real OCGeom2d_TrimmedCurve::ParametricTransformation(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  return (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->ParametricTransformation(*((gp_Trsf2d*)T->Handle));
}

OCGeom2d_Geometry^ OCGeom2d_TrimmedCurve::Copy()
{
  Handle(Geom2d_Geometry) tmp = (*((Handle_Geom2d_TrimmedCurve*)nativeHandle))->Copy();
  return gcnew OCGeom2d_Geometry(&tmp);
}


