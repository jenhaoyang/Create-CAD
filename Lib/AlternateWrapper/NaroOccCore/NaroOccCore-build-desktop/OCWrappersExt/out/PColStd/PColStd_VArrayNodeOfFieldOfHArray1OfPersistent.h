// File generated by CPPExt (Transient)
//
#ifndef _PColStd_VArrayNodeOfFieldOfHArray1OfPersistent_OCWrappers_HeaderFile
#define _PColStd_VArrayNodeOfFieldOfHArray1OfPersistent_OCWrappers_HeaderFile

// include the wrapped class
#include <PColStd_VArrayNodeOfFieldOfHArray1OfPersistent.hxx>
#include "../Converter.h"

#include "../PStandard/PStandard_ArrayNode.h"



namespace OCNaroWrappers
{

ref class OCStandard_Persistent;
ref class OCPColStd_FieldOfHArray1OfPersistent;
ref class OCPColStd_VArrayTNodeOfFieldOfHArray1OfPersistent;



public ref class OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent : OCPStandard_ArrayNode {

protected:
  // dummy constructor;
  OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent(OCDummy^) : OCPStandard_ArrayNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent(Handle(PColStd_VArrayNodeOfFieldOfHArray1OfPersistent)* nativeHandle);

// Methods PUBLIC


OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent();


OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent(OCNaroWrappers::OCStandard_Persistent^ aValue);


 /*instead*/  void SetValue(OCNaroWrappers::OCStandard_Persistent^ aValue) ;


 /*instead*/  Standard_Address Value() ;

~OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
