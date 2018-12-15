// File generated by CPPExt (CPP file)
//

#include "TColgp_Array1OfDir2d.h"
#include "../Converter.h"
#include "../gp/gp_Dir2d.h"


using namespace OCNaroWrappers;

OCTColgp_Array1OfDir2d::OCTColgp_Array1OfDir2d(TColgp_Array1OfDir2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColgp_Array1OfDir2d::OCTColgp_Array1OfDir2d(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColgp_Array1OfDir2d(Low, Up);
}

OCTColgp_Array1OfDir2d::OCTColgp_Array1OfDir2d(OCNaroWrappers::OCgp_Dir2d^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColgp_Array1OfDir2d(*((gp_Dir2d*)Item->Handle), Low, Up);
}

 void OCTColgp_Array1OfDir2d::Init(OCNaroWrappers::OCgp_Dir2d^ V)
{
  ((TColgp_Array1OfDir2d*)nativeHandle)->Init(*((gp_Dir2d*)V->Handle));
}

 System::Boolean OCTColgp_Array1OfDir2d::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TColgp_Array1OfDir2d*)nativeHandle)->IsAllocated());
}

OCTColgp_Array1OfDir2d^ OCTColgp_Array1OfDir2d::Assign(OCNaroWrappers::OCTColgp_Array1OfDir2d^ Other)
{
  TColgp_Array1OfDir2d* tmp = new TColgp_Array1OfDir2d(0, 0);
  *tmp = ((TColgp_Array1OfDir2d*)nativeHandle)->Assign(*((TColgp_Array1OfDir2d*)Other->Handle));
  return gcnew OCTColgp_Array1OfDir2d(tmp);
}

 Standard_Integer OCTColgp_Array1OfDir2d::Length()
{
  return ((TColgp_Array1OfDir2d*)nativeHandle)->Length();
}

 Standard_Integer OCTColgp_Array1OfDir2d::Lower()
{
  return ((TColgp_Array1OfDir2d*)nativeHandle)->Lower();
}

 Standard_Integer OCTColgp_Array1OfDir2d::Upper()
{
  return ((TColgp_Array1OfDir2d*)nativeHandle)->Upper();
}

 void OCTColgp_Array1OfDir2d::SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Dir2d^ Value)
{
  ((TColgp_Array1OfDir2d*)nativeHandle)->SetValue(Index, *((gp_Dir2d*)Value->Handle));
}

OCgp_Dir2d^ OCTColgp_Array1OfDir2d::Value(Standard_Integer Index)
{
  gp_Dir2d* tmp = new gp_Dir2d();
  *tmp = ((TColgp_Array1OfDir2d*)nativeHandle)->Value(Index);
  return gcnew OCgp_Dir2d(tmp);
}

OCgp_Dir2d^ OCTColgp_Array1OfDir2d::ChangeValue(Standard_Integer Index)
{
  gp_Dir2d* tmp = new gp_Dir2d();
  *tmp = ((TColgp_Array1OfDir2d*)nativeHandle)->ChangeValue(Index);
  return gcnew OCgp_Dir2d(tmp);
}


