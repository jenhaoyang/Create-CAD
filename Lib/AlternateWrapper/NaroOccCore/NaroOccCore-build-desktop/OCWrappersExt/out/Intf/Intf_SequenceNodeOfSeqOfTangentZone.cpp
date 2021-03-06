// File generated by CPPExt (CPP file)
//

#include "Intf_SequenceNodeOfSeqOfTangentZone.h"
#include "../Converter.h"
#include "Intf_TangentZone.h"
#include "Intf_SeqOfTangentZone.h"


using namespace OCNaroWrappers;

OCIntf_SequenceNodeOfSeqOfTangentZone::OCIntf_SequenceNodeOfSeqOfTangentZone(Handle(Intf_SequenceNodeOfSeqOfTangentZone)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Intf_SequenceNodeOfSeqOfTangentZone(*nativeHandle);
}

OCIntf_SequenceNodeOfSeqOfTangentZone::OCIntf_SequenceNodeOfSeqOfTangentZone(OCNaroWrappers::OCIntf_TangentZone^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Intf_SequenceNodeOfSeqOfTangentZone(new Intf_SequenceNodeOfSeqOfTangentZone(*((Intf_TangentZone*)I->Handle), n, p));
}

OCIntf_TangentZone^ OCIntf_SequenceNodeOfSeqOfTangentZone::Value()
{
  Intf_TangentZone* tmp = new Intf_TangentZone();
  *tmp = (*((Handle_Intf_SequenceNodeOfSeqOfTangentZone*)nativeHandle))->Value();
  return gcnew OCIntf_TangentZone(tmp);
}


