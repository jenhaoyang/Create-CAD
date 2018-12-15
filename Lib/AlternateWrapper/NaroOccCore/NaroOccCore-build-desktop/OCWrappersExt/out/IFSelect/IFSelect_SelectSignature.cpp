// File generated by CPPExt (CPP file)
//

#include "IFSelect_SelectSignature.h"
#include "../Converter.h"
#include "IFSelect_Signature.h"
#include "IFSelect_SignCounter.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../Standard/Standard_Transient.h"
#include "../Interface/Interface_Graph.h"
#include "../Interface/Interface_InterfaceModel.h"


using namespace OCNaroWrappers;

OCIFSelect_SelectSignature::OCIFSelect_SelectSignature(Handle(IFSelect_SelectSignature)* nativeHandle) : OCIFSelect_SelectExtract((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_SelectSignature(*nativeHandle);
}

OCIFSelect_SelectSignature::OCIFSelect_SelectSignature(OCNaroWrappers::OCIFSelect_Signature^ matcher, System::String^ signtext, System::Boolean exact) : OCIFSelect_SelectExtract((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_SelectSignature(new IFSelect_SelectSignature(*((Handle_IFSelect_Signature*)matcher->Handle), OCConverter::StringToStandardCString(signtext), OCConverter::BooleanToStandardBoolean(exact)));
}

OCIFSelect_SelectSignature::OCIFSelect_SelectSignature(OCNaroWrappers::OCIFSelect_Signature^ matcher, OCNaroWrappers::OCTCollection_AsciiString^ signtext, System::Boolean exact) : OCIFSelect_SelectExtract((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_SelectSignature(new IFSelect_SelectSignature(*((Handle_IFSelect_Signature*)matcher->Handle), *((TCollection_AsciiString*)signtext->Handle), OCConverter::BooleanToStandardBoolean(exact)));
}

OCIFSelect_SelectSignature::OCIFSelect_SelectSignature(OCNaroWrappers::OCIFSelect_SignCounter^ matcher, System::String^ signtext, System::Boolean exact) : OCIFSelect_SelectExtract((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_SelectSignature(new IFSelect_SelectSignature(*((Handle_IFSelect_SignCounter*)matcher->Handle), OCConverter::StringToStandardCString(signtext), OCConverter::BooleanToStandardBoolean(exact)));
}

OCIFSelect_Signature^ OCIFSelect_SelectSignature::Signature()
{
  Handle(IFSelect_Signature) tmp = (*((Handle_IFSelect_SelectSignature*)nativeHandle))->Signature();
  return gcnew OCIFSelect_Signature(&tmp);
}

OCIFSelect_SignCounter^ OCIFSelect_SelectSignature::Counter()
{
  Handle(IFSelect_SignCounter) tmp = (*((Handle_IFSelect_SelectSignature*)nativeHandle))->Counter();
  return gcnew OCIFSelect_SignCounter(&tmp);
}

 System::Boolean OCIFSelect_SelectSignature::SortInGraph(Standard_Integer rank, OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_Graph^ G)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_SelectSignature*)nativeHandle))->SortInGraph(rank, *((Handle_Standard_Transient*)ent->Handle), *((Interface_Graph*)G->Handle)));
}

 System::Boolean OCIFSelect_SelectSignature::Sort(Standard_Integer rank, OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_InterfaceModel^ model)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_SelectSignature*)nativeHandle))->Sort(rank, *((Handle_Standard_Transient*)ent->Handle), *((Handle_Interface_InterfaceModel*)model->Handle)));
}

OCTCollection_AsciiString^ OCIFSelect_SelectSignature::SignatureText()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_SelectSignature*)nativeHandle))->SignatureText();
  return gcnew OCTCollection_AsciiString(tmp);
}

 System::Boolean OCIFSelect_SelectSignature::IsExact()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_SelectSignature*)nativeHandle))->IsExact());
}

OCTCollection_AsciiString^ OCIFSelect_SelectSignature::ExtractLabel()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_SelectSignature*)nativeHandle))->ExtractLabel();
  return gcnew OCTCollection_AsciiString(tmp);
}


