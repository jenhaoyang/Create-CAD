// File generated by CPPExt (MPV)
//
#ifndef _StepAP214_ExternalIdentificationItem_OCWrappers_HeaderFile
#define _StepAP214_ExternalIdentificationItem_OCWrappers_HeaderFile

// include native header
#include <StepAP214_ExternalIdentificationItem.hxx>
#include "../Converter.h"

#include "../StepData/StepData_SelectType.h"

#include "../StepData/StepData_SelectType.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCStepBasic_DocumentFile;
ref class OCStepAP214_ExternallyDefinedClass;
ref class OCStepAP214_ExternallyDefinedGeneralProperty;
ref class OCStepBasic_ProductDefinition;


//! Representation of STEP SELECT type ExternalIdentificationItem <br>
public ref class OCStepAP214_ExternalIdentificationItem  : public OCStepData_SelectType {

protected:
  // dummy constructor;
  OCStepAP214_ExternalIdentificationItem(OCDummy^) : OCStepData_SelectType((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_ExternalIdentificationItem(StepAP214_ExternalIdentificationItem* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepAP214_ExternalIdentificationItem();

//! Recognizes a kind of ExternalIdentificationItem select type <br>
//!          1 -> DocumentFile from StepBasic <br>
//!          2 -> ExternallyDefinedClass from StepAP214 <br>
//!          3 -> ExternallyDefinedGeneralProperty from StepAP214 <br>
//!          4 -> ProductDefinition from StepBasic <br>
//!          0 else <br>
 /*instead*/  Standard_Integer CaseNum(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Returns Value as DocumentFile (or Null if another type) <br>
 /*instead*/  OCStepBasic_DocumentFile^ DocumentFile() ;

//! Returns Value as ExternallyDefinedClass (or Null if another type) <br>
 /*instead*/  OCStepAP214_ExternallyDefinedClass^ ExternallyDefinedClass() ;

//! Returns Value as ExternallyDefinedGeneralProperty (or Null if another type) <br>
 /*instead*/  OCStepAP214_ExternallyDefinedGeneralProperty^ ExternallyDefinedGeneralProperty() ;

//! Returns Value as ProductDefinition (or Null if another type) <br>
 /*instead*/  OCStepBasic_ProductDefinition^ ProductDefinition() ;

~OCStepAP214_ExternalIdentificationItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
