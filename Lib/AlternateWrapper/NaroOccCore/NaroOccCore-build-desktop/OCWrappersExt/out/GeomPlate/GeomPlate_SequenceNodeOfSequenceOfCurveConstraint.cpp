// File generated by CPPExt (CPP file)
//

#include "GeomPlate_SequenceNodeOfSequenceOfCurveConstraint.h"
#include "../Converter.h"
#include "GeomPlate_CurveConstraint.h"
#include "GeomPlate_SequenceOfCurveConstraint.h"


using namespace OCNaroWrappers;

OCGeomPlate_SequenceNodeOfSequenceOfCurveConstraint::OCGeomPlate_SequenceNodeOfSequenceOfCurveConstraint(Handle(GeomPlate_SequenceNodeOfSequenceOfCurveConstraint)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_GeomPlate_SequenceNodeOfSequenceOfCurveConstraint(*nativeHandle);
}

OCGeomPlate_SequenceNodeOfSequenceOfCurveConstraint::OCGeomPlate_SequenceNodeOfSequenceOfCurveConstraint(OCNaroWrappers::OCGeomPlate_CurveConstraint^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_GeomPlate_SequenceNodeOfSequenceOfCurveConstraint(new GeomPlate_SequenceNodeOfSequenceOfCurveConstraint(*((Handle_GeomPlate_CurveConstraint*)I->Handle), n, p));
}

OCGeomPlate_CurveConstraint^ OCGeomPlate_SequenceNodeOfSequenceOfCurveConstraint::Value()
{
  Handle(GeomPlate_CurveConstraint) tmp = (*((Handle_GeomPlate_SequenceNodeOfSequenceOfCurveConstraint*)nativeHandle))->Value();
  return gcnew OCGeomPlate_CurveConstraint(&tmp);
}


