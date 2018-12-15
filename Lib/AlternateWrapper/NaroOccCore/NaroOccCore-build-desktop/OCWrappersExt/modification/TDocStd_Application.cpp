// File generated by CPPExt (CPP file)
//

#include "TDocStd_Application.h"
#include "../Converter.h"
#include "../Resource/Resource_Manager.h"
#include "TDocStd_Document.h"
#include "../TColStd/TColStd_SequenceOfExtendedString.h"
#include "../TCollection/TCollection_ExtendedString.h"


using namespace Naro;

TOcaf_Application::TOcaf_Application()
{
	theResourcesName = "";
	theFormats.Clear();
}


//=======================================================================
//function : Formats
//purpose  : 
//=======================================================================
void TOcaf_Application::Formats(TColStd_SequenceOfExtendedString& Formats) 
{
	Formats = theFormats;
}

//=======================================================================
//function : ResourcesName
//purpose  : 
//=======================================================================

Standard_CString TOcaf_Application::ResourcesName() 
{
  return theResourcesName;
}


OCTDocStd_Application::OCTDocStd_Application(Handle(TDocStd_Application)* nativeHandle) : OCCDF_Application((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDocStd_Application(*nativeHandle);
}

OCTDocStd_Application::OCTDocStd_Application(System::String^ resourcesName, Naro::OCTColStd_SequenceOfExtendedString^ formats) : OCCDF_Application((OCDummy^)nullptr)
{
	this->nativeHandle = new Handle_TOcaf_Application(new TOcaf_Application());
	((TOcaf_Application*)this->nativeHandle)->theResourcesName = OCConverter::StringToStandardCString(resourcesName);
	(*((Handle_TOcaf_Application*)this->nativeHandle))->theFormats.Assign(*((TColStd_SequenceOfExtendedString*)formats->Handle));
}

 System::Boolean OCTDocStd_Application::IsDriverLoaded()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Application*)nativeHandle))->IsDriverLoaded());
}

OCResource_Manager^ OCTDocStd_Application::Resources()
{
  Handle(Resource_Manager) tmp = (*((Handle_TDocStd_Application*)nativeHandle))->Resources();
  return gcnew OCResource_Manager(&tmp);
}

 Standard_Integer OCTDocStd_Application::NbDocuments()
{
  return (*((Handle_TDocStd_Application*)nativeHandle))->NbDocuments();
}

 void OCTDocStd_Application::GetDocument(Standard_Integer index, Naro::OCTDocStd_Document^ aDoc)
{
  (*((Handle_TDocStd_Application*)nativeHandle))->GetDocument(index, *((Handle_TDocStd_Document*)aDoc->Handle));
}

 void OCTDocStd_Application::NewDocument(Naro::OCTCollection_ExtendedString^ format, Naro::OCTDocStd_Document^ aDoc)
{
  (*((Handle_TDocStd_Application*)nativeHandle))->NewDocument(*((TCollection_ExtendedString*)format->Handle), *((Handle_TDocStd_Document*)aDoc->Handle));
}

 void OCTDocStd_Application::InitDocument(Naro::OCTDocStd_Document^ aDoc)
{
  (*((Handle_TDocStd_Application*)nativeHandle))->InitDocument(*((Handle_TDocStd_Document*)aDoc->Handle));
}

 void OCTDocStd_Application::Close(Naro::OCTDocStd_Document^ aDoc)
{
  (*((Handle_TDocStd_Application*)nativeHandle))->Close(*((Handle_TDocStd_Document*)aDoc->Handle));
}

 Standard_Integer OCTDocStd_Application::IsInSession(Naro::OCTCollection_ExtendedString^ path)
{
  return (*((Handle_TDocStd_Application*)nativeHandle))->IsInSession(*((TCollection_ExtendedString*)path->Handle));
}

 OCCDF_RetrievableStatus OCTDocStd_Application::Open(Naro::OCTCollection_ExtendedString^ path, Naro::OCTDocStd_Document^ aDoc)
{
  return (OCCDF_RetrievableStatus)((*((Handle_TDocStd_Application*)nativeHandle))->Open(*((TCollection_ExtendedString*)path->Handle), *((Handle_TDocStd_Document*)aDoc->Handle)));
}

 OCCDF_StoreStatus OCTDocStd_Application::SaveAs(Naro::OCTDocStd_Document^ aDoc, Naro::OCTCollection_ExtendedString^ path)
{
  return (OCCDF_StoreStatus)((*((Handle_TDocStd_Application*)nativeHandle))->SaveAs(*((Handle_TDocStd_Document*)aDoc->Handle), *((TCollection_ExtendedString*)path->Handle)));
}

 OCCDF_StoreStatus OCTDocStd_Application::Save(Naro::OCTDocStd_Document^ aDoc)
{
  return (OCCDF_StoreStatus)((*((Handle_TDocStd_Application*)nativeHandle))->Save(*((Handle_TDocStd_Document*)aDoc->Handle)));
}

 OCCDF_StoreStatus OCTDocStd_Application::SaveAs(Naro::OCTDocStd_Document^ aDoc, Naro::OCTCollection_ExtendedString^ path, Naro::OCTCollection_ExtendedString^ theStatusMessage)
{
  return (OCCDF_StoreStatus)((*((Handle_TDocStd_Application*)nativeHandle))->SaveAs(*((Handle_TDocStd_Document*)aDoc->Handle), *((TCollection_ExtendedString*)path->Handle), *((TCollection_ExtendedString*)theStatusMessage->Handle)));
}

 OCCDF_StoreStatus OCTDocStd_Application::Save(Naro::OCTDocStd_Document^ aDoc, Naro::OCTCollection_ExtendedString^ theStatusMessage)
{
  return (OCCDF_StoreStatus)((*((Handle_TDocStd_Application*)nativeHandle))->Save(*((Handle_TDocStd_Document*)aDoc->Handle), *((TCollection_ExtendedString*)theStatusMessage->Handle)));
}


