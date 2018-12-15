// File generated by CPPExt (CPP file)
//

#include "StepBasic_PersonOrganizationSelect.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepBasic_Person.h"
#include "StepBasic_Organization.h"
#include "StepBasic_PersonAndOrganization.h"


using namespace OCNaroWrappers;

OCStepBasic_PersonOrganizationSelect::OCStepBasic_PersonOrganizationSelect(StepBasic_PersonOrganizationSelect* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepBasic_PersonOrganizationSelect::OCStepBasic_PersonOrganizationSelect() 
{
  nativeHandle = new StepBasic_PersonOrganizationSelect();
}

 Standard_Integer OCStepBasic_PersonOrganizationSelect::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepBasic_PersonOrganizationSelect*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepBasic_Person^ OCStepBasic_PersonOrganizationSelect::Person()
{
  Handle(StepBasic_Person) tmp = ((StepBasic_PersonOrganizationSelect*)nativeHandle)->Person();
  return gcnew OCStepBasic_Person(&tmp);
}

OCStepBasic_Organization^ OCStepBasic_PersonOrganizationSelect::Organization()
{
  Handle(StepBasic_Organization) tmp = ((StepBasic_PersonOrganizationSelect*)nativeHandle)->Organization();
  return gcnew OCStepBasic_Organization(&tmp);
}

OCStepBasic_PersonAndOrganization^ OCStepBasic_PersonOrganizationSelect::PersonAndOrganization()
{
  Handle(StepBasic_PersonAndOrganization) tmp = ((StepBasic_PersonOrganizationSelect*)nativeHandle)->PersonAndOrganization();
  return gcnew OCStepBasic_PersonAndOrganization(&tmp);
}


