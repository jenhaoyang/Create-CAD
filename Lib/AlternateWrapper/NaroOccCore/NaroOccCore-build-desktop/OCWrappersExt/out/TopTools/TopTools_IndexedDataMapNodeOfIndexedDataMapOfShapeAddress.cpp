// File generated by CPPExt (CPP file)
//

#include "TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_ShapeMapHasher.h"
#include "TopTools_IndexedDataMapOfShapeAddress.h"


using namespace OCNaroWrappers;

OCTopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress::OCTopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress(Handle(TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress(*nativeHandle);
}

OCTopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress::OCTopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress(OCNaroWrappers::OCTopoDS_Shape^ K1, Standard_Integer K2, Standard_Address I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress(new TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress(*((TopoDS_Shape*)K1->Handle), K2, I, n1, n2));
}

OCTopoDS_Shape^ OCTopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress::Key1()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress*)nativeHandle))->Key1();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCTopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress::Key2()
{
  return (*((Handle_TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCTopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress::Next2()
{
  return (*((Handle_TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress*)nativeHandle))->Next2();
}

 Standard_Address OCTopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress::Value()
{
  return (*((Handle_TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeAddress*)nativeHandle))->Value();
}


