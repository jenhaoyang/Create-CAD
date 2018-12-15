// File generated by CPPExt (CPP file)
//

#include "IntRes2d_SequenceOfIntersectionSegment.h"
#include "../Converter.h"
#include "IntRes2d_IntersectionSegment.h"
#include "IntRes2d_SequenceNodeOfSequenceOfIntersectionSegment.h"


using namespace OCNaroWrappers;

OCIntRes2d_SequenceOfIntersectionSegment::OCIntRes2d_SequenceOfIntersectionSegment(IntRes2d_SequenceOfIntersectionSegment* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntRes2d_SequenceOfIntersectionSegment::OCIntRes2d_SequenceOfIntersectionSegment() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new IntRes2d_SequenceOfIntersectionSegment();
}

OCIntRes2d_SequenceOfIntersectionSegment^ OCIntRes2d_SequenceOfIntersectionSegment::Assign(OCNaroWrappers::OCIntRes2d_SequenceOfIntersectionSegment^ Other)
{
  IntRes2d_SequenceOfIntersectionSegment* tmp = new IntRes2d_SequenceOfIntersectionSegment();
  *tmp = ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->Assign(*((IntRes2d_SequenceOfIntersectionSegment*)Other->Handle));
  return gcnew OCIntRes2d_SequenceOfIntersectionSegment(tmp);
}

 void OCIntRes2d_SequenceOfIntersectionSegment::Append(OCNaroWrappers::OCIntRes2d_IntersectionSegment^ T)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->Append(*((IntRes2d_IntersectionSegment*)T->Handle));
}

 void OCIntRes2d_SequenceOfIntersectionSegment::Append(OCNaroWrappers::OCIntRes2d_SequenceOfIntersectionSegment^ S)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->Append(*((IntRes2d_SequenceOfIntersectionSegment*)S->Handle));
}

 void OCIntRes2d_SequenceOfIntersectionSegment::Prepend(OCNaroWrappers::OCIntRes2d_IntersectionSegment^ T)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->Prepend(*((IntRes2d_IntersectionSegment*)T->Handle));
}

 void OCIntRes2d_SequenceOfIntersectionSegment::Prepend(OCNaroWrappers::OCIntRes2d_SequenceOfIntersectionSegment^ S)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->Prepend(*((IntRes2d_SequenceOfIntersectionSegment*)S->Handle));
}

 void OCIntRes2d_SequenceOfIntersectionSegment::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntRes2d_IntersectionSegment^ T)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->InsertBefore(Index, *((IntRes2d_IntersectionSegment*)T->Handle));
}

 void OCIntRes2d_SequenceOfIntersectionSegment::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntRes2d_SequenceOfIntersectionSegment^ S)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->InsertBefore(Index, *((IntRes2d_SequenceOfIntersectionSegment*)S->Handle));
}

 void OCIntRes2d_SequenceOfIntersectionSegment::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntRes2d_IntersectionSegment^ T)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->InsertAfter(Index, *((IntRes2d_IntersectionSegment*)T->Handle));
}

 void OCIntRes2d_SequenceOfIntersectionSegment::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntRes2d_SequenceOfIntersectionSegment^ S)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->InsertAfter(Index, *((IntRes2d_SequenceOfIntersectionSegment*)S->Handle));
}

OCIntRes2d_IntersectionSegment^ OCIntRes2d_SequenceOfIntersectionSegment::First()
{
  IntRes2d_IntersectionSegment* tmp = new IntRes2d_IntersectionSegment();
  *tmp = ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->First();
  return gcnew OCIntRes2d_IntersectionSegment(tmp);
}

OCIntRes2d_IntersectionSegment^ OCIntRes2d_SequenceOfIntersectionSegment::Last()
{
  IntRes2d_IntersectionSegment* tmp = new IntRes2d_IntersectionSegment();
  *tmp = ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->Last();
  return gcnew OCIntRes2d_IntersectionSegment(tmp);
}

 void OCIntRes2d_SequenceOfIntersectionSegment::Split(Standard_Integer Index, OCNaroWrappers::OCIntRes2d_SequenceOfIntersectionSegment^ Sub)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->Split(Index, *((IntRes2d_SequenceOfIntersectionSegment*)Sub->Handle));
}

OCIntRes2d_IntersectionSegment^ OCIntRes2d_SequenceOfIntersectionSegment::Value(Standard_Integer Index)
{
  IntRes2d_IntersectionSegment* tmp = new IntRes2d_IntersectionSegment();
  *tmp = ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->Value(Index);
  return gcnew OCIntRes2d_IntersectionSegment(tmp);
}

 void OCIntRes2d_SequenceOfIntersectionSegment::SetValue(Standard_Integer Index, OCNaroWrappers::OCIntRes2d_IntersectionSegment^ I)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->SetValue(Index, *((IntRes2d_IntersectionSegment*)I->Handle));
}

OCIntRes2d_IntersectionSegment^ OCIntRes2d_SequenceOfIntersectionSegment::ChangeValue(Standard_Integer Index)
{
  IntRes2d_IntersectionSegment* tmp = new IntRes2d_IntersectionSegment();
  *tmp = ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->ChangeValue(Index);
  return gcnew OCIntRes2d_IntersectionSegment(tmp);
}

 void OCIntRes2d_SequenceOfIntersectionSegment::Remove(Standard_Integer Index)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->Remove(Index);
}

 void OCIntRes2d_SequenceOfIntersectionSegment::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((IntRes2d_SequenceOfIntersectionSegment*)nativeHandle)->Remove(FromIndex, ToIndex);
}


