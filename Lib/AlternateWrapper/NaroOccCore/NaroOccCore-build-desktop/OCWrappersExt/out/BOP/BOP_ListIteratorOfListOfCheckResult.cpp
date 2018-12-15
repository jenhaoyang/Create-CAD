// File generated by CPPExt (CPP file)
//

#include "BOP_ListIteratorOfListOfCheckResult.h"
#include "../Converter.h"
#include "BOP_ListOfCheckResult.h"
#include "BOP_CheckResult.h"
#include "BOP_ListNodeOfListOfCheckResult.h"


using namespace OCNaroWrappers;

OCBOP_ListIteratorOfListOfCheckResult::OCBOP_ListIteratorOfListOfCheckResult(BOP_ListIteratorOfListOfCheckResult* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOP_ListIteratorOfListOfCheckResult::OCBOP_ListIteratorOfListOfCheckResult() 
{
  nativeHandle = new BOP_ListIteratorOfListOfCheckResult();
}

OCBOP_ListIteratorOfListOfCheckResult::OCBOP_ListIteratorOfListOfCheckResult(OCNaroWrappers::OCBOP_ListOfCheckResult^ L) 
{
  nativeHandle = new BOP_ListIteratorOfListOfCheckResult(*((BOP_ListOfCheckResult*)L->Handle));
}

 void OCBOP_ListIteratorOfListOfCheckResult::Initialize(OCNaroWrappers::OCBOP_ListOfCheckResult^ L)
{
  ((BOP_ListIteratorOfListOfCheckResult*)nativeHandle)->Initialize(*((BOP_ListOfCheckResult*)L->Handle));
}

 System::Boolean OCBOP_ListIteratorOfListOfCheckResult::More()
{
  return OCConverter::StandardBooleanToBoolean(((BOP_ListIteratorOfListOfCheckResult*)nativeHandle)->More());
}

 void OCBOP_ListIteratorOfListOfCheckResult::Next()
{
  ((BOP_ListIteratorOfListOfCheckResult*)nativeHandle)->Next();
}

OCBOP_CheckResult^ OCBOP_ListIteratorOfListOfCheckResult::Value()
{
  BOP_CheckResult* tmp = new BOP_CheckResult();
  *tmp = ((BOP_ListIteratorOfListOfCheckResult*)nativeHandle)->Value();
  return gcnew OCBOP_CheckResult(tmp);
}


