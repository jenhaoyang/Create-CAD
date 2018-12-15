// File generated by CPPExt (CPP file)
//

#include "TColStd_ListIteratorOfListOfAsciiString.h"
#include "../Converter.h"
#include "TColStd_ListOfAsciiString.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "TColStd_ListNodeOfListOfAsciiString.h"


using namespace OCNaroWrappers;

OCTColStd_ListIteratorOfListOfAsciiString::OCTColStd_ListIteratorOfListOfAsciiString(TColStd_ListIteratorOfListOfAsciiString* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColStd_ListIteratorOfListOfAsciiString::OCTColStd_ListIteratorOfListOfAsciiString() 
{
  nativeHandle = new TColStd_ListIteratorOfListOfAsciiString();
}

OCTColStd_ListIteratorOfListOfAsciiString::OCTColStd_ListIteratorOfListOfAsciiString(OCNaroWrappers::OCTColStd_ListOfAsciiString^ L) 
{
  nativeHandle = new TColStd_ListIteratorOfListOfAsciiString(*((TColStd_ListOfAsciiString*)L->Handle));
}

 void OCTColStd_ListIteratorOfListOfAsciiString::Initialize(OCNaroWrappers::OCTColStd_ListOfAsciiString^ L)
{
  ((TColStd_ListIteratorOfListOfAsciiString*)nativeHandle)->Initialize(*((TColStd_ListOfAsciiString*)L->Handle));
}

 System::Boolean OCTColStd_ListIteratorOfListOfAsciiString::More()
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_ListIteratorOfListOfAsciiString*)nativeHandle)->More());
}

 void OCTColStd_ListIteratorOfListOfAsciiString::Next()
{
  ((TColStd_ListIteratorOfListOfAsciiString*)nativeHandle)->Next();
}

OCTCollection_AsciiString^ OCTColStd_ListIteratorOfListOfAsciiString::Value()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((TColStd_ListIteratorOfListOfAsciiString*)nativeHandle)->Value();
  return gcnew OCTCollection_AsciiString(tmp);
}


