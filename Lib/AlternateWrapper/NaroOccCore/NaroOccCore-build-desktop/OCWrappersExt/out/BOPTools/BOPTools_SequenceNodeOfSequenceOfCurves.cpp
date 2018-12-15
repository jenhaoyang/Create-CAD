// File generated by CPPExt (CPP file)
//

#include "BOPTools_SequenceNodeOfSequenceOfCurves.h"
#include "../Converter.h"
#include "BOPTools_Curve.h"
#include "BOPTools_SequenceOfCurves.h"


using namespace OCNaroWrappers;

OCBOPTools_SequenceNodeOfSequenceOfCurves::OCBOPTools_SequenceNodeOfSequenceOfCurves(Handle(BOPTools_SequenceNodeOfSequenceOfCurves)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOPTools_SequenceNodeOfSequenceOfCurves(*nativeHandle);
}

OCBOPTools_SequenceNodeOfSequenceOfCurves::OCBOPTools_SequenceNodeOfSequenceOfCurves(OCNaroWrappers::OCBOPTools_Curve^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOPTools_SequenceNodeOfSequenceOfCurves(new BOPTools_SequenceNodeOfSequenceOfCurves(*((BOPTools_Curve*)I->Handle), n, p));
}

OCBOPTools_Curve^ OCBOPTools_SequenceNodeOfSequenceOfCurves::Value()
{
  BOPTools_Curve* tmp = new BOPTools_Curve();
  *tmp = (*((Handle_BOPTools_SequenceNodeOfSequenceOfCurves*)nativeHandle))->Value();
  return gcnew OCBOPTools_Curve(tmp);
}


