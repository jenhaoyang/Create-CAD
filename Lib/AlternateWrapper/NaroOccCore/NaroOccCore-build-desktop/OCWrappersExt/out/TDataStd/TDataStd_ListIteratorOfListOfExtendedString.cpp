// File generated by CPPExt (CPP file)
//

#include "TDataStd_ListIteratorOfListOfExtendedString.h"
#include "../Converter.h"
#include "TDataStd_ListOfExtendedString.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "TDataStd_ListNodeOfListOfExtendedString.h"


using namespace OCNaroWrappers;

OCTDataStd_ListIteratorOfListOfExtendedString::OCTDataStd_ListIteratorOfListOfExtendedString(TDataStd_ListIteratorOfListOfExtendedString* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTDataStd_ListIteratorOfListOfExtendedString::OCTDataStd_ListIteratorOfListOfExtendedString() 
{
  nativeHandle = new TDataStd_ListIteratorOfListOfExtendedString();
}

OCTDataStd_ListIteratorOfListOfExtendedString::OCTDataStd_ListIteratorOfListOfExtendedString(OCNaroWrappers::OCTDataStd_ListOfExtendedString^ L) 
{
  nativeHandle = new TDataStd_ListIteratorOfListOfExtendedString(*((TDataStd_ListOfExtendedString*)L->Handle));
}

 void OCTDataStd_ListIteratorOfListOfExtendedString::Initialize(OCNaroWrappers::OCTDataStd_ListOfExtendedString^ L)
{
  ((TDataStd_ListIteratorOfListOfExtendedString*)nativeHandle)->Initialize(*((TDataStd_ListOfExtendedString*)L->Handle));
}

 System::Boolean OCTDataStd_ListIteratorOfListOfExtendedString::More()
{
  return OCConverter::StandardBooleanToBoolean(((TDataStd_ListIteratorOfListOfExtendedString*)nativeHandle)->More());
}

 void OCTDataStd_ListIteratorOfListOfExtendedString::Next()
{
  ((TDataStd_ListIteratorOfListOfExtendedString*)nativeHandle)->Next();
}

OCTCollection_ExtendedString^ OCTDataStd_ListIteratorOfListOfExtendedString::Value()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((TDataStd_ListIteratorOfListOfExtendedString*)nativeHandle)->Value();
  return gcnew OCTCollection_ExtendedString(tmp);
}


