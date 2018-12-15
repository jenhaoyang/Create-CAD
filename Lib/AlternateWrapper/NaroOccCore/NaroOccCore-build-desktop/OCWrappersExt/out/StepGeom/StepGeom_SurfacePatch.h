// File generated by CPPExt (Transient)
//
#ifndef _StepGeom_SurfacePatch_OCWrappers_HeaderFile
#define _StepGeom_SurfacePatch_OCWrappers_HeaderFile

// include the wrapped class
#include <StepGeom_SurfacePatch.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepGeom_BoundedSurface.h"
#include "StepGeom_TransitionCode.h"


namespace OCNaroWrappers
{

ref class OCStepGeom_BoundedSurface;



public ref class OCStepGeom_SurfacePatch : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepGeom_SurfacePatch(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_SurfacePatch(Handle(StepGeom_SurfacePatch)* nativeHandle);

// Methods PUBLIC

//! Returns a SurfacePatch <br>
OCStepGeom_SurfacePatch();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepGeom_BoundedSurface^ aParentSurface, OCStepGeom_TransitionCode aUTransition, OCStepGeom_TransitionCode aVTransition, System::Boolean aUSense, System::Boolean aVSense) ;


 /*instead*/  void SetParentSurface(OCNaroWrappers::OCStepGeom_BoundedSurface^ aParentSurface) ;


 /*instead*/  OCStepGeom_BoundedSurface^ ParentSurface() ;


 /*instead*/  void SetUTransition(OCStepGeom_TransitionCode aUTransition) ;


 /*instead*/  OCStepGeom_TransitionCode UTransition() ;


 /*instead*/  void SetVTransition(OCStepGeom_TransitionCode aVTransition) ;


 /*instead*/  OCStepGeom_TransitionCode VTransition() ;


 /*instead*/  void SetUSense(System::Boolean aUSense) ;


 /*instead*/  System::Boolean USense() ;


 /*instead*/  void SetVSense(System::Boolean aVSense) ;


 /*instead*/  System::Boolean VSense() ;

~OCStepGeom_SurfacePatch()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
