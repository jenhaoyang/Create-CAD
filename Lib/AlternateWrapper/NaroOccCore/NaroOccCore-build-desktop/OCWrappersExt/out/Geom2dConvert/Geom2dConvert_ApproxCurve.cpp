// File generated by CPPExt (CPP file)
//

#include "Geom2dConvert_ApproxCurve.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../Geom2d/Geom2d_BSplineCurve.h"


using namespace OCNaroWrappers;

OCGeom2dConvert_ApproxCurve::OCGeom2dConvert_ApproxCurve(Geom2dConvert_ApproxCurve* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGeom2dConvert_ApproxCurve::OCGeom2dConvert_ApproxCurve(OCNaroWrappers::OCGeom2d_Curve^ Curve, Standard_Real Tol2d, OCGeomAbs_Shape Order, Standard_Integer MaxSegments, Standard_Integer MaxDegree) 
{
  nativeHandle = new Geom2dConvert_ApproxCurve(*((Handle_Geom2d_Curve*)Curve->Handle), Tol2d, (GeomAbs_Shape)Order, MaxSegments, MaxDegree);
}

OCGeom2d_BSplineCurve^ OCGeom2dConvert_ApproxCurve::Curve()
{
  Handle(Geom2d_BSplineCurve) tmp = ((Geom2dConvert_ApproxCurve*)nativeHandle)->Curve();
  return gcnew OCGeom2d_BSplineCurve(&tmp);
}

 System::Boolean OCGeom2dConvert_ApproxCurve::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((Geom2dConvert_ApproxCurve*)nativeHandle)->IsDone());
}

 System::Boolean OCGeom2dConvert_ApproxCurve::HasResult()
{
  return OCConverter::StandardBooleanToBoolean(((Geom2dConvert_ApproxCurve*)nativeHandle)->HasResult());
}

 Standard_Real OCGeom2dConvert_ApproxCurve::MaxError()
{
  return ((Geom2dConvert_ApproxCurve*)nativeHandle)->MaxError();
}

 void OCGeom2dConvert_ApproxCurve::Dump(Standard_OStream& o)
{
  ((Geom2dConvert_ApproxCurve*)nativeHandle)->Dump(o);
}


