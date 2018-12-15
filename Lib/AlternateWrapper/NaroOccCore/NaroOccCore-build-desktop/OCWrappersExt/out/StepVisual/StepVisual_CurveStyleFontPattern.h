// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_CurveStyleFontPattern_OCWrappers_HeaderFile
#define _StepVisual_CurveStyleFontPattern_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_CurveStyleFontPattern.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{




public ref class OCStepVisual_CurveStyleFontPattern : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepVisual_CurveStyleFontPattern(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_CurveStyleFontPattern(Handle(StepVisual_CurveStyleFontPattern)* nativeHandle);

// Methods PUBLIC

//! Returns a CurveStyleFontPattern <br>
OCStepVisual_CurveStyleFontPattern();


virtual /*instead*/  void Init(Standard_Real aVisibleSegmentLength, Standard_Real aInvisibleSegmentLength) ;


 /*instead*/  void SetVisibleSegmentLength(Standard_Real aVisibleSegmentLength) ;


 /*instead*/  Standard_Real VisibleSegmentLength() ;


 /*instead*/  void SetInvisibleSegmentLength(Standard_Real aInvisibleSegmentLength) ;


 /*instead*/  Standard_Real InvisibleSegmentLength() ;

~OCStepVisual_CurveStyleFontPattern()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
