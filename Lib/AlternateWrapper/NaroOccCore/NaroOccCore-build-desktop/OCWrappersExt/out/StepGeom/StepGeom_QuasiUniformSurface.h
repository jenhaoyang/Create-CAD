// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_QuasiUniformSurface_OCWrappers_HeaderFile
#define _StepGeom_QuasiUniformSurface_OCWrappers_HeaderFile

// include native header
#include <StepGeom_QuasiUniformSurface.hxx>
#include "../Converter.h"

#include "StepGeom_BSplineSurface.h"

#include "StepGeom_BSplineSurface.h"


namespace OCNaroWrappers
{




public ref class OCStepGeom_QuasiUniformSurface  : public OCStepGeom_BSplineSurface {

protected:
  // dummy constructor;
  OCStepGeom_QuasiUniformSurface(OCDummy^) : OCStepGeom_BSplineSurface((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_QuasiUniformSurface(StepGeom_QuasiUniformSurface* nativeHandle);

// Methods PUBLIC

//! Returns a QuasiUniformSurface <br>
OCStepGeom_QuasiUniformSurface();

~OCStepGeom_QuasiUniformSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
