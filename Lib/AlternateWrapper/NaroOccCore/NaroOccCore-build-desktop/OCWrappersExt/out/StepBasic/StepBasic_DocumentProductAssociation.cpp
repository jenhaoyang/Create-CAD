// File generated by CPPExt (CPP file)
//

#include "StepBasic_DocumentProductAssociation.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepBasic_Document.h"
#include "StepBasic_ProductOrFormationOrDefinition.h"


using namespace OCNaroWrappers;

OCStepBasic_DocumentProductAssociation::OCStepBasic_DocumentProductAssociation(Handle(StepBasic_DocumentProductAssociation)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_DocumentProductAssociation(*nativeHandle);
}

OCStepBasic_DocumentProductAssociation::OCStepBasic_DocumentProductAssociation() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_DocumentProductAssociation(new StepBasic_DocumentProductAssociation());
}

 void OCStepBasic_DocumentProductAssociation::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasDescription, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription, OCNaroWrappers::OCStepBasic_Document^ aRelatingDocument, OCNaroWrappers::OCStepBasic_ProductOrFormationOrDefinition^ aRelatedProduct)
{
  (*((Handle_StepBasic_DocumentProductAssociation*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), OCConverter::BooleanToStandardBoolean(hasDescription), *((Handle_TCollection_HAsciiString*)aDescription->Handle), *((Handle_StepBasic_Document*)aRelatingDocument->Handle), *((StepBasic_ProductOrFormationOrDefinition*)aRelatedProduct->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_DocumentProductAssociation::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_DocumentProductAssociation*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_DocumentProductAssociation::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name)
{
  (*((Handle_StepBasic_DocumentProductAssociation*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)Name->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_DocumentProductAssociation::Description()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_DocumentProductAssociation*)nativeHandle))->Description();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_DocumentProductAssociation::SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ Description)
{
  (*((Handle_StepBasic_DocumentProductAssociation*)nativeHandle))->SetDescription(*((Handle_TCollection_HAsciiString*)Description->Handle));
}

 System::Boolean OCStepBasic_DocumentProductAssociation::HasDescription()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepBasic_DocumentProductAssociation*)nativeHandle))->HasDescription());
}

OCStepBasic_Document^ OCStepBasic_DocumentProductAssociation::RelatingDocument()
{
  Handle(StepBasic_Document) tmp = (*((Handle_StepBasic_DocumentProductAssociation*)nativeHandle))->RelatingDocument();
  return gcnew OCStepBasic_Document(&tmp);
}

 void OCStepBasic_DocumentProductAssociation::SetRelatingDocument(OCNaroWrappers::OCStepBasic_Document^ RelatingDocument)
{
  (*((Handle_StepBasic_DocumentProductAssociation*)nativeHandle))->SetRelatingDocument(*((Handle_StepBasic_Document*)RelatingDocument->Handle));
}

OCStepBasic_ProductOrFormationOrDefinition^ OCStepBasic_DocumentProductAssociation::RelatedProduct()
{
  StepBasic_ProductOrFormationOrDefinition* tmp = new StepBasic_ProductOrFormationOrDefinition();
  *tmp = (*((Handle_StepBasic_DocumentProductAssociation*)nativeHandle))->RelatedProduct();
  return gcnew OCStepBasic_ProductOrFormationOrDefinition(tmp);
}

 void OCStepBasic_DocumentProductAssociation::SetRelatedProduct(OCNaroWrappers::OCStepBasic_ProductOrFormationOrDefinition^ RelatedProduct)
{
  (*((Handle_StepBasic_DocumentProductAssociation*)nativeHandle))->SetRelatedProduct(*((StepBasic_ProductOrFormationOrDefinition*)RelatedProduct->Handle));
}


