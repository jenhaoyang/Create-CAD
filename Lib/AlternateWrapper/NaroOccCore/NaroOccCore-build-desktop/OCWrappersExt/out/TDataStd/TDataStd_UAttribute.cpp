// File generated by CPPExt (CPP file)
//

#include "TDataStd_UAttribute.h"
#include "../Converter.h"
#include "../TDF/TDF_Label.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"
#include "../TDF/TDF_DataSet.h"


using namespace OCNaroWrappers;

OCTDataStd_UAttribute::OCTDataStd_UAttribute(Handle(TDataStd_UAttribute)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_UAttribute(*nativeHandle);
}

OCTDataStd_UAttribute^ OCTDataStd_UAttribute::Set(OCNaroWrappers::OCTDF_Label^ label, OCNaroWrappers::OCStandard_GUID^ LocalID)
{
  Handle(TDataStd_UAttribute) tmp = TDataStd_UAttribute::Set(*((TDF_Label*)label->Handle), *((Standard_GUID*)LocalID->Handle));
  return gcnew OCTDataStd_UAttribute(&tmp);
}

OCTDataStd_UAttribute::OCTDataStd_UAttribute() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_UAttribute(new TDataStd_UAttribute());
}

 void OCTDataStd_UAttribute::SetID(OCNaroWrappers::OCStandard_GUID^ LocalID)
{
  (*((Handle_TDataStd_UAttribute*)nativeHandle))->SetID(*((Standard_GUID*)LocalID->Handle));
}

OCStandard_GUID^ OCTDataStd_UAttribute::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_UAttribute*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_UAttribute::Restore(OCNaroWrappers::OCTDF_Attribute^ with)
{
  (*((Handle_TDataStd_UAttribute*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)with->Handle));
}

OCTDF_Attribute^ OCTDataStd_UAttribute::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_UAttribute*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_UAttribute::Paste(OCNaroWrappers::OCTDF_Attribute^ into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_UAttribute*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 void OCTDataStd_UAttribute::References(OCNaroWrappers::OCTDF_DataSet^ DS)
{
  (*((Handle_TDataStd_UAttribute*)nativeHandle))->References(*((Handle_TDF_DataSet*)DS->Handle));
}

 Standard_OStream& OCTDataStd_UAttribute::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_UAttribute*)nativeHandle))->Dump(anOS);
}


