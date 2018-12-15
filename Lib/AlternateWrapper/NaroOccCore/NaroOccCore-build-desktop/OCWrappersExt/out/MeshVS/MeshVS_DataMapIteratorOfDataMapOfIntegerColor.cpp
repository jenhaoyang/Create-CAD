// File generated by CPPExt (CPP file)
//

#include "MeshVS_DataMapIteratorOfDataMapOfIntegerColor.h"
#include "../Converter.h"
#include "../Quantity/Quantity_Color.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MeshVS_DataMapOfIntegerColor.h"
#include "MeshVS_DataMapNodeOfDataMapOfIntegerColor.h"


using namespace OCNaroWrappers;

OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor::OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor(MeshVS_DataMapIteratorOfDataMapOfIntegerColor* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor::OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MeshVS_DataMapIteratorOfDataMapOfIntegerColor();
}

OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor::OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor(OCNaroWrappers::OCMeshVS_DataMapOfIntegerColor^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MeshVS_DataMapIteratorOfDataMapOfIntegerColor(*((MeshVS_DataMapOfIntegerColor*)aMap->Handle));
}

 void OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor::Initialize(OCNaroWrappers::OCMeshVS_DataMapOfIntegerColor^ aMap)
{
  ((MeshVS_DataMapIteratorOfDataMapOfIntegerColor*)nativeHandle)->Initialize(*((MeshVS_DataMapOfIntegerColor*)aMap->Handle));
}

 Standard_Integer OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor::Key()
{
  return ((MeshVS_DataMapIteratorOfDataMapOfIntegerColor*)nativeHandle)->Key();
}

OCQuantity_Color^ OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor::Value()
{
  Quantity_Color* tmp = new Quantity_Color();
  *tmp = ((MeshVS_DataMapIteratorOfDataMapOfIntegerColor*)nativeHandle)->Value();
  return gcnew OCQuantity_Color(tmp);
}


