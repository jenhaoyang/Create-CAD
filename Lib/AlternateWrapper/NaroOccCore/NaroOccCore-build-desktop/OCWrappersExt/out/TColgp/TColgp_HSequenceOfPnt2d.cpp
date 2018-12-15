// File generated by CPPExt (CPP file)
//

#include "TColgp_HSequenceOfPnt2d.h"
#include "../Converter.h"
#include "../gp/gp_Pnt2d.h"
#include "TColgp_SequenceOfPnt2d.h"


using namespace OCNaroWrappers;

OCTColgp_HSequenceOfPnt2d::OCTColgp_HSequenceOfPnt2d(Handle(TColgp_HSequenceOfPnt2d)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColgp_HSequenceOfPnt2d(*nativeHandle);
}

OCTColgp_HSequenceOfPnt2d::OCTColgp_HSequenceOfPnt2d() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HSequenceOfPnt2d(new TColgp_HSequenceOfPnt2d());
}

 System::Boolean OCTColgp_HSequenceOfPnt2d::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCTColgp_HSequenceOfPnt2d::Length()
{
  return (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Length();
}

 void OCTColgp_HSequenceOfPnt2d::Clear()
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Clear();
}

 void OCTColgp_HSequenceOfPnt2d::Append(OCNaroWrappers::OCgp_Pnt2d^ anItem)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Append(*((gp_Pnt2d*)anItem->Handle));
}

 void OCTColgp_HSequenceOfPnt2d::Append(OCNaroWrappers::OCTColgp_HSequenceOfPnt2d^ aSequence)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Append(*((Handle_TColgp_HSequenceOfPnt2d*)aSequence->Handle));
}

 void OCTColgp_HSequenceOfPnt2d::Prepend(OCNaroWrappers::OCgp_Pnt2d^ anItem)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Prepend(*((gp_Pnt2d*)anItem->Handle));
}

 void OCTColgp_HSequenceOfPnt2d::Prepend(OCNaroWrappers::OCTColgp_HSequenceOfPnt2d^ aSequence)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Prepend(*((Handle_TColgp_HSequenceOfPnt2d*)aSequence->Handle));
}

 void OCTColgp_HSequenceOfPnt2d::Reverse()
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Reverse();
}

 void OCTColgp_HSequenceOfPnt2d::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCgp_Pnt2d^ anItem)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->InsertBefore(anIndex, *((gp_Pnt2d*)anItem->Handle));
}

 void OCTColgp_HSequenceOfPnt2d::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTColgp_HSequenceOfPnt2d^ aSequence)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->InsertBefore(anIndex, *((Handle_TColgp_HSequenceOfPnt2d*)aSequence->Handle));
}

 void OCTColgp_HSequenceOfPnt2d::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCgp_Pnt2d^ anItem)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->InsertAfter(anIndex, *((gp_Pnt2d*)anItem->Handle));
}

 void OCTColgp_HSequenceOfPnt2d::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTColgp_HSequenceOfPnt2d^ aSequence)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->InsertAfter(anIndex, *((Handle_TColgp_HSequenceOfPnt2d*)aSequence->Handle));
}

 void OCTColgp_HSequenceOfPnt2d::Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Exchange(anIndex, anOtherIndex);
}

OCTColgp_HSequenceOfPnt2d^ OCTColgp_HSequenceOfPnt2d::Split(Standard_Integer anIndex)
{
  Handle(TColgp_HSequenceOfPnt2d) tmp = (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Split(anIndex);
  return gcnew OCTColgp_HSequenceOfPnt2d(&tmp);
}

 void OCTColgp_HSequenceOfPnt2d::SetValue(Standard_Integer anIndex, OCNaroWrappers::OCgp_Pnt2d^ anItem)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->SetValue(anIndex, *((gp_Pnt2d*)anItem->Handle));
}

OCgp_Pnt2d^ OCTColgp_HSequenceOfPnt2d::Value(Standard_Integer anIndex)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Value(anIndex);
  return gcnew OCgp_Pnt2d(tmp);
}

OCgp_Pnt2d^ OCTColgp_HSequenceOfPnt2d::ChangeValue(Standard_Integer anIndex)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->ChangeValue(anIndex);
  return gcnew OCgp_Pnt2d(tmp);
}

 void OCTColgp_HSequenceOfPnt2d::Remove(Standard_Integer anIndex)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Remove(anIndex);
}

 void OCTColgp_HSequenceOfPnt2d::Remove(Standard_Integer fromIndex, Standard_Integer toIndex)
{
  (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Remove(fromIndex, toIndex);
}

OCTColgp_SequenceOfPnt2d^ OCTColgp_HSequenceOfPnt2d::Sequence()
{
  TColgp_SequenceOfPnt2d* tmp = new TColgp_SequenceOfPnt2d();
  *tmp = (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->Sequence();
  return gcnew OCTColgp_SequenceOfPnt2d(tmp);
}

OCTColgp_SequenceOfPnt2d^ OCTColgp_HSequenceOfPnt2d::ChangeSequence()
{
  TColgp_SequenceOfPnt2d* tmp = new TColgp_SequenceOfPnt2d();
  *tmp = (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->ChangeSequence();
  return gcnew OCTColgp_SequenceOfPnt2d(tmp);
}

OCTColgp_HSequenceOfPnt2d^ OCTColgp_HSequenceOfPnt2d::ShallowCopy()
{
  Handle(TColgp_HSequenceOfPnt2d) tmp = (*((Handle_TColgp_HSequenceOfPnt2d*)nativeHandle))->ShallowCopy();
  return gcnew OCTColgp_HSequenceOfPnt2d(&tmp);
}


