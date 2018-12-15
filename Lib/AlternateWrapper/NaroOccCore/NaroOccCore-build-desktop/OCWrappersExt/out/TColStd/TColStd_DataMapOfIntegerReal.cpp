// File generated by CPPExt (CPP file)
//

#include "TColStd_DataMapOfIntegerReal.h"
#include "../Converter.h"
#include "TColStd_MapIntegerHasher.h"
#include "TColStd_DataMapNodeOfDataMapOfIntegerReal.h"
#include "TColStd_DataMapIteratorOfDataMapOfIntegerReal.h"


using namespace OCNaroWrappers;

OCTColStd_DataMapOfIntegerReal::OCTColStd_DataMapOfIntegerReal(TColStd_DataMapOfIntegerReal* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColStd_DataMapOfIntegerReal::OCTColStd_DataMapOfIntegerReal(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_DataMapOfIntegerReal(NbBuckets);
}

OCTColStd_DataMapOfIntegerReal^ OCTColStd_DataMapOfIntegerReal::Assign(OCNaroWrappers::OCTColStd_DataMapOfIntegerReal^ Other)
{
  TColStd_DataMapOfIntegerReal* tmp = new TColStd_DataMapOfIntegerReal(0);
  *tmp = ((TColStd_DataMapOfIntegerReal*)nativeHandle)->Assign(*((TColStd_DataMapOfIntegerReal*)Other->Handle));
  return gcnew OCTColStd_DataMapOfIntegerReal(tmp);
}

 void OCTColStd_DataMapOfIntegerReal::ReSize(Standard_Integer NbBuckets)
{
  ((TColStd_DataMapOfIntegerReal*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTColStd_DataMapOfIntegerReal::Bind(Standard_Integer K, Standard_Real I)
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_DataMapOfIntegerReal*)nativeHandle)->Bind(K, I));
}

 System::Boolean OCTColStd_DataMapOfIntegerReal::IsBound(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_DataMapOfIntegerReal*)nativeHandle)->IsBound(K));
}

 System::Boolean OCTColStd_DataMapOfIntegerReal::UnBind(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_DataMapOfIntegerReal*)nativeHandle)->UnBind(K));
}

 Standard_Real OCTColStd_DataMapOfIntegerReal::Find(Standard_Integer K)
{
  return ((TColStd_DataMapOfIntegerReal*)nativeHandle)->Find(K);
}

 Standard_Real OCTColStd_DataMapOfIntegerReal::ChangeFind(Standard_Integer K)
{
  return ((TColStd_DataMapOfIntegerReal*)nativeHandle)->ChangeFind(K);
}

 Standard_Address OCTColStd_DataMapOfIntegerReal::Find1(Standard_Integer K)
{
  return ((TColStd_DataMapOfIntegerReal*)nativeHandle)->Find1(K);
}

 Standard_Address OCTColStd_DataMapOfIntegerReal::ChangeFind1(Standard_Integer K)
{
  return ((TColStd_DataMapOfIntegerReal*)nativeHandle)->ChangeFind1(K);
}


