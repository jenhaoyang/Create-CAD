// File generated by CPPExt (CPP file)
//

#include "MDF_TypeDriverListMapOfARDriverTable.h"
#include "../Converter.h"
#include "../Standard/Standard_Type.h"
#include "MDF_DriverListOfARDriverTable.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable.h"
#include "MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable.h"


using namespace OCNaroWrappers;

OCMDF_TypeDriverListMapOfARDriverTable::OCMDF_TypeDriverListMapOfARDriverTable(MDF_TypeDriverListMapOfARDriverTable* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMDF_TypeDriverListMapOfARDriverTable::OCMDF_TypeDriverListMapOfARDriverTable(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new MDF_TypeDriverListMapOfARDriverTable(NbBuckets);
}

OCMDF_TypeDriverListMapOfARDriverTable^ OCMDF_TypeDriverListMapOfARDriverTable::Assign(OCNaroWrappers::OCMDF_TypeDriverListMapOfARDriverTable^ Other)
{
  MDF_TypeDriverListMapOfARDriverTable* tmp = new MDF_TypeDriverListMapOfARDriverTable(0);
  *tmp = ((MDF_TypeDriverListMapOfARDriverTable*)nativeHandle)->Assign(*((MDF_TypeDriverListMapOfARDriverTable*)Other->Handle));
  return gcnew OCMDF_TypeDriverListMapOfARDriverTable(tmp);
}

 void OCMDF_TypeDriverListMapOfARDriverTable::ReSize(Standard_Integer NbBuckets)
{
  ((MDF_TypeDriverListMapOfARDriverTable*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCMDF_TypeDriverListMapOfARDriverTable::Bind(OCNaroWrappers::OCStandard_Type^ K, OCNaroWrappers::OCMDF_DriverListOfARDriverTable^ I)
{
  return OCConverter::StandardBooleanToBoolean(((MDF_TypeDriverListMapOfARDriverTable*)nativeHandle)->Bind(*((Handle_Standard_Type*)K->Handle), *((MDF_DriverListOfARDriverTable*)I->Handle)));
}

 System::Boolean OCMDF_TypeDriverListMapOfARDriverTable::IsBound(OCNaroWrappers::OCStandard_Type^ K)
{
  return OCConverter::StandardBooleanToBoolean(((MDF_TypeDriverListMapOfARDriverTable*)nativeHandle)->IsBound(*((Handle_Standard_Type*)K->Handle)));
}

 System::Boolean OCMDF_TypeDriverListMapOfARDriverTable::UnBind(OCNaroWrappers::OCStandard_Type^ K)
{
  return OCConverter::StandardBooleanToBoolean(((MDF_TypeDriverListMapOfARDriverTable*)nativeHandle)->UnBind(*((Handle_Standard_Type*)K->Handle)));
}

OCMDF_DriverListOfARDriverTable^ OCMDF_TypeDriverListMapOfARDriverTable::Find(OCNaroWrappers::OCStandard_Type^ K)
{
  MDF_DriverListOfARDriverTable* tmp = new MDF_DriverListOfARDriverTable();
  *tmp = ((MDF_TypeDriverListMapOfARDriverTable*)nativeHandle)->Find(*((Handle_Standard_Type*)K->Handle));
  return gcnew OCMDF_DriverListOfARDriverTable(tmp);
}

OCMDF_DriverListOfARDriverTable^ OCMDF_TypeDriverListMapOfARDriverTable::ChangeFind(OCNaroWrappers::OCStandard_Type^ K)
{
  MDF_DriverListOfARDriverTable* tmp = new MDF_DriverListOfARDriverTable();
  *tmp = ((MDF_TypeDriverListMapOfARDriverTable*)nativeHandle)->ChangeFind(*((Handle_Standard_Type*)K->Handle));
  return gcnew OCMDF_DriverListOfARDriverTable(tmp);
}

 Standard_Address OCMDF_TypeDriverListMapOfARDriverTable::Find1(OCNaroWrappers::OCStandard_Type^ K)
{
  return ((MDF_TypeDriverListMapOfARDriverTable*)nativeHandle)->Find1(*((Handle_Standard_Type*)K->Handle));
}

 Standard_Address OCMDF_TypeDriverListMapOfARDriverTable::ChangeFind1(OCNaroWrappers::OCStandard_Type^ K)
{
  return ((MDF_TypeDriverListMapOfARDriverTable*)nativeHandle)->ChangeFind1(*((Handle_Standard_Type*)K->Handle));
}


