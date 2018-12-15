// File generated by CPPExt (CPP file)
//

#include "Aspect_SequenceNodeOfSequenceOfMarkMapEntry.h"
#include "../Converter.h"
#include "Aspect_MarkMapEntry.h"
#include "Aspect_SequenceOfMarkMapEntry.h"


using namespace OCNaroWrappers;

OCAspect_SequenceNodeOfSequenceOfMarkMapEntry::OCAspect_SequenceNodeOfSequenceOfMarkMapEntry(Handle(Aspect_SequenceNodeOfSequenceOfMarkMapEntry)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Aspect_SequenceNodeOfSequenceOfMarkMapEntry(*nativeHandle);
}

OCAspect_SequenceNodeOfSequenceOfMarkMapEntry::OCAspect_SequenceNodeOfSequenceOfMarkMapEntry(OCNaroWrappers::OCAspect_MarkMapEntry^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Aspect_SequenceNodeOfSequenceOfMarkMapEntry(new Aspect_SequenceNodeOfSequenceOfMarkMapEntry(*((Aspect_MarkMapEntry*)I->Handle), n, p));
}

OCAspect_MarkMapEntry^ OCAspect_SequenceNodeOfSequenceOfMarkMapEntry::Value()
{
  Aspect_MarkMapEntry* tmp = new Aspect_MarkMapEntry();
  *tmp = (*((Handle_Aspect_SequenceNodeOfSequenceOfMarkMapEntry*)nativeHandle))->Value();
  return gcnew OCAspect_MarkMapEntry(tmp);
}


