// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_SelectDiff_OCWrappers_HeaderFile
#define _IFSelect_SelectDiff_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_SelectDiff.hxx>
#include "../Converter.h"

#include "IFSelect_SelectControl.h"



namespace OCNaroWrappers
{

ref class OCInterface_EntityIterator;
ref class OCInterface_Graph;
ref class OCTCollection_AsciiString;


//! A SelectDiff keeps the entities from a Selection, the Main <br>
//!           Input, which are not listed by the Second Input <br>
public ref class OCIFSelect_SelectDiff : OCIFSelect_SelectControl {

protected:
  // dummy constructor;
  OCIFSelect_SelectDiff(OCDummy^) : OCIFSelect_SelectControl((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_SelectDiff(Handle(IFSelect_SelectDiff)* nativeHandle);

// Methods PUBLIC

//! Creates an empty SelectDiff <br>
OCIFSelect_SelectDiff();

//! Returns the list of selected entities : they are the Entities <br>
//!           gotten from the Main Input but not from the Diff Input <br>
 /*instead*/  OCInterface_EntityIterator^ RootResult(OCNaroWrappers::OCInterface_Graph^ G) ;

//! Returns a text defining the criterium : "Difference" <br>
 /*instead*/  OCTCollection_AsciiString^ Label() ;

~OCIFSelect_SelectDiff()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
