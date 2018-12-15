// File generated by CPPExt (CPP file)
//

#include "math_RealRandom.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCmath_RealRandom::OCmath_RealRandom(math_RealRandom* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCmath_RealRandom::OCmath_RealRandom(Standard_Real Lower, Standard_Real Upper) 
{
  nativeHandle = new math_RealRandom(Lower, Upper);
}

 void OCmath_RealRandom::Reset()
{
  ((math_RealRandom*)nativeHandle)->Reset();
}

 Standard_Real OCmath_RealRandom::Next()
{
  return ((math_RealRandom*)nativeHandle)->Next();
}

