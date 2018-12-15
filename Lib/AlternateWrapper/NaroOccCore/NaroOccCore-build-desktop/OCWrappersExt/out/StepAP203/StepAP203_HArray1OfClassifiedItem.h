// File generated by CPPExt (Transient)
//
#ifndef _StepAP203_HArray1OfClassifiedItem_OCWrappers_HeaderFile
#define _StepAP203_HArray1OfClassifiedItem_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP203_HArray1OfClassifiedItem.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepAP203_Array1OfClassifiedItem.h"


namespace OCNaroWrappers
{

ref class OCStepAP203_ClassifiedItem;
ref class OCStepAP203_Array1OfClassifiedItem;



public ref class OCStepAP203_HArray1OfClassifiedItem : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepAP203_HArray1OfClassifiedItem(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP203_HArray1OfClassifiedItem(Handle(StepAP203_HArray1OfClassifiedItem)* nativeHandle);

// Methods PUBLIC


OCStepAP203_HArray1OfClassifiedItem(Standard_Integer Low, Standard_Integer Up);


OCStepAP203_HArray1OfClassifiedItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP203_ClassifiedItem^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepAP203_ClassifiedItem^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP203_ClassifiedItem^ Value) ;


 /*instead*/  OCStepAP203_ClassifiedItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepAP203_ClassifiedItem^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepAP203_Array1OfClassifiedItem^ Array1() ;


 /*instead*/  OCStepAP203_Array1OfClassifiedItem^ ChangeArray1() ;

~OCStepAP203_HArray1OfClassifiedItem()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
