// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_MapOfCurve.h"
#include "../Converter.h"
#include "TopOpeBRepDS_CurveData.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "TopOpeBRepDS_DataMapNodeOfMapOfCurve.h"
#include "TopOpeBRepDS_DataMapIteratorOfMapOfCurve.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_MapOfCurve::OCTopOpeBRepDS_MapOfCurve(TopOpeBRepDS_MapOfCurve* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_MapOfCurve::OCTopOpeBRepDS_MapOfCurve(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_MapOfCurve(NbBuckets);
}

OCTopOpeBRepDS_MapOfCurve^ OCTopOpeBRepDS_MapOfCurve::Assign(OCNaroWrappers::OCTopOpeBRepDS_MapOfCurve^ Other)
{
  TopOpeBRepDS_MapOfCurve* tmp = new TopOpeBRepDS_MapOfCurve(0);
  *tmp = ((TopOpeBRepDS_MapOfCurve*)nativeHandle)->Assign(*((TopOpeBRepDS_MapOfCurve*)Other->Handle));
  return gcnew OCTopOpeBRepDS_MapOfCurve(tmp);
}

 void OCTopOpeBRepDS_MapOfCurve::ReSize(Standard_Integer NbBuckets)
{
  ((TopOpeBRepDS_MapOfCurve*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTopOpeBRepDS_MapOfCurve::Bind(Standard_Integer K, OCNaroWrappers::OCTopOpeBRepDS_CurveData^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_MapOfCurve*)nativeHandle)->Bind(K, *((TopOpeBRepDS_CurveData*)I->Handle)));
}

 System::Boolean OCTopOpeBRepDS_MapOfCurve::IsBound(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_MapOfCurve*)nativeHandle)->IsBound(K));
}

 System::Boolean OCTopOpeBRepDS_MapOfCurve::UnBind(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_MapOfCurve*)nativeHandle)->UnBind(K));
}

OCTopOpeBRepDS_CurveData^ OCTopOpeBRepDS_MapOfCurve::Find(Standard_Integer K)
{
  TopOpeBRepDS_CurveData* tmp = new TopOpeBRepDS_CurveData();
  *tmp = ((TopOpeBRepDS_MapOfCurve*)nativeHandle)->Find(K);
  return gcnew OCTopOpeBRepDS_CurveData(tmp);
}

OCTopOpeBRepDS_CurveData^ OCTopOpeBRepDS_MapOfCurve::ChangeFind(Standard_Integer K)
{
  TopOpeBRepDS_CurveData* tmp = new TopOpeBRepDS_CurveData();
  *tmp = ((TopOpeBRepDS_MapOfCurve*)nativeHandle)->ChangeFind(K);
  return gcnew OCTopOpeBRepDS_CurveData(tmp);
}

 Standard_Address OCTopOpeBRepDS_MapOfCurve::Find1(Standard_Integer K)
{
  return ((TopOpeBRepDS_MapOfCurve*)nativeHandle)->Find1(K);
}

 Standard_Address OCTopOpeBRepDS_MapOfCurve::ChangeFind1(Standard_Integer K)
{
  return ((TopOpeBRepDS_MapOfCurve*)nativeHandle)->ChangeFind1(K);
}


