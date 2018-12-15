// File generated by CPPExt (MPV)
//
#ifndef _Standard_AncestorIterator_OCWrappers_HeaderFile
#define _Standard_AncestorIterator_OCWrappers_HeaderFile

// include native header
#include <Standard_AncestorIterator.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStandard_Type;



//! The class <AncestorIterator> is a iterator which provides <br>
//! information about inheritance. <br>
//! An AncestorIterator object is used to scan sequentially the <br>
//! hierarchy of a type object from its direct super-type to the root. <br>
public ref class OCStandard_AncestorIterator  {

protected:
  Standard_AncestorIterator* nativeHandle;
  OCStandard_AncestorIterator(OCDummy^) {};

public:
  property Standard_AncestorIterator* Handle
  {
    Standard_AncestorIterator* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStandard_AncestorIterator(Standard_AncestorIterator* nativeHandle);

// Methods PUBLIC


//!   The copy constructor for a AncestorIterator . <br>
//! <br>
OCStandard_AncestorIterator(OCNaroWrappers::OCStandard_AncestorIterator^ anOther);


//!   Creates an iterator on the type <aType>. <br>
//!   Set the iterator at the beginning of the ancestors; <br>
//!   this means near parents are first. <br>
OCStandard_AncestorIterator(OCNaroWrappers::OCStandard_Type^ aType);


//!   Assigns an  AncestorIterator from another AncestorIterator. <br>
 /*instead*/  void Assign(OCNaroWrappers::OCStandard_AncestorIterator^ anOther) ;


//! Returns True if there are other ancestors. <br>
 /*instead*/  System::Boolean More() ;


//! Moves the position of the iterator to the next super-type. <br>
//! If the current position corresponds to a root class, it becomes undefined. <br>
 /*instead*/  void Next() ;


//!   Returns an <AncestorIterator> corresponding to the current position <br>
//!   of the iterator. <br>
//! If there are no more Ancestors. <br>
 /*instead*/  OCStandard_AncestorIterator^ Iterator() ;


//! Returns the type corresponding to the current position of <br>
//! the iterator. <br>
 /*instead*/  OCStandard_Type^ Value() ;

~OCStandard_AncestorIterator()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
