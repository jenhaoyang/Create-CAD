// File generated by CPPExt (CPP file)
//

#include "MeshAlgo_DataMapNodeOfDataMapOfIntegerCirc.h"
#include "../Converter.h"
#include "MeshAlgo_Circ.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MeshAlgo_DataMapOfIntegerCirc.h"
#include "MeshAlgo_DataMapIteratorOfDataMapOfIntegerCirc.h"


using namespace OCNaroWrappers;

OCMeshAlgo_DataMapNodeOfDataMapOfIntegerCirc::OCMeshAlgo_DataMapNodeOfDataMapOfIntegerCirc(Handle(MeshAlgo_DataMapNodeOfDataMapOfIntegerCirc)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MeshAlgo_DataMapNodeOfDataMapOfIntegerCirc(*nativeHandle);
}

OCMeshAlgo_DataMapNodeOfDataMapOfIntegerCirc::OCMeshAlgo_DataMapNodeOfDataMapOfIntegerCirc(Standard_Integer K, OCNaroWrappers::OCMeshAlgo_Circ^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MeshAlgo_DataMapNodeOfDataMapOfIntegerCirc(new MeshAlgo_DataMapNodeOfDataMapOfIntegerCirc(K, *((MeshAlgo_Circ*)I->Handle), n));
}

 Standard_Integer OCMeshAlgo_DataMapNodeOfDataMapOfIntegerCirc::Key()
{
  return (*((Handle_MeshAlgo_DataMapNodeOfDataMapOfIntegerCirc*)nativeHandle))->Key();
}

OCMeshAlgo_Circ^ OCMeshAlgo_DataMapNodeOfDataMapOfIntegerCirc::Value()
{
  MeshAlgo_Circ* tmp = new MeshAlgo_Circ();
  *tmp = (*((Handle_MeshAlgo_DataMapNodeOfDataMapOfIntegerCirc*)nativeHandle))->Value();
  return gcnew OCMeshAlgo_Circ(tmp);
}


