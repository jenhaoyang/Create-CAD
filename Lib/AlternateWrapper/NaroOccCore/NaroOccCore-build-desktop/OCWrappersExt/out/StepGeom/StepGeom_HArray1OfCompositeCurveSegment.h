// File generated by CPPExt (Transient)
//
#ifndef _StepGeom_HArray1OfCompositeCurveSegment_OCWrappers_HeaderFile
#define _StepGeom_HArray1OfCompositeCurveSegment_OCWrappers_HeaderFile

// include the wrapped class
#include <StepGeom_HArray1OfCompositeCurveSegment.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepGeom_Array1OfCompositeCurveSegment.h"


namespace OCNaroWrappers
{

ref class OCStepGeom_CompositeCurveSegment;
ref class OCStepGeom_Array1OfCompositeCurveSegment;



public ref class OCStepGeom_HArray1OfCompositeCurveSegment : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepGeom_HArray1OfCompositeCurveSegment(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_HArray1OfCompositeCurveSegment(Handle(StepGeom_HArray1OfCompositeCurveSegment)* nativeHandle);

// Methods PUBLIC


OCStepGeom_HArray1OfCompositeCurveSegment(Standard_Integer Low, Standard_Integer Up);


OCStepGeom_HArray1OfCompositeCurveSegment(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepGeom_CompositeCurveSegment^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepGeom_CompositeCurveSegment^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepGeom_CompositeCurveSegment^ Value) ;


 /*instead*/  OCStepGeom_CompositeCurveSegment^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepGeom_CompositeCurveSegment^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepGeom_Array1OfCompositeCurveSegment^ Array1() ;


 /*instead*/  OCStepGeom_Array1OfCompositeCurveSegment^ ChangeArray1() ;

~OCStepGeom_HArray1OfCompositeCurveSegment()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
