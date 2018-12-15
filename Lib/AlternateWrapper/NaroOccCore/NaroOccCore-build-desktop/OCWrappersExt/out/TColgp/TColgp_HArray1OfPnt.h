// File generated by CPPExt (Transient)
//
#ifndef _TColgp_HArray1OfPnt_OCWrappers_HeaderFile
#define _TColgp_HArray1OfPnt_OCWrappers_HeaderFile

// include the wrapped class
#include <TColgp_HArray1OfPnt.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColgp_Array1OfPnt.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt;
ref class OCTColgp_Array1OfPnt;



public ref class OCTColgp_HArray1OfPnt : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColgp_HArray1OfPnt(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColgp_HArray1OfPnt(Handle(TColgp_HArray1OfPnt)* nativeHandle);

// Methods PUBLIC


OCTColgp_HArray1OfPnt(Standard_Integer Low, Standard_Integer Up);


OCTColgp_HArray1OfPnt(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCgp_Pnt^ V);


 /*instead*/  void Init(OCNaroWrappers::OCgp_Pnt^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt^ Value) ;


 /*instead*/  OCgp_Pnt^ Value(Standard_Integer Index) ;


 /*instead*/  OCgp_Pnt^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCTColgp_Array1OfPnt^ Array1() ;


 /*instead*/  OCTColgp_Array1OfPnt^ ChangeArray1() ;

~OCTColgp_HArray1OfPnt()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
