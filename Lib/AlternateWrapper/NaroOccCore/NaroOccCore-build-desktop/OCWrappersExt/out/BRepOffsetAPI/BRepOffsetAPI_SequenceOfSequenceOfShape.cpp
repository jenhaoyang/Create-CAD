// File generated by CPPExt (CPP file)
//

#include "BRepOffsetAPI_SequenceOfSequenceOfShape.h"
#include "../Converter.h"
#include "../TopTools/TopTools_SequenceOfShape.h"
#include "BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape.h"


using namespace OCNaroWrappers;

OCBRepOffsetAPI_SequenceOfSequenceOfShape::OCBRepOffsetAPI_SequenceOfSequenceOfShape(BRepOffsetAPI_SequenceOfSequenceOfShape* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepOffsetAPI_SequenceOfSequenceOfShape::OCBRepOffsetAPI_SequenceOfSequenceOfShape() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new BRepOffsetAPI_SequenceOfSequenceOfShape();
}

OCBRepOffsetAPI_SequenceOfSequenceOfShape^ OCBRepOffsetAPI_SequenceOfSequenceOfShape::Assign(OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfShape^ Other)
{
  BRepOffsetAPI_SequenceOfSequenceOfShape* tmp = new BRepOffsetAPI_SequenceOfSequenceOfShape();
  *tmp = ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->Assign(*((BRepOffsetAPI_SequenceOfSequenceOfShape*)Other->Handle));
  return gcnew OCBRepOffsetAPI_SequenceOfSequenceOfShape(tmp);
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::Append(OCNaroWrappers::OCTopTools_SequenceOfShape^ T)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->Append(*((TopTools_SequenceOfShape*)T->Handle));
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::Append(OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfShape^ S)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->Append(*((BRepOffsetAPI_SequenceOfSequenceOfShape*)S->Handle));
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::Prepend(OCNaroWrappers::OCTopTools_SequenceOfShape^ T)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->Prepend(*((TopTools_SequenceOfShape*)T->Handle));
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::Prepend(OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfShape^ S)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->Prepend(*((BRepOffsetAPI_SequenceOfSequenceOfShape*)S->Handle));
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTopTools_SequenceOfShape^ T)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->InsertBefore(Index, *((TopTools_SequenceOfShape*)T->Handle));
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfShape^ S)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->InsertBefore(Index, *((BRepOffsetAPI_SequenceOfSequenceOfShape*)S->Handle));
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTopTools_SequenceOfShape^ T)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->InsertAfter(Index, *((TopTools_SequenceOfShape*)T->Handle));
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfShape^ S)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->InsertAfter(Index, *((BRepOffsetAPI_SequenceOfSequenceOfShape*)S->Handle));
}

OCTopTools_SequenceOfShape^ OCBRepOffsetAPI_SequenceOfSequenceOfShape::First()
{
  TopTools_SequenceOfShape* tmp = new TopTools_SequenceOfShape();
  *tmp = ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->First();
  return gcnew OCTopTools_SequenceOfShape(tmp);
}

OCTopTools_SequenceOfShape^ OCBRepOffsetAPI_SequenceOfSequenceOfShape::Last()
{
  TopTools_SequenceOfShape* tmp = new TopTools_SequenceOfShape();
  *tmp = ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->Last();
  return gcnew OCTopTools_SequenceOfShape(tmp);
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::Split(Standard_Integer Index, OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfShape^ Sub)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->Split(Index, *((BRepOffsetAPI_SequenceOfSequenceOfShape*)Sub->Handle));
}

OCTopTools_SequenceOfShape^ OCBRepOffsetAPI_SequenceOfSequenceOfShape::Value(Standard_Integer Index)
{
  TopTools_SequenceOfShape* tmp = new TopTools_SequenceOfShape();
  *tmp = ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->Value(Index);
  return gcnew OCTopTools_SequenceOfShape(tmp);
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::SetValue(Standard_Integer Index, OCNaroWrappers::OCTopTools_SequenceOfShape^ I)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->SetValue(Index, *((TopTools_SequenceOfShape*)I->Handle));
}

OCTopTools_SequenceOfShape^ OCBRepOffsetAPI_SequenceOfSequenceOfShape::ChangeValue(Standard_Integer Index)
{
  TopTools_SequenceOfShape* tmp = new TopTools_SequenceOfShape();
  *tmp = ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTopTools_SequenceOfShape(tmp);
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::Remove(Standard_Integer Index)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->Remove(Index);
}

 void OCBRepOffsetAPI_SequenceOfSequenceOfShape::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((BRepOffsetAPI_SequenceOfSequenceOfShape*)nativeHandle)->Remove(FromIndex, ToIndex);
}


