// File generated by CPPExt (Transient)
//
#ifndef _TColgp_HArray2OfXYZ_OCWrappers_HeaderFile
#define _TColgp_HArray2OfXYZ_OCWrappers_HeaderFile

// include the wrapped class
#include <TColgp_HArray2OfXYZ.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColgp_Array2OfXYZ.h"


namespace OCNaroWrappers
{

ref class OCgp_XYZ;
ref class OCTColgp_Array2OfXYZ;



public ref class OCTColgp_HArray2OfXYZ : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColgp_HArray2OfXYZ(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColgp_HArray2OfXYZ(Handle(TColgp_HArray2OfXYZ)* nativeHandle);

// Methods PUBLIC


OCTColgp_HArray2OfXYZ(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTColgp_HArray2OfXYZ(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, OCNaroWrappers::OCgp_XYZ^ V);


 /*instead*/  void Init(OCNaroWrappers::OCgp_XYZ^ V) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCgp_XYZ^ Value) ;


 /*instead*/  OCgp_XYZ^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCgp_XYZ^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCTColgp_Array2OfXYZ^ Array2() ;


 /*instead*/  OCTColgp_Array2OfXYZ^ ChangeArray2() ;

~OCTColgp_HArray2OfXYZ()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
