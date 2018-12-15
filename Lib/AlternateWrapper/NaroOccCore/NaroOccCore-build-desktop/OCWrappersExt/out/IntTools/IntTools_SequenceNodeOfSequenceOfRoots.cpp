// File generated by CPPExt (CPP file)
//

#include "IntTools_SequenceNodeOfSequenceOfRoots.h"
#include "../Converter.h"
#include "IntTools_Root.h"
#include "IntTools_SequenceOfRoots.h"


using namespace OCNaroWrappers;

OCIntTools_SequenceNodeOfSequenceOfRoots::OCIntTools_SequenceNodeOfSequenceOfRoots(Handle(IntTools_SequenceNodeOfSequenceOfRoots)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IntTools_SequenceNodeOfSequenceOfRoots(*nativeHandle);
}

OCIntTools_SequenceNodeOfSequenceOfRoots::OCIntTools_SequenceNodeOfSequenceOfRoots(OCNaroWrappers::OCIntTools_Root^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntTools_SequenceNodeOfSequenceOfRoots(new IntTools_SequenceNodeOfSequenceOfRoots(*((IntTools_Root*)I->Handle), n, p));
}

OCIntTools_Root^ OCIntTools_SequenceNodeOfSequenceOfRoots::Value()
{
  IntTools_Root* tmp = new IntTools_Root();
  *tmp = (*((Handle_IntTools_SequenceNodeOfSequenceOfRoots*)nativeHandle))->Value();
  return gcnew OCIntTools_Root(tmp);
}


