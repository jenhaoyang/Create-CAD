// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_SurfaceReplica_OCWrappers_HeaderFile
#define _StepGeom_SurfaceReplica_OCWrappers_HeaderFile

// include native header
#include <StepGeom_SurfaceReplica.hxx>
#include "../Converter.h"

#include "StepGeom_Surface.h"

#include "StepGeom_Surface.h"
#include "StepGeom_CartesianTransformationOperator3d.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_Surface;
ref class OCStepGeom_CartesianTransformationOperator3d;



public ref class OCStepGeom_SurfaceReplica  : public OCStepGeom_Surface {

protected:
  // dummy constructor;
  OCStepGeom_SurfaceReplica(OCDummy^) : OCStepGeom_Surface((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_SurfaceReplica(StepGeom_SurfaceReplica* nativeHandle);

// Methods PUBLIC

//! Returns a SurfaceReplica <br>
OCStepGeom_SurfaceReplica();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Surface^ aParentSurface, OCNaroWrappers::OCStepGeom_CartesianTransformationOperator3d^ aTransformation) ;


 /*instead*/  void SetParentSurface(OCNaroWrappers::OCStepGeom_Surface^ aParentSurface) ;


 /*instead*/  OCStepGeom_Surface^ ParentSurface() ;


 /*instead*/  void SetTransformation(OCNaroWrappers::OCStepGeom_CartesianTransformationOperator3d^ aTransformation) ;


 /*instead*/  OCStepGeom_CartesianTransformationOperator3d^ Transformation() ;

~OCStepGeom_SurfaceReplica()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
