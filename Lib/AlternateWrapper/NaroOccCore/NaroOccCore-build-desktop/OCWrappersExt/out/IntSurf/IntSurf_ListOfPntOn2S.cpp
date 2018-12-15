// File generated by CPPExt (CPP file)
//

#include "IntSurf_ListOfPntOn2S.h"
#include "../Converter.h"
#include "IntSurf_ListIteratorOfListOfPntOn2S.h"
#include "IntSurf_PntOn2S.h"
#include "IntSurf_ListNodeOfListOfPntOn2S.h"


using namespace OCNaroWrappers;

OCIntSurf_ListOfPntOn2S::OCIntSurf_ListOfPntOn2S(IntSurf_ListOfPntOn2S* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntSurf_ListOfPntOn2S::OCIntSurf_ListOfPntOn2S() 
{
  nativeHandle = new IntSurf_ListOfPntOn2S();
}

 void OCIntSurf_ListOfPntOn2S::Assign(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ Other)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->Assign(*((IntSurf_ListOfPntOn2S*)Other->Handle));
}

 Standard_Integer OCIntSurf_ListOfPntOn2S::Extent()
{
  return ((IntSurf_ListOfPntOn2S*)nativeHandle)->Extent();
}

 System::Boolean OCIntSurf_ListOfPntOn2S::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((IntSurf_ListOfPntOn2S*)nativeHandle)->IsEmpty());
}

 void OCIntSurf_ListOfPntOn2S::Prepend(OCNaroWrappers::OCIntSurf_PntOn2S^ I)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->Prepend(*((IntSurf_PntOn2S*)I->Handle));
}

 void OCIntSurf_ListOfPntOn2S::Prepend(OCNaroWrappers::OCIntSurf_PntOn2S^ I, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ theIt)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->Prepend(*((IntSurf_PntOn2S*)I->Handle), *((IntSurf_ListIteratorOfListOfPntOn2S*)theIt->Handle));
}

 void OCIntSurf_ListOfPntOn2S::Prepend(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ Other)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->Prepend(*((IntSurf_ListOfPntOn2S*)Other->Handle));
}

 void OCIntSurf_ListOfPntOn2S::Append(OCNaroWrappers::OCIntSurf_PntOn2S^ I)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->Append(*((IntSurf_PntOn2S*)I->Handle));
}

 void OCIntSurf_ListOfPntOn2S::Append(OCNaroWrappers::OCIntSurf_PntOn2S^ I, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ theIt)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->Append(*((IntSurf_PntOn2S*)I->Handle), *((IntSurf_ListIteratorOfListOfPntOn2S*)theIt->Handle));
}

 void OCIntSurf_ListOfPntOn2S::Append(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ Other)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->Append(*((IntSurf_ListOfPntOn2S*)Other->Handle));
}

OCIntSurf_PntOn2S^ OCIntSurf_ListOfPntOn2S::First()
{
  IntSurf_PntOn2S* tmp = new IntSurf_PntOn2S();
  *tmp = ((IntSurf_ListOfPntOn2S*)nativeHandle)->First();
  return gcnew OCIntSurf_PntOn2S(tmp);
}

OCIntSurf_PntOn2S^ OCIntSurf_ListOfPntOn2S::Last()
{
  IntSurf_PntOn2S* tmp = new IntSurf_PntOn2S();
  *tmp = ((IntSurf_ListOfPntOn2S*)nativeHandle)->Last();
  return gcnew OCIntSurf_PntOn2S(tmp);
}

 void OCIntSurf_ListOfPntOn2S::RemoveFirst()
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->RemoveFirst();
}

 void OCIntSurf_ListOfPntOn2S::Remove(OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ It)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->Remove(*((IntSurf_ListIteratorOfListOfPntOn2S*)It->Handle));
}

 void OCIntSurf_ListOfPntOn2S::InsertBefore(OCNaroWrappers::OCIntSurf_PntOn2S^ I, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ It)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->InsertBefore(*((IntSurf_PntOn2S*)I->Handle), *((IntSurf_ListIteratorOfListOfPntOn2S*)It->Handle));
}

 void OCIntSurf_ListOfPntOn2S::InsertBefore(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ Other, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ It)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->InsertBefore(*((IntSurf_ListOfPntOn2S*)Other->Handle), *((IntSurf_ListIteratorOfListOfPntOn2S*)It->Handle));
}

 void OCIntSurf_ListOfPntOn2S::InsertAfter(OCNaroWrappers::OCIntSurf_PntOn2S^ I, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ It)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->InsertAfter(*((IntSurf_PntOn2S*)I->Handle), *((IntSurf_ListIteratorOfListOfPntOn2S*)It->Handle));
}

 void OCIntSurf_ListOfPntOn2S::InsertAfter(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ Other, OCNaroWrappers::OCIntSurf_ListIteratorOfListOfPntOn2S^ It)
{
  ((IntSurf_ListOfPntOn2S*)nativeHandle)->InsertAfter(*((IntSurf_ListOfPntOn2S*)Other->Handle), *((IntSurf_ListIteratorOfListOfPntOn2S*)It->Handle));
}


