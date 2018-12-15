// File generated by CPPExt (CPP file)
//

#include "StepAP214_AutoDesignGroupAssignment.h"
#include "../Converter.h"
#include "StepAP214_HArray1OfAutoDesignGroupedItem.h"
#include "../StepBasic/StepBasic_Group.h"
#include "StepAP214_AutoDesignGroupedItem.h"


using namespace OCNaroWrappers;

OCStepAP214_AutoDesignGroupAssignment::OCStepAP214_AutoDesignGroupAssignment(Handle(StepAP214_AutoDesignGroupAssignment)* nativeHandle) : OCStepBasic_GroupAssignment((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_AutoDesignGroupAssignment(*nativeHandle);
}

OCStepAP214_AutoDesignGroupAssignment::OCStepAP214_AutoDesignGroupAssignment() : OCStepBasic_GroupAssignment((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_AutoDesignGroupAssignment(new StepAP214_AutoDesignGroupAssignment());
}

 void OCStepAP214_AutoDesignGroupAssignment::Init(OCNaroWrappers::OCStepBasic_Group^ aAssignedGroup)
{
  (*((Handle_StepAP214_AutoDesignGroupAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Group*)aAssignedGroup->Handle));
}

 void OCStepAP214_AutoDesignGroupAssignment::Init(OCNaroWrappers::OCStepBasic_Group^ aAssignedGroup, OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignGroupedItem^ aItems)
{
  (*((Handle_StepAP214_AutoDesignGroupAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Group*)aAssignedGroup->Handle), *((Handle_StepAP214_HArray1OfAutoDesignGroupedItem*)aItems->Handle));
}

 void OCStepAP214_AutoDesignGroupAssignment::SetItems(OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignGroupedItem^ aItems)
{
  (*((Handle_StepAP214_AutoDesignGroupAssignment*)nativeHandle))->SetItems(*((Handle_StepAP214_HArray1OfAutoDesignGroupedItem*)aItems->Handle));
}

OCStepAP214_HArray1OfAutoDesignGroupedItem^ OCStepAP214_AutoDesignGroupAssignment::Items()
{
  Handle(StepAP214_HArray1OfAutoDesignGroupedItem) tmp = (*((Handle_StepAP214_AutoDesignGroupAssignment*)nativeHandle))->Items();
  return gcnew OCStepAP214_HArray1OfAutoDesignGroupedItem(&tmp);
}

OCStepAP214_AutoDesignGroupedItem^ OCStepAP214_AutoDesignGroupAssignment::ItemsValue(Standard_Integer num)
{
  StepAP214_AutoDesignGroupedItem* tmp = new StepAP214_AutoDesignGroupedItem();
  *tmp = (*((Handle_StepAP214_AutoDesignGroupAssignment*)nativeHandle))->ItemsValue(num);
  return gcnew OCStepAP214_AutoDesignGroupedItem(tmp);
}

 Standard_Integer OCStepAP214_AutoDesignGroupAssignment::NbItems()
{
  return (*((Handle_StepAP214_AutoDesignGroupAssignment*)nativeHandle))->NbItems();
}


