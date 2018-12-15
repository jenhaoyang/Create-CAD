// File generated by CPPExt (CPP file)
//

#include "Geom_ToroidalSurface.h"
#include "../Converter.h"
#include "../gp/gp_Ax3.h"
#include "../gp/gp_Torus.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "Geom_Curve.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Trsf.h"
#include "Geom_Geometry.h"


using namespace OCNaroWrappers;

OCGeom_ToroidalSurface::OCGeom_ToroidalSurface(Handle(Geom_ToroidalSurface)* nativeHandle) : OCGeom_ElementarySurface((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom_ToroidalSurface(*nativeHandle);
}

OCGeom_ToroidalSurface::OCGeom_ToroidalSurface(OCNaroWrappers::OCgp_Ax3^ A3, Standard_Real MajorRadius, Standard_Real MinorRadius) : OCGeom_ElementarySurface((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_ToroidalSurface(new Geom_ToroidalSurface(*((gp_Ax3*)A3->Handle), MajorRadius, MinorRadius));
}

OCGeom_ToroidalSurface::OCGeom_ToroidalSurface(OCNaroWrappers::OCgp_Torus^ T) : OCGeom_ElementarySurface((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_ToroidalSurface(new Geom_ToroidalSurface(*((gp_Torus*)T->Handle)));
}

 void OCGeom_ToroidalSurface::SetMajorRadius(Standard_Real MajorRadius)
{
  (*((Handle_Geom_ToroidalSurface*)nativeHandle))->SetMajorRadius(MajorRadius);
}

 void OCGeom_ToroidalSurface::SetMinorRadius(Standard_Real MinorRadius)
{
  (*((Handle_Geom_ToroidalSurface*)nativeHandle))->SetMinorRadius(MinorRadius);
}

 void OCGeom_ToroidalSurface::SetTorus(OCNaroWrappers::OCgp_Torus^ T)
{
  (*((Handle_Geom_ToroidalSurface*)nativeHandle))->SetTorus(*((gp_Torus*)T->Handle));
}

OCgp_Torus^ OCGeom_ToroidalSurface::Torus()
{
  gp_Torus* tmp = new gp_Torus();
  *tmp = (*((Handle_Geom_ToroidalSurface*)nativeHandle))->Torus();
  return gcnew OCgp_Torus(tmp);
}

 Standard_Real OCGeom_ToroidalSurface::UReversedParameter(Standard_Real U)
{
  return (*((Handle_Geom_ToroidalSurface*)nativeHandle))->UReversedParameter(U);
}

 Standard_Real OCGeom_ToroidalSurface::VReversedParameter(Standard_Real U)
{
  return (*((Handle_Geom_ToroidalSurface*)nativeHandle))->VReversedParameter(U);
}

 Standard_Real OCGeom_ToroidalSurface::Area()
{
  return (*((Handle_Geom_ToroidalSurface*)nativeHandle))->Area();
}

 void OCGeom_ToroidalSurface::Bounds(Standard_Real& U1, Standard_Real& U2, Standard_Real& V1, Standard_Real& V2)
{
  (*((Handle_Geom_ToroidalSurface*)nativeHandle))->Bounds(U1, U2, V1, V2);
}

 void OCGeom_ToroidalSurface::Coefficients(OCNaroWrappers::OCTColStd_Array1OfReal^ Coef)
{
  (*((Handle_Geom_ToroidalSurface*)nativeHandle))->Coefficients(*((TColStd_Array1OfReal*)Coef->Handle));
}

 Standard_Real OCGeom_ToroidalSurface::MajorRadius()
{
  return (*((Handle_Geom_ToroidalSurface*)nativeHandle))->MajorRadius();
}

 Standard_Real OCGeom_ToroidalSurface::MinorRadius()
{
  return (*((Handle_Geom_ToroidalSurface*)nativeHandle))->MinorRadius();
}

 Standard_Real OCGeom_ToroidalSurface::Volume()
{
  return (*((Handle_Geom_ToroidalSurface*)nativeHandle))->Volume();
}

 System::Boolean OCGeom_ToroidalSurface::IsUClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_ToroidalSurface*)nativeHandle))->IsUClosed());
}

 System::Boolean OCGeom_ToroidalSurface::IsVClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_ToroidalSurface*)nativeHandle))->IsVClosed());
}

 System::Boolean OCGeom_ToroidalSurface::IsUPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_ToroidalSurface*)nativeHandle))->IsUPeriodic());
}

 System::Boolean OCGeom_ToroidalSurface::IsVPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_ToroidalSurface*)nativeHandle))->IsVPeriodic());
}

OCGeom_Curve^ OCGeom_ToroidalSurface::UIso(Standard_Real U)
{
  Handle(Geom_Curve) tmp = (*((Handle_Geom_ToroidalSurface*)nativeHandle))->UIso(U);
  return gcnew OCGeom_Curve(&tmp);
}

OCGeom_Curve^ OCGeom_ToroidalSurface::VIso(Standard_Real V)
{
  Handle(Geom_Curve) tmp = (*((Handle_Geom_ToroidalSurface*)nativeHandle))->VIso(V);
  return gcnew OCGeom_Curve(&tmp);
}

 void OCGeom_ToroidalSurface::D0(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P)
{
  (*((Handle_Geom_ToroidalSurface*)nativeHandle))->D0(U, V, *((gp_Pnt*)P->Handle));
}

 void OCGeom_ToroidalSurface::D1(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V)
{
  (*((Handle_Geom_ToroidalSurface*)nativeHandle))->D1(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle));
}

 void OCGeom_ToroidalSurface::D2(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV)
{
  (*((Handle_Geom_ToroidalSurface*)nativeHandle))->D2(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle));
}

 void OCGeom_ToroidalSurface::D3(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV)
{
  (*((Handle_Geom_ToroidalSurface*)nativeHandle))->D3(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle), *((gp_Vec*)D3U->Handle), *((gp_Vec*)D3V->Handle), *((gp_Vec*)D3UUV->Handle), *((gp_Vec*)D3UVV->Handle));
}

OCgp_Vec^ OCGeom_ToroidalSurface::DN(Standard_Real U, Standard_Real V, Standard_Integer Nu, Standard_Integer Nv)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_Geom_ToroidalSurface*)nativeHandle))->DN(U, V, Nu, Nv);
  return gcnew OCgp_Vec(tmp);
}

 void OCGeom_ToroidalSurface::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  (*((Handle_Geom_ToroidalSurface*)nativeHandle))->Transform(*((gp_Trsf*)T->Handle));
}

OCGeom_Geometry^ OCGeom_ToroidalSurface::Copy()
{
  Handle(Geom_Geometry) tmp = (*((Handle_Geom_ToroidalSurface*)nativeHandle))->Copy();
  return gcnew OCGeom_Geometry(&tmp);
}


