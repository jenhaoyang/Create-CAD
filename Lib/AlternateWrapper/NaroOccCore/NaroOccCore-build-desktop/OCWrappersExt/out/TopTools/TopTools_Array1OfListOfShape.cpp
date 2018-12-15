// File generated by CPPExt (CPP file)
//

#include "TopTools_Array1OfListOfShape.h"
#include "../Converter.h"
#include "TopTools_ListOfShape.h"


using namespace OCNaroWrappers;

OCTopTools_Array1OfListOfShape::OCTopTools_Array1OfListOfShape(TopTools_Array1OfListOfShape* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopTools_Array1OfListOfShape::OCTopTools_Array1OfListOfShape(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TopTools_Array1OfListOfShape(Low, Up);
}

OCTopTools_Array1OfListOfShape::OCTopTools_Array1OfListOfShape(OCNaroWrappers::OCTopTools_ListOfShape^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TopTools_Array1OfListOfShape(*((TopTools_ListOfShape*)Item->Handle), Low, Up);
}

 void OCTopTools_Array1OfListOfShape::Init(OCNaroWrappers::OCTopTools_ListOfShape^ V)
{
  ((TopTools_Array1OfListOfShape*)nativeHandle)->Init(*((TopTools_ListOfShape*)V->Handle));
}

 System::Boolean OCTopTools_Array1OfListOfShape::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_Array1OfListOfShape*)nativeHandle)->IsAllocated());
}

OCTopTools_Array1OfListOfShape^ OCTopTools_Array1OfListOfShape::Assign(OCNaroWrappers::OCTopTools_Array1OfListOfShape^ Other)
{
  TopTools_Array1OfListOfShape* tmp = new TopTools_Array1OfListOfShape(0, 0);
  *tmp = ((TopTools_Array1OfListOfShape*)nativeHandle)->Assign(*((TopTools_Array1OfListOfShape*)Other->Handle));
  return gcnew OCTopTools_Array1OfListOfShape(tmp);
}

 Standard_Integer OCTopTools_Array1OfListOfShape::Length()
{
  return ((TopTools_Array1OfListOfShape*)nativeHandle)->Length();
}

 Standard_Integer OCTopTools_Array1OfListOfShape::Lower()
{
  return ((TopTools_Array1OfListOfShape*)nativeHandle)->Lower();
}

 Standard_Integer OCTopTools_Array1OfListOfShape::Upper()
{
  return ((TopTools_Array1OfListOfShape*)nativeHandle)->Upper();
}

 void OCTopTools_Array1OfListOfShape::SetValue(Standard_Integer Index, OCNaroWrappers::OCTopTools_ListOfShape^ Value)
{
  ((TopTools_Array1OfListOfShape*)nativeHandle)->SetValue(Index, *((TopTools_ListOfShape*)Value->Handle));
}

OCTopTools_ListOfShape^ OCTopTools_Array1OfListOfShape::Value(Standard_Integer Index)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((TopTools_Array1OfListOfShape*)nativeHandle)->Value(Index);
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopTools_ListOfShape^ OCTopTools_Array1OfListOfShape::ChangeValue(Standard_Integer Index)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((TopTools_Array1OfListOfShape*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTopTools_ListOfShape(tmp);
}


