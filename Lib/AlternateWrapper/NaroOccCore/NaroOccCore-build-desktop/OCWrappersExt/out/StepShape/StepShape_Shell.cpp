// File generated by CPPExt (CPP file)
//

#include "StepShape_Shell.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepShape_OpenShell.h"
#include "StepShape_ClosedShell.h"


using namespace OCNaroWrappers;

OCStepShape_Shell::OCStepShape_Shell(StepShape_Shell* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_Shell::OCStepShape_Shell() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_Shell();
}

 Standard_Integer OCStepShape_Shell::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepShape_Shell*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepShape_OpenShell^ OCStepShape_Shell::OpenShell()
{
  StepShape_OpenShell* tmp = new StepShape_OpenShell();
  *tmp = ((StepShape_Shell*)nativeHandle)->OpenShell();
  return gcnew OCStepShape_OpenShell(tmp);
}

OCStepShape_ClosedShell^ OCStepShape_Shell::ClosedShell()
{
  StepShape_ClosedShell* tmp = new StepShape_ClosedShell();
  *tmp = ((StepShape_Shell*)nativeHandle)->ClosedShell();
  return gcnew OCStepShape_ClosedShell(tmp);
}


