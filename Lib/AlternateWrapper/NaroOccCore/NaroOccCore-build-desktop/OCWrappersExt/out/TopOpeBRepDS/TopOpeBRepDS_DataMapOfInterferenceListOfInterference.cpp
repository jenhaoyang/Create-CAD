// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_DataMapOfInterferenceListOfInterference.h"
#include "../Converter.h"
#include "TopOpeBRepDS_Interference.h"
#include "TopOpeBRepDS_ListOfInterference.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceListOfInterference.h"
#include "TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceListOfInterference.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference::OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference(TopOpeBRepDS_DataMapOfInterferenceListOfInterference* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference::OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_DataMapOfInterferenceListOfInterference(NbBuckets);
}

OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference^ OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference::Assign(OCNaroWrappers::OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference^ Other)
{
  TopOpeBRepDS_DataMapOfInterferenceListOfInterference* tmp = new TopOpeBRepDS_DataMapOfInterferenceListOfInterference(0);
  *tmp = ((TopOpeBRepDS_DataMapOfInterferenceListOfInterference*)nativeHandle)->Assign(*((TopOpeBRepDS_DataMapOfInterferenceListOfInterference*)Other->Handle));
  return gcnew OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference(tmp);
}

 void OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference::ReSize(Standard_Integer NbBuckets)
{
  ((TopOpeBRepDS_DataMapOfInterferenceListOfInterference*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference::Bind(OCNaroWrappers::OCTopOpeBRepDS_Interference^ K, OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_DataMapOfInterferenceListOfInterference*)nativeHandle)->Bind(*((Handle_TopOpeBRepDS_Interference*)K->Handle), *((TopOpeBRepDS_ListOfInterference*)I->Handle)));
}

 System::Boolean OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference::IsBound(OCNaroWrappers::OCTopOpeBRepDS_Interference^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_DataMapOfInterferenceListOfInterference*)nativeHandle)->IsBound(*((Handle_TopOpeBRepDS_Interference*)K->Handle)));
}

 System::Boolean OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference::UnBind(OCNaroWrappers::OCTopOpeBRepDS_Interference^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_DataMapOfInterferenceListOfInterference*)nativeHandle)->UnBind(*((Handle_TopOpeBRepDS_Interference*)K->Handle)));
}

OCTopOpeBRepDS_ListOfInterference^ OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference::Find(OCNaroWrappers::OCTopOpeBRepDS_Interference^ K)
{
  TopOpeBRepDS_ListOfInterference* tmp = new TopOpeBRepDS_ListOfInterference();
  *tmp = ((TopOpeBRepDS_DataMapOfInterferenceListOfInterference*)nativeHandle)->Find(*((Handle_TopOpeBRepDS_Interference*)K->Handle));
  return gcnew OCTopOpeBRepDS_ListOfInterference(tmp);
}

OCTopOpeBRepDS_ListOfInterference^ OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference::ChangeFind(OCNaroWrappers::OCTopOpeBRepDS_Interference^ K)
{
  TopOpeBRepDS_ListOfInterference* tmp = new TopOpeBRepDS_ListOfInterference();
  *tmp = ((TopOpeBRepDS_DataMapOfInterferenceListOfInterference*)nativeHandle)->ChangeFind(*((Handle_TopOpeBRepDS_Interference*)K->Handle));
  return gcnew OCTopOpeBRepDS_ListOfInterference(tmp);
}

 Standard_Address OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference::Find1(OCNaroWrappers::OCTopOpeBRepDS_Interference^ K)
{
  return ((TopOpeBRepDS_DataMapOfInterferenceListOfInterference*)nativeHandle)->Find1(*((Handle_TopOpeBRepDS_Interference*)K->Handle));
}

 Standard_Address OCTopOpeBRepDS_DataMapOfInterferenceListOfInterference::ChangeFind1(OCNaroWrappers::OCTopOpeBRepDS_Interference^ K)
{
  return ((TopOpeBRepDS_DataMapOfInterferenceListOfInterference*)nativeHandle)->ChangeFind1(*((Handle_TopOpeBRepDS_Interference*)K->Handle));
}


