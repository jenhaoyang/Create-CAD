// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_UniformCurve_OCWrappers_HeaderFile
#define _StepGeom_UniformCurve_OCWrappers_HeaderFile

// include native header
#include <StepGeom_UniformCurve.hxx>
#include "../Converter.h"

#include "StepGeom_BSplineCurve.h"

#include "StepGeom_BSplineCurve.h"


namespace OCNaroWrappers
{




public ref class OCStepGeom_UniformCurve  : public OCStepGeom_BSplineCurve {

protected:
  // dummy constructor;
  OCStepGeom_UniformCurve(OCDummy^) : OCStepGeom_BSplineCurve((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_UniformCurve(StepGeom_UniformCurve* nativeHandle);

// Methods PUBLIC

//! Returns a UniformCurve <br>
OCStepGeom_UniformCurve();

~OCStepGeom_UniformCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif