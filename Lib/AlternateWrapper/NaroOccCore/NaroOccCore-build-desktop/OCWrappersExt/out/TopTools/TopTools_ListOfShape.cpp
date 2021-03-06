// File generated by CPPExt (CPP file)
//

#include "TopTools_ListOfShape.h"
#include "../Converter.h"
#include "TopTools_ListIteratorOfListOfShape.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_ListNodeOfListOfShape.h"


using namespace OCNaroWrappers;

OCTopTools_ListOfShape::OCTopTools_ListOfShape(TopTools_ListOfShape* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopTools_ListOfShape::OCTopTools_ListOfShape() 
{
  nativeHandle = new TopTools_ListOfShape();
}

 void OCTopTools_ListOfShape::Assign(OCNaroWrappers::OCTopTools_ListOfShape^ Other)
{
  ((TopTools_ListOfShape*)nativeHandle)->Assign(*((TopTools_ListOfShape*)Other->Handle));
}

 Standard_Integer OCTopTools_ListOfShape::Extent()
{
  return ((TopTools_ListOfShape*)nativeHandle)->Extent();
}

 System::Boolean OCTopTools_ListOfShape::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_ListOfShape*)nativeHandle)->IsEmpty());
}

 void OCTopTools_ListOfShape::Prepend(OCNaroWrappers::OCTopoDS_Shape^ I)
{
  ((TopTools_ListOfShape*)nativeHandle)->Prepend(*((TopoDS_Shape*)I->Handle));
}

 void OCTopTools_ListOfShape::Prepend(OCNaroWrappers::OCTopoDS_Shape^ I, OCNaroWrappers::OCTopTools_ListIteratorOfListOfShape^ theIt)
{
  ((TopTools_ListOfShape*)nativeHandle)->Prepend(*((TopoDS_Shape*)I->Handle), *((TopTools_ListIteratorOfListOfShape*)theIt->Handle));
}

 void OCTopTools_ListOfShape::Prepend(OCNaroWrappers::OCTopTools_ListOfShape^ Other)
{
  ((TopTools_ListOfShape*)nativeHandle)->Prepend(*((TopTools_ListOfShape*)Other->Handle));
}

 void OCTopTools_ListOfShape::Append(OCNaroWrappers::OCTopoDS_Shape^ I)
{
  ((TopTools_ListOfShape*)nativeHandle)->Append(*((TopoDS_Shape*)I->Handle));
}

 void OCTopTools_ListOfShape::Append(OCNaroWrappers::OCTopoDS_Shape^ I, OCNaroWrappers::OCTopTools_ListIteratorOfListOfShape^ theIt)
{
  ((TopTools_ListOfShape*)nativeHandle)->Append(*((TopoDS_Shape*)I->Handle), *((TopTools_ListIteratorOfListOfShape*)theIt->Handle));
}

 void OCTopTools_ListOfShape::Append(OCNaroWrappers::OCTopTools_ListOfShape^ Other)
{
  ((TopTools_ListOfShape*)nativeHandle)->Append(*((TopTools_ListOfShape*)Other->Handle));
}

OCTopoDS_Shape^ OCTopTools_ListOfShape::First()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_ListOfShape*)nativeHandle)->First();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTopTools_ListOfShape::Last()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_ListOfShape*)nativeHandle)->Last();
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCTopTools_ListOfShape::RemoveFirst()
{
  ((TopTools_ListOfShape*)nativeHandle)->RemoveFirst();
}

 void OCTopTools_ListOfShape::Remove(OCNaroWrappers::OCTopTools_ListIteratorOfListOfShape^ It)
{
  ((TopTools_ListOfShape*)nativeHandle)->Remove(*((TopTools_ListIteratorOfListOfShape*)It->Handle));
}

 void OCTopTools_ListOfShape::InsertBefore(OCNaroWrappers::OCTopoDS_Shape^ I, OCNaroWrappers::OCTopTools_ListIteratorOfListOfShape^ It)
{
  ((TopTools_ListOfShape*)nativeHandle)->InsertBefore(*((TopoDS_Shape*)I->Handle), *((TopTools_ListIteratorOfListOfShape*)It->Handle));
}

 void OCTopTools_ListOfShape::InsertBefore(OCNaroWrappers::OCTopTools_ListOfShape^ Other, OCNaroWrappers::OCTopTools_ListIteratorOfListOfShape^ It)
{
  ((TopTools_ListOfShape*)nativeHandle)->InsertBefore(*((TopTools_ListOfShape*)Other->Handle), *((TopTools_ListIteratorOfListOfShape*)It->Handle));
}

 void OCTopTools_ListOfShape::InsertAfter(OCNaroWrappers::OCTopoDS_Shape^ I, OCNaroWrappers::OCTopTools_ListIteratorOfListOfShape^ It)
{
  ((TopTools_ListOfShape*)nativeHandle)->InsertAfter(*((TopoDS_Shape*)I->Handle), *((TopTools_ListIteratorOfListOfShape*)It->Handle));
}

 void OCTopTools_ListOfShape::InsertAfter(OCNaroWrappers::OCTopTools_ListOfShape^ Other, OCNaroWrappers::OCTopTools_ListIteratorOfListOfShape^ It)
{
  ((TopTools_ListOfShape*)nativeHandle)->InsertAfter(*((TopTools_ListOfShape*)Other->Handle), *((TopTools_ListIteratorOfListOfShape*)It->Handle));
}


