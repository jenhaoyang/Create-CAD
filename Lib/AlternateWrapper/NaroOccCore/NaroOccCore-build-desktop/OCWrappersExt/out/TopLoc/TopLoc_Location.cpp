// File generated by CPPExt (CPP file)
//

#include "TopLoc_Location.h"
#include "../Converter.h"
#include "../gp/gp_Trsf.h"
#include "TopLoc_Datum3D.h"


using namespace OCNaroWrappers;

OCTopLoc_Location::OCTopLoc_Location(TopLoc_Location* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopLoc_Location::OCTopLoc_Location() 
{
  nativeHandle = new TopLoc_Location();
}

OCTopLoc_Location::OCTopLoc_Location(OCNaroWrappers::OCgp_Trsf^ T) 
{
  nativeHandle = new TopLoc_Location(*((gp_Trsf*)T->Handle));
}

OCTopLoc_Location::OCTopLoc_Location(OCNaroWrappers::OCTopLoc_Datum3D^ D) 
{
  nativeHandle = new TopLoc_Location(*((Handle_TopLoc_Datum3D*)D->Handle));
}

 System::Boolean OCTopLoc_Location::IsIdentity()
{
  return OCConverter::StandardBooleanToBoolean(((TopLoc_Location*)nativeHandle)->IsIdentity());
}

 void OCTopLoc_Location::Identity()
{
  ((TopLoc_Location*)nativeHandle)->Identity();
}

OCTopLoc_Datum3D^ OCTopLoc_Location::FirstDatum()
{
  Handle(TopLoc_Datum3D) tmp = ((TopLoc_Location*)nativeHandle)->FirstDatum();
  return gcnew OCTopLoc_Datum3D(&tmp);
}

 Standard_Integer OCTopLoc_Location::FirstPower()
{
  return ((TopLoc_Location*)nativeHandle)->FirstPower();
}

OCTopLoc_Location^ OCTopLoc_Location::NextLocation()
{
  TopLoc_Location* tmp = new TopLoc_Location();
  *tmp = ((TopLoc_Location*)nativeHandle)->NextLocation();
  return gcnew OCTopLoc_Location(tmp);
}

OCgp_Trsf^ OCTopLoc_Location::Transformation()
{
  gp_Trsf* tmp = new gp_Trsf();
  *tmp = ((TopLoc_Location*)nativeHandle)->Transformation();
  return gcnew OCgp_Trsf(tmp);
}

OCTopLoc_Location^ OCTopLoc_Location::Inverted()
{
  TopLoc_Location* tmp = new TopLoc_Location();
  *tmp = ((TopLoc_Location*)nativeHandle)->Inverted();
  return gcnew OCTopLoc_Location(tmp);
}

OCTopLoc_Location^ OCTopLoc_Location::Multiplied(OCNaroWrappers::OCTopLoc_Location^ Other)
{
  TopLoc_Location* tmp = new TopLoc_Location();
  *tmp = ((TopLoc_Location*)nativeHandle)->Multiplied(*((TopLoc_Location*)Other->Handle));
  return gcnew OCTopLoc_Location(tmp);
}

OCTopLoc_Location^ OCTopLoc_Location::Divided(OCNaroWrappers::OCTopLoc_Location^ Other)
{
  TopLoc_Location* tmp = new TopLoc_Location();
  *tmp = ((TopLoc_Location*)nativeHandle)->Divided(*((TopLoc_Location*)Other->Handle));
  return gcnew OCTopLoc_Location(tmp);
}

OCTopLoc_Location^ OCTopLoc_Location::Predivided(OCNaroWrappers::OCTopLoc_Location^ Other)
{
  TopLoc_Location* tmp = new TopLoc_Location();
  *tmp = ((TopLoc_Location*)nativeHandle)->Predivided(*((TopLoc_Location*)Other->Handle));
  return gcnew OCTopLoc_Location(tmp);
}

OCTopLoc_Location^ OCTopLoc_Location::Powered(Standard_Integer pwr)
{
  TopLoc_Location* tmp = new TopLoc_Location();
  *tmp = ((TopLoc_Location*)nativeHandle)->Powered(pwr);
  return gcnew OCTopLoc_Location(tmp);
}

 Standard_Integer OCTopLoc_Location::HashCode(Standard_Integer Upper)
{
  return ((TopLoc_Location*)nativeHandle)->HashCode(Upper);
}

 System::Boolean OCTopLoc_Location::IsEqual(OCNaroWrappers::OCTopLoc_Location^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((TopLoc_Location*)nativeHandle)->IsEqual(*((TopLoc_Location*)Other->Handle)));
}

 System::Boolean OCTopLoc_Location::IsDifferent(OCNaroWrappers::OCTopLoc_Location^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((TopLoc_Location*)nativeHandle)->IsDifferent(*((TopLoc_Location*)Other->Handle)));
}

 void OCTopLoc_Location::ShallowDump(Standard_OStream& S)
{
  ((TopLoc_Location*)nativeHandle)->ShallowDump(S);
}


