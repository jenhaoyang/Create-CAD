// File generated by CPPExt (MPV)
//
#ifndef _TDF_AttributeDeltaList_OCWrappers_HeaderFile
#define _TDF_AttributeDeltaList_OCWrappers_HeaderFile

// include native header
#include <TDF_AttributeDeltaList.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTDF_ListIteratorOfAttributeDeltaList;
ref class OCTDF_AttributeDelta;
ref class OCTDF_ListNodeOfAttributeDeltaList;



public ref class OCTDF_AttributeDeltaList  {

protected:
  TDF_AttributeDeltaList* nativeHandle;
  OCTDF_AttributeDeltaList(OCDummy^) {};

public:
  property TDF_AttributeDeltaList* Handle
  {
    TDF_AttributeDeltaList* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTDF_AttributeDeltaList(TDF_AttributeDeltaList* nativeHandle);

// Methods PUBLIC


OCTDF_AttributeDeltaList();


 /*instead*/  void Assign(OCNaroWrappers::OCTDF_AttributeDeltaList^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTDF_AttributeDelta^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTDF_AttributeDelta^ I, OCNaroWrappers::OCTDF_ListIteratorOfAttributeDeltaList^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTDF_AttributeDeltaList^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTDF_AttributeDelta^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCTDF_AttributeDelta^ I, OCNaroWrappers::OCTDF_ListIteratorOfAttributeDeltaList^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCTDF_AttributeDeltaList^ Other) ;


 /*instead*/  OCTDF_AttributeDelta^ First() ;


 /*instead*/  OCTDF_AttributeDelta^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCTDF_ListIteratorOfAttributeDeltaList^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTDF_AttributeDelta^ I, OCNaroWrappers::OCTDF_ListIteratorOfAttributeDeltaList^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTDF_AttributeDeltaList^ Other, OCNaroWrappers::OCTDF_ListIteratorOfAttributeDeltaList^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTDF_AttributeDelta^ I, OCNaroWrappers::OCTDF_ListIteratorOfAttributeDeltaList^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTDF_AttributeDeltaList^ Other, OCNaroWrappers::OCTDF_ListIteratorOfAttributeDeltaList^ It) ;

~OCTDF_AttributeDeltaList()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
