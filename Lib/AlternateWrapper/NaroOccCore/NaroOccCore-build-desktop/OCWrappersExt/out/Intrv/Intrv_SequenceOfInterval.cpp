// File generated by CPPExt (CPP file)
//

#include "Intrv_SequenceOfInterval.h"
#include "../Converter.h"
#include "Intrv_Interval.h"
#include "Intrv_SequenceNodeOfSequenceOfInterval.h"


using namespace OCNaroWrappers;

OCIntrv_SequenceOfInterval::OCIntrv_SequenceOfInterval(Intrv_SequenceOfInterval* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntrv_SequenceOfInterval::OCIntrv_SequenceOfInterval() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Intrv_SequenceOfInterval();
}

OCIntrv_SequenceOfInterval^ OCIntrv_SequenceOfInterval::Assign(OCNaroWrappers::OCIntrv_SequenceOfInterval^ Other)
{
  Intrv_SequenceOfInterval* tmp = new Intrv_SequenceOfInterval();
  *tmp = ((Intrv_SequenceOfInterval*)nativeHandle)->Assign(*((Intrv_SequenceOfInterval*)Other->Handle));
  return gcnew OCIntrv_SequenceOfInterval(tmp);
}

 void OCIntrv_SequenceOfInterval::Append(OCNaroWrappers::OCIntrv_Interval^ T)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->Append(*((Intrv_Interval*)T->Handle));
}

 void OCIntrv_SequenceOfInterval::Append(OCNaroWrappers::OCIntrv_SequenceOfInterval^ S)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->Append(*((Intrv_SequenceOfInterval*)S->Handle));
}

 void OCIntrv_SequenceOfInterval::Prepend(OCNaroWrappers::OCIntrv_Interval^ T)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->Prepend(*((Intrv_Interval*)T->Handle));
}

 void OCIntrv_SequenceOfInterval::Prepend(OCNaroWrappers::OCIntrv_SequenceOfInterval^ S)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->Prepend(*((Intrv_SequenceOfInterval*)S->Handle));
}

 void OCIntrv_SequenceOfInterval::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntrv_Interval^ T)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->InsertBefore(Index, *((Intrv_Interval*)T->Handle));
}

 void OCIntrv_SequenceOfInterval::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntrv_SequenceOfInterval^ S)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->InsertBefore(Index, *((Intrv_SequenceOfInterval*)S->Handle));
}

 void OCIntrv_SequenceOfInterval::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntrv_Interval^ T)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->InsertAfter(Index, *((Intrv_Interval*)T->Handle));
}

 void OCIntrv_SequenceOfInterval::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntrv_SequenceOfInterval^ S)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->InsertAfter(Index, *((Intrv_SequenceOfInterval*)S->Handle));
}

OCIntrv_Interval^ OCIntrv_SequenceOfInterval::First()
{
  Intrv_Interval* tmp = new Intrv_Interval();
  *tmp = ((Intrv_SequenceOfInterval*)nativeHandle)->First();
  return gcnew OCIntrv_Interval(tmp);
}

OCIntrv_Interval^ OCIntrv_SequenceOfInterval::Last()
{
  Intrv_Interval* tmp = new Intrv_Interval();
  *tmp = ((Intrv_SequenceOfInterval*)nativeHandle)->Last();
  return gcnew OCIntrv_Interval(tmp);
}

 void OCIntrv_SequenceOfInterval::Split(Standard_Integer Index, OCNaroWrappers::OCIntrv_SequenceOfInterval^ Sub)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->Split(Index, *((Intrv_SequenceOfInterval*)Sub->Handle));
}

OCIntrv_Interval^ OCIntrv_SequenceOfInterval::Value(Standard_Integer Index)
{
  Intrv_Interval* tmp = new Intrv_Interval();
  *tmp = ((Intrv_SequenceOfInterval*)nativeHandle)->Value(Index);
  return gcnew OCIntrv_Interval(tmp);
}

 void OCIntrv_SequenceOfInterval::SetValue(Standard_Integer Index, OCNaroWrappers::OCIntrv_Interval^ I)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->SetValue(Index, *((Intrv_Interval*)I->Handle));
}

OCIntrv_Interval^ OCIntrv_SequenceOfInterval::ChangeValue(Standard_Integer Index)
{
  Intrv_Interval* tmp = new Intrv_Interval();
  *tmp = ((Intrv_SequenceOfInterval*)nativeHandle)->ChangeValue(Index);
  return gcnew OCIntrv_Interval(tmp);
}

 void OCIntrv_SequenceOfInterval::Remove(Standard_Integer Index)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->Remove(Index);
}

 void OCIntrv_SequenceOfInterval::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Intrv_SequenceOfInterval*)nativeHandle)->Remove(FromIndex, ToIndex);
}


