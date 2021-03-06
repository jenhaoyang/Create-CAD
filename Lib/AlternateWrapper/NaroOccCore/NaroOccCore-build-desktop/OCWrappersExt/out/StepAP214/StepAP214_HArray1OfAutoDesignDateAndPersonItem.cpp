// File generated by CPPExt (CPP file)
//

#include "StepAP214_HArray1OfAutoDesignDateAndPersonItem.h"
#include "../Converter.h"
#include "StepAP214_AutoDesignDateAndPersonItem.h"
#include "StepAP214_Array1OfAutoDesignDateAndPersonItem.h"


using namespace OCNaroWrappers;

OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::OCStepAP214_HArray1OfAutoDesignDateAndPersonItem(Handle(StepAP214_HArray1OfAutoDesignDateAndPersonItem)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem(*nativeHandle);
}

OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::OCStepAP214_HArray1OfAutoDesignDateAndPersonItem(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem(new StepAP214_HArray1OfAutoDesignDateAndPersonItem(Low, Up));
}

OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::OCStepAP214_HArray1OfAutoDesignDateAndPersonItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP214_AutoDesignDateAndPersonItem^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem(new StepAP214_HArray1OfAutoDesignDateAndPersonItem(Low, Up, *((StepAP214_AutoDesignDateAndPersonItem*)V->Handle)));
}

 void OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::Init(OCNaroWrappers::OCStepAP214_AutoDesignDateAndPersonItem^ V)
{
  (*((Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem*)nativeHandle))->Init(*((StepAP214_AutoDesignDateAndPersonItem*)V->Handle));
}

 Standard_Integer OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::Length()
{
  return (*((Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem*)nativeHandle))->Length();
}

 Standard_Integer OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::Lower()
{
  return (*((Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem*)nativeHandle))->Lower();
}

 Standard_Integer OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::Upper()
{
  return (*((Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem*)nativeHandle))->Upper();
}

 void OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_AutoDesignDateAndPersonItem^ Value)
{
  (*((Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem*)nativeHandle))->SetValue(Index, *((StepAP214_AutoDesignDateAndPersonItem*)Value->Handle));
}

OCStepAP214_AutoDesignDateAndPersonItem^ OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::Value(Standard_Integer Index)
{
  StepAP214_AutoDesignDateAndPersonItem* tmp = new StepAP214_AutoDesignDateAndPersonItem();
  *tmp = (*((Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem*)nativeHandle))->Value(Index);
  return gcnew OCStepAP214_AutoDesignDateAndPersonItem(tmp);
}

OCStepAP214_AutoDesignDateAndPersonItem^ OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::ChangeValue(Standard_Integer Index)
{
  StepAP214_AutoDesignDateAndPersonItem* tmp = new StepAP214_AutoDesignDateAndPersonItem();
  *tmp = (*((Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepAP214_AutoDesignDateAndPersonItem(tmp);
}

OCStepAP214_Array1OfAutoDesignDateAndPersonItem^ OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::Array1()
{
  StepAP214_Array1OfAutoDesignDateAndPersonItem* tmp = new StepAP214_Array1OfAutoDesignDateAndPersonItem(0, 0);
  *tmp = (*((Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem*)nativeHandle))->Array1();
  return gcnew OCStepAP214_Array1OfAutoDesignDateAndPersonItem(tmp);
}

OCStepAP214_Array1OfAutoDesignDateAndPersonItem^ OCStepAP214_HArray1OfAutoDesignDateAndPersonItem::ChangeArray1()
{
  StepAP214_Array1OfAutoDesignDateAndPersonItem* tmp = new StepAP214_Array1OfAutoDesignDateAndPersonItem(0, 0);
  *tmp = (*((Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem*)nativeHandle))->ChangeArray1();
  return gcnew OCStepAP214_Array1OfAutoDesignDateAndPersonItem(tmp);
}


