// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus.h"
#include "../Converter.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "TopOpeBRepDS_DataMapOfCheckStatus.h"
#include "TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus::OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus(TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus::OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus();
}

OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus::OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus(OCNaroWrappers::OCTopOpeBRepDS_DataMapOfCheckStatus^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus(*((TopOpeBRepDS_DataMapOfCheckStatus*)aMap->Handle));
}

 void OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus::Initialize(OCNaroWrappers::OCTopOpeBRepDS_DataMapOfCheckStatus^ aMap)
{
  ((TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus*)nativeHandle)->Initialize(*((TopOpeBRepDS_DataMapOfCheckStatus*)aMap->Handle));
}

 Standard_Integer OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus::Key()
{
  return ((TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus*)nativeHandle)->Key();
}

 OCTopOpeBRepDS_CheckStatus OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus::Value()
{
  return (OCTopOpeBRepDS_CheckStatus)(((TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus*)nativeHandle)->Value());
}


