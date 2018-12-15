// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_ConfigurationEffectivity_OCWrappers_HeaderFile
#define _StepRepr_ConfigurationEffectivity_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_ConfigurationEffectivity.hxx>
#include "../Converter.h"

#include "../StepBasic/StepBasic_ProductDefinitionEffectivity.h"



namespace OCNaroWrappers
{

ref class OCStepRepr_ConfigurationDesign;
ref class OCTCollection_HAsciiString;
ref class OCStepBasic_ProductDefinitionRelationship;


//! Representation of STEP entity ConfigurationEffectivity <br>
public ref class OCStepRepr_ConfigurationEffectivity : OCStepBasic_ProductDefinitionEffectivity {

protected:
  // dummy constructor;
  OCStepRepr_ConfigurationEffectivity(OCDummy^) : OCStepBasic_ProductDefinitionEffectivity((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_ConfigurationEffectivity(Handle(StepRepr_ConfigurationEffectivity)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepRepr_ConfigurationEffectivity();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aEffectivity_Id, OCNaroWrappers::OCStepBasic_ProductDefinitionRelationship^ aProductDefinitionEffectivity_Usage, OCNaroWrappers::OCStepRepr_ConfigurationDesign^ aConfiguration) ;

//! Returns field Configuration <br>
 /*instead*/  OCStepRepr_ConfigurationDesign^ Configuration() ;

//! Set field Configuration <br>
 /*instead*/  void SetConfiguration(OCNaroWrappers::OCStepRepr_ConfigurationDesign^ Configuration) ;

~OCStepRepr_ConfigurationEffectivity()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
