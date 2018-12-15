// File generated by CPPExt (CPP file)
//

#include "CDF_Application.h"
#include "../Converter.h"
#include "CDF_Session.h"
#include "../Standard/Standard_GUID.h"
#include "../CDM/CDM_Document.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../TColStd/TColStd_SequenceOfExtendedString.h"
#include "../PCDM/PCDM_Reader.h"
#include "../CDM/CDM_MetaData.h"


using namespace OCNaroWrappers;

OCCDF_Application::OCCDF_Application(Handle(CDF_Application)* nativeHandle) : OCCDM_Application((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_CDF_Application(*nativeHandle);
}

OCCDF_Application::OCCDF_Application() : OCCDM_Application((OCDummy^)nullptr)

{}

OCCDF_Application^ OCCDF_Application::Load(OCNaroWrappers::OCStandard_GUID^ aGUID)
{
  Handle(CDF_Application) tmp = CDF_Application::Load(*((Standard_GUID*)aGUID->Handle));
  return gcnew OCCDF_Application(&tmp);
}

 void OCCDF_Application::Open(OCNaroWrappers::OCCDM_Document^ aDocument)
{
  (*((Handle_CDF_Application*)nativeHandle))->Open(*((Handle_CDM_Document*)aDocument->Handle));
}

 OCCDM_CanCloseStatus OCCDF_Application::CanClose(OCNaroWrappers::OCCDM_Document^ aDocument)
{
  return (OCCDM_CanCloseStatus)((*((Handle_CDF_Application*)nativeHandle))->CanClose(*((Handle_CDM_Document*)aDocument->Handle)));
}

 void OCCDF_Application::Close(OCNaroWrappers::OCCDM_Document^ aDocument)
{
  (*((Handle_CDF_Application*)nativeHandle))->Close(*((Handle_CDM_Document*)aDocument->Handle));
}

OCCDM_Document^ OCCDF_Application::Retrieve(OCNaroWrappers::OCTCollection_ExtendedString^ aFolder, OCNaroWrappers::OCTCollection_ExtendedString^ aName, System::Boolean UseStorageConfiguration)
{
  Handle(CDM_Document) tmp = (*((Handle_CDF_Application*)nativeHandle))->Retrieve(*((TCollection_ExtendedString*)aFolder->Handle), *((TCollection_ExtendedString*)aName->Handle), OCConverter::BooleanToStandardBoolean(UseStorageConfiguration));
  return gcnew OCCDM_Document(&tmp);
}

OCCDM_Document^ OCCDF_Application::Retrieve(OCNaroWrappers::OCTCollection_ExtendedString^ aFolder, OCNaroWrappers::OCTCollection_ExtendedString^ aName, OCNaroWrappers::OCTCollection_ExtendedString^ aVersion, System::Boolean UseStorageConfiguration)
{
  Handle(CDM_Document) tmp = (*((Handle_CDF_Application*)nativeHandle))->Retrieve(*((TCollection_ExtendedString*)aFolder->Handle), *((TCollection_ExtendedString*)aName->Handle), *((TCollection_ExtendedString*)aVersion->Handle), OCConverter::BooleanToStandardBoolean(UseStorageConfiguration));
  return gcnew OCCDM_Document(&tmp);
}

 OCPCDM_ReaderStatus OCCDF_Application::CanRetrieve(OCNaroWrappers::OCTCollection_ExtendedString^ aFolder, OCNaroWrappers::OCTCollection_ExtendedString^ aName)
{
  return (OCPCDM_ReaderStatus)((*((Handle_CDF_Application*)nativeHandle))->CanRetrieve(*((TCollection_ExtendedString*)aFolder->Handle), *((TCollection_ExtendedString*)aName->Handle)));
}

 OCPCDM_ReaderStatus OCCDF_Application::CanRetrieve(OCNaroWrappers::OCTCollection_ExtendedString^ aFolder, OCNaroWrappers::OCTCollection_ExtendedString^ aName, OCNaroWrappers::OCTCollection_ExtendedString^ aVersion)
{
  return (OCPCDM_ReaderStatus)((*((Handle_CDF_Application*)nativeHandle))->CanRetrieve(*((TCollection_ExtendedString*)aFolder->Handle), *((TCollection_ExtendedString*)aName->Handle), *((TCollection_ExtendedString*)aVersion->Handle)));
}

 OCPCDM_ReaderStatus OCCDF_Application::GetRetrieveStatus()
{
  return (OCPCDM_ReaderStatus)((*((Handle_CDF_Application*)nativeHandle))->GetRetrieveStatus());
}

 System::Boolean OCCDF_Application::FindReader(OCNaroWrappers::OCTCollection_ExtendedString^ aFileName)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDF_Application*)nativeHandle))->FindReader(*((TCollection_ExtendedString*)aFileName->Handle)));
}

OCPCDM_Reader^ OCCDF_Application::Reader(OCNaroWrappers::OCTCollection_ExtendedString^ aFileName)
{
  Handle(PCDM_Reader) tmp = (*((Handle_CDF_Application*)nativeHandle))->Reader(*((TCollection_ExtendedString*)aFileName->Handle));
  return gcnew OCPCDM_Reader(&tmp);
}

 System::Boolean OCCDF_Application::FindReaderFromFormat(OCNaroWrappers::OCTCollection_ExtendedString^ aFormat)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDF_Application*)nativeHandle))->FindReaderFromFormat(*((TCollection_ExtendedString*)aFormat->Handle)));
}

OCPCDM_Reader^ OCCDF_Application::ReaderFromFormat(OCNaroWrappers::OCTCollection_ExtendedString^ aFormat)
{
  Handle(PCDM_Reader) tmp = (*((Handle_CDF_Application*)nativeHandle))->ReaderFromFormat(*((TCollection_ExtendedString*)aFormat->Handle));
  return gcnew OCPCDM_Reader(&tmp);
}

 System::Boolean OCCDF_Application::Format(OCNaroWrappers::OCTCollection_ExtendedString^ aFileName, OCNaroWrappers::OCTCollection_ExtendedString^ theFormat)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDF_Application*)nativeHandle))->Format(*((TCollection_ExtendedString*)aFileName->Handle), *((TCollection_ExtendedString*)theFormat->Handle)));
}

 System::String^ OCCDF_Application::DefaultFolder()
{
  return OCConverter::StandardExtStringToString((*((Handle_CDF_Application*)nativeHandle))->DefaultFolder());
}

 System::Boolean OCCDF_Application::SetDefaultFolder(System::String^ aFolder)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDF_Application*)nativeHandle))->SetDefaultFolder(OCConverter::StringToStandardExtString(aFolder)));
}

 System::String^ OCCDF_Application::DefaultExtension()
{
  return OCConverter::StandardExtStringToString((*((Handle_CDF_Application*)nativeHandle))->DefaultExtension());
}


