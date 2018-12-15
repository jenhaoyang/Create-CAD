// File generated by CPPExt (MPV)
//
#ifndef _Select3D_ListIteratorOfListOfSensitiveTriangle_OCWrappers_HeaderFile
#define _Select3D_ListIteratorOfListOfSensitiveTriangle_OCWrappers_HeaderFile

// include native header
#include <Select3D_ListIteratorOfListOfSensitiveTriangle.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCSelect3D_ListOfSensitiveTriangle;
ref class OCSelect3D_SensitiveTriangle;
ref class OCSelect3D_ListNodeOfListOfSensitiveTriangle;



public ref class OCSelect3D_ListIteratorOfListOfSensitiveTriangle  {

protected:
  Select3D_ListIteratorOfListOfSensitiveTriangle* nativeHandle;
  OCSelect3D_ListIteratorOfListOfSensitiveTriangle(OCDummy^) {};

public:
  property Select3D_ListIteratorOfListOfSensitiveTriangle* Handle
  {
    Select3D_ListIteratorOfListOfSensitiveTriangle* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCSelect3D_ListIteratorOfListOfSensitiveTriangle(Select3D_ListIteratorOfListOfSensitiveTriangle* nativeHandle);

// Methods PUBLIC


OCSelect3D_ListIteratorOfListOfSensitiveTriangle();


OCSelect3D_ListIteratorOfListOfSensitiveTriangle(OCNaroWrappers::OCSelect3D_ListOfSensitiveTriangle^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCSelect3D_ListOfSensitiveTriangle^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCSelect3D_SensitiveTriangle^ Value() ;

~OCSelect3D_ListIteratorOfListOfSensitiveTriangle()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
