// File generated by CPPExt (CPP file)
//

#include "HatchGen_PointsOnElement.h"
#include "../Converter.h"
#include "HatchGen_PointOnElement.h"
#include "HatchGen_SequenceNodeOfPointsOnElement.h"


using namespace OCNaroWrappers;

OCHatchGen_PointsOnElement::OCHatchGen_PointsOnElement(HatchGen_PointsOnElement* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCHatchGen_PointsOnElement::OCHatchGen_PointsOnElement() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new HatchGen_PointsOnElement();
}

OCHatchGen_PointsOnElement^ OCHatchGen_PointsOnElement::Assign(OCNaroWrappers::OCHatchGen_PointsOnElement^ Other)
{
  HatchGen_PointsOnElement* tmp = new HatchGen_PointsOnElement();
  *tmp = ((HatchGen_PointsOnElement*)nativeHandle)->Assign(*((HatchGen_PointsOnElement*)Other->Handle));
  return gcnew OCHatchGen_PointsOnElement(tmp);
}

 void OCHatchGen_PointsOnElement::Append(OCNaroWrappers::OCHatchGen_PointOnElement^ T)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->Append(*((HatchGen_PointOnElement*)T->Handle));
}

 void OCHatchGen_PointsOnElement::Append(OCNaroWrappers::OCHatchGen_PointsOnElement^ S)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->Append(*((HatchGen_PointsOnElement*)S->Handle));
}

 void OCHatchGen_PointsOnElement::Prepend(OCNaroWrappers::OCHatchGen_PointOnElement^ T)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->Prepend(*((HatchGen_PointOnElement*)T->Handle));
}

 void OCHatchGen_PointsOnElement::Prepend(OCNaroWrappers::OCHatchGen_PointsOnElement^ S)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->Prepend(*((HatchGen_PointsOnElement*)S->Handle));
}

 void OCHatchGen_PointsOnElement::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCHatchGen_PointOnElement^ T)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->InsertBefore(Index, *((HatchGen_PointOnElement*)T->Handle));
}

 void OCHatchGen_PointsOnElement::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCHatchGen_PointsOnElement^ S)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->InsertBefore(Index, *((HatchGen_PointsOnElement*)S->Handle));
}

 void OCHatchGen_PointsOnElement::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCHatchGen_PointOnElement^ T)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->InsertAfter(Index, *((HatchGen_PointOnElement*)T->Handle));
}

 void OCHatchGen_PointsOnElement::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCHatchGen_PointsOnElement^ S)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->InsertAfter(Index, *((HatchGen_PointsOnElement*)S->Handle));
}

OCHatchGen_PointOnElement^ OCHatchGen_PointsOnElement::First()
{
  HatchGen_PointOnElement* tmp = new HatchGen_PointOnElement();
  *tmp = ((HatchGen_PointsOnElement*)nativeHandle)->First();
  return gcnew OCHatchGen_PointOnElement(tmp);
}

OCHatchGen_PointOnElement^ OCHatchGen_PointsOnElement::Last()
{
  HatchGen_PointOnElement* tmp = new HatchGen_PointOnElement();
  *tmp = ((HatchGen_PointsOnElement*)nativeHandle)->Last();
  return gcnew OCHatchGen_PointOnElement(tmp);
}

 void OCHatchGen_PointsOnElement::Split(Standard_Integer Index, OCNaroWrappers::OCHatchGen_PointsOnElement^ Sub)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->Split(Index, *((HatchGen_PointsOnElement*)Sub->Handle));
}

OCHatchGen_PointOnElement^ OCHatchGen_PointsOnElement::Value(Standard_Integer Index)
{
  HatchGen_PointOnElement* tmp = new HatchGen_PointOnElement();
  *tmp = ((HatchGen_PointsOnElement*)nativeHandle)->Value(Index);
  return gcnew OCHatchGen_PointOnElement(tmp);
}

 void OCHatchGen_PointsOnElement::SetValue(Standard_Integer Index, OCNaroWrappers::OCHatchGen_PointOnElement^ I)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->SetValue(Index, *((HatchGen_PointOnElement*)I->Handle));
}

OCHatchGen_PointOnElement^ OCHatchGen_PointsOnElement::ChangeValue(Standard_Integer Index)
{
  HatchGen_PointOnElement* tmp = new HatchGen_PointOnElement();
  *tmp = ((HatchGen_PointsOnElement*)nativeHandle)->ChangeValue(Index);
  return gcnew OCHatchGen_PointOnElement(tmp);
}

 void OCHatchGen_PointsOnElement::Remove(Standard_Integer Index)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->Remove(Index);
}

 void OCHatchGen_PointsOnElement::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((HatchGen_PointsOnElement*)nativeHandle)->Remove(FromIndex, ToIndex);
}


