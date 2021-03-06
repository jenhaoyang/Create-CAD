// File generated by CPPExt (CPP file)
//

#include "BOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BOPTools_IndexedDataMapOfShapeWithState.h"


using namespace OCNaroWrappers;

OCBOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState::OCBOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState(Handle(BOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState(*nativeHandle);
}

OCBOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState::OCBOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState(OCNaroWrappers::OCTopoDS_Shape^ K1, Standard_Integer K2, OCBooleanOperations_StateOfShape I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState(new BOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState(*((TopoDS_Shape*)K1->Handle), K2, (BooleanOperations_StateOfShape)I, n1, n2));
}

OCTopoDS_Shape^ OCBOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState::Key1()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState*)nativeHandle))->Key1();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCBOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState::Key2()
{
  return (*((Handle_BOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCBOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState::Next2()
{
  return (*((Handle_BOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState*)nativeHandle))->Next2();
}

 OCBooleanOperations_StateOfShape OCBOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState::Value()
{
  return (OCBooleanOperations_StateOfShape)((*((Handle_BOPTools_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState*)nativeHandle))->Value());
}


