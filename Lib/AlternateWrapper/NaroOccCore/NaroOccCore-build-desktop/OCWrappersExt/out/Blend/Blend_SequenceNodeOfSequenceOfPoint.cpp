// File generated by CPPExt (CPP file)
//

#include "Blend_SequenceNodeOfSequenceOfPoint.h"
#include "../Converter.h"
#include "Blend_Point.h"
#include "Blend_SequenceOfPoint.h"


using namespace OCNaroWrappers;

OCBlend_SequenceNodeOfSequenceOfPoint::OCBlend_SequenceNodeOfSequenceOfPoint(Handle(Blend_SequenceNodeOfSequenceOfPoint)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Blend_SequenceNodeOfSequenceOfPoint(*nativeHandle);
}

OCBlend_SequenceNodeOfSequenceOfPoint::OCBlend_SequenceNodeOfSequenceOfPoint(OCNaroWrappers::OCBlend_Point^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Blend_SequenceNodeOfSequenceOfPoint(new Blend_SequenceNodeOfSequenceOfPoint(*((Blend_Point*)I->Handle), n, p));
}

OCBlend_Point^ OCBlend_SequenceNodeOfSequenceOfPoint::Value()
{
  Blend_Point* tmp = new Blend_Point();
  *tmp = (*((Handle_Blend_SequenceNodeOfSequenceOfPoint*)nativeHandle))->Value();
  return gcnew OCBlend_Point(tmp);
}


