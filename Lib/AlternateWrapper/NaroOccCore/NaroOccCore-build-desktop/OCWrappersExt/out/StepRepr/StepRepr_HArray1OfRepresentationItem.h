// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_HArray1OfRepresentationItem_OCWrappers_HeaderFile
#define _StepRepr_HArray1OfRepresentationItem_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_HArray1OfRepresentationItem.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepRepr_Array1OfRepresentationItem.h"


namespace OCNaroWrappers
{

ref class OCStepRepr_RepresentationItem;
ref class OCStepRepr_Array1OfRepresentationItem;



public ref class OCStepRepr_HArray1OfRepresentationItem : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepRepr_HArray1OfRepresentationItem(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_HArray1OfRepresentationItem(Handle(StepRepr_HArray1OfRepresentationItem)* nativeHandle);

// Methods PUBLIC


OCStepRepr_HArray1OfRepresentationItem(Standard_Integer Low, Standard_Integer Up);


OCStepRepr_HArray1OfRepresentationItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepRepr_RepresentationItem^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepRepr_RepresentationItem^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepRepr_RepresentationItem^ Value) ;


 /*instead*/  OCStepRepr_RepresentationItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepRepr_RepresentationItem^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepRepr_Array1OfRepresentationItem^ Array1() ;


 /*instead*/  OCStepRepr_Array1OfRepresentationItem^ ChangeArray1() ;

~OCStepRepr_HArray1OfRepresentationItem()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
