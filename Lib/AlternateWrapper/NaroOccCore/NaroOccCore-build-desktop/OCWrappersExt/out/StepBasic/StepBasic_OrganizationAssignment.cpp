// File generated by CPPExt (CPP file)
//

#include "StepBasic_OrganizationAssignment.h"
#include "../Converter.h"
#include "StepBasic_Organization.h"
#include "StepBasic_OrganizationRole.h"


using namespace OCNaroWrappers;

OCStepBasic_OrganizationAssignment::OCStepBasic_OrganizationAssignment(Handle(StepBasic_OrganizationAssignment)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_OrganizationAssignment(*nativeHandle);
}

 void OCStepBasic_OrganizationAssignment::Init(OCNaroWrappers::OCStepBasic_Organization^ aAssignedOrganization, OCNaroWrappers::OCStepBasic_OrganizationRole^ aRole)
{
  (*((Handle_StepBasic_OrganizationAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Organization*)aAssignedOrganization->Handle), *((Handle_StepBasic_OrganizationRole*)aRole->Handle));
}

 void OCStepBasic_OrganizationAssignment::SetAssignedOrganization(OCNaroWrappers::OCStepBasic_Organization^ aAssignedOrganization)
{
  (*((Handle_StepBasic_OrganizationAssignment*)nativeHandle))->SetAssignedOrganization(*((Handle_StepBasic_Organization*)aAssignedOrganization->Handle));
}

OCStepBasic_Organization^ OCStepBasic_OrganizationAssignment::AssignedOrganization()
{
  Handle(StepBasic_Organization) tmp = (*((Handle_StepBasic_OrganizationAssignment*)nativeHandle))->AssignedOrganization();
  return gcnew OCStepBasic_Organization(&tmp);
}

 void OCStepBasic_OrganizationAssignment::SetRole(OCNaroWrappers::OCStepBasic_OrganizationRole^ aRole)
{
  (*((Handle_StepBasic_OrganizationAssignment*)nativeHandle))->SetRole(*((Handle_StepBasic_OrganizationRole*)aRole->Handle));
}

OCStepBasic_OrganizationRole^ OCStepBasic_OrganizationAssignment::Role()
{
  Handle(StepBasic_OrganizationRole) tmp = (*((Handle_StepBasic_OrganizationAssignment*)nativeHandle))->Role();
  return gcnew OCStepBasic_OrganizationRole(&tmp);
}


