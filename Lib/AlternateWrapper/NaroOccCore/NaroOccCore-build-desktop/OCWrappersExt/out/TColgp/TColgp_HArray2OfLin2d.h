// File generated by CPPExt (Transient)
//
#ifndef _TColgp_HArray2OfLin2d_OCWrappers_HeaderFile
#define _TColgp_HArray2OfLin2d_OCWrappers_HeaderFile

// include the wrapped class
#include <TColgp_HArray2OfLin2d.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColgp_Array2OfLin2d.h"


namespace OCNaroWrappers
{

ref class OCgp_Lin2d;
ref class OCTColgp_Array2OfLin2d;



public ref class OCTColgp_HArray2OfLin2d : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColgp_HArray2OfLin2d(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColgp_HArray2OfLin2d(Handle(TColgp_HArray2OfLin2d)* nativeHandle);

// Methods PUBLIC


OCTColgp_HArray2OfLin2d(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTColgp_HArray2OfLin2d(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, OCNaroWrappers::OCgp_Lin2d^ V);


 /*instead*/  void Init(OCNaroWrappers::OCgp_Lin2d^ V) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCgp_Lin2d^ Value) ;


 /*instead*/  OCgp_Lin2d^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCgp_Lin2d^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCTColgp_Array2OfLin2d^ Array2() ;


 /*instead*/  OCTColgp_Array2OfLin2d^ ChangeArray2() ;

~OCTColgp_HArray2OfLin2d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
