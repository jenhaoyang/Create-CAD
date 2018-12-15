// File generated by CPPExt (CPP file)
//

#include "TopTools_IndexedDataMapOfShapeListOfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_ListOfShape.h"
#include "TopTools_ShapeMapHasher.h"
#include "TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeListOfShape.h"


using namespace OCNaroWrappers;

OCTopTools_IndexedDataMapOfShapeListOfShape::OCTopTools_IndexedDataMapOfShapeListOfShape(TopTools_IndexedDataMapOfShapeListOfShape* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopTools_IndexedDataMapOfShapeListOfShape::OCTopTools_IndexedDataMapOfShapeListOfShape(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopTools_IndexedDataMapOfShapeListOfShape(NbBuckets);
}

OCTopTools_IndexedDataMapOfShapeListOfShape^ OCTopTools_IndexedDataMapOfShapeListOfShape::Assign(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeListOfShape^ Other)
{
  TopTools_IndexedDataMapOfShapeListOfShape* tmp = new TopTools_IndexedDataMapOfShapeListOfShape(0);
  *tmp = ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->Assign(*((TopTools_IndexedDataMapOfShapeListOfShape*)Other->Handle));
  return gcnew OCTopTools_IndexedDataMapOfShapeListOfShape(tmp);
}

 void OCTopTools_IndexedDataMapOfShapeListOfShape::ReSize(Standard_Integer NbBuckets)
{
  ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCTopTools_IndexedDataMapOfShapeListOfShape::Add(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopTools_ListOfShape^ I)
{
  return ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->Add(*((TopoDS_Shape*)K->Handle), *((TopTools_ListOfShape*)I->Handle));
}

 void OCTopTools_IndexedDataMapOfShapeListOfShape::Substitute(Standard_Integer I, OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopTools_ListOfShape^ T)
{
  ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->Substitute(I, *((TopoDS_Shape*)K->Handle), *((TopTools_ListOfShape*)T->Handle));
}

 void OCTopTools_IndexedDataMapOfShapeListOfShape::RemoveLast()
{
  ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->RemoveLast();
}

 System::Boolean OCTopTools_IndexedDataMapOfShapeListOfShape::Contains(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->Contains(*((TopoDS_Shape*)K->Handle)));
}

OCTopoDS_Shape^ OCTopTools_IndexedDataMapOfShapeListOfShape::FindKey(Standard_Integer I)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->FindKey(I);
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_ListOfShape^ OCTopTools_IndexedDataMapOfShapeListOfShape::FindFromIndex(Standard_Integer I)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->FindFromIndex(I);
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopTools_ListOfShape^ OCTopTools_IndexedDataMapOfShapeListOfShape::ChangeFromIndex(Standard_Integer I)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->ChangeFromIndex(I);
  return gcnew OCTopTools_ListOfShape(tmp);
}

 Standard_Integer OCTopTools_IndexedDataMapOfShapeListOfShape::FindIndex(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->FindIndex(*((TopoDS_Shape*)K->Handle));
}

OCTopTools_ListOfShape^ OCTopTools_IndexedDataMapOfShapeListOfShape::FindFromKey(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->FindFromKey(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopTools_ListOfShape^ OCTopTools_IndexedDataMapOfShapeListOfShape::ChangeFromKey(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->ChangeFromKey(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

 Standard_Address OCTopTools_IndexedDataMapOfShapeListOfShape::FindFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->FindFromKey1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCTopTools_IndexedDataMapOfShapeListOfShape::ChangeFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopTools_IndexedDataMapOfShapeListOfShape*)nativeHandle)->ChangeFromKey1(*((TopoDS_Shape*)K->Handle));
}


