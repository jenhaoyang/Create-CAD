// File generated by CPPExt (MPV)
//
#ifndef _ChFiDS_ListIteratorOfListOfStripe_OCWrappers_HeaderFile
#define _ChFiDS_ListIteratorOfListOfStripe_OCWrappers_HeaderFile

// include native header
#include <ChFiDS_ListIteratorOfListOfStripe.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCChFiDS_ListOfStripe;
ref class OCChFiDS_Stripe;
ref class OCChFiDS_ListNodeOfListOfStripe;



public ref class OCChFiDS_ListIteratorOfListOfStripe  {

protected:
  ChFiDS_ListIteratorOfListOfStripe* nativeHandle;
  OCChFiDS_ListIteratorOfListOfStripe(OCDummy^) {};

public:
  property ChFiDS_ListIteratorOfListOfStripe* Handle
  {
    ChFiDS_ListIteratorOfListOfStripe* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCChFiDS_ListIteratorOfListOfStripe(ChFiDS_ListIteratorOfListOfStripe* nativeHandle);

// Methods PUBLIC


OCChFiDS_ListIteratorOfListOfStripe();


OCChFiDS_ListIteratorOfListOfStripe(OCNaroWrappers::OCChFiDS_ListOfStripe^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCChFiDS_ListOfStripe^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCChFiDS_Stripe^ Value() ;

~OCChFiDS_ListIteratorOfListOfStripe()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
