// File generated by CPPExt (CPP file)
//

#include "StepAP214_AppliedOrganizationAssignment.h"
#include "../Converter.h"
#include "StepAP214_HArray1OfOrganizationItem.h"
#include "../StepBasic/StepBasic_Organization.h"
#include "../StepBasic/StepBasic_OrganizationRole.h"
#include "StepAP214_OrganizationItem.h"


using namespace OCNaroWrappers;

OCStepAP214_AppliedOrganizationAssignment::OCStepAP214_AppliedOrganizationAssignment(Handle(StepAP214_AppliedOrganizationAssignment)* nativeHandle) : OCStepBasic_OrganizationAssignment((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_AppliedOrganizationAssignment(*nativeHandle);
}

OCStepAP214_AppliedOrganizationAssignment::OCStepAP214_AppliedOrganizationAssignment() : OCStepBasic_OrganizationAssignment((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_AppliedOrganizationAssignment(new StepAP214_AppliedOrganizationAssignment());
}

 void OCStepAP214_AppliedOrganizationAssignment::Init(OCNaroWrappers::OCStepBasic_Organization^ aAssignedOrganization, OCNaroWrappers::OCStepBasic_OrganizationRole^ aRole)
{
  (*((Handle_StepAP214_AppliedOrganizationAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Organization*)aAssignedOrganization->Handle), *((Handle_StepBasic_OrganizationRole*)aRole->Handle));
}

 void OCStepAP214_AppliedOrganizationAssignment::Init(OCNaroWrappers::OCStepBasic_Organization^ aAssignedOrganization, OCNaroWrappers::OCStepBasic_OrganizationRole^ aRole, OCNaroWrappers::OCStepAP214_HArray1OfOrganizationItem^ aItems)
{
  (*((Handle_StepAP214_AppliedOrganizationAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Organization*)aAssignedOrganization->Handle), *((Handle_StepBasic_OrganizationRole*)aRole->Handle), *((Handle_StepAP214_HArray1OfOrganizationItem*)aItems->Handle));
}

 void OCStepAP214_AppliedOrganizationAssignment::SetItems(OCNaroWrappers::OCStepAP214_HArray1OfOrganizationItem^ aItems)
{
  (*((Handle_StepAP214_AppliedOrganizationAssignment*)nativeHandle))->SetItems(*((Handle_StepAP214_HArray1OfOrganizationItem*)aItems->Handle));
}

OCStepAP214_HArray1OfOrganizationItem^ OCStepAP214_AppliedOrganizationAssignment::Items()
{
  Handle(StepAP214_HArray1OfOrganizationItem) tmp = (*((Handle_StepAP214_AppliedOrganizationAssignment*)nativeHandle))->Items();
  return gcnew OCStepAP214_HArray1OfOrganizationItem(&tmp);
}

OCStepAP214_OrganizationItem^ OCStepAP214_AppliedOrganizationAssignment::ItemsValue(Standard_Integer num)
{
  StepAP214_OrganizationItem* tmp = new StepAP214_OrganizationItem();
  *tmp = (*((Handle_StepAP214_AppliedOrganizationAssignment*)nativeHandle))->ItemsValue(num);
  return gcnew OCStepAP214_OrganizationItem(tmp);
}

 Standard_Integer OCStepAP214_AppliedOrganizationAssignment::NbItems()
{
  return (*((Handle_StepAP214_AppliedOrganizationAssignment*)nativeHandle))->NbItems();
}


