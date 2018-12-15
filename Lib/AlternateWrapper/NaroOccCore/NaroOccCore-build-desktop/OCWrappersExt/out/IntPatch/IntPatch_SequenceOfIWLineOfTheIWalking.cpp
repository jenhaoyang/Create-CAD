// File generated by CPPExt (CPP file)
//

#include "IntPatch_SequenceOfIWLineOfTheIWalking.h"
#include "../Converter.h"
#include "IntPatch_TheIWLineOfTheIWalking.h"
#include "IntPatch_SequenceNodeOfSequenceOfIWLineOfTheIWalking.h"


using namespace OCNaroWrappers;

OCIntPatch_SequenceOfIWLineOfTheIWalking::OCIntPatch_SequenceOfIWLineOfTheIWalking(IntPatch_SequenceOfIWLineOfTheIWalking* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_SequenceOfIWLineOfTheIWalking::OCIntPatch_SequenceOfIWLineOfTheIWalking() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_SequenceOfIWLineOfTheIWalking();
}

OCIntPatch_SequenceOfIWLineOfTheIWalking^ OCIntPatch_SequenceOfIWLineOfTheIWalking::Assign(OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalking^ Other)
{
  IntPatch_SequenceOfIWLineOfTheIWalking* tmp = new IntPatch_SequenceOfIWLineOfTheIWalking();
  *tmp = ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->Assign(*((IntPatch_SequenceOfIWLineOfTheIWalking*)Other->Handle));
  return gcnew OCIntPatch_SequenceOfIWLineOfTheIWalking(tmp);
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::Append(OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalking^ T)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->Append(*((Handle_IntPatch_TheIWLineOfTheIWalking*)T->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::Append(OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalking^ S)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->Append(*((IntPatch_SequenceOfIWLineOfTheIWalking*)S->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::Prepend(OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalking^ T)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->Prepend(*((Handle_IntPatch_TheIWLineOfTheIWalking*)T->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::Prepend(OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalking^ S)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->Prepend(*((IntPatch_SequenceOfIWLineOfTheIWalking*)S->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalking^ T)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->InsertBefore(Index, *((Handle_IntPatch_TheIWLineOfTheIWalking*)T->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalking^ S)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->InsertBefore(Index, *((IntPatch_SequenceOfIWLineOfTheIWalking*)S->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalking^ T)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->InsertAfter(Index, *((Handle_IntPatch_TheIWLineOfTheIWalking*)T->Handle));
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalking^ S)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->InsertAfter(Index, *((IntPatch_SequenceOfIWLineOfTheIWalking*)S->Handle));
}

OCIntPatch_TheIWLineOfTheIWalking^ OCIntPatch_SequenceOfIWLineOfTheIWalking::First()
{
  Handle(IntPatch_TheIWLineOfTheIWalking) tmp = ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->First();
  return gcnew OCIntPatch_TheIWLineOfTheIWalking(&tmp);
}

OCIntPatch_TheIWLineOfTheIWalking^ OCIntPatch_SequenceOfIWLineOfTheIWalking::Last()
{
  Handle(IntPatch_TheIWLineOfTheIWalking) tmp = ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->Last();
  return gcnew OCIntPatch_TheIWLineOfTheIWalking(&tmp);
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::Split(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfIWLineOfTheIWalking^ Sub)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->Split(Index, *((IntPatch_SequenceOfIWLineOfTheIWalking*)Sub->Handle));
}

OCIntPatch_TheIWLineOfTheIWalking^ OCIntPatch_SequenceOfIWLineOfTheIWalking::Value(Standard_Integer Index)
{
  Handle(IntPatch_TheIWLineOfTheIWalking) tmp = ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->Value(Index);
  return gcnew OCIntPatch_TheIWLineOfTheIWalking(&tmp);
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::SetValue(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheIWLineOfTheIWalking^ I)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->SetValue(Index, *((Handle_IntPatch_TheIWLineOfTheIWalking*)I->Handle));
}

OCIntPatch_TheIWLineOfTheIWalking^ OCIntPatch_SequenceOfIWLineOfTheIWalking::ChangeValue(Standard_Integer Index)
{
  Handle(IntPatch_TheIWLineOfTheIWalking) tmp = ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->ChangeValue(Index);
  return gcnew OCIntPatch_TheIWLineOfTheIWalking(&tmp);
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::Remove(Standard_Integer Index)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->Remove(Index);
}

 void OCIntPatch_SequenceOfIWLineOfTheIWalking::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((IntPatch_SequenceOfIWLineOfTheIWalking*)nativeHandle)->Remove(FromIndex, ToIndex);
}


