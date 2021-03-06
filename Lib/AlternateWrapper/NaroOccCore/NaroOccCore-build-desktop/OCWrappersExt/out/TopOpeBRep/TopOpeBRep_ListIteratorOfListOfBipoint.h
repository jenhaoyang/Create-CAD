// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRep_ListIteratorOfListOfBipoint_OCWrappers_HeaderFile
#define _TopOpeBRep_ListIteratorOfListOfBipoint_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRep_ListIteratorOfListOfBipoint.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopOpeBRep_ListOfBipoint;
ref class OCTopOpeBRep_Bipoint;
ref class OCTopOpeBRep_ListNodeOfListOfBipoint;



public ref class OCTopOpeBRep_ListIteratorOfListOfBipoint  {

protected:
  TopOpeBRep_ListIteratorOfListOfBipoint* nativeHandle;
  OCTopOpeBRep_ListIteratorOfListOfBipoint(OCDummy^) {};

public:
  property TopOpeBRep_ListIteratorOfListOfBipoint* Handle
  {
    TopOpeBRep_ListIteratorOfListOfBipoint* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRep_ListIteratorOfListOfBipoint(TopOpeBRep_ListIteratorOfListOfBipoint* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_ListIteratorOfListOfBipoint();


OCTopOpeBRep_ListIteratorOfListOfBipoint(OCNaroWrappers::OCTopOpeBRep_ListOfBipoint^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCTopOpeBRep_ListOfBipoint^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCTopOpeBRep_Bipoint^ Value() ;

~OCTopOpeBRep_ListIteratorOfListOfBipoint()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
