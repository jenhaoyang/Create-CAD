// File generated by CPPExt (CPP file)
//

#include "IntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds.h"
#include "../Converter.h"
#include "IntPatch_ThePathPointOfTheSOnBounds.h"
#include "IntPatch_SequenceOfPathPointOfTheSOnBounds.h"


using namespace OCNaroWrappers;

OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds::OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds(Handle(IntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds(*nativeHandle);
}

OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds::OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds(OCNaroWrappers::OCIntPatch_ThePathPointOfTheSOnBounds^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds(new IntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds(*((IntPatch_ThePathPointOfTheSOnBounds*)I->Handle), n, p));
}

OCIntPatch_ThePathPointOfTheSOnBounds^ OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds::Value()
{
  IntPatch_ThePathPointOfTheSOnBounds* tmp = new IntPatch_ThePathPointOfTheSOnBounds();
  *tmp = (*((Handle_IntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds*)nativeHandle))->Value();
  return gcnew OCIntPatch_ThePathPointOfTheSOnBounds(tmp);
}


