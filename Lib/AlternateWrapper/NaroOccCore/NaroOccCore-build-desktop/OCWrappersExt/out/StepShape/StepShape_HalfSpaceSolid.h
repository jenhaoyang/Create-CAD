// File generated by CPPExt (MPV)
//
#ifndef _StepShape_HalfSpaceSolid_OCWrappers_HeaderFile
#define _StepShape_HalfSpaceSolid_OCWrappers_HeaderFile

// include native header
#include <StepShape_HalfSpaceSolid.hxx>
#include "../Converter.h"

#include "../StepGeom/StepGeom_GeometricRepresentationItem.h"

#include "../StepGeom/StepGeom_Surface.h"
#include "../StepGeom/StepGeom_GeometricRepresentationItem.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_Surface;



public ref class OCStepShape_HalfSpaceSolid  : public OCStepGeom_GeometricRepresentationItem {

protected:
  // dummy constructor;
  OCStepShape_HalfSpaceSolid(OCDummy^) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_HalfSpaceSolid(StepShape_HalfSpaceSolid* nativeHandle);

// Methods PUBLIC

//! Returns a HalfSpaceSolid <br>
OCStepShape_HalfSpaceSolid();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Surface^ aBaseSurface, System::Boolean aAgreementFlag) ;


 /*instead*/  void SetBaseSurface(OCNaroWrappers::OCStepGeom_Surface^ aBaseSurface) ;


 /*instead*/  OCStepGeom_Surface^ BaseSurface() ;


 /*instead*/  void SetAgreementFlag(System::Boolean aAgreementFlag) ;


 /*instead*/  System::Boolean AgreementFlag() ;

~OCStepShape_HalfSpaceSolid()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
