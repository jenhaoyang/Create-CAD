// File generated by CPPExt (MPV)
//
#ifndef _Bnd_Array1OfBox_OCWrappers_HeaderFile
#define _Bnd_Array1OfBox_OCWrappers_HeaderFile

// include native header
#include <Bnd_Array1OfBox.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBnd_Box;



public ref class OCBnd_Array1OfBox  {

protected:
  Bnd_Array1OfBox* nativeHandle;
  OCBnd_Array1OfBox(OCDummy^) {};

public:
  property Bnd_Array1OfBox* Handle
  {
    Bnd_Array1OfBox* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBnd_Array1OfBox(Bnd_Array1OfBox* nativeHandle);

// Methods PUBLIC


OCBnd_Array1OfBox(Standard_Integer Low, Standard_Integer Up);


OCBnd_Array1OfBox(OCNaroWrappers::OCBnd_Box^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCBnd_Box^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCBnd_Array1OfBox^ Assign(OCNaroWrappers::OCBnd_Array1OfBox^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCBnd_Box^ Value) ;


 /*instead*/  OCBnd_Box^ Value(Standard_Integer Index) ;


 /*instead*/  OCBnd_Box^ ChangeValue(Standard_Integer Index) ;

~OCBnd_Array1OfBox()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
