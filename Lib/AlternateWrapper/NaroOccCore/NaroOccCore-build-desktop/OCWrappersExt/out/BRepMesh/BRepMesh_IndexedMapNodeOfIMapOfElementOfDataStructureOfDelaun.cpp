// File generated by CPPExt (CPP file)
//

#include "BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun.h"
#include "../Converter.h"
#include "BRepMesh_Triangle.h"
#include "BRepMesh_ElemHasherOfDataStructureOfDelaun.h"
#include "BRepMesh_IMapOfElementOfDataStructureOfDelaun.h"


using namespace OCNaroWrappers;

OCBRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun::OCBRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun(Handle(BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun(*nativeHandle);
}

OCBRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun::OCBRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun(OCNaroWrappers::OCBRepMesh_Triangle^ K1, Standard_Integer K2, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun(new BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun(*((BRepMesh_Triangle*)K1->Handle), K2, n1, n2));
}

OCBRepMesh_Triangle^ OCBRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun::Key1()
{
  BRepMesh_Triangle* tmp = new BRepMesh_Triangle();
  *tmp = (*((Handle_BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun*)nativeHandle))->Key1();
  return gcnew OCBRepMesh_Triangle(tmp);
}

 Standard_Integer OCBRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun::Key2()
{
  return (*((Handle_BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCBRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun::Next2()
{
  return (*((Handle_BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun*)nativeHandle))->Next2();
}


