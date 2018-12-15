// File generated by CPPExt (CPP file)
//

#include "MAT_SequenceNodeOfSequenceOfBasicElt.h"
#include "../Converter.h"
#include "MAT_BasicElt.h"
#include "MAT_SequenceOfBasicElt.h"


using namespace OCNaroWrappers;

OCMAT_SequenceNodeOfSequenceOfBasicElt::OCMAT_SequenceNodeOfSequenceOfBasicElt(Handle(MAT_SequenceNodeOfSequenceOfBasicElt)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MAT_SequenceNodeOfSequenceOfBasicElt(*nativeHandle);
}

OCMAT_SequenceNodeOfSequenceOfBasicElt::OCMAT_SequenceNodeOfSequenceOfBasicElt(OCNaroWrappers::OCMAT_BasicElt^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MAT_SequenceNodeOfSequenceOfBasicElt(new MAT_SequenceNodeOfSequenceOfBasicElt(*((Handle_MAT_BasicElt*)I->Handle), n, p));
}

OCMAT_BasicElt^ OCMAT_SequenceNodeOfSequenceOfBasicElt::Value()
{
  Handle(MAT_BasicElt) tmp = (*((Handle_MAT_SequenceNodeOfSequenceOfBasicElt*)nativeHandle))->Value();
  return gcnew OCMAT_BasicElt(&tmp);
}


