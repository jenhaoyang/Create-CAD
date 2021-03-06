// File generated by CPPExt (CPP file)
//

#include "GeomPlate_SequenceOfCurveConstraint.h"
#include "../Converter.h"
#include "GeomPlate_CurveConstraint.h"
#include "GeomPlate_SequenceNodeOfSequenceOfCurveConstraint.h"


using namespace OCNaroWrappers;

OCGeomPlate_SequenceOfCurveConstraint::OCGeomPlate_SequenceOfCurveConstraint(GeomPlate_SequenceOfCurveConstraint* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGeomPlate_SequenceOfCurveConstraint::OCGeomPlate_SequenceOfCurveConstraint() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new GeomPlate_SequenceOfCurveConstraint();
}

OCGeomPlate_SequenceOfCurveConstraint^ OCGeomPlate_SequenceOfCurveConstraint::Assign(OCNaroWrappers::OCGeomPlate_SequenceOfCurveConstraint^ Other)
{
  GeomPlate_SequenceOfCurveConstraint* tmp = new GeomPlate_SequenceOfCurveConstraint();
  *tmp = ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->Assign(*((GeomPlate_SequenceOfCurveConstraint*)Other->Handle));
  return gcnew OCGeomPlate_SequenceOfCurveConstraint(tmp);
}

 void OCGeomPlate_SequenceOfCurveConstraint::Append(OCNaroWrappers::OCGeomPlate_CurveConstraint^ T)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->Append(*((Handle_GeomPlate_CurveConstraint*)T->Handle));
}

 void OCGeomPlate_SequenceOfCurveConstraint::Append(OCNaroWrappers::OCGeomPlate_SequenceOfCurveConstraint^ S)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->Append(*((GeomPlate_SequenceOfCurveConstraint*)S->Handle));
}

 void OCGeomPlate_SequenceOfCurveConstraint::Prepend(OCNaroWrappers::OCGeomPlate_CurveConstraint^ T)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->Prepend(*((Handle_GeomPlate_CurveConstraint*)T->Handle));
}

 void OCGeomPlate_SequenceOfCurveConstraint::Prepend(OCNaroWrappers::OCGeomPlate_SequenceOfCurveConstraint^ S)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->Prepend(*((GeomPlate_SequenceOfCurveConstraint*)S->Handle));
}

 void OCGeomPlate_SequenceOfCurveConstraint::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGeomPlate_CurveConstraint^ T)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->InsertBefore(Index, *((Handle_GeomPlate_CurveConstraint*)T->Handle));
}

 void OCGeomPlate_SequenceOfCurveConstraint::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGeomPlate_SequenceOfCurveConstraint^ S)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->InsertBefore(Index, *((GeomPlate_SequenceOfCurveConstraint*)S->Handle));
}

 void OCGeomPlate_SequenceOfCurveConstraint::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGeomPlate_CurveConstraint^ T)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->InsertAfter(Index, *((Handle_GeomPlate_CurveConstraint*)T->Handle));
}

 void OCGeomPlate_SequenceOfCurveConstraint::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGeomPlate_SequenceOfCurveConstraint^ S)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->InsertAfter(Index, *((GeomPlate_SequenceOfCurveConstraint*)S->Handle));
}

OCGeomPlate_CurveConstraint^ OCGeomPlate_SequenceOfCurveConstraint::First()
{
  Handle(GeomPlate_CurveConstraint) tmp = ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->First();
  return gcnew OCGeomPlate_CurveConstraint(&tmp);
}

OCGeomPlate_CurveConstraint^ OCGeomPlate_SequenceOfCurveConstraint::Last()
{
  Handle(GeomPlate_CurveConstraint) tmp = ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->Last();
  return gcnew OCGeomPlate_CurveConstraint(&tmp);
}

 void OCGeomPlate_SequenceOfCurveConstraint::Split(Standard_Integer Index, OCNaroWrappers::OCGeomPlate_SequenceOfCurveConstraint^ Sub)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->Split(Index, *((GeomPlate_SequenceOfCurveConstraint*)Sub->Handle));
}

OCGeomPlate_CurveConstraint^ OCGeomPlate_SequenceOfCurveConstraint::Value(Standard_Integer Index)
{
  Handle(GeomPlate_CurveConstraint) tmp = ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->Value(Index);
  return gcnew OCGeomPlate_CurveConstraint(&tmp);
}

 void OCGeomPlate_SequenceOfCurveConstraint::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeomPlate_CurveConstraint^ I)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->SetValue(Index, *((Handle_GeomPlate_CurveConstraint*)I->Handle));
}

OCGeomPlate_CurveConstraint^ OCGeomPlate_SequenceOfCurveConstraint::ChangeValue(Standard_Integer Index)
{
  Handle(GeomPlate_CurveConstraint) tmp = ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGeomPlate_CurveConstraint(&tmp);
}

 void OCGeomPlate_SequenceOfCurveConstraint::Remove(Standard_Integer Index)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->Remove(Index);
}

 void OCGeomPlate_SequenceOfCurveConstraint::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((GeomPlate_SequenceOfCurveConstraint*)nativeHandle)->Remove(FromIndex, ToIndex);
}


