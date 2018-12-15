// File generated by CPPExt (MPV)
//
#ifndef _Quantity_Array1OfColor_OCWrappers_HeaderFile
#define _Quantity_Array1OfColor_OCWrappers_HeaderFile

// include native header
#include <Quantity_Array1OfColor.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCQuantity_Color;



public ref class OCQuantity_Array1OfColor  {

protected:
  Quantity_Array1OfColor* nativeHandle;
  OCQuantity_Array1OfColor(OCDummy^) {};

public:
  property Quantity_Array1OfColor* Handle
  {
    Quantity_Array1OfColor* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCQuantity_Array1OfColor(Quantity_Array1OfColor* nativeHandle);

// Methods PUBLIC


OCQuantity_Array1OfColor(Standard_Integer Low, Standard_Integer Up);


OCQuantity_Array1OfColor(OCNaroWrappers::OCQuantity_Color^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCQuantity_Color^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCQuantity_Array1OfColor^ Assign(OCNaroWrappers::OCQuantity_Array1OfColor^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCQuantity_Color^ Value) ;


 /*instead*/  OCQuantity_Color^ Value(Standard_Integer Index) ;


 /*instead*/  OCQuantity_Color^ ChangeValue(Standard_Integer Index) ;

~OCQuantity_Array1OfColor()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
