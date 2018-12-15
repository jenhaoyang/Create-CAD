// File generated by CPPExt (Transient)
//
#ifndef _TNaming_DeltaOnModification_OCWrappers_HeaderFile
#define _TNaming_DeltaOnModification_OCWrappers_HeaderFile

// include the wrapped class
#include <TNaming_DeltaOnModification.hxx>
#include "../Converter.h"

#include "../TDF/TDF_DeltaOnModification.h"



namespace OCNaroWrappers
{

ref class OCTopTools_HArray1OfShape;
ref class OCTNaming_NamedShape;


//! This class provides default services for an <br>
//!          AttributeDelta on a MODIFICATION action. <br>
//! <br>
//!          Applying this AttributeDelta means GOING BACK to <br>
//!          the attribute previously registered state. <br>
public ref class OCTNaming_DeltaOnModification : OCTDF_DeltaOnModification {

protected:
  // dummy constructor;
  OCTNaming_DeltaOnModification(OCDummy^) : OCTDF_DeltaOnModification((OCDummy^)nullptr) {};

public:

// constructor from native
OCTNaming_DeltaOnModification(Handle(TNaming_DeltaOnModification)* nativeHandle);

// Methods PUBLIC

//! Initializes a TDF_DeltaOnModification. <br>
OCTNaming_DeltaOnModification(OCNaroWrappers::OCTNaming_NamedShape^ NS);

//! Applies the delta to the attribute. <br>
virtual /*instead*/  void Apply() override;

~OCTNaming_DeltaOnModification()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
