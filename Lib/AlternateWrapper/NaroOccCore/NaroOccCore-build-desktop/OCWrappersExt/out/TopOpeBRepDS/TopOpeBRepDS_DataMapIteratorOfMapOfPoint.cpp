// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_DataMapIteratorOfMapOfPoint.h"
#include "../Converter.h"
#include "TopOpeBRepDS_PointData.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "TopOpeBRepDS_MapOfPoint.h"
#include "TopOpeBRepDS_DataMapNodeOfMapOfPoint.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_DataMapIteratorOfMapOfPoint::OCTopOpeBRepDS_DataMapIteratorOfMapOfPoint(TopOpeBRepDS_DataMapIteratorOfMapOfPoint* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_DataMapIteratorOfMapOfPoint::OCTopOpeBRepDS_DataMapIteratorOfMapOfPoint() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_DataMapIteratorOfMapOfPoint();
}

OCTopOpeBRepDS_DataMapIteratorOfMapOfPoint::OCTopOpeBRepDS_DataMapIteratorOfMapOfPoint(OCNaroWrappers::OCTopOpeBRepDS_MapOfPoint^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_DataMapIteratorOfMapOfPoint(*((TopOpeBRepDS_MapOfPoint*)aMap->Handle));
}

 void OCTopOpeBRepDS_DataMapIteratorOfMapOfPoint::Initialize(OCNaroWrappers::OCTopOpeBRepDS_MapOfPoint^ aMap)
{
  ((TopOpeBRepDS_DataMapIteratorOfMapOfPoint*)nativeHandle)->Initialize(*((TopOpeBRepDS_MapOfPoint*)aMap->Handle));
}

 Standard_Integer OCTopOpeBRepDS_DataMapIteratorOfMapOfPoint::Key()
{
  return ((TopOpeBRepDS_DataMapIteratorOfMapOfPoint*)nativeHandle)->Key();
}

OCTopOpeBRepDS_PointData^ OCTopOpeBRepDS_DataMapIteratorOfMapOfPoint::Value()
{
  TopOpeBRepDS_PointData* tmp = new TopOpeBRepDS_PointData();
  *tmp = ((TopOpeBRepDS_DataMapIteratorOfMapOfPoint*)nativeHandle)->Value();
  return gcnew OCTopOpeBRepDS_PointData(tmp);
}


