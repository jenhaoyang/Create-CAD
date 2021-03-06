// File generated by CPPExt (CPP file)
//

#include "StepAP214_HArray1OfAutoDesignReferencingItem.h"
#include "../Converter.h"
#include "StepAP214_AutoDesignReferencingItem.h"
#include "StepAP214_Array1OfAutoDesignReferencingItem.h"


using namespace OCNaroWrappers;

OCStepAP214_HArray1OfAutoDesignReferencingItem::OCStepAP214_HArray1OfAutoDesignReferencingItem(Handle(StepAP214_HArray1OfAutoDesignReferencingItem)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_HArray1OfAutoDesignReferencingItem(*nativeHandle);
}

OCStepAP214_HArray1OfAutoDesignReferencingItem::OCStepAP214_HArray1OfAutoDesignReferencingItem(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_HArray1OfAutoDesignReferencingItem(new StepAP214_HArray1OfAutoDesignReferencingItem(Low, Up));
}

OCStepAP214_HArray1OfAutoDesignReferencingItem::OCStepAP214_HArray1OfAutoDesignReferencingItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP214_AutoDesignReferencingItem^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_HArray1OfAutoDesignReferencingItem(new StepAP214_HArray1OfAutoDesignReferencingItem(Low, Up, *((StepAP214_AutoDesignReferencingItem*)V->Handle)));
}

 void OCStepAP214_HArray1OfAutoDesignReferencingItem::Init(OCNaroWrappers::OCStepAP214_AutoDesignReferencingItem^ V)
{
  (*((Handle_StepAP214_HArray1OfAutoDesignReferencingItem*)nativeHandle))->Init(*((StepAP214_AutoDesignReferencingItem*)V->Handle));
}

 Standard_Integer OCStepAP214_HArray1OfAutoDesignReferencingItem::Length()
{
  return (*((Handle_StepAP214_HArray1OfAutoDesignReferencingItem*)nativeHandle))->Length();
}

 Standard_Integer OCStepAP214_HArray1OfAutoDesignReferencingItem::Lower()
{
  return (*((Handle_StepAP214_HArray1OfAutoDesignReferencingItem*)nativeHandle))->Lower();
}

 Standard_Integer OCStepAP214_HArray1OfAutoDesignReferencingItem::Upper()
{
  return (*((Handle_StepAP214_HArray1OfAutoDesignReferencingItem*)nativeHandle))->Upper();
}

 void OCStepAP214_HArray1OfAutoDesignReferencingItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_AutoDesignReferencingItem^ Value)
{
  (*((Handle_StepAP214_HArray1OfAutoDesignReferencingItem*)nativeHandle))->SetValue(Index, *((StepAP214_AutoDesignReferencingItem*)Value->Handle));
}

OCStepAP214_AutoDesignReferencingItem^ OCStepAP214_HArray1OfAutoDesignReferencingItem::Value(Standard_Integer Index)
{
  StepAP214_AutoDesignReferencingItem* tmp = new StepAP214_AutoDesignReferencingItem();
  *tmp = (*((Handle_StepAP214_HArray1OfAutoDesignReferencingItem*)nativeHandle))->Value(Index);
  return gcnew OCStepAP214_AutoDesignReferencingItem(tmp);
}

OCStepAP214_AutoDesignReferencingItem^ OCStepAP214_HArray1OfAutoDesignReferencingItem::ChangeValue(Standard_Integer Index)
{
  StepAP214_AutoDesignReferencingItem* tmp = new StepAP214_AutoDesignReferencingItem();
  *tmp = (*((Handle_StepAP214_HArray1OfAutoDesignReferencingItem*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepAP214_AutoDesignReferencingItem(tmp);
}

OCStepAP214_Array1OfAutoDesignReferencingItem^ OCStepAP214_HArray1OfAutoDesignReferencingItem::Array1()
{
  StepAP214_Array1OfAutoDesignReferencingItem* tmp = new StepAP214_Array1OfAutoDesignReferencingItem(0, 0);
  *tmp = (*((Handle_StepAP214_HArray1OfAutoDesignReferencingItem*)nativeHandle))->Array1();
  return gcnew OCStepAP214_Array1OfAutoDesignReferencingItem(tmp);
}

OCStepAP214_Array1OfAutoDesignReferencingItem^ OCStepAP214_HArray1OfAutoDesignReferencingItem::ChangeArray1()
{
  StepAP214_Array1OfAutoDesignReferencingItem* tmp = new StepAP214_Array1OfAutoDesignReferencingItem(0, 0);
  *tmp = (*((Handle_StepAP214_HArray1OfAutoDesignReferencingItem*)nativeHandle))->ChangeArray1();
  return gcnew OCStepAP214_Array1OfAutoDesignReferencingItem(tmp);
}


