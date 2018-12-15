// File generated by CPPExt (CPP file)
//

#include "TColStd_SetIteratorOfSetOfReal.h"
#include "../Converter.h"
#include "TColStd_SetOfReal.h"
#include "TColStd_SetListOfSetOfReal.h"
#include "TColStd_ListNodeOfSetListOfSetOfReal.h"
#include "TColStd_ListIteratorOfSetListOfSetOfReal.h"


using namespace OCNaroWrappers;

OCTColStd_SetIteratorOfSetOfReal::OCTColStd_SetIteratorOfSetOfReal(TColStd_SetIteratorOfSetOfReal* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColStd_SetIteratorOfSetOfReal::OCTColStd_SetIteratorOfSetOfReal() 
{
  nativeHandle = new TColStd_SetIteratorOfSetOfReal();
}

OCTColStd_SetIteratorOfSetOfReal::OCTColStd_SetIteratorOfSetOfReal(OCNaroWrappers::OCTColStd_SetOfReal^ S) 
{
  nativeHandle = new TColStd_SetIteratorOfSetOfReal(*((TColStd_SetOfReal*)S->Handle));
}

 void OCTColStd_SetIteratorOfSetOfReal::Initialize(OCNaroWrappers::OCTColStd_SetOfReal^ S)
{
  ((TColStd_SetIteratorOfSetOfReal*)nativeHandle)->Initialize(*((TColStd_SetOfReal*)S->Handle));
}

 System::Boolean OCTColStd_SetIteratorOfSetOfReal::More()
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_SetIteratorOfSetOfReal*)nativeHandle)->More());
}

 void OCTColStd_SetIteratorOfSetOfReal::Next()
{
  ((TColStd_SetIteratorOfSetOfReal*)nativeHandle)->Next();
}

 Standard_Real OCTColStd_SetIteratorOfSetOfReal::Value()
{
  return ((TColStd_SetIteratorOfSetOfReal*)nativeHandle)->Value();
}


