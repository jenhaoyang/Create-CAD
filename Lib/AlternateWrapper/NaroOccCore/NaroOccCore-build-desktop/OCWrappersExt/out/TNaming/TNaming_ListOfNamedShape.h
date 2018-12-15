// File generated by CPPExt (MPV)
//
#ifndef _TNaming_ListOfNamedShape_OCWrappers_HeaderFile
#define _TNaming_ListOfNamedShape_OCWrappers_HeaderFile

// include native header
#include <TNaming_ListOfNamedShape.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTNaming_ListIteratorOfListOfNamedShape;
ref class OCTNaming_NamedShape;
ref class OCTNaming_ListNodeOfListOfNamedShape;



public ref class OCTNaming_ListOfNamedShape  {

protected:
  TNaming_ListOfNamedShape* nativeHandle;
  OCTNaming_ListOfNamedShape(OCDummy^) {};

public:
  property TNaming_ListOfNamedShape* Handle
  {
    TNaming_ListOfNamedShape* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTNaming_ListOfNamedShape(TNaming_ListOfNamedShape* nativeHandle);

// Methods PUBLIC


OCTNaming_ListOfNamedShape();


 /*instead*/  void Assign(OCNaroWrappers::OCTNaming_ListOfNamedShape^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTNaming_NamedShape^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTNaming_NamedShape^ I, OCNaroWrappers::OCTNaming_ListIteratorOfListOfNamedShape^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTNaming_ListOfNamedShape^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTNaming_NamedShape^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCTNaming_NamedShape^ I, OCNaroWrappers::OCTNaming_ListIteratorOfListOfNamedShape^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCTNaming_ListOfNamedShape^ Other) ;


 /*instead*/  OCTNaming_NamedShape^ First() ;


 /*instead*/  OCTNaming_NamedShape^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCTNaming_ListIteratorOfListOfNamedShape^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTNaming_NamedShape^ I, OCNaroWrappers::OCTNaming_ListIteratorOfListOfNamedShape^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTNaming_ListOfNamedShape^ Other, OCNaroWrappers::OCTNaming_ListIteratorOfListOfNamedShape^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTNaming_NamedShape^ I, OCNaroWrappers::OCTNaming_ListIteratorOfListOfNamedShape^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTNaming_ListOfNamedShape^ Other, OCNaroWrappers::OCTNaming_ListIteratorOfListOfNamedShape^ It) ;

~OCTNaming_ListOfNamedShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
