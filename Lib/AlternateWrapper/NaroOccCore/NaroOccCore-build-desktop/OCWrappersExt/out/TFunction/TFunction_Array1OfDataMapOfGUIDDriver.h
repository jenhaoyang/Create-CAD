// File generated by CPPExt (MPV)
//
#ifndef _TFunction_Array1OfDataMapOfGUIDDriver_OCWrappers_HeaderFile
#define _TFunction_Array1OfDataMapOfGUIDDriver_OCWrappers_HeaderFile

// include native header
#include <TFunction_Array1OfDataMapOfGUIDDriver.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTFunction_DataMapOfGUIDDriver;



public ref class OCTFunction_Array1OfDataMapOfGUIDDriver  {

protected:
  TFunction_Array1OfDataMapOfGUIDDriver* nativeHandle;
  OCTFunction_Array1OfDataMapOfGUIDDriver(OCDummy^) {};

public:
  property TFunction_Array1OfDataMapOfGUIDDriver* Handle
  {
    TFunction_Array1OfDataMapOfGUIDDriver* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTFunction_Array1OfDataMapOfGUIDDriver(TFunction_Array1OfDataMapOfGUIDDriver* nativeHandle);

// Methods PUBLIC


OCTFunction_Array1OfDataMapOfGUIDDriver(Standard_Integer Low, Standard_Integer Up);


OCTFunction_Array1OfDataMapOfGUIDDriver(OCNaroWrappers::OCTFunction_DataMapOfGUIDDriver^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCTFunction_DataMapOfGUIDDriver^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCTFunction_Array1OfDataMapOfGUIDDriver^ Assign(OCNaroWrappers::OCTFunction_Array1OfDataMapOfGUIDDriver^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTFunction_DataMapOfGUIDDriver^ Value) ;


 /*instead*/  OCTFunction_DataMapOfGUIDDriver^ Value(Standard_Integer Index) ;


 /*instead*/  OCTFunction_DataMapOfGUIDDriver^ ChangeValue(Standard_Integer Index) ;

~OCTFunction_Array1OfDataMapOfGUIDDriver()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
