// File generated by CPPExt (CPP file)
//

#include "BOPTools_ListIteratorOfListOfCoupleOfInteger.h"
#include "../Converter.h"
#include "BOPTools_ListOfCoupleOfInteger.h"
#include "BOPTools_CoupleOfInteger.h"
#include "BOPTools_ListNodeOfListOfCoupleOfInteger.h"


using namespace OCNaroWrappers;

OCBOPTools_ListIteratorOfListOfCoupleOfInteger::OCBOPTools_ListIteratorOfListOfCoupleOfInteger(BOPTools_ListIteratorOfListOfCoupleOfInteger* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_ListIteratorOfListOfCoupleOfInteger::OCBOPTools_ListIteratorOfListOfCoupleOfInteger() 
{
  nativeHandle = new BOPTools_ListIteratorOfListOfCoupleOfInteger();
}

OCBOPTools_ListIteratorOfListOfCoupleOfInteger::OCBOPTools_ListIteratorOfListOfCoupleOfInteger(OCNaroWrappers::OCBOPTools_ListOfCoupleOfInteger^ L) 
{
  nativeHandle = new BOPTools_ListIteratorOfListOfCoupleOfInteger(*((BOPTools_ListOfCoupleOfInteger*)L->Handle));
}

 void OCBOPTools_ListIteratorOfListOfCoupleOfInteger::Initialize(OCNaroWrappers::OCBOPTools_ListOfCoupleOfInteger^ L)
{
  ((BOPTools_ListIteratorOfListOfCoupleOfInteger*)nativeHandle)->Initialize(*((BOPTools_ListOfCoupleOfInteger*)L->Handle));
}

 System::Boolean OCBOPTools_ListIteratorOfListOfCoupleOfInteger::More()
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_ListIteratorOfListOfCoupleOfInteger*)nativeHandle)->More());
}

 void OCBOPTools_ListIteratorOfListOfCoupleOfInteger::Next()
{
  ((BOPTools_ListIteratorOfListOfCoupleOfInteger*)nativeHandle)->Next();
}

OCBOPTools_CoupleOfInteger^ OCBOPTools_ListIteratorOfListOfCoupleOfInteger::Value()
{
  BOPTools_CoupleOfInteger* tmp = new BOPTools_CoupleOfInteger();
  *tmp = ((BOPTools_ListIteratorOfListOfCoupleOfInteger*)nativeHandle)->Value();
  return gcnew OCBOPTools_CoupleOfInteger(tmp);
}


