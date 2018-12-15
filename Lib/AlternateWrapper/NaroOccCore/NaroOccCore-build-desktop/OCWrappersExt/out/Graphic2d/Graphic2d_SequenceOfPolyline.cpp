// File generated by CPPExt (CPP file)
//

#include "Graphic2d_SequenceOfPolyline.h"
#include "../Converter.h"
#include "Graphic2d_HSequenceOfVertex.h"
#include "Graphic2d_SequenceNodeOfSequenceOfPolyline.h"


using namespace OCNaroWrappers;

OCGraphic2d_SequenceOfPolyline::OCGraphic2d_SequenceOfPolyline(Graphic2d_SequenceOfPolyline* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGraphic2d_SequenceOfPolyline::OCGraphic2d_SequenceOfPolyline() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Graphic2d_SequenceOfPolyline();
}

OCGraphic2d_SequenceOfPolyline^ OCGraphic2d_SequenceOfPolyline::Assign(OCNaroWrappers::OCGraphic2d_SequenceOfPolyline^ Other)
{
  Graphic2d_SequenceOfPolyline* tmp = new Graphic2d_SequenceOfPolyline();
  *tmp = ((Graphic2d_SequenceOfPolyline*)nativeHandle)->Assign(*((Graphic2d_SequenceOfPolyline*)Other->Handle));
  return gcnew OCGraphic2d_SequenceOfPolyline(tmp);
}

 void OCGraphic2d_SequenceOfPolyline::Append(OCNaroWrappers::OCGraphic2d_HSequenceOfVertex^ T)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->Append(*((Handle_Graphic2d_HSequenceOfVertex*)T->Handle));
}

 void OCGraphic2d_SequenceOfPolyline::Append(OCNaroWrappers::OCGraphic2d_SequenceOfPolyline^ S)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->Append(*((Graphic2d_SequenceOfPolyline*)S->Handle));
}

 void OCGraphic2d_SequenceOfPolyline::Prepend(OCNaroWrappers::OCGraphic2d_HSequenceOfVertex^ T)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->Prepend(*((Handle_Graphic2d_HSequenceOfVertex*)T->Handle));
}

 void OCGraphic2d_SequenceOfPolyline::Prepend(OCNaroWrappers::OCGraphic2d_SequenceOfPolyline^ S)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->Prepend(*((Graphic2d_SequenceOfPolyline*)S->Handle));
}

 void OCGraphic2d_SequenceOfPolyline::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGraphic2d_HSequenceOfVertex^ T)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->InsertBefore(Index, *((Handle_Graphic2d_HSequenceOfVertex*)T->Handle));
}

 void OCGraphic2d_SequenceOfPolyline::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGraphic2d_SequenceOfPolyline^ S)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->InsertBefore(Index, *((Graphic2d_SequenceOfPolyline*)S->Handle));
}

 void OCGraphic2d_SequenceOfPolyline::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGraphic2d_HSequenceOfVertex^ T)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->InsertAfter(Index, *((Handle_Graphic2d_HSequenceOfVertex*)T->Handle));
}

 void OCGraphic2d_SequenceOfPolyline::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGraphic2d_SequenceOfPolyline^ S)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->InsertAfter(Index, *((Graphic2d_SequenceOfPolyline*)S->Handle));
}

OCGraphic2d_HSequenceOfVertex^ OCGraphic2d_SequenceOfPolyline::First()
{
  Handle(Graphic2d_HSequenceOfVertex) tmp = ((Graphic2d_SequenceOfPolyline*)nativeHandle)->First();
  return gcnew OCGraphic2d_HSequenceOfVertex(&tmp);
}

OCGraphic2d_HSequenceOfVertex^ OCGraphic2d_SequenceOfPolyline::Last()
{
  Handle(Graphic2d_HSequenceOfVertex) tmp = ((Graphic2d_SequenceOfPolyline*)nativeHandle)->Last();
  return gcnew OCGraphic2d_HSequenceOfVertex(&tmp);
}

 void OCGraphic2d_SequenceOfPolyline::Split(Standard_Integer Index, OCNaroWrappers::OCGraphic2d_SequenceOfPolyline^ Sub)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->Split(Index, *((Graphic2d_SequenceOfPolyline*)Sub->Handle));
}

OCGraphic2d_HSequenceOfVertex^ OCGraphic2d_SequenceOfPolyline::Value(Standard_Integer Index)
{
  Handle(Graphic2d_HSequenceOfVertex) tmp = ((Graphic2d_SequenceOfPolyline*)nativeHandle)->Value(Index);
  return gcnew OCGraphic2d_HSequenceOfVertex(&tmp);
}

 void OCGraphic2d_SequenceOfPolyline::SetValue(Standard_Integer Index, OCNaroWrappers::OCGraphic2d_HSequenceOfVertex^ I)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->SetValue(Index, *((Handle_Graphic2d_HSequenceOfVertex*)I->Handle));
}

OCGraphic2d_HSequenceOfVertex^ OCGraphic2d_SequenceOfPolyline::ChangeValue(Standard_Integer Index)
{
  Handle(Graphic2d_HSequenceOfVertex) tmp = ((Graphic2d_SequenceOfPolyline*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGraphic2d_HSequenceOfVertex(&tmp);
}

 void OCGraphic2d_SequenceOfPolyline::Remove(Standard_Integer Index)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->Remove(Index);
}

 void OCGraphic2d_SequenceOfPolyline::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Graphic2d_SequenceOfPolyline*)nativeHandle)->Remove(FromIndex, ToIndex);
}


