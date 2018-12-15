// File generated by CPPExt (Transient)
//
#ifndef _TColStd_HArray2OfInteger_OCWrappers_HeaderFile
#define _TColStd_HArray2OfInteger_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_HArray2OfInteger.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColStd_Array2OfInteger.h"


namespace OCNaroWrappers
{

ref class OCTColStd_Array2OfInteger;



public ref class OCTColStd_HArray2OfInteger : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColStd_HArray2OfInteger(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_HArray2OfInteger(Handle(TColStd_HArray2OfInteger)* nativeHandle);

// Methods PUBLIC


OCTColStd_HArray2OfInteger(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTColStd_HArray2OfInteger(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, Standard_Integer V);


 /*instead*/  void Init(Standard_Integer V) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, Standard_Integer Value) ;


 /*instead*/  Standard_Integer Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  Standard_Integer ChangeValue(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCTColStd_Array2OfInteger^ Array2() ;


 /*instead*/  OCTColStd_Array2OfInteger^ ChangeArray2() ;

~OCTColStd_HArray2OfInteger()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
