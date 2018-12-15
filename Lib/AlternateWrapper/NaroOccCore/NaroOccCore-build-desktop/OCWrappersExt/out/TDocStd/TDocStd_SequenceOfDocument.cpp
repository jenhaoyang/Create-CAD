// File generated by CPPExt (CPP file)
//

#include "TDocStd_SequenceOfDocument.h"
#include "../Converter.h"
#include "TDocStd_Document.h"
#include "TDocStd_SequenceNodeOfSequenceOfDocument.h"


using namespace OCNaroWrappers;

OCTDocStd_SequenceOfDocument::OCTDocStd_SequenceOfDocument(TDocStd_SequenceOfDocument* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTDocStd_SequenceOfDocument::OCTDocStd_SequenceOfDocument() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new TDocStd_SequenceOfDocument();
}

OCTDocStd_SequenceOfDocument^ OCTDocStd_SequenceOfDocument::Assign(OCNaroWrappers::OCTDocStd_SequenceOfDocument^ Other)
{
  TDocStd_SequenceOfDocument* tmp = new TDocStd_SequenceOfDocument();
  *tmp = ((TDocStd_SequenceOfDocument*)nativeHandle)->Assign(*((TDocStd_SequenceOfDocument*)Other->Handle));
  return gcnew OCTDocStd_SequenceOfDocument(tmp);
}

 void OCTDocStd_SequenceOfDocument::Append(OCNaroWrappers::OCTDocStd_Document^ T)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->Append(*((Handle_TDocStd_Document*)T->Handle));
}

 void OCTDocStd_SequenceOfDocument::Append(OCNaroWrappers::OCTDocStd_SequenceOfDocument^ S)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->Append(*((TDocStd_SequenceOfDocument*)S->Handle));
}

 void OCTDocStd_SequenceOfDocument::Prepend(OCNaroWrappers::OCTDocStd_Document^ T)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->Prepend(*((Handle_TDocStd_Document*)T->Handle));
}

 void OCTDocStd_SequenceOfDocument::Prepend(OCNaroWrappers::OCTDocStd_SequenceOfDocument^ S)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->Prepend(*((TDocStd_SequenceOfDocument*)S->Handle));
}

 void OCTDocStd_SequenceOfDocument::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTDocStd_Document^ T)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->InsertBefore(Index, *((Handle_TDocStd_Document*)T->Handle));
}

 void OCTDocStd_SequenceOfDocument::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTDocStd_SequenceOfDocument^ S)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->InsertBefore(Index, *((TDocStd_SequenceOfDocument*)S->Handle));
}

 void OCTDocStd_SequenceOfDocument::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTDocStd_Document^ T)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->InsertAfter(Index, *((Handle_TDocStd_Document*)T->Handle));
}

 void OCTDocStd_SequenceOfDocument::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTDocStd_SequenceOfDocument^ S)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->InsertAfter(Index, *((TDocStd_SequenceOfDocument*)S->Handle));
}

OCTDocStd_Document^ OCTDocStd_SequenceOfDocument::First()
{
  Handle(TDocStd_Document) tmp = ((TDocStd_SequenceOfDocument*)nativeHandle)->First();
  return gcnew OCTDocStd_Document(&tmp);
}

OCTDocStd_Document^ OCTDocStd_SequenceOfDocument::Last()
{
  Handle(TDocStd_Document) tmp = ((TDocStd_SequenceOfDocument*)nativeHandle)->Last();
  return gcnew OCTDocStd_Document(&tmp);
}

 void OCTDocStd_SequenceOfDocument::Split(Standard_Integer Index, OCNaroWrappers::OCTDocStd_SequenceOfDocument^ Sub)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->Split(Index, *((TDocStd_SequenceOfDocument*)Sub->Handle));
}

OCTDocStd_Document^ OCTDocStd_SequenceOfDocument::Value(Standard_Integer Index)
{
  Handle(TDocStd_Document) tmp = ((TDocStd_SequenceOfDocument*)nativeHandle)->Value(Index);
  return gcnew OCTDocStd_Document(&tmp);
}

 void OCTDocStd_SequenceOfDocument::SetValue(Standard_Integer Index, OCNaroWrappers::OCTDocStd_Document^ I)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->SetValue(Index, *((Handle_TDocStd_Document*)I->Handle));
}

OCTDocStd_Document^ OCTDocStd_SequenceOfDocument::ChangeValue(Standard_Integer Index)
{
  Handle(TDocStd_Document) tmp = ((TDocStd_SequenceOfDocument*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTDocStd_Document(&tmp);
}

 void OCTDocStd_SequenceOfDocument::Remove(Standard_Integer Index)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->Remove(Index);
}

 void OCTDocStd_SequenceOfDocument::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((TDocStd_SequenceOfDocument*)nativeHandle)->Remove(FromIndex, ToIndex);
}


