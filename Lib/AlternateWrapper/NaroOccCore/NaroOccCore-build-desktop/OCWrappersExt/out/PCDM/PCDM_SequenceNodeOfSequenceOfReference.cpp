// File generated by CPPExt (CPP file)
//

#include "PCDM_SequenceNodeOfSequenceOfReference.h"
#include "../Converter.h"
#include "PCDM_Reference.h"
#include "PCDM_SequenceOfReference.h"


using namespace OCNaroWrappers;

OCPCDM_SequenceNodeOfSequenceOfReference::OCPCDM_SequenceNodeOfSequenceOfReference(Handle(PCDM_SequenceNodeOfSequenceOfReference)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_PCDM_SequenceNodeOfSequenceOfReference(*nativeHandle);
}

OCPCDM_SequenceNodeOfSequenceOfReference::OCPCDM_SequenceNodeOfSequenceOfReference(OCNaroWrappers::OCPCDM_Reference^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PCDM_SequenceNodeOfSequenceOfReference(new PCDM_SequenceNodeOfSequenceOfReference(*((PCDM_Reference*)I->Handle), n, p));
}

OCPCDM_Reference^ OCPCDM_SequenceNodeOfSequenceOfReference::Value()
{
  PCDM_Reference* tmp = new PCDM_Reference();
  *tmp = (*((Handle_PCDM_SequenceNodeOfSequenceOfReference*)nativeHandle))->Value();
  return gcnew OCPCDM_Reference(tmp);
}

