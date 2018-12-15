// File generated by CPPExt (CPP file)
//

#include "TColStd_DataMapNodeOfDataMapOfIntegerTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "TColStd_MapIntegerHasher.h"
#include "TColStd_DataMapOfIntegerTransient.h"
#include "TColStd_DataMapIteratorOfDataMapOfIntegerTransient.h"


using namespace OCNaroWrappers;

OCTColStd_DataMapNodeOfDataMapOfIntegerTransient::OCTColStd_DataMapNodeOfDataMapOfIntegerTransient(Handle(TColStd_DataMapNodeOfDataMapOfIntegerTransient)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_DataMapNodeOfDataMapOfIntegerTransient(*nativeHandle);
}

OCTColStd_DataMapNodeOfDataMapOfIntegerTransient::OCTColStd_DataMapNodeOfDataMapOfIntegerTransient(Standard_Integer K, OCNaroWrappers::OCStandard_Transient^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_DataMapNodeOfDataMapOfIntegerTransient(new TColStd_DataMapNodeOfDataMapOfIntegerTransient(K, *((Handle_Standard_Transient*)I->Handle), n));
}

 Standard_Integer OCTColStd_DataMapNodeOfDataMapOfIntegerTransient::Key()
{
  return (*((Handle_TColStd_DataMapNodeOfDataMapOfIntegerTransient*)nativeHandle))->Key();
}

OCStandard_Transient^ OCTColStd_DataMapNodeOfDataMapOfIntegerTransient::Value()
{
  Handle(Standard_Transient) tmp = (*((Handle_TColStd_DataMapNodeOfDataMapOfIntegerTransient*)nativeHandle))->Value();
  return gcnew OCStandard_Transient(&tmp);
}


