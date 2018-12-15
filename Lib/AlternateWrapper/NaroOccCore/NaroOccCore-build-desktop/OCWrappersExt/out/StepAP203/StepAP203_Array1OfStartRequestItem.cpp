// File generated by CPPExt (CPP file)
//

#include "StepAP203_Array1OfStartRequestItem.h"
#include "../Converter.h"
#include "StepAP203_StartRequestItem.h"


using namespace OCNaroWrappers;

OCStepAP203_Array1OfStartRequestItem::OCStepAP203_Array1OfStartRequestItem(StepAP203_Array1OfStartRequestItem* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepAP203_Array1OfStartRequestItem::OCStepAP203_Array1OfStartRequestItem(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP203_Array1OfStartRequestItem(Low, Up);
}

OCStepAP203_Array1OfStartRequestItem::OCStepAP203_Array1OfStartRequestItem(OCNaroWrappers::OCStepAP203_StartRequestItem^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP203_Array1OfStartRequestItem(*((StepAP203_StartRequestItem*)Item->Handle), Low, Up);
}

 void OCStepAP203_Array1OfStartRequestItem::Init(OCNaroWrappers::OCStepAP203_StartRequestItem^ V)
{
  ((StepAP203_Array1OfStartRequestItem*)nativeHandle)->Init(*((StepAP203_StartRequestItem*)V->Handle));
}

 System::Boolean OCStepAP203_Array1OfStartRequestItem::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepAP203_Array1OfStartRequestItem*)nativeHandle)->IsAllocated());
}

OCStepAP203_Array1OfStartRequestItem^ OCStepAP203_Array1OfStartRequestItem::Assign(OCNaroWrappers::OCStepAP203_Array1OfStartRequestItem^ Other)
{
  StepAP203_Array1OfStartRequestItem* tmp = new StepAP203_Array1OfStartRequestItem(0, 0);
  *tmp = ((StepAP203_Array1OfStartRequestItem*)nativeHandle)->Assign(*((StepAP203_Array1OfStartRequestItem*)Other->Handle));
  return gcnew OCStepAP203_Array1OfStartRequestItem(tmp);
}

 Standard_Integer OCStepAP203_Array1OfStartRequestItem::Length()
{
  return ((StepAP203_Array1OfStartRequestItem*)nativeHandle)->Length();
}

 Standard_Integer OCStepAP203_Array1OfStartRequestItem::Lower()
{
  return ((StepAP203_Array1OfStartRequestItem*)nativeHandle)->Lower();
}

 Standard_Integer OCStepAP203_Array1OfStartRequestItem::Upper()
{
  return ((StepAP203_Array1OfStartRequestItem*)nativeHandle)->Upper();
}

 void OCStepAP203_Array1OfStartRequestItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP203_StartRequestItem^ Value)
{
  ((StepAP203_Array1OfStartRequestItem*)nativeHandle)->SetValue(Index, *((StepAP203_StartRequestItem*)Value->Handle));
}

OCStepAP203_StartRequestItem^ OCStepAP203_Array1OfStartRequestItem::Value(Standard_Integer Index)
{
  StepAP203_StartRequestItem* tmp = new StepAP203_StartRequestItem();
  *tmp = ((StepAP203_Array1OfStartRequestItem*)nativeHandle)->Value(Index);
  return gcnew OCStepAP203_StartRequestItem(tmp);
}

OCStepAP203_StartRequestItem^ OCStepAP203_Array1OfStartRequestItem::ChangeValue(Standard_Integer Index)
{
  StepAP203_StartRequestItem* tmp = new StepAP203_StartRequestItem();
  *tmp = ((StepAP203_Array1OfStartRequestItem*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepAP203_StartRequestItem(tmp);
}


