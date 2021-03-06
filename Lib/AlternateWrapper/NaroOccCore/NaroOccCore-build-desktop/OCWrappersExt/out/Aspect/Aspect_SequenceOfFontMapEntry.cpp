// File generated by CPPExt (CPP file)
//

#include "Aspect_SequenceOfFontMapEntry.h"
#include "../Converter.h"
#include "Aspect_FontMapEntry.h"
#include "Aspect_SequenceNodeOfSequenceOfFontMapEntry.h"


using namespace OCNaroWrappers;

OCAspect_SequenceOfFontMapEntry::OCAspect_SequenceOfFontMapEntry(Aspect_SequenceOfFontMapEntry* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAspect_SequenceOfFontMapEntry::OCAspect_SequenceOfFontMapEntry() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Aspect_SequenceOfFontMapEntry();
}

OCAspect_SequenceOfFontMapEntry^ OCAspect_SequenceOfFontMapEntry::Assign(OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ Other)
{
  Aspect_SequenceOfFontMapEntry* tmp = new Aspect_SequenceOfFontMapEntry();
  *tmp = ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->Assign(*((Aspect_SequenceOfFontMapEntry*)Other->Handle));
  return gcnew OCAspect_SequenceOfFontMapEntry(tmp);
}

 void OCAspect_SequenceOfFontMapEntry::Append(OCNaroWrappers::OCAspect_FontMapEntry^ T)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->Append(*((Aspect_FontMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfFontMapEntry::Append(OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ S)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->Append(*((Aspect_SequenceOfFontMapEntry*)S->Handle));
}

 void OCAspect_SequenceOfFontMapEntry::Prepend(OCNaroWrappers::OCAspect_FontMapEntry^ T)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->Prepend(*((Aspect_FontMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfFontMapEntry::Prepend(OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ S)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->Prepend(*((Aspect_SequenceOfFontMapEntry*)S->Handle));
}

 void OCAspect_SequenceOfFontMapEntry::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAspect_FontMapEntry^ T)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->InsertBefore(Index, *((Aspect_FontMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfFontMapEntry::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ S)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->InsertBefore(Index, *((Aspect_SequenceOfFontMapEntry*)S->Handle));
}

 void OCAspect_SequenceOfFontMapEntry::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAspect_FontMapEntry^ T)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->InsertAfter(Index, *((Aspect_FontMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfFontMapEntry::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ S)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->InsertAfter(Index, *((Aspect_SequenceOfFontMapEntry*)S->Handle));
}

OCAspect_FontMapEntry^ OCAspect_SequenceOfFontMapEntry::First()
{
  Aspect_FontMapEntry* tmp = new Aspect_FontMapEntry();
  *tmp = ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->First();
  return gcnew OCAspect_FontMapEntry(tmp);
}

OCAspect_FontMapEntry^ OCAspect_SequenceOfFontMapEntry::Last()
{
  Aspect_FontMapEntry* tmp = new Aspect_FontMapEntry();
  *tmp = ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->Last();
  return gcnew OCAspect_FontMapEntry(tmp);
}

 void OCAspect_SequenceOfFontMapEntry::Split(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ Sub)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->Split(Index, *((Aspect_SequenceOfFontMapEntry*)Sub->Handle));
}

OCAspect_FontMapEntry^ OCAspect_SequenceOfFontMapEntry::Value(Standard_Integer Index)
{
  Aspect_FontMapEntry* tmp = new Aspect_FontMapEntry();
  *tmp = ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->Value(Index);
  return gcnew OCAspect_FontMapEntry(tmp);
}

 void OCAspect_SequenceOfFontMapEntry::SetValue(Standard_Integer Index, OCNaroWrappers::OCAspect_FontMapEntry^ I)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->SetValue(Index, *((Aspect_FontMapEntry*)I->Handle));
}

OCAspect_FontMapEntry^ OCAspect_SequenceOfFontMapEntry::ChangeValue(Standard_Integer Index)
{
  Aspect_FontMapEntry* tmp = new Aspect_FontMapEntry();
  *tmp = ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->ChangeValue(Index);
  return gcnew OCAspect_FontMapEntry(tmp);
}

 void OCAspect_SequenceOfFontMapEntry::Remove(Standard_Integer Index)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->Remove(Index);
}

 void OCAspect_SequenceOfFontMapEntry::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Aspect_SequenceOfFontMapEntry*)nativeHandle)->Remove(FromIndex, ToIndex);
}


