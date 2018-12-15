// File generated by CPPExt (CPP file)
//

#include "StepRepr_MeasureRepresentationItem.h"
#include "../Converter.h"
#include "../StepBasic/StepBasic_MeasureWithUnit.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "../StepBasic/StepBasic_MeasureValueMember.h"
#include "../StepBasic/StepBasic_Unit.h"


using namespace OCNaroWrappers;

OCStepRepr_MeasureRepresentationItem::OCStepRepr_MeasureRepresentationItem(Handle(StepRepr_MeasureRepresentationItem)* nativeHandle) : OCStepRepr_RepresentationItem((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepRepr_MeasureRepresentationItem(*nativeHandle);
}

OCStepRepr_MeasureRepresentationItem::OCStepRepr_MeasureRepresentationItem() : OCStepRepr_RepresentationItem((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepRepr_MeasureRepresentationItem(new StepRepr_MeasureRepresentationItem());
}

 void OCStepRepr_MeasureRepresentationItem::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepBasic_MeasureValueMember^ aValueComponent, OCNaroWrappers::OCStepBasic_Unit^ aUnitComponent)
{
  (*((Handle_StepRepr_MeasureRepresentationItem*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepBasic_MeasureValueMember*)aValueComponent->Handle), *((StepBasic_Unit*)aUnitComponent->Handle));
}

 void OCStepRepr_MeasureRepresentationItem::SetMeasure(OCNaroWrappers::OCStepBasic_MeasureWithUnit^ Measure)
{
  (*((Handle_StepRepr_MeasureRepresentationItem*)nativeHandle))->SetMeasure(*((Handle_StepBasic_MeasureWithUnit*)Measure->Handle));
}

OCStepBasic_MeasureWithUnit^ OCStepRepr_MeasureRepresentationItem::Measure()
{
  Handle(StepBasic_MeasureWithUnit) tmp = (*((Handle_StepRepr_MeasureRepresentationItem*)nativeHandle))->Measure();
  return gcnew OCStepBasic_MeasureWithUnit(&tmp);
}


