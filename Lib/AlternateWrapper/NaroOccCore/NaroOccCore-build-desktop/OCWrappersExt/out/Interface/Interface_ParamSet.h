// File generated by CPPExt (Transient)
//
#ifndef _Interface_ParamSet_OCWrappers_HeaderFile
#define _Interface_ParamSet_OCWrappers_HeaderFile

// include the wrapped class
#include <Interface_ParamSet.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Interface_ParamType.h"


namespace OCNaroWrappers
{

ref class OCInterface_ParamList;
ref class OCInterface_FileParameter;


//! Defines an ordered set of FileParameters, in a way to be <br>
//!           efficient as in memory requirement or in speed <br>
public ref class OCInterface_ParamSet : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCInterface_ParamSet(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCInterface_ParamSet(Handle(Interface_ParamSet)* nativeHandle);

// Methods PUBLIC

//! Creates an empty ParamSet, beginning at number "nst" and of <br>
//!           initial reservation "nres" : the "nres" first parameters <br>
//!           which follow "ndeb" (included) will be put in an Array <br>
//!           (a ParamList). The remainders are set in Next(s) ParamSet(s) <br>
OCInterface_ParamSet(Standard_Integer nres, Standard_Integer nst);

//! Adds a parameter defined as its Value (CString and length) and <br>
//!           Type. Optionnal EntityNumber (for FileReaderData) can be given <br>
//!           Allows a better memory management than Appending a <br>
//!           complete FileParameter <br>
//!           If <lnval> < 0, <val> is assumed to be managed elsewhere : its <br>
//!           adress is stored as such. Else, <val> is copied in a locally <br>
//!           (quickly) managed Page of Characters <br>
//!           Returns new count of recorded Parameters <br>
 /*instead*/  Standard_Integer Append(System::String^ val, Standard_Integer lnval, OCInterface_ParamType typ, Standard_Integer nument) ;

//! Adds a parameter at the end of the ParamSet (transparent <br>
//!           about reservation and "Next") <br>
//!           Returns new count of recorded Parameters <br>
 /*instead*/  Standard_Integer Append(OCNaroWrappers::OCInterface_FileParameter^ FP) ;

//! Returns the total count of parameters (including nexts) <br>
 /*instead*/  Standard_Integer NbParams() ;

//! Returns a parameter identified by its number <br>
 /*instead*/  OCInterface_FileParameter^ Param(Standard_Integer num) ;

//! Same as above, but in order to be modified on place <br>
 /*instead*/  OCInterface_FileParameter^ ChangeParam(Standard_Integer num) ;

//! Changes a parameter identified by its number <br>
 /*instead*/  void SetParam(Standard_Integer num, OCNaroWrappers::OCInterface_FileParameter^ FP) ;

//! Builds and returns the sub-list correspinding to parameters, <br>
//!           from "num" included, with count "nb" <br>
//!           If <num> and <nb> are zero, returns the whole list <br>
 /*instead*/  OCInterface_ParamList^ Params(Standard_Integer num, Standard_Integer nb) ;

~OCInterface_ParamSet()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
