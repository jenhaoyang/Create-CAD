// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_HArray1OfOrganization_OCWrappers_HeaderFile
#define _StepBasic_HArray1OfOrganization_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_HArray1OfOrganization.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepBasic_Array1OfOrganization.h"


namespace OCNaroWrappers
{

ref class OCStepBasic_Organization;
ref class OCStepBasic_Array1OfOrganization;



public ref class OCStepBasic_HArray1OfOrganization : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_HArray1OfOrganization(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_HArray1OfOrganization(Handle(StepBasic_HArray1OfOrganization)* nativeHandle);

// Methods PUBLIC


OCStepBasic_HArray1OfOrganization(Standard_Integer Low, Standard_Integer Up);


OCStepBasic_HArray1OfOrganization(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepBasic_Organization^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Organization^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepBasic_Organization^ Value) ;


 /*instead*/  OCStepBasic_Organization^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepBasic_Organization^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepBasic_Array1OfOrganization^ Array1() ;


 /*instead*/  OCStepBasic_Array1OfOrganization^ ChangeArray1() ;

~OCStepBasic_HArray1OfOrganization()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
