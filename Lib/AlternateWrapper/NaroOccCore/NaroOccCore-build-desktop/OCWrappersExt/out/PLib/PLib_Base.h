// File generated by CPPExt (Transient)
//
#ifndef _PLib_Base_OCWrappers_HeaderFile
#define _PLib_Base_OCWrappers_HeaderFile

// include the wrapped class
#include <PLib_Base.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTColStd_Array1OfReal;


//! To work with different polynomial's Bases <br>
public ref class OCPLib_Base : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCPLib_Base(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCPLib_Base(Handle(PLib_Base)* nativeHandle);

// Methods PUBLIC

~OCPLib_Base()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
