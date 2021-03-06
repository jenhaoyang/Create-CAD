// File generated by CPPExt (MPV)
//
#ifndef _AIS2D_ListIteratorOfListOfIO_OCWrappers_HeaderFile
#define _AIS2D_ListIteratorOfListOfIO_OCWrappers_HeaderFile

// include native header
#include <AIS2D_ListIteratorOfListOfIO.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCAIS2D_ListOfIO;
ref class OCAIS2D_InteractiveObject;
ref class OCAIS2D_ListNodeOfListOfIO;



public ref class OCAIS2D_ListIteratorOfListOfIO  {

protected:
  AIS2D_ListIteratorOfListOfIO* nativeHandle;
  OCAIS2D_ListIteratorOfListOfIO(OCDummy^) {};

public:
  property AIS2D_ListIteratorOfListOfIO* Handle
  {
    AIS2D_ListIteratorOfListOfIO* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCAIS2D_ListIteratorOfListOfIO(AIS2D_ListIteratorOfListOfIO* nativeHandle);

// Methods PUBLIC


OCAIS2D_ListIteratorOfListOfIO();


OCAIS2D_ListIteratorOfListOfIO(OCNaroWrappers::OCAIS2D_ListOfIO^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCAIS2D_ListOfIO^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCAIS2D_InteractiveObject^ Value() ;

~OCAIS2D_ListIteratorOfListOfIO()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
