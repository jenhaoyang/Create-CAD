// File generated by CPPExt (CPP file)
//

#include "TNaming_ListIteratorOfListOfNamedShape.h"
#include "../Converter.h"
#include "TNaming_ListOfNamedShape.h"
#include "TNaming_NamedShape.h"
#include "TNaming_ListNodeOfListOfNamedShape.h"


using namespace OCNaroWrappers;

OCTNaming_ListIteratorOfListOfNamedShape::OCTNaming_ListIteratorOfListOfNamedShape(TNaming_ListIteratorOfListOfNamedShape* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTNaming_ListIteratorOfListOfNamedShape::OCTNaming_ListIteratorOfListOfNamedShape() 
{
  nativeHandle = new TNaming_ListIteratorOfListOfNamedShape();
}

OCTNaming_ListIteratorOfListOfNamedShape::OCTNaming_ListIteratorOfListOfNamedShape(OCNaroWrappers::OCTNaming_ListOfNamedShape^ L) 
{
  nativeHandle = new TNaming_ListIteratorOfListOfNamedShape(*((TNaming_ListOfNamedShape*)L->Handle));
}

 void OCTNaming_ListIteratorOfListOfNamedShape::Initialize(OCNaroWrappers::OCTNaming_ListOfNamedShape^ L)
{
  ((TNaming_ListIteratorOfListOfNamedShape*)nativeHandle)->Initialize(*((TNaming_ListOfNamedShape*)L->Handle));
}

 System::Boolean OCTNaming_ListIteratorOfListOfNamedShape::More()
{
  return OCConverter::StandardBooleanToBoolean(((TNaming_ListIteratorOfListOfNamedShape*)nativeHandle)->More());
}

 void OCTNaming_ListIteratorOfListOfNamedShape::Next()
{
  ((TNaming_ListIteratorOfListOfNamedShape*)nativeHandle)->Next();
}

OCTNaming_NamedShape^ OCTNaming_ListIteratorOfListOfNamedShape::Value()
{
  Handle(TNaming_NamedShape) tmp = ((TNaming_ListIteratorOfListOfNamedShape*)nativeHandle)->Value();
  return gcnew OCTNaming_NamedShape(&tmp);
}


