// File generated by CPPExt (CPP file)
//

#include "StepAP214_AppliedApprovalAssignment.h"
#include "../Converter.h"
#include "StepAP214_HArray1OfApprovalItem.h"
#include "../StepBasic/StepBasic_Approval.h"
#include "StepAP214_ApprovalItem.h"


using namespace OCNaroWrappers;

OCStepAP214_AppliedApprovalAssignment::OCStepAP214_AppliedApprovalAssignment(Handle(StepAP214_AppliedApprovalAssignment)* nativeHandle) : OCStepBasic_ApprovalAssignment((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_AppliedApprovalAssignment(*nativeHandle);
}

OCStepAP214_AppliedApprovalAssignment::OCStepAP214_AppliedApprovalAssignment() : OCStepBasic_ApprovalAssignment((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_AppliedApprovalAssignment(new StepAP214_AppliedApprovalAssignment());
}

 void OCStepAP214_AppliedApprovalAssignment::Init(OCNaroWrappers::OCStepBasic_Approval^ aAssignedApproval)
{
  (*((Handle_StepAP214_AppliedApprovalAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Approval*)aAssignedApproval->Handle));
}

 void OCStepAP214_AppliedApprovalAssignment::Init(OCNaroWrappers::OCStepBasic_Approval^ aAssignedApproval, OCNaroWrappers::OCStepAP214_HArray1OfApprovalItem^ aItems)
{
  (*((Handle_StepAP214_AppliedApprovalAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Approval*)aAssignedApproval->Handle), *((Handle_StepAP214_HArray1OfApprovalItem*)aItems->Handle));
}

 void OCStepAP214_AppliedApprovalAssignment::SetItems(OCNaroWrappers::OCStepAP214_HArray1OfApprovalItem^ aItems)
{
  (*((Handle_StepAP214_AppliedApprovalAssignment*)nativeHandle))->SetItems(*((Handle_StepAP214_HArray1OfApprovalItem*)aItems->Handle));
}

OCStepAP214_HArray1OfApprovalItem^ OCStepAP214_AppliedApprovalAssignment::Items()
{
  Handle(StepAP214_HArray1OfApprovalItem) tmp = (*((Handle_StepAP214_AppliedApprovalAssignment*)nativeHandle))->Items();
  return gcnew OCStepAP214_HArray1OfApprovalItem(&tmp);
}

OCStepAP214_ApprovalItem^ OCStepAP214_AppliedApprovalAssignment::ItemsValue(Standard_Integer num)
{
  StepAP214_ApprovalItem* tmp = new StepAP214_ApprovalItem();
  *tmp = (*((Handle_StepAP214_AppliedApprovalAssignment*)nativeHandle))->ItemsValue(num);
  return gcnew OCStepAP214_ApprovalItem(tmp);
}

 Standard_Integer OCStepAP214_AppliedApprovalAssignment::NbItems()
{
  return (*((Handle_StepAP214_AppliedApprovalAssignment*)nativeHandle))->NbItems();
}


