// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_Vector_OCWrappers_HeaderFile
#define _StepGeom_Vector_OCWrappers_HeaderFile

// include native header
#include <StepGeom_Vector.hxx>
#include "../Converter.h"

#include "StepGeom_GeometricRepresentationItem.h"

#include "StepGeom_Direction.h"
#include "StepGeom_GeometricRepresentationItem.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_Direction;



public ref class OCStepGeom_Vector  : public OCStepGeom_GeometricRepresentationItem {

protected:
  // dummy constructor;
  OCStepGeom_Vector(OCDummy^) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_Vector(StepGeom_Vector* nativeHandle);

// Methods PUBLIC

//! Returns a Vector <br>
OCStepGeom_Vector();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Direction^ aOrientation, Standard_Real aMagnitude) ;


 /*instead*/  void SetOrientation(OCNaroWrappers::OCStepGeom_Direction^ aOrientation) ;


 /*instead*/  OCStepGeom_Direction^ Orientation() ;


 /*instead*/  void SetMagnitude(Standard_Real aMagnitude) ;


 /*instead*/  Standard_Real Magnitude() ;

~OCStepGeom_Vector()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif