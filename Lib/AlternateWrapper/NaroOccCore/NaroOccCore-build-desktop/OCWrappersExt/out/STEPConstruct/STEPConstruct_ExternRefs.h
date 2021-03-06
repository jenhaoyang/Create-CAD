// File generated by CPPExt (MPV)
//
#ifndef _STEPConstruct_ExternRefs_OCWrappers_HeaderFile
#define _STEPConstruct_ExternRefs_OCWrappers_HeaderFile

// include native header
#include <STEPConstruct_ExternRefs.hxx>
#include "../Converter.h"

#include "STEPConstruct_Tool.h"

#include "../TColStd/TColStd_SequenceOfTransient.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "STEPConstruct_Tool.h"


namespace OCNaroWrappers
{

ref class OCStepBasic_ProductRelatedProductCategory;
ref class OCStepBasic_DocumentType;
ref class OCStepBasic_ProductDefinitionContext;
ref class OCStepBasic_ProductContext;
ref class OCStepBasic_ApplicationProtocolDefinition;
ref class OCXSControl_WorkSession;
ref class OCStepBasic_ProductDefinition;
ref class OCTCollection_HAsciiString;
ref class OCStepAP214_AppliedDocumentReference;
ref class OCStepBasic_DocumentFile;


//! Provides a tool for analyzing (reading) and creating (writing) <br>
//!          references to external files in STEP <br>
public ref class OCSTEPConstruct_ExternRefs  : public OCSTEPConstruct_Tool {

protected:
  // dummy constructor;
  OCSTEPConstruct_ExternRefs(OCDummy^) : OCSTEPConstruct_Tool((OCDummy^)nullptr) {};

public:

// constructor from native
OCSTEPConstruct_ExternRefs(STEPConstruct_ExternRefs* nativeHandle);

// Methods PUBLIC

//! Creates an empty tool <br>
OCSTEPConstruct_ExternRefs();

//! Creates a tool and initializes it <br>
OCSTEPConstruct_ExternRefs(OCNaroWrappers::OCXSControl_WorkSession^ WS);

//! Initializes tool; returns True if succeeded <br>
 /*instead*/  System::Boolean Init(OCNaroWrappers::OCXSControl_WorkSession^ WS) ;

//! Clears internal fields (list of defined extern refs) <br>
 /*instead*/  void Clear() ;

//! Searches current STEP model for external references <br>
//!          and loads them to the internal data structures <br>
//!          NOTE: does not clear data structures before loading <br>
 /*instead*/  System::Boolean LoadExternRefs() ;

//! Returns number of defined extern references <br>
 /*instead*/  Standard_Integer NbExternRefs() ;

//! Returns filename for numth extern reference <br>
//!          Returns Null if FileName is not defined or bad <br>
 /*instead*/  System::String^ FileName(Standard_Integer num) ;

//! Returns ProductDefinition to which numth extern reference <br>
//!          is associated. <br>
//!          Returns Null if cannot be detected or if extern reference <br>
//!          is not associated to SDR in a proper way. <br>
 /*instead*/  OCStepBasic_ProductDefinition^ ProdDef(Standard_Integer num) ;

//! Returns format identification string for the extern document <br>
//!          Returns Null handle if format is not defined <br>
 /*instead*/  OCTCollection_HAsciiString^ Format(Standard_Integer num) ;

//! Create a new external reference with specified attributes <br>
//!          attached to a given SDR <br>
//!          <format> can be Null string, in that case this information <br>
//!          is not written. Else, it can be "STEP AP214" or "STEP AP203" <br>
//!          Returns index of a new extern ref <br>
 /*instead*/  Standard_Integer AddExternRef(System::String^ filename, OCNaroWrappers::OCStepBasic_ProductDefinition^ PD, System::String^ format) ;

//! Check (create if it is null) all shared entities for the model <br>
 /*instead*/  void checkAP214Shared() ;

//! Adds all the currently defined external refs to the model <br>
//!          Returns number of written extern refs <br>
 /*instead*/  Standard_Integer WriteExternRefs(Standard_Integer num) ;

//! Set the ApplicationProtocolDefinition of the PDM schema <br>
 /*instead*/  void SetAP214APD(OCNaroWrappers::OCStepBasic_ApplicationProtocolDefinition^ APD) ;

//! Returns the ApplicationProtocolDefinition of the PDM schema <br>
//!          NOTE: if not defined then create new APD with new Application Context <br>
 /*instead*/  OCStepBasic_ApplicationProtocolDefinition^ GetAP214APD() ;

~OCSTEPConstruct_ExternRefs()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
