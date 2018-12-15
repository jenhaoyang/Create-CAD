// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_HArray1OfDirectionCountSelect_OCWrappers_HeaderFile
#define _StepVisual_HArray1OfDirectionCountSelect_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_HArray1OfDirectionCountSelect.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepVisual_Array1OfDirectionCountSelect.h"


namespace OCNaroWrappers
{

ref class OCStepVisual_DirectionCountSelect;
ref class OCStepVisual_Array1OfDirectionCountSelect;



public ref class OCStepVisual_HArray1OfDirectionCountSelect : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepVisual_HArray1OfDirectionCountSelect(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_HArray1OfDirectionCountSelect(Handle(StepVisual_HArray1OfDirectionCountSelect)* nativeHandle);

// Methods PUBLIC


OCStepVisual_HArray1OfDirectionCountSelect(Standard_Integer Low, Standard_Integer Up);


OCStepVisual_HArray1OfDirectionCountSelect(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepVisual_DirectionCountSelect^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepVisual_DirectionCountSelect^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepVisual_DirectionCountSelect^ Value) ;


 /*instead*/  OCStepVisual_DirectionCountSelect^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepVisual_DirectionCountSelect^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepVisual_Array1OfDirectionCountSelect^ Array1() ;


 /*instead*/  OCStepVisual_Array1OfDirectionCountSelect^ ChangeArray1() ;

~OCStepVisual_HArray1OfDirectionCountSelect()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif