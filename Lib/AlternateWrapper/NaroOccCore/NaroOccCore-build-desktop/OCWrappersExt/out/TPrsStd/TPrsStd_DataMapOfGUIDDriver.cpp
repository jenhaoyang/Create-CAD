// File generated by CPPExt (CPP file)
//

#include "TPrsStd_DataMapOfGUIDDriver.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "TPrsStd_Driver.h"
#include "TPrsStd_DataMapNodeOfDataMapOfGUIDDriver.h"
#include "TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver.h"


using namespace OCNaroWrappers;

OCTPrsStd_DataMapOfGUIDDriver::OCTPrsStd_DataMapOfGUIDDriver(TPrsStd_DataMapOfGUIDDriver* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTPrsStd_DataMapOfGUIDDriver::OCTPrsStd_DataMapOfGUIDDriver(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TPrsStd_DataMapOfGUIDDriver(NbBuckets);
}

OCTPrsStd_DataMapOfGUIDDriver^ OCTPrsStd_DataMapOfGUIDDriver::Assign(OCNaroWrappers::OCTPrsStd_DataMapOfGUIDDriver^ Other)
{
  TPrsStd_DataMapOfGUIDDriver* tmp = new TPrsStd_DataMapOfGUIDDriver(0);
  *tmp = ((TPrsStd_DataMapOfGUIDDriver*)nativeHandle)->Assign(*((TPrsStd_DataMapOfGUIDDriver*)Other->Handle));
  return gcnew OCTPrsStd_DataMapOfGUIDDriver(tmp);
}

 void OCTPrsStd_DataMapOfGUIDDriver::ReSize(Standard_Integer NbBuckets)
{
  ((TPrsStd_DataMapOfGUIDDriver*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTPrsStd_DataMapOfGUIDDriver::Bind(OCNaroWrappers::OCStandard_GUID^ K, OCNaroWrappers::OCTPrsStd_Driver^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TPrsStd_DataMapOfGUIDDriver*)nativeHandle)->Bind(*((Standard_GUID*)K->Handle), *((Handle_TPrsStd_Driver*)I->Handle)));
}

 System::Boolean OCTPrsStd_DataMapOfGUIDDriver::IsBound(OCNaroWrappers::OCStandard_GUID^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TPrsStd_DataMapOfGUIDDriver*)nativeHandle)->IsBound(*((Standard_GUID*)K->Handle)));
}

 System::Boolean OCTPrsStd_DataMapOfGUIDDriver::UnBind(OCNaroWrappers::OCStandard_GUID^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TPrsStd_DataMapOfGUIDDriver*)nativeHandle)->UnBind(*((Standard_GUID*)K->Handle)));
}

OCTPrsStd_Driver^ OCTPrsStd_DataMapOfGUIDDriver::Find(OCNaroWrappers::OCStandard_GUID^ K)
{
  Handle(TPrsStd_Driver) tmp = ((TPrsStd_DataMapOfGUIDDriver*)nativeHandle)->Find(*((Standard_GUID*)K->Handle));
  return gcnew OCTPrsStd_Driver(&tmp);
}

OCTPrsStd_Driver^ OCTPrsStd_DataMapOfGUIDDriver::ChangeFind(OCNaroWrappers::OCStandard_GUID^ K)
{
  Handle(TPrsStd_Driver) tmp = ((TPrsStd_DataMapOfGUIDDriver*)nativeHandle)->ChangeFind(*((Standard_GUID*)K->Handle));
  return gcnew OCTPrsStd_Driver(&tmp);
}

 Standard_Address OCTPrsStd_DataMapOfGUIDDriver::Find1(OCNaroWrappers::OCStandard_GUID^ K)
{
  return ((TPrsStd_DataMapOfGUIDDriver*)nativeHandle)->Find1(*((Standard_GUID*)K->Handle));
}

 Standard_Address OCTPrsStd_DataMapOfGUIDDriver::ChangeFind1(OCNaroWrappers::OCStandard_GUID^ K)
{
  return ((TPrsStd_DataMapOfGUIDDriver*)nativeHandle)->ChangeFind1(*((Standard_GUID*)K->Handle));
}


