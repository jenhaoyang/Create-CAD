// File generated by CPPExt (CPP file)
//

#include "TNaming_ListIteratorOfListOfMapOfShape.h"
#include "../Converter.h"
#include "TNaming_ListOfMapOfShape.h"
#include "../TopTools/TopTools_MapOfShape.h"
#include "TNaming_ListNodeOfListOfMapOfShape.h"


using namespace OCNaroWrappers;

OCTNaming_ListIteratorOfListOfMapOfShape::OCTNaming_ListIteratorOfListOfMapOfShape(TNaming_ListIteratorOfListOfMapOfShape* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTNaming_ListIteratorOfListOfMapOfShape::OCTNaming_ListIteratorOfListOfMapOfShape() 
{
  nativeHandle = new TNaming_ListIteratorOfListOfMapOfShape();
}

OCTNaming_ListIteratorOfListOfMapOfShape::OCTNaming_ListIteratorOfListOfMapOfShape(OCNaroWrappers::OCTNaming_ListOfMapOfShape^ L) 
{
  nativeHandle = new TNaming_ListIteratorOfListOfMapOfShape(*((TNaming_ListOfMapOfShape*)L->Handle));
}

 void OCTNaming_ListIteratorOfListOfMapOfShape::Initialize(OCNaroWrappers::OCTNaming_ListOfMapOfShape^ L)
{
  ((TNaming_ListIteratorOfListOfMapOfShape*)nativeHandle)->Initialize(*((TNaming_ListOfMapOfShape*)L->Handle));
}

 System::Boolean OCTNaming_ListIteratorOfListOfMapOfShape::More()
{
  return OCConverter::StandardBooleanToBoolean(((TNaming_ListIteratorOfListOfMapOfShape*)nativeHandle)->More());
}

 void OCTNaming_ListIteratorOfListOfMapOfShape::Next()
{
  ((TNaming_ListIteratorOfListOfMapOfShape*)nativeHandle)->Next();
}

OCTopTools_MapOfShape^ OCTNaming_ListIteratorOfListOfMapOfShape::Value()
{
  TopTools_MapOfShape* tmp = new TopTools_MapOfShape(0);
  *tmp = ((TNaming_ListIteratorOfListOfMapOfShape*)nativeHandle)->Value();
  return gcnew OCTopTools_MapOfShape(tmp);
}


