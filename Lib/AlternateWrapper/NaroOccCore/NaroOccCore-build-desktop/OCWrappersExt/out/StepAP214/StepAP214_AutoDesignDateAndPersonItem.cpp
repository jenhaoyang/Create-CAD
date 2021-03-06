// File generated by CPPExt (CPP file)
//

#include "StepAP214_AutoDesignDateAndPersonItem.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepAP214_AutoDesignOrganizationAssignment.h"
#include "../StepBasic/StepBasic_Product.h"
#include "../StepBasic/StepBasic_ProductDefinition.h"
#include "../StepBasic/StepBasic_ProductDefinitionFormation.h"
#include "../StepRepr/StepRepr_Representation.h"
#include "StepAP214_AutoDesignDocumentReference.h"
#include "../StepRepr/StepRepr_ExternallyDefinedRepresentation.h"
#include "../StepBasic/StepBasic_ProductDefinitionRelationship.h"
#include "../StepBasic/StepBasic_ProductDefinitionWithAssociatedDocuments.h"


using namespace OCNaroWrappers;

OCStepAP214_AutoDesignDateAndPersonItem::OCStepAP214_AutoDesignDateAndPersonItem(StepAP214_AutoDesignDateAndPersonItem* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_AutoDesignDateAndPersonItem::OCStepAP214_AutoDesignDateAndPersonItem() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepAP214_AutoDesignDateAndPersonItem();
}

 Standard_Integer OCStepAP214_AutoDesignDateAndPersonItem::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepAP214_AutoDesignDateAndPersonItem*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepAP214_AutoDesignOrganizationAssignment^ OCStepAP214_AutoDesignDateAndPersonItem::AutoDesignOrganizationAssignment()
{
  Handle(StepAP214_AutoDesignOrganizationAssignment) tmp = ((StepAP214_AutoDesignDateAndPersonItem*)nativeHandle)->AutoDesignOrganizationAssignment();
  return gcnew OCStepAP214_AutoDesignOrganizationAssignment(&tmp);
}

OCStepBasic_Product^ OCStepAP214_AutoDesignDateAndPersonItem::Product()
{
  Handle(StepBasic_Product) tmp = ((StepAP214_AutoDesignDateAndPersonItem*)nativeHandle)->Product();
  return gcnew OCStepBasic_Product(&tmp);
}

OCStepBasic_ProductDefinition^ OCStepAP214_AutoDesignDateAndPersonItem::ProductDefinition()
{
  Handle(StepBasic_ProductDefinition) tmp = ((StepAP214_AutoDesignDateAndPersonItem*)nativeHandle)->ProductDefinition();
  return gcnew OCStepBasic_ProductDefinition(&tmp);
}

OCStepBasic_ProductDefinitionFormation^ OCStepAP214_AutoDesignDateAndPersonItem::ProductDefinitionFormation()
{
  Handle(StepBasic_ProductDefinitionFormation) tmp = ((StepAP214_AutoDesignDateAndPersonItem*)nativeHandle)->ProductDefinitionFormation();
  return gcnew OCStepBasic_ProductDefinitionFormation(&tmp);
}

OCStepRepr_Representation^ OCStepAP214_AutoDesignDateAndPersonItem::Representation()
{
  Handle(StepRepr_Representation) tmp = ((StepAP214_AutoDesignDateAndPersonItem*)nativeHandle)->Representation();
  return gcnew OCStepRepr_Representation(&tmp);
}

OCStepAP214_AutoDesignDocumentReference^ OCStepAP214_AutoDesignDateAndPersonItem::AutoDesignDocumentReference()
{
  Handle(StepAP214_AutoDesignDocumentReference) tmp = ((StepAP214_AutoDesignDateAndPersonItem*)nativeHandle)->AutoDesignDocumentReference();
  return gcnew OCStepAP214_AutoDesignDocumentReference(&tmp);
}

OCStepRepr_ExternallyDefinedRepresentation^ OCStepAP214_AutoDesignDateAndPersonItem::ExternallyDefinedRepresentation()
{
  Handle(StepRepr_ExternallyDefinedRepresentation) tmp = ((StepAP214_AutoDesignDateAndPersonItem*)nativeHandle)->ExternallyDefinedRepresentation();
  return gcnew OCStepRepr_ExternallyDefinedRepresentation(&tmp);
}

OCStepBasic_ProductDefinitionRelationship^ OCStepAP214_AutoDesignDateAndPersonItem::ProductDefinitionRelationship()
{
  Handle(StepBasic_ProductDefinitionRelationship) tmp = ((StepAP214_AutoDesignDateAndPersonItem*)nativeHandle)->ProductDefinitionRelationship();
  return gcnew OCStepBasic_ProductDefinitionRelationship(&tmp);
}

OCStepBasic_ProductDefinitionWithAssociatedDocuments^ OCStepAP214_AutoDesignDateAndPersonItem::ProductDefinitionWithAssociatedDocuments()
{
  Handle(StepBasic_ProductDefinitionWithAssociatedDocuments) tmp = ((StepAP214_AutoDesignDateAndPersonItem*)nativeHandle)->ProductDefinitionWithAssociatedDocuments();
  return gcnew OCStepBasic_ProductDefinitionWithAssociatedDocuments(&tmp);
}


