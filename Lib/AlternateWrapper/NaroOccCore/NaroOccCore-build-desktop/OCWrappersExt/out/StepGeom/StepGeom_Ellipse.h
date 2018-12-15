// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_Ellipse_OCWrappers_HeaderFile
#define _StepGeom_Ellipse_OCWrappers_HeaderFile

// include native header
#include <StepGeom_Ellipse.hxx>
#include "../Converter.h"

#include "StepGeom_Conic.h"

#include "StepGeom_Conic.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_Axis2Placement;



public ref class OCStepGeom_Ellipse  : public OCStepGeom_Conic {

protected:
  // dummy constructor;
  OCStepGeom_Ellipse(OCDummy^) : OCStepGeom_Conic((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_Ellipse(StepGeom_Ellipse* nativeHandle);

// Methods PUBLIC

//! Returns a Ellipse <br>
OCStepGeom_Ellipse();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement^ aPosition) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement^ aPosition, Standard_Real aSemiAxis1, Standard_Real aSemiAxis2) ;


 /*instead*/  void SetSemiAxis1(Standard_Real aSemiAxis1) ;


 /*instead*/  Standard_Real SemiAxis1() ;


 /*instead*/  void SetSemiAxis2(Standard_Real aSemiAxis2) ;


 /*instead*/  Standard_Real SemiAxis2() ;

~OCStepGeom_Ellipse()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
