// File generated by CPPExt (CPP file)
//

#include "TColStd_DataMapNodeOfDataMapOfIntegerReal.h"
#include "../Converter.h"
#include "TColStd_MapIntegerHasher.h"
#include "TColStd_DataMapOfIntegerReal.h"
#include "TColStd_DataMapIteratorOfDataMapOfIntegerReal.h"


using namespace OCNaroWrappers;

OCTColStd_DataMapNodeOfDataMapOfIntegerReal::OCTColStd_DataMapNodeOfDataMapOfIntegerReal(Handle(TColStd_DataMapNodeOfDataMapOfIntegerReal)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_DataMapNodeOfDataMapOfIntegerReal(*nativeHandle);
}

OCTColStd_DataMapNodeOfDataMapOfIntegerReal::OCTColStd_DataMapNodeOfDataMapOfIntegerReal(Standard_Integer K, Standard_Real I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_DataMapNodeOfDataMapOfIntegerReal(new TColStd_DataMapNodeOfDataMapOfIntegerReal(K, I, n));
}

 Standard_Integer OCTColStd_DataMapNodeOfDataMapOfIntegerReal::Key()
{
  return (*((Handle_TColStd_DataMapNodeOfDataMapOfIntegerReal*)nativeHandle))->Key();
}

 Standard_Real OCTColStd_DataMapNodeOfDataMapOfIntegerReal::Value()
{
  return (*((Handle_TColStd_DataMapNodeOfDataMapOfIntegerReal*)nativeHandle))->Value();
}


