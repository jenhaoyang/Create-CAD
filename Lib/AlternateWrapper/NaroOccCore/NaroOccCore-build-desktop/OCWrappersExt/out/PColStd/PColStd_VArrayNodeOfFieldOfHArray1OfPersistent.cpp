// File generated by CPPExt (CPP file)
//

#include "PColStd_VArrayNodeOfFieldOfHArray1OfPersistent.h"
#include "../Converter.h"
#include "../Standard/Standard_Persistent.h"
#include "PColStd_FieldOfHArray1OfPersistent.h"
#include "PColStd_VArrayTNodeOfFieldOfHArray1OfPersistent.h"


using namespace OCNaroWrappers;

OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent::OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent(Handle(PColStd_VArrayNodeOfFieldOfHArray1OfPersistent)* nativeHandle) : OCPStandard_ArrayNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_PColStd_VArrayNodeOfFieldOfHArray1OfPersistent(*nativeHandle);
}

OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent::OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent() : OCPStandard_ArrayNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PColStd_VArrayNodeOfFieldOfHArray1OfPersistent(new PColStd_VArrayNodeOfFieldOfHArray1OfPersistent());
}

OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent::OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent(OCNaroWrappers::OCStandard_Persistent^ aValue) : OCPStandard_ArrayNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PColStd_VArrayNodeOfFieldOfHArray1OfPersistent(new PColStd_VArrayNodeOfFieldOfHArray1OfPersistent(*((Handle_Standard_Persistent*)aValue->Handle)));
}

 void OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent::SetValue(OCNaroWrappers::OCStandard_Persistent^ aValue)
{
  (*((Handle_PColStd_VArrayNodeOfFieldOfHArray1OfPersistent*)nativeHandle))->SetValue(*((Handle_Standard_Persistent*)aValue->Handle));
}

 Standard_Address OCPColStd_VArrayNodeOfFieldOfHArray1OfPersistent::Value()
{
  return (*((Handle_PColStd_VArrayNodeOfFieldOfHArray1OfPersistent*)nativeHandle))->Value();
}


