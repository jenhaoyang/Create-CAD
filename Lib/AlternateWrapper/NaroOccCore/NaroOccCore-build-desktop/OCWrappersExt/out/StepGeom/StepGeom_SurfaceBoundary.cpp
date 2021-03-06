// File generated by CPPExt (CPP file)
//

#include "StepGeom_SurfaceBoundary.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepGeom_BoundaryCurve.h"
#include "StepGeom_DegeneratePcurve.h"


using namespace OCNaroWrappers;

OCStepGeom_SurfaceBoundary::OCStepGeom_SurfaceBoundary(StepGeom_SurfaceBoundary* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_SurfaceBoundary::OCStepGeom_SurfaceBoundary() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_SurfaceBoundary();
}

 Standard_Integer OCStepGeom_SurfaceBoundary::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepGeom_SurfaceBoundary*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepGeom_BoundaryCurve^ OCStepGeom_SurfaceBoundary::BoundaryCurve()
{
  StepGeom_BoundaryCurve* tmp = new StepGeom_BoundaryCurve();
  *tmp = ((StepGeom_SurfaceBoundary*)nativeHandle)->BoundaryCurve();
  return gcnew OCStepGeom_BoundaryCurve(tmp);
}

OCStepGeom_DegeneratePcurve^ OCStepGeom_SurfaceBoundary::DegeneratePcurve()
{
  StepGeom_DegeneratePcurve* tmp = new StepGeom_DegeneratePcurve();
  *tmp = ((StepGeom_SurfaceBoundary*)nativeHandle)->DegeneratePcurve();
  return gcnew OCStepGeom_DegeneratePcurve(tmp);
}


