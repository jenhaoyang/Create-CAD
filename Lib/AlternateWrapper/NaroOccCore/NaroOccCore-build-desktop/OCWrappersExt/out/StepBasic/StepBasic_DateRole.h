// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_DateRole_OCWrappers_HeaderFile
#define _StepBasic_DateRole_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_DateRole.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;



public ref class OCStepBasic_DateRole : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_DateRole(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_DateRole(Handle(StepBasic_DateRole)* nativeHandle);

// Methods PUBLIC

//! Returns a DateRole <br>
OCStepBasic_DateRole();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  OCTCollection_HAsciiString^ Name() ;

~OCStepBasic_DateRole()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
