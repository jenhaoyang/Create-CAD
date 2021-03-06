// File generated by CPPExt (CPP file)
//

#include "StepAP214_AppliedSecurityClassificationAssignment.h"
#include "../Converter.h"
#include "StepAP214_HArray1OfSecurityClassificationItem.h"
#include "../StepBasic/StepBasic_SecurityClassification.h"
#include "StepAP214_SecurityClassificationItem.h"


using namespace OCNaroWrappers;

OCStepAP214_AppliedSecurityClassificationAssignment::OCStepAP214_AppliedSecurityClassificationAssignment(Handle(StepAP214_AppliedSecurityClassificationAssignment)* nativeHandle) : OCStepBasic_SecurityClassificationAssignment((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_AppliedSecurityClassificationAssignment(*nativeHandle);
}

OCStepAP214_AppliedSecurityClassificationAssignment::OCStepAP214_AppliedSecurityClassificationAssignment() : OCStepBasic_SecurityClassificationAssignment((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_AppliedSecurityClassificationAssignment(new StepAP214_AppliedSecurityClassificationAssignment());
}

 void OCStepAP214_AppliedSecurityClassificationAssignment::Init(OCNaroWrappers::OCStepBasic_SecurityClassification^ aAssignedSecurityClassification)
{
  (*((Handle_StepAP214_AppliedSecurityClassificationAssignment*)nativeHandle))->Init(*((Handle_StepBasic_SecurityClassification*)aAssignedSecurityClassification->Handle));
}

 void OCStepAP214_AppliedSecurityClassificationAssignment::Init(OCNaroWrappers::OCStepBasic_SecurityClassification^ aAssignedSecurityClassification, OCNaroWrappers::OCStepAP214_HArray1OfSecurityClassificationItem^ aItems)
{
  (*((Handle_StepAP214_AppliedSecurityClassificationAssignment*)nativeHandle))->Init(*((Handle_StepBasic_SecurityClassification*)aAssignedSecurityClassification->Handle), *((Handle_StepAP214_HArray1OfSecurityClassificationItem*)aItems->Handle));
}

 void OCStepAP214_AppliedSecurityClassificationAssignment::SetItems(OCNaroWrappers::OCStepAP214_HArray1OfSecurityClassificationItem^ aItems)
{
  (*((Handle_StepAP214_AppliedSecurityClassificationAssignment*)nativeHandle))->SetItems(*((Handle_StepAP214_HArray1OfSecurityClassificationItem*)aItems->Handle));
}

OCStepAP214_HArray1OfSecurityClassificationItem^ OCStepAP214_AppliedSecurityClassificationAssignment::Items()
{
  Handle(StepAP214_HArray1OfSecurityClassificationItem) tmp = (*((Handle_StepAP214_AppliedSecurityClassificationAssignment*)nativeHandle))->Items();
  return gcnew OCStepAP214_HArray1OfSecurityClassificationItem(&tmp);
}

OCStepAP214_SecurityClassificationItem^ OCStepAP214_AppliedSecurityClassificationAssignment::ItemsValue(Standard_Integer num)
{
  StepAP214_SecurityClassificationItem* tmp = new StepAP214_SecurityClassificationItem();
  *tmp = (*((Handle_StepAP214_AppliedSecurityClassificationAssignment*)nativeHandle))->ItemsValue(num);
  return gcnew OCStepAP214_SecurityClassificationItem(tmp);
}

 Standard_Integer OCStepAP214_AppliedSecurityClassificationAssignment::NbItems()
{
  return (*((Handle_StepAP214_AppliedSecurityClassificationAssignment*)nativeHandle))->NbItems();
}


