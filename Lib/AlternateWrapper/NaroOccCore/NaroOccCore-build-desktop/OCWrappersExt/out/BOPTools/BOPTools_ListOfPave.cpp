// File generated by CPPExt (CPP file)
//

#include "BOPTools_ListOfPave.h"
#include "../Converter.h"
#include "BOPTools_ListIteratorOfListOfPave.h"
#include "BOPTools_Pave.h"
#include "BOPTools_ListNodeOfListOfPave.h"


using namespace OCNaroWrappers;

OCBOPTools_ListOfPave::OCBOPTools_ListOfPave(BOPTools_ListOfPave* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_ListOfPave::OCBOPTools_ListOfPave() 
{
  nativeHandle = new BOPTools_ListOfPave();
}

 void OCBOPTools_ListOfPave::Assign(OCNaroWrappers::OCBOPTools_ListOfPave^ Other)
{
  ((BOPTools_ListOfPave*)nativeHandle)->Assign(*((BOPTools_ListOfPave*)Other->Handle));
}

 Standard_Integer OCBOPTools_ListOfPave::Extent()
{
  return ((BOPTools_ListOfPave*)nativeHandle)->Extent();
}

 System::Boolean OCBOPTools_ListOfPave::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_ListOfPave*)nativeHandle)->IsEmpty());
}

 void OCBOPTools_ListOfPave::Prepend(OCNaroWrappers::OCBOPTools_Pave^ I)
{
  ((BOPTools_ListOfPave*)nativeHandle)->Prepend(*((BOPTools_Pave*)I->Handle));
}

 void OCBOPTools_ListOfPave::Prepend(OCNaroWrappers::OCBOPTools_Pave^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfPave^ theIt)
{
  ((BOPTools_ListOfPave*)nativeHandle)->Prepend(*((BOPTools_Pave*)I->Handle), *((BOPTools_ListIteratorOfListOfPave*)theIt->Handle));
}

 void OCBOPTools_ListOfPave::Prepend(OCNaroWrappers::OCBOPTools_ListOfPave^ Other)
{
  ((BOPTools_ListOfPave*)nativeHandle)->Prepend(*((BOPTools_ListOfPave*)Other->Handle));
}

 void OCBOPTools_ListOfPave::Append(OCNaroWrappers::OCBOPTools_Pave^ I)
{
  ((BOPTools_ListOfPave*)nativeHandle)->Append(*((BOPTools_Pave*)I->Handle));
}

 void OCBOPTools_ListOfPave::Append(OCNaroWrappers::OCBOPTools_Pave^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfPave^ theIt)
{
  ((BOPTools_ListOfPave*)nativeHandle)->Append(*((BOPTools_Pave*)I->Handle), *((BOPTools_ListIteratorOfListOfPave*)theIt->Handle));
}

 void OCBOPTools_ListOfPave::Append(OCNaroWrappers::OCBOPTools_ListOfPave^ Other)
{
  ((BOPTools_ListOfPave*)nativeHandle)->Append(*((BOPTools_ListOfPave*)Other->Handle));
}

OCBOPTools_Pave^ OCBOPTools_ListOfPave::First()
{
  BOPTools_Pave* tmp = new BOPTools_Pave();
  *tmp = ((BOPTools_ListOfPave*)nativeHandle)->First();
  return gcnew OCBOPTools_Pave(tmp);
}

OCBOPTools_Pave^ OCBOPTools_ListOfPave::Last()
{
  BOPTools_Pave* tmp = new BOPTools_Pave();
  *tmp = ((BOPTools_ListOfPave*)nativeHandle)->Last();
  return gcnew OCBOPTools_Pave(tmp);
}

 void OCBOPTools_ListOfPave::RemoveFirst()
{
  ((BOPTools_ListOfPave*)nativeHandle)->RemoveFirst();
}

 void OCBOPTools_ListOfPave::Remove(OCNaroWrappers::OCBOPTools_ListIteratorOfListOfPave^ It)
{
  ((BOPTools_ListOfPave*)nativeHandle)->Remove(*((BOPTools_ListIteratorOfListOfPave*)It->Handle));
}

 void OCBOPTools_ListOfPave::InsertBefore(OCNaroWrappers::OCBOPTools_Pave^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfPave^ It)
{
  ((BOPTools_ListOfPave*)nativeHandle)->InsertBefore(*((BOPTools_Pave*)I->Handle), *((BOPTools_ListIteratorOfListOfPave*)It->Handle));
}

 void OCBOPTools_ListOfPave::InsertBefore(OCNaroWrappers::OCBOPTools_ListOfPave^ Other, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfPave^ It)
{
  ((BOPTools_ListOfPave*)nativeHandle)->InsertBefore(*((BOPTools_ListOfPave*)Other->Handle), *((BOPTools_ListIteratorOfListOfPave*)It->Handle));
}

 void OCBOPTools_ListOfPave::InsertAfter(OCNaroWrappers::OCBOPTools_Pave^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfPave^ It)
{
  ((BOPTools_ListOfPave*)nativeHandle)->InsertAfter(*((BOPTools_Pave*)I->Handle), *((BOPTools_ListIteratorOfListOfPave*)It->Handle));
}

 void OCBOPTools_ListOfPave::InsertAfter(OCNaroWrappers::OCBOPTools_ListOfPave^ Other, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfPave^ It)
{
  ((BOPTools_ListOfPave*)nativeHandle)->InsertAfter(*((BOPTools_ListOfPave*)Other->Handle), *((BOPTools_ListIteratorOfListOfPave*)It->Handle));
}


