// File generated by CPPExt (CPP file)
//

#include "MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner.h"
#include "../Converter.h"
#include "MeshVS_MeshEntityOwner.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MeshVS_DataMapOfIntegerMeshEntityOwner.h"
#include "MeshVS_DataMapNodeOfDataMapOfIntegerMeshEntityOwner.h"


using namespace OCNaroWrappers;

OCMeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner::OCMeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner(MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner::OCMeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner();
}

OCMeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner::OCMeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner(OCNaroWrappers::OCMeshVS_DataMapOfIntegerMeshEntityOwner^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner(*((MeshVS_DataMapOfIntegerMeshEntityOwner*)aMap->Handle));
}

 void OCMeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner::Initialize(OCNaroWrappers::OCMeshVS_DataMapOfIntegerMeshEntityOwner^ aMap)
{
  ((MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner*)nativeHandle)->Initialize(*((MeshVS_DataMapOfIntegerMeshEntityOwner*)aMap->Handle));
}

 Standard_Integer OCMeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner::Key()
{
  return ((MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner*)nativeHandle)->Key();
}

OCMeshVS_MeshEntityOwner^ OCMeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner::Value()
{
  Handle(MeshVS_MeshEntityOwner) tmp = ((MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner*)nativeHandle)->Value();
  return gcnew OCMeshVS_MeshEntityOwner(&tmp);
}

