// File generated by CPPExt (Transient)
//
#ifndef _StepData_ESDescr_OCWrappers_HeaderFile
#define _StepData_ESDescr_OCWrappers_HeaderFile

// include the wrapped class
#include <StepData_ESDescr.hxx>
#include "../Converter.h"

#include "StepData_EDescr.h"

#include "../TCollection/TCollection_AsciiString.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfTransient;
ref class OCDico_DictionaryOfInteger;
ref class OCStepData_PDescr;
ref class OCTCollection_AsciiString;
ref class OCStepData_Described;


//! This class is intended to describe the authorized form for a <br>
//!           Simple (not Plex) Entity, as a list of fields <br>
public ref class OCStepData_ESDescr : OCStepData_EDescr {

protected:
  // dummy constructor;
  OCStepData_ESDescr(OCDummy^) : OCStepData_EDescr((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepData_ESDescr(Handle(StepData_ESDescr)* nativeHandle);

// Methods PUBLIC

//! Creates an ESDescr with a type name <br>
OCStepData_ESDescr(System::String^ name);

//! Sets a new count of fields <br>
//!           Each one is described by a PDescr <br>
 /*instead*/  void SetNbFields(Standard_Integer nb) ;

//! Sets a PDescr to describe a field <br>
//!           A Field is designated by its rank and name <br>
 /*instead*/  void SetField(Standard_Integer num, System::String^ name, OCNaroWrappers::OCStepData_PDescr^ descr) ;

//! Sets an ESDescr as based on another one <br>
//!           Hence, if there are inherited fields, the derived ESDescr <br>
//!           cumulates all them, while the base just records its own ones <br>
 /*instead*/  void SetBase(OCNaroWrappers::OCStepData_ESDescr^ base) ;

//! Sets an ESDescr as "super-type". Applies an a base (non <br>
//!           derived) ESDescr <br>
 /*instead*/  void SetSuper(OCNaroWrappers::OCStepData_ESDescr^ super) ;

//! Returns the type name given at creation time <br>
 /*instead*/  System::String^ TypeName() ;

//! Returns the type name as an AsciiString <br>
 /*instead*/  OCTCollection_AsciiString^ StepType() ;

//! Returns the basic ESDescr, null if <me> is not derived <br>
 /*instead*/  OCStepData_ESDescr^ Base() ;

//! Returns the super-type ESDescr, null if <me> is root <br>
 /*instead*/  OCStepData_ESDescr^ Super() ;

//! Tells if <me> is sub-type of (or equal to) another one <br>
 /*instead*/  System::Boolean IsSub(OCNaroWrappers::OCStepData_ESDescr^ other) ;

//! Returns the count of fields <br>
 /*instead*/  Standard_Integer NbFields() ;

//! Returns the rank of a field from its name. 0 if unknown <br>
 /*instead*/  Standard_Integer Rank(System::String^ name) ;

//! Returns the name of a field from its rank. empty if outofrange <br>
 /*instead*/  System::String^ Name(Standard_Integer num) ;

//! Returns the PDescr for the field <num> (or Null) <br>
 /*instead*/  OCStepData_PDescr^ Field(Standard_Integer num) ;

//! Returns the PDescr for the field named <name> (or Null) <br>
 /*instead*/  OCStepData_PDescr^ NamedField(System::String^ name) ;

//! Tells if a ESDescr matches a step type : exact or super type <br>
 /*instead*/  System::Boolean Matches(System::String^ steptype) ;

//! Returns False <br>
 /*instead*/  System::Boolean IsComplex() ;

//! Creates a described entity (i.e. a simple one) <br>
 /*instead*/  OCStepData_Described^ NewEntity() ;

~OCStepData_ESDescr()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
