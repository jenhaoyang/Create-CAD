// File generated by CPPExt (CPP file)
//

#include "StepAP214_Array1OfApprovalItem.h"
#include "../Converter.h"
#include "StepAP214_ApprovalItem.h"


using namespace OCNaroWrappers;

OCStepAP214_Array1OfApprovalItem::OCStepAP214_Array1OfApprovalItem(StepAP214_Array1OfApprovalItem* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_Array1OfApprovalItem::OCStepAP214_Array1OfApprovalItem(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP214_Array1OfApprovalItem(Low, Up);
}

OCStepAP214_Array1OfApprovalItem::OCStepAP214_Array1OfApprovalItem(OCNaroWrappers::OCStepAP214_ApprovalItem^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP214_Array1OfApprovalItem(*((StepAP214_ApprovalItem*)Item->Handle), Low, Up);
}

 void OCStepAP214_Array1OfApprovalItem::Init(OCNaroWrappers::OCStepAP214_ApprovalItem^ V)
{
  ((StepAP214_Array1OfApprovalItem*)nativeHandle)->Init(*((StepAP214_ApprovalItem*)V->Handle));
}

 System::Boolean OCStepAP214_Array1OfApprovalItem::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepAP214_Array1OfApprovalItem*)nativeHandle)->IsAllocated());
}

OCStepAP214_Array1OfApprovalItem^ OCStepAP214_Array1OfApprovalItem::Assign(OCNaroWrappers::OCStepAP214_Array1OfApprovalItem^ Other)
{
  StepAP214_Array1OfApprovalItem* tmp = new StepAP214_Array1OfApprovalItem(0, 0);
  *tmp = ((StepAP214_Array1OfApprovalItem*)nativeHandle)->Assign(*((StepAP214_Array1OfApprovalItem*)Other->Handle));
  return gcnew OCStepAP214_Array1OfApprovalItem(tmp);
}

 Standard_Integer OCStepAP214_Array1OfApprovalItem::Length()
{
  return ((StepAP214_Array1OfApprovalItem*)nativeHandle)->Length();
}

 Standard_Integer OCStepAP214_Array1OfApprovalItem::Lower()
{
  return ((StepAP214_Array1OfApprovalItem*)nativeHandle)->Lower();
}

 Standard_Integer OCStepAP214_Array1OfApprovalItem::Upper()
{
  return ((StepAP214_Array1OfApprovalItem*)nativeHandle)->Upper();
}

 void OCStepAP214_Array1OfApprovalItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_ApprovalItem^ Value)
{
  ((StepAP214_Array1OfApprovalItem*)nativeHandle)->SetValue(Index, *((StepAP214_ApprovalItem*)Value->Handle));
}

OCStepAP214_ApprovalItem^ OCStepAP214_Array1OfApprovalItem::Value(Standard_Integer Index)
{
  StepAP214_ApprovalItem* tmp = new StepAP214_ApprovalItem();
  *tmp = ((StepAP214_Array1OfApprovalItem*)nativeHandle)->Value(Index);
  return gcnew OCStepAP214_ApprovalItem(tmp);
}

OCStepAP214_ApprovalItem^ OCStepAP214_Array1OfApprovalItem::ChangeValue(Standard_Integer Index)
{
  StepAP214_ApprovalItem* tmp = new StepAP214_ApprovalItem();
  *tmp = ((StepAP214_Array1OfApprovalItem*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepAP214_ApprovalItem(tmp);
}

