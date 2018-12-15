// File generated by CPPExt (Transient)
//
#ifndef _StepShape_ContextDependentShapeRepresentation_OCWrappers_HeaderFile
#define _StepShape_ContextDependentShapeRepresentation_OCWrappers_HeaderFile

// include the wrapped class
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCStepRepr_ShapeRepresentationRelationship;
ref class OCStepRepr_ProductDefinitionShape;



public ref class OCStepShape_ContextDependentShapeRepresentation : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepShape_ContextDependentShapeRepresentation(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_ContextDependentShapeRepresentation(Handle(StepShape_ContextDependentShapeRepresentation)* nativeHandle);

// Methods PUBLIC


OCStepShape_ContextDependentShapeRepresentation();


 /*instead*/  void Init(OCNaroWrappers::OCStepRepr_ShapeRepresentationRelationship^ aRepRel, OCNaroWrappers::OCStepRepr_ProductDefinitionShape^ aProRel) ;


 /*instead*/  OCStepRepr_ShapeRepresentationRelationship^ RepresentationRelation() ;


 /*instead*/  void SetRepresentationRelation(OCNaroWrappers::OCStepRepr_ShapeRepresentationRelationship^ aRepRel) ;


 /*instead*/  OCStepRepr_ProductDefinitionShape^ RepresentedProductRelation() ;


 /*instead*/  void SetRepresentedProductRelation(OCNaroWrappers::OCStepRepr_ProductDefinitionShape^ aProRel) ;

~OCStepShape_ContextDependentShapeRepresentation()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
