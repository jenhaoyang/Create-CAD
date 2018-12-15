// File generated by CPPExt (MPV)
//
#ifndef _TColQuantity_Array2OfLength_OCWrappers_HeaderFile
#define _TColQuantity_Array2OfLength_OCWrappers_HeaderFile

// include native header
#include <TColQuantity_Array2OfLength.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCTColQuantity_Array2OfLength  {

protected:
  TColQuantity_Array2OfLength* nativeHandle;
  OCTColQuantity_Array2OfLength(OCDummy^) {};

public:
  property TColQuantity_Array2OfLength* Handle
  {
    TColQuantity_Array2OfLength* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColQuantity_Array2OfLength(TColQuantity_Array2OfLength* nativeHandle);

// Methods PUBLIC


OCTColQuantity_Array2OfLength(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTColQuantity_Array2OfLength(Quantity_Length Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


 /*instead*/  void Init(Quantity_Length V) ;


 /*instead*/  OCTColQuantity_Array2OfLength^ Assign(OCNaroWrappers::OCTColQuantity_Array2OfLength^ Other) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, Quantity_Length Value) ;


 /*instead*/  Quantity_Length Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  Quantity_Length ChangeValue(Standard_Integer Row, Standard_Integer Col) ;

~OCTColQuantity_Array2OfLength()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
