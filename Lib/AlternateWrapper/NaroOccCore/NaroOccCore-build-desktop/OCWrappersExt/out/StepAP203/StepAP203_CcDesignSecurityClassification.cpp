// File generated by CPPExt (CPP file)
//

#include "StepAP203_CcDesignSecurityClassification.h"
#include "../Converter.h"
#include "StepAP203_HArray1OfClassifiedItem.h"
#include "../StepBasic/StepBasic_SecurityClassification.h"


using namespace OCNaroWrappers;

OCStepAP203_CcDesignSecurityClassification::OCStepAP203_CcDesignSecurityClassification(Handle(StepAP203_CcDesignSecurityClassification)* nativeHandle) : OCStepBasic_SecurityClassificationAssignment((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP203_CcDesignSecurityClassification(*nativeHandle);
}

OCStepAP203_CcDesignSecurityClassification::OCStepAP203_CcDesignSecurityClassification() : OCStepBasic_SecurityClassificationAssignment((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP203_CcDesignSecurityClassification(new StepAP203_CcDesignSecurityClassification());
}

 void OCStepAP203_CcDesignSecurityClassification::Init(OCNaroWrappers::OCStepBasic_SecurityClassification^ aSecurityClassificationAssignment_AssignedSecurityClassification, OCNaroWrappers::OCStepAP203_HArray1OfClassifiedItem^ aItems)
{
  (*((Handle_StepAP203_CcDesignSecurityClassification*)nativeHandle))->Init(*((Handle_StepBasic_SecurityClassification*)aSecurityClassificationAssignment_AssignedSecurityClassification->Handle), *((Handle_StepAP203_HArray1OfClassifiedItem*)aItems->Handle));
}

OCStepAP203_HArray1OfClassifiedItem^ OCStepAP203_CcDesignSecurityClassification::Items()
{
  Handle(StepAP203_HArray1OfClassifiedItem) tmp = (*((Handle_StepAP203_CcDesignSecurityClassification*)nativeHandle))->Items();
  return gcnew OCStepAP203_HArray1OfClassifiedItem(&tmp);
}

 void OCStepAP203_CcDesignSecurityClassification::SetItems(OCNaroWrappers::OCStepAP203_HArray1OfClassifiedItem^ Items)
{
  (*((Handle_StepAP203_CcDesignSecurityClassification*)nativeHandle))->SetItems(*((Handle_StepAP203_HArray1OfClassifiedItem*)Items->Handle));
}


