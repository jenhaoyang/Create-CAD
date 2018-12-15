// File generated by CPPExt (CPP file)
//

#include "StepAP214_OrganizationItem.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepAP214_AppliedOrganizationAssignment.h"
#include "../StepBasic/StepBasic_Approval.h"


using namespace OCNaroWrappers;

OCStepAP214_OrganizationItem::OCStepAP214_OrganizationItem(StepAP214_OrganizationItem* nativeHandle) : OCStepAP214_ApprovalItem((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_OrganizationItem::OCStepAP214_OrganizationItem() : OCStepAP214_ApprovalItem((OCDummy^)nullptr)

{
  nativeHandle = new StepAP214_OrganizationItem();
}

 Standard_Integer OCStepAP214_OrganizationItem::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepAP214_OrganizationItem*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepAP214_AppliedOrganizationAssignment^ OCStepAP214_OrganizationItem::AppliedOrganizationAssignment()
{
  Handle(StepAP214_AppliedOrganizationAssignment) tmp = ((StepAP214_OrganizationItem*)nativeHandle)->AppliedOrganizationAssignment();
  return gcnew OCStepAP214_AppliedOrganizationAssignment(&tmp);
}

OCStepBasic_Approval^ OCStepAP214_OrganizationItem::Approval()
{
  Handle(StepBasic_Approval) tmp = ((StepAP214_OrganizationItem*)nativeHandle)->Approval();
  return gcnew OCStepBasic_Approval(&tmp);
}


