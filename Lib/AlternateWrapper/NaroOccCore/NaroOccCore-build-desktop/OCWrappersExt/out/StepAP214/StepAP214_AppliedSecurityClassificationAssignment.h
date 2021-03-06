// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_AppliedSecurityClassificationAssignment_OCWrappers_HeaderFile
#define _StepAP214_AppliedSecurityClassificationAssignment_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include "../Converter.h"

#include "../StepBasic/StepBasic_SecurityClassificationAssignment.h"



namespace OCNaroWrappers
{

ref class OCStepAP214_HArray1OfSecurityClassificationItem;
ref class OCStepBasic_SecurityClassification;
ref class OCStepAP214_SecurityClassificationItem;



public ref class OCStepAP214_AppliedSecurityClassificationAssignment : OCStepBasic_SecurityClassificationAssignment {

protected:
  // dummy constructor;
  OCStepAP214_AppliedSecurityClassificationAssignment(OCDummy^) : OCStepBasic_SecurityClassificationAssignment((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_AppliedSecurityClassificationAssignment(Handle(StepAP214_AppliedSecurityClassificationAssignment)* nativeHandle);

// Methods PUBLIC

//! Returns a AppliedSecurityClassificationAssignment <br>
OCStepAP214_AppliedSecurityClassificationAssignment();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_SecurityClassification^ aAssignedSecurityClassification) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_SecurityClassification^ aAssignedSecurityClassification, OCNaroWrappers::OCStepAP214_HArray1OfSecurityClassificationItem^ aItems) ;


 /*instead*/  void SetItems(OCNaroWrappers::OCStepAP214_HArray1OfSecurityClassificationItem^ aItems) ;


 /*instead*/  OCStepAP214_HArray1OfSecurityClassificationItem^ Items() ;


 /*instead*/  OCStepAP214_SecurityClassificationItem^ ItemsValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbItems() ;

~OCStepAP214_AppliedSecurityClassificationAssignment()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
