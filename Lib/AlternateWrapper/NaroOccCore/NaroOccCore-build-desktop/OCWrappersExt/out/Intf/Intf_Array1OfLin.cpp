// File generated by CPPExt (CPP file)
//

#include "Intf_Array1OfLin.h"
#include "../Converter.h"
#include "../gp/gp_Lin.h"


using namespace OCNaroWrappers;

OCIntf_Array1OfLin::OCIntf_Array1OfLin(Intf_Array1OfLin* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntf_Array1OfLin::OCIntf_Array1OfLin(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Intf_Array1OfLin(Low, Up);
}

OCIntf_Array1OfLin::OCIntf_Array1OfLin(OCNaroWrappers::OCgp_Lin^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Intf_Array1OfLin(*((gp_Lin*)Item->Handle), Low, Up);
}

 void OCIntf_Array1OfLin::Init(OCNaroWrappers::OCgp_Lin^ V)
{
  ((Intf_Array1OfLin*)nativeHandle)->Init(*((gp_Lin*)V->Handle));
}

 System::Boolean OCIntf_Array1OfLin::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((Intf_Array1OfLin*)nativeHandle)->IsAllocated());
}

OCIntf_Array1OfLin^ OCIntf_Array1OfLin::Assign(OCNaroWrappers::OCIntf_Array1OfLin^ Other)
{
  Intf_Array1OfLin* tmp = new Intf_Array1OfLin(0, 0);
  *tmp = ((Intf_Array1OfLin*)nativeHandle)->Assign(*((Intf_Array1OfLin*)Other->Handle));
  return gcnew OCIntf_Array1OfLin(tmp);
}

 Standard_Integer OCIntf_Array1OfLin::Length()
{
  return ((Intf_Array1OfLin*)nativeHandle)->Length();
}

 Standard_Integer OCIntf_Array1OfLin::Lower()
{
  return ((Intf_Array1OfLin*)nativeHandle)->Lower();
}

 Standard_Integer OCIntf_Array1OfLin::Upper()
{
  return ((Intf_Array1OfLin*)nativeHandle)->Upper();
}

 void OCIntf_Array1OfLin::SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Lin^ Value)
{
  ((Intf_Array1OfLin*)nativeHandle)->SetValue(Index, *((gp_Lin*)Value->Handle));
}

OCgp_Lin^ OCIntf_Array1OfLin::Value(Standard_Integer Index)
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((Intf_Array1OfLin*)nativeHandle)->Value(Index);
  return gcnew OCgp_Lin(tmp);
}

OCgp_Lin^ OCIntf_Array1OfLin::ChangeValue(Standard_Integer Index)
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((Intf_Array1OfLin*)nativeHandle)->ChangeValue(Index);
  return gcnew OCgp_Lin(tmp);
}


