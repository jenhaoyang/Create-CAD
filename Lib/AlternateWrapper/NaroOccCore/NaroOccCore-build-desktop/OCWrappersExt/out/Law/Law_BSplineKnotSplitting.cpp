// File generated by CPPExt (CPP file)
//

#include "Law_BSplineKnotSplitting.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray1OfInteger.h"
#include "Law_BSpline.h"
#include "../TColStd/TColStd_Array1OfInteger.h"


using namespace OCNaroWrappers;

OCLaw_BSplineKnotSplitting::OCLaw_BSplineKnotSplitting(Law_BSplineKnotSplitting* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCLaw_BSplineKnotSplitting::OCLaw_BSplineKnotSplitting(OCNaroWrappers::OCLaw_BSpline^ BasisLaw, Standard_Integer ContinuityRange) 
{
  nativeHandle = new Law_BSplineKnotSplitting(*((Handle_Law_BSpline*)BasisLaw->Handle), ContinuityRange);
}

 Standard_Integer OCLaw_BSplineKnotSplitting::NbSplits()
{
  return ((Law_BSplineKnotSplitting*)nativeHandle)->NbSplits();
}

 void OCLaw_BSplineKnotSplitting::Splitting(OCNaroWrappers::OCTColStd_Array1OfInteger^ SplitValues)
{
  ((Law_BSplineKnotSplitting*)nativeHandle)->Splitting(*((TColStd_Array1OfInteger*)SplitValues->Handle));
}

 Standard_Integer OCLaw_BSplineKnotSplitting::SplitValue(Standard_Integer Index)
{
  return ((Law_BSplineKnotSplitting*)nativeHandle)->SplitValue(Index);
}


