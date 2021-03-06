// File generated by CPPExt (CPP file)
//

#include "PColStd_HOfExtendedString.h"
#include "../Converter.h"
#include "../PCollection/PCollection_HExtendedString.h"


using namespace OCNaroWrappers;

OCPColStd_HOfExtendedString::OCPColStd_HOfExtendedString(PColStd_HOfExtendedString* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPColStd_HOfExtendedString::OCPColStd_HOfExtendedString() 
{
  nativeHandle = new PColStd_HOfExtendedString();
}

 Standard_Integer OCPColStd_HOfExtendedString::HashCode(OCNaroWrappers::OCPCollection_HExtendedString^ MyKey, Standard_Integer Upper)
{
  return ((PColStd_HOfExtendedString*)nativeHandle)->HashCode(*((Handle_PCollection_HExtendedString*)MyKey->Handle), Upper);
}

 System::Boolean OCPColStd_HOfExtendedString::Compare(OCNaroWrappers::OCPCollection_HExtendedString^ One, OCNaroWrappers::OCPCollection_HExtendedString^ Two)
{
  return OCConverter::StandardBooleanToBoolean(((PColStd_HOfExtendedString*)nativeHandle)->Compare(*((Handle_PCollection_HExtendedString*)One->Handle), *((Handle_PCollection_HExtendedString*)Two->Handle)));
}


