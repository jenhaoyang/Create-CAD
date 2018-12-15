// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_SphericalSurface_OCWrappers_HeaderFile
#define _StepGeom_SphericalSurface_OCWrappers_HeaderFile

// include native header
#include <StepGeom_SphericalSurface.hxx>
#include "../Converter.h"

#include "StepGeom_ElementarySurface.h"

#include "StepGeom_ElementarySurface.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_Axis2Placement3d;



public ref class OCStepGeom_SphericalSurface  : public OCStepGeom_ElementarySurface {

protected:
  // dummy constructor;
  OCStepGeom_SphericalSurface(OCDummy^) : OCStepGeom_ElementarySurface((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_SphericalSurface(StepGeom_SphericalSurface* nativeHandle);

// Methods PUBLIC

//! Returns a SphericalSurface <br>
OCStepGeom_SphericalSurface();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition, Standard_Real aRadius) ;


 /*instead*/  void SetRadius(Standard_Real aRadius) ;


 /*instead*/  Standard_Real Radius() ;

~OCStepGeom_SphericalSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
