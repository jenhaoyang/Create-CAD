// File generated by CPPExt (CPP file)
//

#include "StepVisual_PresentationStyleSelect.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepVisual_PointStyle.h"
#include "StepVisual_CurveStyle.h"
#include "StepVisual_SurfaceStyleUsage.h"


using namespace OCNaroWrappers;

OCStepVisual_PresentationStyleSelect::OCStepVisual_PresentationStyleSelect(StepVisual_PresentationStyleSelect* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepVisual_PresentationStyleSelect::OCStepVisual_PresentationStyleSelect() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepVisual_PresentationStyleSelect();
}

 Standard_Integer OCStepVisual_PresentationStyleSelect::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepVisual_PresentationStyleSelect*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepVisual_PointStyle^ OCStepVisual_PresentationStyleSelect::PointStyle()
{
  Handle(StepVisual_PointStyle) tmp = ((StepVisual_PresentationStyleSelect*)nativeHandle)->PointStyle();
  return gcnew OCStepVisual_PointStyle(&tmp);
}

OCStepVisual_CurveStyle^ OCStepVisual_PresentationStyleSelect::CurveStyle()
{
  Handle(StepVisual_CurveStyle) tmp = ((StepVisual_PresentationStyleSelect*)nativeHandle)->CurveStyle();
  return gcnew OCStepVisual_CurveStyle(&tmp);
}

OCStepVisual_SurfaceStyleUsage^ OCStepVisual_PresentationStyleSelect::SurfaceStyleUsage()
{
  Handle(StepVisual_SurfaceStyleUsage) tmp = ((StepVisual_PresentationStyleSelect*)nativeHandle)->SurfaceStyleUsage();
  return gcnew OCStepVisual_SurfaceStyleUsage(&tmp);
}


