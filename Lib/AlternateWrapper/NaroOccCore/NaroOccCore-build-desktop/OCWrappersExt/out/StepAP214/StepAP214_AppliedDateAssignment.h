// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_AppliedDateAssignment_OCWrappers_HeaderFile
#define _StepAP214_AppliedDateAssignment_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_AppliedDateAssignment.hxx>
#include "../Converter.h"

#include "../StepBasic/StepBasic_DateAssignment.h"



namespace OCNaroWrappers
{

ref class OCStepAP214_HArray1OfDateItem;
ref class OCStepBasic_Date;
ref class OCStepBasic_DateRole;
ref class OCStepAP214_DateItem;



public ref class OCStepAP214_AppliedDateAssignment : OCStepBasic_DateAssignment {

protected:
  // dummy constructor;
  OCStepAP214_AppliedDateAssignment(OCDummy^) : OCStepBasic_DateAssignment((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_AppliedDateAssignment(Handle(StepAP214_AppliedDateAssignment)* nativeHandle);

// Methods PUBLIC

//! Returns a AppliedDateAssignment <br>
OCStepAP214_AppliedDateAssignment();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Date^ aAssignedDate, OCNaroWrappers::OCStepBasic_DateRole^ aRole) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Date^ aAssignedDate, OCNaroWrappers::OCStepBasic_DateRole^ aRole, OCNaroWrappers::OCStepAP214_HArray1OfDateItem^ aItems) ;


 /*instead*/  void SetItems(OCNaroWrappers::OCStepAP214_HArray1OfDateItem^ aItems) ;


 /*instead*/  OCStepAP214_HArray1OfDateItem^ Items() ;


 /*instead*/  OCStepAP214_DateItem^ ItemsValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbItems() ;

~OCStepAP214_AppliedDateAssignment()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
