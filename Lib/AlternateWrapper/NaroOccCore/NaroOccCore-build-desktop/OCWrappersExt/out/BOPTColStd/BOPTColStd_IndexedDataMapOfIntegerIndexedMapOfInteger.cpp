// File generated by CPPExt (CPP file)
//

#include "BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger.h"
#include "../Converter.h"
#include "../TColStd/TColStd_IndexedMapOfInteger.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger.h"


using namespace OCNaroWrappers;

OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger(BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger(NbBuckets);
}

OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger^ OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::Assign(OCNaroWrappers::OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger^ Other)
{
  BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger* tmp = new BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger(0);
  *tmp = ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->Assign(*((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)Other->Handle));
  return gcnew OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger(tmp);
}

 void OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::ReSize(Standard_Integer NbBuckets)
{
  ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::Add(Standard_Integer K, OCNaroWrappers::OCTColStd_IndexedMapOfInteger^ I)
{
  return ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->Add(K, *((TColStd_IndexedMapOfInteger*)I->Handle));
}

 void OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::Substitute(Standard_Integer I, Standard_Integer K, OCNaroWrappers::OCTColStd_IndexedMapOfInteger^ T)
{
  ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->Substitute(I, K, *((TColStd_IndexedMapOfInteger*)T->Handle));
}

 void OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::RemoveLast()
{
  ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->RemoveLast();
}

 System::Boolean OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::Contains(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->Contains(K));
}

 Standard_Integer OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::FindKey(Standard_Integer I)
{
  return ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->FindKey(I);
}

OCTColStd_IndexedMapOfInteger^ OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::FindFromIndex(Standard_Integer I)
{
  TColStd_IndexedMapOfInteger* tmp = new TColStd_IndexedMapOfInteger(0);
  *tmp = ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->FindFromIndex(I);
  return gcnew OCTColStd_IndexedMapOfInteger(tmp);
}

OCTColStd_IndexedMapOfInteger^ OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::ChangeFromIndex(Standard_Integer I)
{
  TColStd_IndexedMapOfInteger* tmp = new TColStd_IndexedMapOfInteger(0);
  *tmp = ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->ChangeFromIndex(I);
  return gcnew OCTColStd_IndexedMapOfInteger(tmp);
}

 Standard_Integer OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::FindIndex(Standard_Integer K)
{
  return ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->FindIndex(K);
}

OCTColStd_IndexedMapOfInteger^ OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::FindFromKey(Standard_Integer K)
{
  TColStd_IndexedMapOfInteger* tmp = new TColStd_IndexedMapOfInteger(0);
  *tmp = ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->FindFromKey(K);
  return gcnew OCTColStd_IndexedMapOfInteger(tmp);
}

OCTColStd_IndexedMapOfInteger^ OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::ChangeFromKey(Standard_Integer K)
{
  TColStd_IndexedMapOfInteger* tmp = new TColStd_IndexedMapOfInteger(0);
  *tmp = ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->ChangeFromKey(K);
  return gcnew OCTColStd_IndexedMapOfInteger(tmp);
}

 Standard_Address OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::FindFromKey1(Standard_Integer K)
{
  return ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->FindFromKey1(K);
}

 Standard_Address OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger::ChangeFromKey1(Standard_Integer K)
{
  return ((BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle)->ChangeFromKey1(K);
}


