// File generated by CPPExt (Transient)
//
#ifndef _StepData_Described_OCWrappers_HeaderFile
#define _StepData_Described_OCWrappers_HeaderFile

// include the wrapped class
#include <StepData_Described.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCStepData_EDescr;
ref class OCStepData_Simple;
ref class OCStepData_Field;
ref class OCInterface_Check;
ref class OCInterface_EntityIterator;


//! General frame to describe entities with Description (Simple or <br>
//!           Complex) <br>
public ref class OCStepData_Described : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepData_Described(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepData_Described(Handle(StepData_Described)* nativeHandle);

// Methods PUBLIC

//! Initializes a Described Entity from a Description <br>
//!           (i.e. puts it in a field ...) <br>
OCStepData_Described(OCNaroWrappers::OCStepData_EDescr^ descr);

//! Returns the Description used to define this entity <br>
 /*instead*/  OCStepData_EDescr^ Description() ;

~OCStepData_Described()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
