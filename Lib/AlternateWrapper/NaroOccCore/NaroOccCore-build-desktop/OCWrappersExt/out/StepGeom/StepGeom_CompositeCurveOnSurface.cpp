// File generated by CPPExt (CPP file)
//

#include "StepGeom_CompositeCurveOnSurface.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepGeom_CompositeCurveOnSurface::OCStepGeom_CompositeCurveOnSurface(StepGeom_CompositeCurveOnSurface* nativeHandle) : OCStepGeom_CompositeCurve((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_CompositeCurveOnSurface::OCStepGeom_CompositeCurveOnSurface() : OCStepGeom_CompositeCurve((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_CompositeCurveOnSurface();
}


