// File generated by CPPExt (Transient)
//
#ifndef _PColStd_HArray1OfPersistent_OCWrappers_HeaderFile
#define _PColStd_HArray1OfPersistent_OCWrappers_HeaderFile

// include the wrapped class
#include <PColStd_HArray1OfPersistent.hxx>
#include "../Converter.h"

#include "../Standard/Standard_Persistent.h"

#include "PColStd_FieldOfHArray1OfPersistent.h"


namespace OCNaroWrappers
{

ref class OCStandard_Persistent;
ref class OCPColStd_FieldOfHArray1OfPersistent;
ref class OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent;
ref class OCPColStd_VArrayTNodeOfFieldOfHArray1OfPersistent;



public ref class OCPColStd_HArray1OfPersistent : OCStandard_Persistent {

protected:
  // dummy constructor;
  OCPColStd_HArray1OfPersistent(OCDummy^) : OCStandard_Persistent((OCDummy^)nullptr) {};

public:

// constructor from native
OCPColStd_HArray1OfPersistent(Handle(PColStd_HArray1OfPersistent)* nativeHandle);

// Methods PUBLIC


OCPColStd_HArray1OfPersistent(Standard_Integer Low, Standard_Integer Up);


OCPColStd_HArray1OfPersistent(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStandard_Persistent^ V);


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStandard_Persistent^ Value) ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  OCStandard_Persistent^ Value(Standard_Integer Index) ;


virtual /*instead*/  OCStandard_Persistent^ ShallowCopy() ;


virtual /*instead*/  void ShallowDump(Standard_OStream& s) override;

~OCPColStd_HArray1OfPersistent()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
