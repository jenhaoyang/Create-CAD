// File generated by CPPExt (CPP file)
//

#include "math_Function.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCmath_Function::OCmath_Function(math_Function* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 Standard_Integer OCmath_Function::GetStateNumber()
{
  return ((math_Function*)nativeHandle)->GetStateNumber();
}


