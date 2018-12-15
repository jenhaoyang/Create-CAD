// File generated by CPPExt (CPP file)
//

#include "CDF_MetaDataDriver.h"
#include "../Converter.h"
#include "../CDM/CDM_MetaData.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../CDM/CDM_Document.h"
#include "../PCDM/PCDM_ReferenceIterator.h"


using namespace OCNaroWrappers;

OCCDF_MetaDataDriver::OCCDF_MetaDataDriver(Handle(CDF_MetaDataDriver)* nativeHandle) : OCStandard_Transient((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_CDF_MetaDataDriver(*nativeHandle);
}

OCCDF_MetaDataDriver::OCCDF_MetaDataDriver() : OCStandard_Transient((OCDummy^)nullptr)

{}

 System::Boolean OCCDF_MetaDataDriver::HasVersionCapability()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDF_MetaDataDriver*)nativeHandle))->HasVersionCapability());
}

 void OCCDF_MetaDataDriver::CreateDependsOn(OCNaroWrappers::OCCDM_MetaData^ aFirstData, OCNaroWrappers::OCCDM_MetaData^ aSecondData)
{
  (*((Handle_CDF_MetaDataDriver*)nativeHandle))->CreateDependsOn(*((Handle_CDM_MetaData*)aFirstData->Handle), *((Handle_CDM_MetaData*)aSecondData->Handle));
}

 void OCCDF_MetaDataDriver::CreateReference(OCNaroWrappers::OCCDM_MetaData^ aFrom, OCNaroWrappers::OCCDM_MetaData^ aTo, Standard_Integer aReferenceIdentifier, Standard_Integer aToDocumentVersion)
{
  (*((Handle_CDF_MetaDataDriver*)nativeHandle))->CreateReference(*((Handle_CDM_MetaData*)aFrom->Handle), *((Handle_CDM_MetaData*)aTo->Handle), aReferenceIdentifier, aToDocumentVersion);
}

 System::Boolean OCCDF_MetaDataDriver::HasVersion(OCNaroWrappers::OCTCollection_ExtendedString^ aFolder, OCNaroWrappers::OCTCollection_ExtendedString^ aName)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDF_MetaDataDriver*)nativeHandle))->HasVersion(*((TCollection_ExtendedString*)aFolder->Handle), *((TCollection_ExtendedString*)aName->Handle)));
}

OCTCollection_ExtendedString^ OCCDF_MetaDataDriver::SetName(OCNaroWrappers::OCCDM_Document^ aDocument, OCNaroWrappers::OCTCollection_ExtendedString^ aName)
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDF_MetaDataDriver*)nativeHandle))->SetName(*((Handle_CDM_Document*)aDocument->Handle), *((TCollection_ExtendedString*)aName->Handle));
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCCDM_MetaData^ OCCDF_MetaDataDriver::LastVersion(OCNaroWrappers::OCCDM_MetaData^ aMetaData)
{
  Handle(CDM_MetaData) tmp = (*((Handle_CDF_MetaDataDriver*)nativeHandle))->LastVersion(*((Handle_CDM_MetaData*)aMetaData->Handle));
  return gcnew OCCDM_MetaData(&tmp);
}

OCPCDM_ReferenceIterator^ OCCDF_MetaDataDriver::ReferenceIterator()
{
  Handle(PCDM_ReferenceIterator) tmp = (*((Handle_CDF_MetaDataDriver*)nativeHandle))->ReferenceIterator();
  return gcnew OCPCDM_ReferenceIterator(&tmp);
}

 System::Boolean OCCDF_MetaDataDriver::Find(OCNaroWrappers::OCTCollection_ExtendedString^ aFolder, OCNaroWrappers::OCTCollection_ExtendedString^ aName)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDF_MetaDataDriver*)nativeHandle))->Find(*((TCollection_ExtendedString*)aFolder->Handle), *((TCollection_ExtendedString*)aName->Handle)));
}

OCCDM_MetaData^ OCCDF_MetaDataDriver::MetaData(OCNaroWrappers::OCTCollection_ExtendedString^ aFolder, OCNaroWrappers::OCTCollection_ExtendedString^ aName)
{
  Handle(CDM_MetaData) tmp = (*((Handle_CDF_MetaDataDriver*)nativeHandle))->MetaData(*((TCollection_ExtendedString*)aFolder->Handle), *((TCollection_ExtendedString*)aName->Handle));
  return gcnew OCCDM_MetaData(&tmp);
}


