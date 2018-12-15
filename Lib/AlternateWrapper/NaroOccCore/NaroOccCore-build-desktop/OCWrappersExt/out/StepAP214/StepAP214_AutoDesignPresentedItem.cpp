// File generated by CPPExt (CPP file)
//

#include "StepAP214_AutoDesignPresentedItem.h"
#include "../Converter.h"
#include "StepAP214_HArray1OfAutoDesignPresentedItemSelect.h"
#include "StepAP214_AutoDesignPresentedItemSelect.h"


using namespace OCNaroWrappers;

OCStepAP214_AutoDesignPresentedItem::OCStepAP214_AutoDesignPresentedItem(Handle(StepAP214_AutoDesignPresentedItem)* nativeHandle) : OCStepVisual_PresentedItem((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_AutoDesignPresentedItem(*nativeHandle);
}

OCStepAP214_AutoDesignPresentedItem::OCStepAP214_AutoDesignPresentedItem() : OCStepVisual_PresentedItem((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_AutoDesignPresentedItem(new StepAP214_AutoDesignPresentedItem());
}

 void OCStepAP214_AutoDesignPresentedItem::Init(OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignPresentedItemSelect^ aItems)
{
  (*((Handle_StepAP214_AutoDesignPresentedItem*)nativeHandle))->Init(*((Handle_StepAP214_HArray1OfAutoDesignPresentedItemSelect*)aItems->Handle));
}

 void OCStepAP214_AutoDesignPresentedItem::SetItems(OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignPresentedItemSelect^ aItems)
{
  (*((Handle_StepAP214_AutoDesignPresentedItem*)nativeHandle))->SetItems(*((Handle_StepAP214_HArray1OfAutoDesignPresentedItemSelect*)aItems->Handle));
}

OCStepAP214_HArray1OfAutoDesignPresentedItemSelect^ OCStepAP214_AutoDesignPresentedItem::Items()
{
  Handle(StepAP214_HArray1OfAutoDesignPresentedItemSelect) tmp = (*((Handle_StepAP214_AutoDesignPresentedItem*)nativeHandle))->Items();
  return gcnew OCStepAP214_HArray1OfAutoDesignPresentedItemSelect(&tmp);
}

OCStepAP214_AutoDesignPresentedItemSelect^ OCStepAP214_AutoDesignPresentedItem::ItemsValue(Standard_Integer num)
{
  StepAP214_AutoDesignPresentedItemSelect* tmp = new StepAP214_AutoDesignPresentedItemSelect();
  *tmp = (*((Handle_StepAP214_AutoDesignPresentedItem*)nativeHandle))->ItemsValue(num);
  return gcnew OCStepAP214_AutoDesignPresentedItemSelect(tmp);
}

 Standard_Integer OCStepAP214_AutoDesignPresentedItem::NbItems()
{
  return (*((Handle_StepAP214_AutoDesignPresentedItem*)nativeHandle))->NbItems();
}


