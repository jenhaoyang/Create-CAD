// File generated by CPPExt (CPP file)
//

#include "Interface_Protocol.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../Standard/Standard_Type.h"
#include "Interface_Graph.h"
#include "Interface_Check.h"
#include "Interface_InterfaceModel.h"


using namespace OCNaroWrappers;

OCInterface_Protocol::OCInterface_Protocol(Handle(Interface_Protocol)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Interface_Protocol(*nativeHandle);
}

OCInterface_Protocol^ OCInterface_Protocol::Active()
{
  Handle(Interface_Protocol) tmp = Interface_Protocol::Active();
  return gcnew OCInterface_Protocol(&tmp);
}

 void OCInterface_Protocol::SetActive(OCNaroWrappers::OCInterface_Protocol^ aprotocol)
{
  Interface_Protocol::SetActive(*((Handle_Interface_Protocol*)aprotocol->Handle));
}

 void OCInterface_Protocol::ClearActive()
{
  Interface_Protocol::ClearActive();
}

 Standard_Integer OCInterface_Protocol::CaseNumber(OCNaroWrappers::OCStandard_Transient^ obj)
{
  return (*((Handle_Interface_Protocol*)nativeHandle))->CaseNumber(*((Handle_Standard_Transient*)obj->Handle));
}

 System::Boolean OCInterface_Protocol::IsDynamicType(OCNaroWrappers::OCStandard_Transient^ obj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Interface_Protocol*)nativeHandle))->IsDynamicType(*((Handle_Standard_Transient*)obj->Handle)));
}

 Standard_Integer OCInterface_Protocol::NbTypes(OCNaroWrappers::OCStandard_Transient^ obj)
{
  return (*((Handle_Interface_Protocol*)nativeHandle))->NbTypes(*((Handle_Standard_Transient*)obj->Handle));
}

OCStandard_Type^ OCInterface_Protocol::Type(OCNaroWrappers::OCStandard_Transient^ obj, Standard_Integer nt)
{
  Handle(Standard_Type) tmp = (*((Handle_Interface_Protocol*)nativeHandle))->Type(*((Handle_Standard_Transient*)obj->Handle), nt);
  return gcnew OCStandard_Type(&tmp);
}

 System::Boolean OCInterface_Protocol::GlobalCheck(OCNaroWrappers::OCInterface_Graph^ G, OCNaroWrappers::OCInterface_Check^ ach)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Interface_Protocol*)nativeHandle))->GlobalCheck(*((Interface_Graph*)G->Handle), *((Handle_Interface_Check*)ach->Handle)));
}


