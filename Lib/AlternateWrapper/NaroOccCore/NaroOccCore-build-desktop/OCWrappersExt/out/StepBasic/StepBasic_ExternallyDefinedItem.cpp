// File generated by CPPExt (CPP file)
//

#include "StepBasic_ExternallyDefinedItem.h"
#include "../Converter.h"
#include "StepBasic_ExternalSource.h"
#include "StepBasic_SourceItem.h"


using namespace OCNaroWrappers;

OCStepBasic_ExternallyDefinedItem::OCStepBasic_ExternallyDefinedItem(Handle(StepBasic_ExternallyDefinedItem)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_ExternallyDefinedItem(*nativeHandle);
}

OCStepBasic_ExternallyDefinedItem::OCStepBasic_ExternallyDefinedItem() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_ExternallyDefinedItem(new StepBasic_ExternallyDefinedItem());
}

 void OCStepBasic_ExternallyDefinedItem::Init(OCNaroWrappers::OCStepBasic_SourceItem^ aItemId, OCNaroWrappers::OCStepBasic_ExternalSource^ aSource)
{
  (*((Handle_StepBasic_ExternallyDefinedItem*)nativeHandle))->Init(*((StepBasic_SourceItem*)aItemId->Handle), *((Handle_StepBasic_ExternalSource*)aSource->Handle));
}

OCStepBasic_SourceItem^ OCStepBasic_ExternallyDefinedItem::ItemId()
{
  StepBasic_SourceItem* tmp = new StepBasic_SourceItem();
  *tmp = (*((Handle_StepBasic_ExternallyDefinedItem*)nativeHandle))->ItemId();
  return gcnew OCStepBasic_SourceItem(tmp);
}

 void OCStepBasic_ExternallyDefinedItem::SetItemId(OCNaroWrappers::OCStepBasic_SourceItem^ ItemId)
{
  (*((Handle_StepBasic_ExternallyDefinedItem*)nativeHandle))->SetItemId(*((StepBasic_SourceItem*)ItemId->Handle));
}

OCStepBasic_ExternalSource^ OCStepBasic_ExternallyDefinedItem::Source()
{
  Handle(StepBasic_ExternalSource) tmp = (*((Handle_StepBasic_ExternallyDefinedItem*)nativeHandle))->Source();
  return gcnew OCStepBasic_ExternalSource(&tmp);
}

 void OCStepBasic_ExternallyDefinedItem::SetSource(OCNaroWrappers::OCStepBasic_ExternalSource^ Source)
{
  (*((Handle_StepBasic_ExternallyDefinedItem*)nativeHandle))->SetSource(*((Handle_StepBasic_ExternalSource*)Source->Handle));
}


