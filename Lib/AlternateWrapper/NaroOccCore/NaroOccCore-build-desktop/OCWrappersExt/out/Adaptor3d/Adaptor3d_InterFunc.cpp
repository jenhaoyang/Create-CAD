// File generated by CPPExt (CPP file)
//

#include "Adaptor3d_InterFunc.h"
#include "../Converter.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"


using namespace OCNaroWrappers;

OCAdaptor3d_InterFunc::OCAdaptor3d_InterFunc(Adaptor3d_InterFunc* nativeHandle) : OCmath_FunctionWithDerivative((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAdaptor3d_InterFunc::OCAdaptor3d_InterFunc(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real FixVal, Standard_Integer Fix) : OCmath_FunctionWithDerivative((OCDummy^)nullptr)

{
  nativeHandle = new Adaptor3d_InterFunc(*((Handle_Adaptor2d_HCurve2d*)C->Handle), FixVal, Fix);
}

 System::Boolean OCAdaptor3d_InterFunc::Value(Standard_Real X, Standard_Real& F)
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_InterFunc*)nativeHandle)->Value(X, F));
}

 System::Boolean OCAdaptor3d_InterFunc::Derivative(Standard_Real X, Standard_Real& D)
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_InterFunc*)nativeHandle)->Derivative(X, D));
}

 System::Boolean OCAdaptor3d_InterFunc::Values(Standard_Real X, Standard_Real& F, Standard_Real& D)
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_InterFunc*)nativeHandle)->Values(X, F, D));
}


