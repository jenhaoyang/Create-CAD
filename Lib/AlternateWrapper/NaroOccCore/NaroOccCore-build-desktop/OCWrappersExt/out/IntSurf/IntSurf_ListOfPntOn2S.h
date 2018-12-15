// File generated by CPPExt (MPV)
//
#ifndef _IntSurf_ListOfPntOn2S_OCWrappers_HeaderFile
#define _IntSurf_ListOfPntOn2S_OCWrappers_HeaderFile

// include native header
#include <IntSurf_ListOfPntOn2S.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCIntSurf_ListIteratorOfListOfPntOn2S;
ref class OCIntSurf_PntOn2S;
ref class OCIntSurf_ListNodeOfListOfPntOn2S;



public ref class OCIntSurf_ListOfPntOn2S  {

protected:
  IntSurf_ListOfPntOn2S* nativeHandle;
  OCIntSurf_ListOfPntOn2S(OCDummy^) {};

public:
  property IntSurf_ListOfPntOn2S* Handle
  {
    IntSurf_ListOfPntOn2S* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntSurf_ListOfPntOn2S(IntSurf_ListOfPntOn2S* nativeHandle);

// Methods PUBLIC


OCIntSurf_ListOfPntOn2S();


 /*instead*/  void Assign(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntSurf_PntOn2S^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntSurf_PntOn2S^ I, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntSurf_PntOn2S^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntSurf_PntOn2S^ I, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ Other) ;


 /*instead*/  OCIntSurf_PntOn2S^ First() ;


 /*instead*/  OCIntSurf_PntOn2S^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCIntSurf_PntOn2S^ I, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ Other, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCIntSurf_PntOn2S^ I, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ Other, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ It) ;

~OCIntSurf_ListOfPntOn2S()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
