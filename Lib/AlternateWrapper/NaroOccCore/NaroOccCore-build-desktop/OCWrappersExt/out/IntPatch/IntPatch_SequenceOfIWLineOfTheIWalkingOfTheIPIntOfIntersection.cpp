// File generated by CPPExt (CPP file)
//

#include "IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection.h"
#include "../Converter.h"
#include "IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection.h"
#include "IntPatch_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection.h"


using namespace OCNaroWrappers;

OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection(IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection();
}

OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::Assign(OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ Other)
{
  IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection* tmp = new IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection();
  *tmp = ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Assign(*((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)Other->Handle));
  return gcnew OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection(tmp);
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::Append(OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ T)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Append(*((Handle_IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection*)T->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::Append(OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ S)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Append(*((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)S->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::Prepend(OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ T)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Prepend(*((Handle_IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection*)T->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::Prepend(OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ S)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Prepend(*((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)S->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ T)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->InsertBefore(Index, *((Handle_IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection*)T->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ S)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->InsertBefore(Index, *((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)S->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ T)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->InsertAfter(Index, *((Handle_IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection*)T->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ S)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->InsertAfter(Index, *((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)S->Handle));
}

OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::First()
{
  Handle(IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection) tmp = ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->First();
  return gcnew OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection(&tmp);
}

OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::Last()
{
  Handle(IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection) tmp = ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Last();
  return gcnew OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection(&tmp);
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::Split(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection^ Sub)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Split(Index, *((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)Sub->Handle));
}

OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::Value(Standard_Integer Index)
{
  Handle(IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection) tmp = ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Value(Index);
  return gcnew OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection(&tmp);
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::SetValue(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ I)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->SetValue(Index, *((Handle_IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection*)I->Handle));
}

OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::ChangeValue(Standard_Integer Index)
{
  Handle(IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection) tmp = ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->ChangeValue(Index);
  return gcnew OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection(&tmp);
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::Remove(Standard_Integer Index)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Remove(Index);
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Remove(FromIndex, ToIndex);
}


