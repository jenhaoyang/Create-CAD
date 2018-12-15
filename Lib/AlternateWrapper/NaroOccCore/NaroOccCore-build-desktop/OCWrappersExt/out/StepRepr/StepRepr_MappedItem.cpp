// File generated by CPPExt (CPP file)
//

#include "StepRepr_MappedItem.h"
#include "../Converter.h"
#include "StepRepr_RepresentationMap.h"
#include "StepRepr_RepresentationItem.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepRepr_MappedItem::OCStepRepr_MappedItem(Handle(StepRepr_MappedItem)* nativeHandle) : OCStepRepr_RepresentationItem((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepRepr_MappedItem(*nativeHandle);
}

OCStepRepr_MappedItem::OCStepRepr_MappedItem() : OCStepRepr_RepresentationItem((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepRepr_MappedItem(new StepRepr_MappedItem());
}

 void OCStepRepr_MappedItem::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  (*((Handle_StepRepr_MappedItem*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepRepr_MappedItem::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepRepr_RepresentationMap^ aMappingSource, OCNaroWrappers::OCStepRepr_RepresentationItem^ aMappingTarget)
{
  (*((Handle_StepRepr_MappedItem*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((Handle_StepRepr_RepresentationMap*)aMappingSource->Handle), *((Handle_StepRepr_RepresentationItem*)aMappingTarget->Handle));
}

 void OCStepRepr_MappedItem::SetMappingSource(OCNaroWrappers::OCStepRepr_RepresentationMap^ aMappingSource)
{
  (*((Handle_StepRepr_MappedItem*)nativeHandle))->SetMappingSource(*((Handle_StepRepr_RepresentationMap*)aMappingSource->Handle));
}

OCStepRepr_RepresentationMap^ OCStepRepr_MappedItem::MappingSource()
{
  Handle(StepRepr_RepresentationMap) tmp = (*((Handle_StepRepr_MappedItem*)nativeHandle))->MappingSource();
  return gcnew OCStepRepr_RepresentationMap(&tmp);
}

 void OCStepRepr_MappedItem::SetMappingTarget(OCNaroWrappers::OCStepRepr_RepresentationItem^ aMappingTarget)
{
  (*((Handle_StepRepr_MappedItem*)nativeHandle))->SetMappingTarget(*((Handle_StepRepr_RepresentationItem*)aMappingTarget->Handle));
}

OCStepRepr_RepresentationItem^ OCStepRepr_MappedItem::MappingTarget()
{
  Handle(StepRepr_RepresentationItem) tmp = (*((Handle_StepRepr_MappedItem*)nativeHandle))->MappingTarget();
  return gcnew OCStepRepr_RepresentationItem(&tmp);
}


