// File generated by CPPExt (CPP file)
//

#include "Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC.h"
#include "../Converter.h"
#include "Extrema_POnCurv.h"
#include "Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC.h"


using namespace OCNaroWrappers;

OCExtrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC::OCExtrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC(Handle(Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC(*nativeHandle);
}

OCExtrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC::OCExtrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC(OCNaroWrappers::OCExtrema_POnCurv^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC(new Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC(*((Extrema_POnCurv*)I->Handle), n, p));
}

OCExtrema_POnCurv^ OCExtrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC::Value()
{
  Extrema_POnCurv* tmp = new Extrema_POnCurv();
  *tmp = (*((Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle))->Value();
  return gcnew OCExtrema_POnCurv(tmp);
}


