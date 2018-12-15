// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_MeasureRepresentationItem_OCWrappers_HeaderFile
#define _StepRepr_MeasureRepresentationItem_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_MeasureRepresentationItem.hxx>
#include "../Converter.h"

#include "StepRepr_RepresentationItem.h"



namespace OCNaroWrappers
{

ref class OCStepBasic_MeasureWithUnit;
ref class OCTCollection_HAsciiString;
ref class OCStepBasic_MeasureValueMember;
ref class OCStepBasic_Unit;


//! Implements a measure_representation_item entity <br>
//!          which is used for storing validation properties <br>
//!          (e.g. area) for shapes <br>
public ref class OCStepRepr_MeasureRepresentationItem : OCStepRepr_RepresentationItem {

protected:
  // dummy constructor;
  OCStepRepr_MeasureRepresentationItem(OCDummy^) : OCStepRepr_RepresentationItem((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_MeasureRepresentationItem(Handle(StepRepr_MeasureRepresentationItem)* nativeHandle);

// Methods PUBLIC

//! Creates empty object <br>
OCStepRepr_MeasureRepresentationItem();

//! Init all fields <br>
 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepBasic_MeasureValueMember^ aValueComponent, OCNaroWrappers::OCStepBasic_Unit^ aUnitComponent) ;


 /*instead*/  void SetMeasure(OCNaroWrappers::OCStepBasic_MeasureWithUnit^ Measure) ;


 /*instead*/  OCStepBasic_MeasureWithUnit^ Measure() ;

~OCStepRepr_MeasureRepresentationItem()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
