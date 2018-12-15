// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_DocumentRepresentationType_OCWrappers_HeaderFile
#define _StepBasic_DocumentRepresentationType_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_DocumentRepresentationType.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepBasic_Document;


//! Representation of STEP entity DocumentRepresentationType <br>
public ref class OCStepBasic_DocumentRepresentationType : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_DocumentRepresentationType(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_DocumentRepresentationType(Handle(StepBasic_DocumentRepresentationType)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepBasic_DocumentRepresentationType();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepBasic_Document^ aRepresentedDocument) ;

//! Returns field Name <br>
 /*instead*/  OCTCollection_HAsciiString^ Name() ;

//! Set field Name <br>
 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name) ;

//! Returns field RepresentedDocument <br>
 /*instead*/  OCStepBasic_Document^ RepresentedDocument() ;

//! Set field RepresentedDocument <br>
 /*instead*/  void SetRepresentedDocument(OCNaroWrappers::OCStepBasic_Document^ RepresentedDocument) ;

~OCStepBasic_DocumentRepresentationType()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
