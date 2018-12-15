// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_ExternallyDefinedClass_OCWrappers_HeaderFile
#define _StepAP214_ExternallyDefinedClass_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_ExternallyDefinedClass.hxx>
#include "../Converter.h"

#include "StepAP214_Class.h"



namespace OCNaroWrappers
{

ref class OCStepBasic_ExternallyDefinedItem;
ref class OCTCollection_HAsciiString;
ref class OCStepBasic_SourceItem;
ref class OCStepBasic_ExternalSource;


//! Representation of STEP entity ExternallyDefinedClass <br>
public ref class OCStepAP214_ExternallyDefinedClass : OCStepAP214_Class {

protected:
  // dummy constructor;
  OCStepAP214_ExternallyDefinedClass(OCDummy^) : OCStepAP214_Class((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_ExternallyDefinedClass(Handle(StepAP214_ExternallyDefinedClass)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepAP214_ExternallyDefinedClass();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aGroup_Name, System::Boolean hasGroup_Description, OCNaroWrappers::OCTCollection_HAsciiString^ aGroup_Description, OCNaroWrappers::OCStepBasic_SourceItem^ aExternallyDefinedItem_ItemId, OCNaroWrappers::OCStepBasic_ExternalSource^ aExternallyDefinedItem_Source) ;

//! Returns data for supertype ExternallyDefinedItem <br>
 /*instead*/  OCStepBasic_ExternallyDefinedItem^ ExternallyDefinedItem() ;

//! Set data for supertype ExternallyDefinedItem <br>
 /*instead*/  void SetExternallyDefinedItem(OCNaroWrappers::OCStepBasic_ExternallyDefinedItem^ ExternallyDefinedItem) ;

~OCStepAP214_ExternallyDefinedClass()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
