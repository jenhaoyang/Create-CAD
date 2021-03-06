// File generated by CPPExt (CPP file)
//

#include "StepShape_DimensionalSize.h"
#include "../Converter.h"
#include "../StepRepr/StepRepr_ShapeAspect.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepShape_DimensionalSize::OCStepShape_DimensionalSize(Handle(StepShape_DimensionalSize)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepShape_DimensionalSize(*nativeHandle);
}

OCStepShape_DimensionalSize::OCStepShape_DimensionalSize() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepShape_DimensionalSize(new StepShape_DimensionalSize());
}

 void OCStepShape_DimensionalSize::Init(OCNaroWrappers::OCStepRepr_ShapeAspect^ aAppliesTo, OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  (*((Handle_StepShape_DimensionalSize*)nativeHandle))->Init(*((Handle_StepRepr_ShapeAspect*)aAppliesTo->Handle), *((Handle_TCollection_HAsciiString*)aName->Handle));
}

OCStepRepr_ShapeAspect^ OCStepShape_DimensionalSize::AppliesTo()
{
  Handle(StepRepr_ShapeAspect) tmp = (*((Handle_StepShape_DimensionalSize*)nativeHandle))->AppliesTo();
  return gcnew OCStepRepr_ShapeAspect(&tmp);
}

 void OCStepShape_DimensionalSize::SetAppliesTo(OCNaroWrappers::OCStepRepr_ShapeAspect^ AppliesTo)
{
  (*((Handle_StepShape_DimensionalSize*)nativeHandle))->SetAppliesTo(*((Handle_StepRepr_ShapeAspect*)AppliesTo->Handle));
}

OCTCollection_HAsciiString^ OCStepShape_DimensionalSize::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepShape_DimensionalSize*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepShape_DimensionalSize::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name)
{
  (*((Handle_StepShape_DimensionalSize*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)Name->Handle));
}


