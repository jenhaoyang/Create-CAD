// File generated by CPPExt (CPP file)
//

#include "StepAP214_PersonAndOrganizationItem.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepAP214_AppliedOrganizationAssignment.h"


using namespace OCNaroWrappers;

OCStepAP214_PersonAndOrganizationItem::OCStepAP214_PersonAndOrganizationItem(StepAP214_PersonAndOrganizationItem* nativeHandle) : OCStepAP214_ApprovalItem((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_PersonAndOrganizationItem::OCStepAP214_PersonAndOrganizationItem() : OCStepAP214_ApprovalItem((OCDummy^)nullptr)

{
  nativeHandle = new StepAP214_PersonAndOrganizationItem();
}

 Standard_Integer OCStepAP214_PersonAndOrganizationItem::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepAP214_PersonAndOrganizationItem*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepAP214_AppliedOrganizationAssignment^ OCStepAP214_PersonAndOrganizationItem::AppliedOrganizationAssignment()
{
  Handle(StepAP214_AppliedOrganizationAssignment) tmp = ((StepAP214_PersonAndOrganizationItem*)nativeHandle)->AppliedOrganizationAssignment();
  return gcnew OCStepAP214_AppliedOrganizationAssignment(&tmp);
}


