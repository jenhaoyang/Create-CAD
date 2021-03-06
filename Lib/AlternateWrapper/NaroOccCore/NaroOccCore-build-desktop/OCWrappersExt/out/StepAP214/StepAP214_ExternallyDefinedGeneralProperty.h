// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_ExternallyDefinedGeneralProperty_OCWrappers_HeaderFile
#define _StepAP214_ExternallyDefinedGeneralProperty_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include "../Converter.h"

#include "../StepBasic/StepBasic_GeneralProperty.h"



namespace OCNaroWrappers
{

ref class OCStepBasic_ExternallyDefinedItem;
ref class OCTCollection_HAsciiString;
ref class OCStepBasic_SourceItem;
ref class OCStepBasic_ExternalSource;


//! Representation of STEP entity ExternallyDefinedGeneralProperty <br>
public ref class OCStepAP214_ExternallyDefinedGeneralProperty : OCStepBasic_GeneralProperty {

protected:
  // dummy constructor;
  OCStepAP214_ExternallyDefinedGeneralProperty(OCDummy^) : OCStepBasic_GeneralProperty((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_ExternallyDefinedGeneralProperty(Handle(StepAP214_ExternallyDefinedGeneralProperty)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepAP214_ExternallyDefinedGeneralProperty();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aGeneralProperty_Id, OCNaroWrappers::OCTCollection_HAsciiString^ aGeneralProperty_Name, System::Boolean hasGeneralProperty_Description, OCNaroWrappers::OCTCollection_HAsciiString^ aGeneralProperty_Description, OCNaroWrappers::OCStepBasic_SourceItem^ aExternallyDefinedItem_ItemId, OCNaroWrappers::OCStepBasic_ExternalSource^ aExternallyDefinedItem_Source) ;

//! Returns data for supertype ExternallyDefinedItem <br>
 /*instead*/  OCStepBasic_ExternallyDefinedItem^ ExternallyDefinedItem() ;

//! Set data for supertype ExternallyDefinedItem <br>
 /*instead*/  void SetExternallyDefinedItem(OCNaroWrappers::OCStepBasic_ExternallyDefinedItem^ ExternallyDefinedItem) ;

~OCStepAP214_ExternallyDefinedGeneralProperty()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
