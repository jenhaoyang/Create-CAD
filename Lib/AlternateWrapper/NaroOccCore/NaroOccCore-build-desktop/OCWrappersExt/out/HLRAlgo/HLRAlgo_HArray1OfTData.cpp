// File generated by CPPExt (CPP file)
//

#include "HLRAlgo_HArray1OfTData.h"
#include "../Converter.h"
#include "HLRAlgo_TriangleData.h"
#include "HLRAlgo_Array1OfTData.h"


using namespace OCNaroWrappers;

OCHLRAlgo_HArray1OfTData::OCHLRAlgo_HArray1OfTData(Handle(HLRAlgo_HArray1OfTData)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_HLRAlgo_HArray1OfTData(*nativeHandle);
}

OCHLRAlgo_HArray1OfTData::OCHLRAlgo_HArray1OfTData(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_HLRAlgo_HArray1OfTData(new HLRAlgo_HArray1OfTData(Low, Up));
}

OCHLRAlgo_HArray1OfTData::OCHLRAlgo_HArray1OfTData(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCHLRAlgo_TriangleData^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_HLRAlgo_HArray1OfTData(new HLRAlgo_HArray1OfTData(Low, Up, *((HLRAlgo_TriangleData*)V->Handle)));
}

 void OCHLRAlgo_HArray1OfTData::Init(OCNaroWrappers::OCHLRAlgo_TriangleData^ V)
{
  (*((Handle_HLRAlgo_HArray1OfTData*)nativeHandle))->Init(*((HLRAlgo_TriangleData*)V->Handle));
}

 Standard_Integer OCHLRAlgo_HArray1OfTData::Length()
{
  return (*((Handle_HLRAlgo_HArray1OfTData*)nativeHandle))->Length();
}

 Standard_Integer OCHLRAlgo_HArray1OfTData::Lower()
{
  return (*((Handle_HLRAlgo_HArray1OfTData*)nativeHandle))->Lower();
}

 Standard_Integer OCHLRAlgo_HArray1OfTData::Upper()
{
  return (*((Handle_HLRAlgo_HArray1OfTData*)nativeHandle))->Upper();
}

 void OCHLRAlgo_HArray1OfTData::SetValue(Standard_Integer Index, OCNaroWrappers::OCHLRAlgo_TriangleData^ Value)
{
  (*((Handle_HLRAlgo_HArray1OfTData*)nativeHandle))->SetValue(Index, *((HLRAlgo_TriangleData*)Value->Handle));
}

OCHLRAlgo_TriangleData^ OCHLRAlgo_HArray1OfTData::Value(Standard_Integer Index)
{
  HLRAlgo_TriangleData* tmp = new HLRAlgo_TriangleData();
  *tmp = (*((Handle_HLRAlgo_HArray1OfTData*)nativeHandle))->Value(Index);
  return gcnew OCHLRAlgo_TriangleData(tmp);
}

OCHLRAlgo_TriangleData^ OCHLRAlgo_HArray1OfTData::ChangeValue(Standard_Integer Index)
{
  HLRAlgo_TriangleData* tmp = new HLRAlgo_TriangleData();
  *tmp = (*((Handle_HLRAlgo_HArray1OfTData*)nativeHandle))->ChangeValue(Index);
  return gcnew OCHLRAlgo_TriangleData(tmp);
}

OCHLRAlgo_Array1OfTData^ OCHLRAlgo_HArray1OfTData::Array1()
{
  HLRAlgo_Array1OfTData* tmp = new HLRAlgo_Array1OfTData(0, 0);
  *tmp = (*((Handle_HLRAlgo_HArray1OfTData*)nativeHandle))->Array1();
  return gcnew OCHLRAlgo_Array1OfTData(tmp);
}

OCHLRAlgo_Array1OfTData^ OCHLRAlgo_HArray1OfTData::ChangeArray1()
{
  HLRAlgo_Array1OfTData* tmp = new HLRAlgo_Array1OfTData(0, 0);
  *tmp = (*((Handle_HLRAlgo_HArray1OfTData*)nativeHandle))->ChangeArray1();
  return gcnew OCHLRAlgo_Array1OfTData(tmp);
}


