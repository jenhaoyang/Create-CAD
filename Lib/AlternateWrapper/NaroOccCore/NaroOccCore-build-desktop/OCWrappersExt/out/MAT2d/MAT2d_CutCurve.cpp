// File generated by CPPExt (CPP file)
//

#include "MAT2d_CutCurve.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../Geom2d/Geom2d_TrimmedCurve.h"


using namespace OCNaroWrappers;

OCMAT2d_CutCurve::OCMAT2d_CutCurve(MAT2d_CutCurve* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMAT2d_CutCurve::OCMAT2d_CutCurve() 
{
  nativeHandle = new MAT2d_CutCurve();
}

OCMAT2d_CutCurve::OCMAT2d_CutCurve(OCNaroWrappers::OCGeom2d_Curve^ C) 
{
  nativeHandle = new MAT2d_CutCurve(*((Handle_Geom2d_Curve*)C->Handle));
}

 void OCMAT2d_CutCurve::Perform(OCNaroWrappers::OCGeom2d_Curve^ C)
{
  ((MAT2d_CutCurve*)nativeHandle)->Perform(*((Handle_Geom2d_Curve*)C->Handle));
}

 void OCMAT2d_CutCurve::Perform(OCNaroWrappers::OCGeom2d_Curve^ C, OCMAT_Side aSide)
{
  ((MAT2d_CutCurve*)nativeHandle)->Perform(*((Handle_Geom2d_Curve*)C->Handle), (MAT_Side)aSide);
}

 void OCMAT2d_CutCurve::PerformInf(OCNaroWrappers::OCGeom2d_Curve^ C)
{
  ((MAT2d_CutCurve*)nativeHandle)->PerformInf(*((Handle_Geom2d_Curve*)C->Handle));
}

 System::Boolean OCMAT2d_CutCurve::UnModified()
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_CutCurve*)nativeHandle)->UnModified());
}

 Standard_Integer OCMAT2d_CutCurve::NbCurves()
{
  return ((MAT2d_CutCurve*)nativeHandle)->NbCurves();
}

OCGeom2d_TrimmedCurve^ OCMAT2d_CutCurve::Value(Standard_Integer Index)
{
  Handle(Geom2d_TrimmedCurve) tmp = ((MAT2d_CutCurve*)nativeHandle)->Value(Index);
  return gcnew OCGeom2d_TrimmedCurve(&tmp);
}


