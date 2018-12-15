// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_SelectModelRoots_OCWrappers_HeaderFile
#define _IFSelect_SelectModelRoots_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_SelectModelRoots.hxx>
#include "../Converter.h"

#include "IFSelect_SelectBase.h"



namespace OCNaroWrappers
{

ref class OCInterface_EntityIterator;
ref class OCInterface_Graph;
ref class OCTCollection_AsciiString;


//! A SelectModelRoots gets all the Root Entities of an <br>
//!           InterfaceModel. Remember that a "Root Entity" is defined as <br>
//!           having no Sharing Entity (if there is a Loop between Entities, <br>
//!           none of them can be a "Root"). <br>
public ref class OCIFSelect_SelectModelRoots : OCIFSelect_SelectBase {

protected:
  // dummy constructor;
  OCIFSelect_SelectModelRoots(OCDummy^) : OCIFSelect_SelectBase((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_SelectModelRoots(Handle(IFSelect_SelectModelRoots)* nativeHandle);

// Methods PUBLIC

//! Creates a SelectModelRoot <br>
OCIFSelect_SelectModelRoots();

//! Returns the list of selected entities : the Roots of the Model <br>
//!           (note that this result assures naturally uniqueness) <br>
 /*instead*/  OCInterface_EntityIterator^ RootResult(OCNaroWrappers::OCInterface_Graph^ G) ;

//! Returns a text defining the criterium : "Model Roots" <br>
 /*instead*/  OCTCollection_AsciiString^ Label() ;

~OCIFSelect_SelectModelRoots()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
