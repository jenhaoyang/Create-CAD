// File generated by CPPExt (CPP file)
//

#include "TColStd_SequenceNodeOfSequenceOfHExtendedString.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HExtendedString.h"
#include "TColStd_SequenceOfHExtendedString.h"


using namespace OCNaroWrappers;

OCTColStd_SequenceNodeOfSequenceOfHExtendedString::OCTColStd_SequenceNodeOfSequenceOfHExtendedString(Handle(TColStd_SequenceNodeOfSequenceOfHExtendedString)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_SequenceNodeOfSequenceOfHExtendedString(*nativeHandle);
}

OCTColStd_SequenceNodeOfSequenceOfHExtendedString::OCTColStd_SequenceNodeOfSequenceOfHExtendedString(OCNaroWrappers::OCTCollection_HExtendedString^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_SequenceNodeOfSequenceOfHExtendedString(new TColStd_SequenceNodeOfSequenceOfHExtendedString(*((Handle_TCollection_HExtendedString*)I->Handle), n, p));
}

OCTCollection_HExtendedString^ OCTColStd_SequenceNodeOfSequenceOfHExtendedString::Value()
{
  Handle(TCollection_HExtendedString) tmp = (*((Handle_TColStd_SequenceNodeOfSequenceOfHExtendedString*)nativeHandle))->Value();
  return gcnew OCTCollection_HExtendedString(&tmp);
}


