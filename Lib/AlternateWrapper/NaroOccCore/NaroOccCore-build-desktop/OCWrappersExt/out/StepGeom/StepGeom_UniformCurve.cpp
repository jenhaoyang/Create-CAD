// File generated by CPPExt (CPP file)
//

#include "StepGeom_UniformCurve.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepGeom_UniformCurve::OCStepGeom_UniformCurve(StepGeom_UniformCurve* nativeHandle) : OCStepGeom_BSplineCurve((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_UniformCurve::OCStepGeom_UniformCurve() : OCStepGeom_BSplineCurve((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_UniformCurve();
}


