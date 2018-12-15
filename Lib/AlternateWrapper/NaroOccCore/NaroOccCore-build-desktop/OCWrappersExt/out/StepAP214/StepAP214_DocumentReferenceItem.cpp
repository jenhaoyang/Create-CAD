// File generated by CPPExt (CPP file)
//

#include "StepAP214_DocumentReferenceItem.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../StepBasic/StepBasic_Approval.h"
#include "../StepRepr/StepRepr_DescriptiveRepresentationItem.h"
#include "../StepRepr/StepRepr_MaterialDesignation.h"
#include "../StepBasic/StepBasic_ProductDefinition.h"
#include "../StepBasic/StepBasic_ProductDefinitionRelationship.h"
#include "../StepRepr/StepRepr_PropertyDefinition.h"
#include "../StepRepr/StepRepr_Representation.h"
#include "../StepRepr/StepRepr_ShapeAspect.h"
#include "../StepRepr/StepRepr_ShapeAspectRelationship.h"


using namespace OCNaroWrappers;

OCStepAP214_DocumentReferenceItem::OCStepAP214_DocumentReferenceItem(StepAP214_DocumentReferenceItem* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_DocumentReferenceItem::OCStepAP214_DocumentReferenceItem() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepAP214_DocumentReferenceItem();
}

 Standard_Integer OCStepAP214_DocumentReferenceItem::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepAP214_DocumentReferenceItem*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepBasic_Approval^ OCStepAP214_DocumentReferenceItem::Approval()
{
  Handle(StepBasic_Approval) tmp = ((StepAP214_DocumentReferenceItem*)nativeHandle)->Approval();
  return gcnew OCStepBasic_Approval(&tmp);
}

OCStepRepr_DescriptiveRepresentationItem^ OCStepAP214_DocumentReferenceItem::DescriptiveRepresentationItem()
{
  Handle(StepRepr_DescriptiveRepresentationItem) tmp = ((StepAP214_DocumentReferenceItem*)nativeHandle)->DescriptiveRepresentationItem();
  return gcnew OCStepRepr_DescriptiveRepresentationItem(&tmp);
}

OCStepRepr_MaterialDesignation^ OCStepAP214_DocumentReferenceItem::MaterialDesignation()
{
  Handle(StepRepr_MaterialDesignation) tmp = ((StepAP214_DocumentReferenceItem*)nativeHandle)->MaterialDesignation();
  return gcnew OCStepRepr_MaterialDesignation(&tmp);
}

OCStepBasic_ProductDefinition^ OCStepAP214_DocumentReferenceItem::ProductDefinition()
{
  Handle(StepBasic_ProductDefinition) tmp = ((StepAP214_DocumentReferenceItem*)nativeHandle)->ProductDefinition();
  return gcnew OCStepBasic_ProductDefinition(&tmp);
}

OCStepBasic_ProductDefinitionRelationship^ OCStepAP214_DocumentReferenceItem::ProductDefinitionRelationship()
{
  Handle(StepBasic_ProductDefinitionRelationship) tmp = ((StepAP214_DocumentReferenceItem*)nativeHandle)->ProductDefinitionRelationship();
  return gcnew OCStepBasic_ProductDefinitionRelationship(&tmp);
}

OCStepRepr_PropertyDefinition^ OCStepAP214_DocumentReferenceItem::PropertyDefinition()
{
  Handle(StepRepr_PropertyDefinition) tmp = ((StepAP214_DocumentReferenceItem*)nativeHandle)->PropertyDefinition();
  return gcnew OCStepRepr_PropertyDefinition(&tmp);
}

OCStepRepr_Representation^ OCStepAP214_DocumentReferenceItem::Representation()
{
  Handle(StepRepr_Representation) tmp = ((StepAP214_DocumentReferenceItem*)nativeHandle)->Representation();
  return gcnew OCStepRepr_Representation(&tmp);
}

OCStepRepr_ShapeAspect^ OCStepAP214_DocumentReferenceItem::ShapeAspect()
{
  Handle(StepRepr_ShapeAspect) tmp = ((StepAP214_DocumentReferenceItem*)nativeHandle)->ShapeAspect();
  return gcnew OCStepRepr_ShapeAspect(&tmp);
}

OCStepRepr_ShapeAspectRelationship^ OCStepAP214_DocumentReferenceItem::ShapeAspectRelationship()
{
  Handle(StepRepr_ShapeAspectRelationship) tmp = ((StepAP214_DocumentReferenceItem*)nativeHandle)->ShapeAspectRelationship();
  return gcnew OCStepRepr_ShapeAspectRelationship(&tmp);
}


