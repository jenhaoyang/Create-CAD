// File generated by CPPExt (CPP file)
//

#include "PColStd_VArrayTNodeOfFieldOfHArray2OfReal.h"
#include "../Converter.h"
#include "PColStd_FieldOfHArray2OfReal.h"
#include "PColStd_VArrayNodeOfFieldOfHArray2OfReal.h"


using namespace OCNaroWrappers;

OCPColStd_VArrayTNodeOfFieldOfHArray2OfReal::OCPColStd_VArrayTNodeOfFieldOfHArray2OfReal(PColStd_VArrayTNodeOfFieldOfHArray2OfReal* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPColStd_VArrayTNodeOfFieldOfHArray2OfReal::OCPColStd_VArrayTNodeOfFieldOfHArray2OfReal() 
{
  nativeHandle = new PColStd_VArrayTNodeOfFieldOfHArray2OfReal();
}

OCPColStd_VArrayTNodeOfFieldOfHArray2OfReal::OCPColStd_VArrayTNodeOfFieldOfHArray2OfReal(Standard_Real aValue) 
{
  nativeHandle = new PColStd_VArrayTNodeOfFieldOfHArray2OfReal(aValue);
}

 void OCPColStd_VArrayTNodeOfFieldOfHArray2OfReal::SetValue(Standard_Real aValue)
{
  ((PColStd_VArrayTNodeOfFieldOfHArray2OfReal*)nativeHandle)->SetValue(aValue);
}

 Standard_Address OCPColStd_VArrayTNodeOfFieldOfHArray2OfReal::Value()
{
  return ((PColStd_VArrayTNodeOfFieldOfHArray2OfReal*)nativeHandle)->Value();
}


