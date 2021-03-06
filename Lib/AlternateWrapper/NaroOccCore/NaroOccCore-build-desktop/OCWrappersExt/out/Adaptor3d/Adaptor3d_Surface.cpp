// File generated by CPPExt (CPP file)
//

#include "Adaptor3d_Surface.h"
#include "../Converter.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "Adaptor3d_HSurface.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Pln.h"
#include "../gp/gp_Cylinder.h"
#include "../gp/gp_Cone.h"
#include "../gp/gp_Sphere.h"
#include "../gp/gp_Torus.h"
#include "../Geom/Geom_BezierSurface.h"
#include "../Geom/Geom_BSplineSurface.h"
#include "../gp/gp_Ax1.h"
#include "../gp/gp_Dir.h"
#include "Adaptor3d_HCurve.h"


using namespace OCNaroWrappers;

OCAdaptor3d_Surface::OCAdaptor3d_Surface(Adaptor3d_Surface* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCAdaptor3d_Surface::Delete()
{
  ((Adaptor3d_Surface*)nativeHandle)->Delete();
}

 Standard_Real OCAdaptor3d_Surface::FirstUParameter()
{
  return ((Adaptor3d_Surface*)nativeHandle)->FirstUParameter();
}

 Standard_Real OCAdaptor3d_Surface::LastUParameter()
{
  return ((Adaptor3d_Surface*)nativeHandle)->LastUParameter();
}

 Standard_Real OCAdaptor3d_Surface::FirstVParameter()
{
  return ((Adaptor3d_Surface*)nativeHandle)->FirstVParameter();
}

 Standard_Real OCAdaptor3d_Surface::LastVParameter()
{
  return ((Adaptor3d_Surface*)nativeHandle)->LastVParameter();
}

 OCGeomAbs_Shape OCAdaptor3d_Surface::UContinuity()
{
  return (OCGeomAbs_Shape)(((Adaptor3d_Surface*)nativeHandle)->UContinuity());
}

 OCGeomAbs_Shape OCAdaptor3d_Surface::VContinuity()
{
  return (OCGeomAbs_Shape)(((Adaptor3d_Surface*)nativeHandle)->VContinuity());
}

 Standard_Integer OCAdaptor3d_Surface::NbUIntervals(OCGeomAbs_Shape S)
{
  return ((Adaptor3d_Surface*)nativeHandle)->NbUIntervals((GeomAbs_Shape)S);
}

 Standard_Integer OCAdaptor3d_Surface::NbVIntervals(OCGeomAbs_Shape S)
{
  return ((Adaptor3d_Surface*)nativeHandle)->NbVIntervals((GeomAbs_Shape)S);
}

 void OCAdaptor3d_Surface::UIntervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  ((Adaptor3d_Surface*)nativeHandle)->UIntervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

 void OCAdaptor3d_Surface::VIntervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  ((Adaptor3d_Surface*)nativeHandle)->VIntervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

OCAdaptor3d_HSurface^ OCAdaptor3d_Surface::UTrim(Standard_Real First, Standard_Real Last, Standard_Real Tol)
{
  Handle(Adaptor3d_HSurface) tmp = ((Adaptor3d_Surface*)nativeHandle)->UTrim(First, Last, Tol);
  return gcnew OCAdaptor3d_HSurface(&tmp);
}

OCAdaptor3d_HSurface^ OCAdaptor3d_Surface::VTrim(Standard_Real First, Standard_Real Last, Standard_Real Tol)
{
  Handle(Adaptor3d_HSurface) tmp = ((Adaptor3d_Surface*)nativeHandle)->VTrim(First, Last, Tol);
  return gcnew OCAdaptor3d_HSurface(&tmp);
}

 System::Boolean OCAdaptor3d_Surface::IsUClosed()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_Surface*)nativeHandle)->IsUClosed());
}

 System::Boolean OCAdaptor3d_Surface::IsVClosed()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_Surface*)nativeHandle)->IsVClosed());
}

 System::Boolean OCAdaptor3d_Surface::IsUPeriodic()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_Surface*)nativeHandle)->IsUPeriodic());
}

 Standard_Real OCAdaptor3d_Surface::UPeriod()
{
  return ((Adaptor3d_Surface*)nativeHandle)->UPeriod();
}

 System::Boolean OCAdaptor3d_Surface::IsVPeriodic()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_Surface*)nativeHandle)->IsVPeriodic());
}

 Standard_Real OCAdaptor3d_Surface::VPeriod()
{
  return ((Adaptor3d_Surface*)nativeHandle)->VPeriod();
}

OCgp_Pnt^ OCAdaptor3d_Surface::Value(Standard_Real U, Standard_Real V)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((Adaptor3d_Surface*)nativeHandle)->Value(U, V);
  return gcnew OCgp_Pnt(tmp);
}

 void OCAdaptor3d_Surface::D0(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P)
{
  ((Adaptor3d_Surface*)nativeHandle)->D0(U, V, *((gp_Pnt*)P->Handle));
}

 void OCAdaptor3d_Surface::D1(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V)
{
  ((Adaptor3d_Surface*)nativeHandle)->D1(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle));
}

 void OCAdaptor3d_Surface::D2(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV)
{
  ((Adaptor3d_Surface*)nativeHandle)->D2(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle));
}

 void OCAdaptor3d_Surface::D3(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV)
{
  ((Adaptor3d_Surface*)nativeHandle)->D3(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle), *((gp_Vec*)D3U->Handle), *((gp_Vec*)D3V->Handle), *((gp_Vec*)D3UUV->Handle), *((gp_Vec*)D3UVV->Handle));
}

OCgp_Vec^ OCAdaptor3d_Surface::DN(Standard_Real U, Standard_Real V, Standard_Integer Nu, Standard_Integer Nv)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((Adaptor3d_Surface*)nativeHandle)->DN(U, V, Nu, Nv);
  return gcnew OCgp_Vec(tmp);
}

 Standard_Real OCAdaptor3d_Surface::UResolution(Standard_Real R3d)
{
  return ((Adaptor3d_Surface*)nativeHandle)->UResolution(R3d);
}

 Standard_Real OCAdaptor3d_Surface::VResolution(Standard_Real R3d)
{
  return ((Adaptor3d_Surface*)nativeHandle)->VResolution(R3d);
}

 OCGeomAbs_SurfaceType OCAdaptor3d_Surface::GetType()
{
  return (OCGeomAbs_SurfaceType)(((Adaptor3d_Surface*)nativeHandle)->GetType());
}

OCgp_Pln^ OCAdaptor3d_Surface::Plane()
{
  gp_Pln* tmp = new gp_Pln();
  *tmp = ((Adaptor3d_Surface*)nativeHandle)->Plane();
  return gcnew OCgp_Pln(tmp);
}

OCgp_Cylinder^ OCAdaptor3d_Surface::Cylinder()
{
  gp_Cylinder* tmp = new gp_Cylinder();
  *tmp = ((Adaptor3d_Surface*)nativeHandle)->Cylinder();
  return gcnew OCgp_Cylinder(tmp);
}

OCgp_Cone^ OCAdaptor3d_Surface::Cone()
{
  gp_Cone* tmp = new gp_Cone();
  *tmp = ((Adaptor3d_Surface*)nativeHandle)->Cone();
  return gcnew OCgp_Cone(tmp);
}

OCgp_Sphere^ OCAdaptor3d_Surface::Sphere()
{
  gp_Sphere* tmp = new gp_Sphere();
  *tmp = ((Adaptor3d_Surface*)nativeHandle)->Sphere();
  return gcnew OCgp_Sphere(tmp);
}

OCgp_Torus^ OCAdaptor3d_Surface::Torus()
{
  gp_Torus* tmp = new gp_Torus();
  *tmp = ((Adaptor3d_Surface*)nativeHandle)->Torus();
  return gcnew OCgp_Torus(tmp);
}

 Standard_Integer OCAdaptor3d_Surface::UDegree()
{
  return ((Adaptor3d_Surface*)nativeHandle)->UDegree();
}

 Standard_Integer OCAdaptor3d_Surface::NbUPoles()
{
  return ((Adaptor3d_Surface*)nativeHandle)->NbUPoles();
}

 Standard_Integer OCAdaptor3d_Surface::VDegree()
{
  return ((Adaptor3d_Surface*)nativeHandle)->VDegree();
}

 Standard_Integer OCAdaptor3d_Surface::NbVPoles()
{
  return ((Adaptor3d_Surface*)nativeHandle)->NbVPoles();
}

 Standard_Integer OCAdaptor3d_Surface::NbUKnots()
{
  return ((Adaptor3d_Surface*)nativeHandle)->NbUKnots();
}

 Standard_Integer OCAdaptor3d_Surface::NbVKnots()
{
  return ((Adaptor3d_Surface*)nativeHandle)->NbVKnots();
}

 System::Boolean OCAdaptor3d_Surface::IsURational()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_Surface*)nativeHandle)->IsURational());
}

 System::Boolean OCAdaptor3d_Surface::IsVRational()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_Surface*)nativeHandle)->IsVRational());
}

OCGeom_BezierSurface^ OCAdaptor3d_Surface::Bezier()
{
  Handle(Geom_BezierSurface) tmp = ((Adaptor3d_Surface*)nativeHandle)->Bezier();
  return gcnew OCGeom_BezierSurface(&tmp);
}

OCGeom_BSplineSurface^ OCAdaptor3d_Surface::BSpline()
{
  Handle(Geom_BSplineSurface) tmp = ((Adaptor3d_Surface*)nativeHandle)->BSpline();
  return gcnew OCGeom_BSplineSurface(&tmp);
}

OCgp_Ax1^ OCAdaptor3d_Surface::AxeOfRevolution()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((Adaptor3d_Surface*)nativeHandle)->AxeOfRevolution();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Dir^ OCAdaptor3d_Surface::Direction()
{
  gp_Dir* tmp = new gp_Dir();
  *tmp = ((Adaptor3d_Surface*)nativeHandle)->Direction();
  return gcnew OCgp_Dir(tmp);
}

OCAdaptor3d_HCurve^ OCAdaptor3d_Surface::BasisCurve()
{
  Handle(Adaptor3d_HCurve) tmp = ((Adaptor3d_Surface*)nativeHandle)->BasisCurve();
  return gcnew OCAdaptor3d_HCurve(&tmp);
}

OCAdaptor3d_HSurface^ OCAdaptor3d_Surface::BasisSurface()
{
  Handle(Adaptor3d_HSurface) tmp = ((Adaptor3d_Surface*)nativeHandle)->BasisSurface();
  return gcnew OCAdaptor3d_HSurface(&tmp);
}

 Standard_Real OCAdaptor3d_Surface::OffsetValue()
{
  return ((Adaptor3d_Surface*)nativeHandle)->OffsetValue();
}


