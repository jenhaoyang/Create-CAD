// File generated by CPPExt (CPP file)
//

#include "StepBasic_ProductDefinitionWithAssociatedDocuments.h"
#include "../Converter.h"
#include "StepBasic_HArray1OfDocument.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepBasic_ProductDefinitionFormation.h"
#include "StepBasic_ProductDefinitionContext.h"
#include "StepBasic_Document.h"


using namespace OCNaroWrappers;

OCStepBasic_ProductDefinitionWithAssociatedDocuments::OCStepBasic_ProductDefinitionWithAssociatedDocuments(Handle(StepBasic_ProductDefinitionWithAssociatedDocuments)* nativeHandle) : OCStepBasic_ProductDefinition((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_ProductDefinitionWithAssociatedDocuments(*nativeHandle);
}

OCStepBasic_ProductDefinitionWithAssociatedDocuments::OCStepBasic_ProductDefinitionWithAssociatedDocuments() : OCStepBasic_ProductDefinition((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_ProductDefinitionWithAssociatedDocuments(new StepBasic_ProductDefinitionWithAssociatedDocuments());
}

 void OCStepBasic_ProductDefinitionWithAssociatedDocuments::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aId, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription, OCNaroWrappers::OCStepBasic_ProductDefinitionFormation^ aFormation, OCNaroWrappers::OCStepBasic_ProductDefinitionContext^ aFrame, OCNaroWrappers::OCStepBasic_HArray1OfDocument^ aDocIds)
{
  (*((Handle_StepBasic_ProductDefinitionWithAssociatedDocuments*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aId->Handle), *((Handle_TCollection_HAsciiString*)aDescription->Handle), *((Handle_StepBasic_ProductDefinitionFormation*)aFormation->Handle), *((Handle_StepBasic_ProductDefinitionContext*)aFrame->Handle), *((Handle_StepBasic_HArray1OfDocument*)aDocIds->Handle));
}

OCStepBasic_HArray1OfDocument^ OCStepBasic_ProductDefinitionWithAssociatedDocuments::DocIds()
{
  Handle(StepBasic_HArray1OfDocument) tmp = (*((Handle_StepBasic_ProductDefinitionWithAssociatedDocuments*)nativeHandle))->DocIds();
  return gcnew OCStepBasic_HArray1OfDocument(&tmp);
}

 void OCStepBasic_ProductDefinitionWithAssociatedDocuments::SetDocIds(OCNaroWrappers::OCStepBasic_HArray1OfDocument^ DocIds)
{
  (*((Handle_StepBasic_ProductDefinitionWithAssociatedDocuments*)nativeHandle))->SetDocIds(*((Handle_StepBasic_HArray1OfDocument*)DocIds->Handle));
}

 Standard_Integer OCStepBasic_ProductDefinitionWithAssociatedDocuments::NbDocIds()
{
  return (*((Handle_StepBasic_ProductDefinitionWithAssociatedDocuments*)nativeHandle))->NbDocIds();
}

OCStepBasic_Document^ OCStepBasic_ProductDefinitionWithAssociatedDocuments::DocIdsValue(Standard_Integer num)
{
  Handle(StepBasic_Document) tmp = (*((Handle_StepBasic_ProductDefinitionWithAssociatedDocuments*)nativeHandle))->DocIdsValue(num);
  return gcnew OCStepBasic_Document(&tmp);
}

 void OCStepBasic_ProductDefinitionWithAssociatedDocuments::SetDocIdsValue(Standard_Integer num, OCNaroWrappers::OCStepBasic_Document^ adoc)
{
  (*((Handle_StepBasic_ProductDefinitionWithAssociatedDocuments*)nativeHandle))->SetDocIdsValue(num, *((Handle_StepBasic_Document*)adoc->Handle));
}


