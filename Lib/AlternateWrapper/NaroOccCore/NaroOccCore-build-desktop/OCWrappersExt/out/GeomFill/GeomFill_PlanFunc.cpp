// File generated by CPPExt (CPP file)
//

#include "GeomFill_PlanFunc.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"


using namespace OCNaroWrappers;

OCGeomFill_PlanFunc::OCGeomFill_PlanFunc(GeomFill_PlanFunc* nativeHandle) : OCmath_FunctionWithDerivative((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGeomFill_PlanFunc::OCGeomFill_PlanFunc(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V, OCNaroWrappers::OCAdaptor3d_HCurve^ C) : OCmath_FunctionWithDerivative((OCDummy^)nullptr)

{
  nativeHandle = new GeomFill_PlanFunc(*((gp_Pnt*)P->Handle), *((gp_Vec*)V->Handle), *((Handle_Adaptor3d_HCurve*)C->Handle));
}

 System::Boolean OCGeomFill_PlanFunc::Value(Standard_Real X, Standard_Real& F)
{
  return OCConverter::StandardBooleanToBoolean(((GeomFill_PlanFunc*)nativeHandle)->Value(X, F));
}

 System::Boolean OCGeomFill_PlanFunc::Derivative(Standard_Real X, Standard_Real& D)
{
  return OCConverter::StandardBooleanToBoolean(((GeomFill_PlanFunc*)nativeHandle)->Derivative(X, D));
}

 System::Boolean OCGeomFill_PlanFunc::Values(Standard_Real X, Standard_Real& F, Standard_Real& D)
{
  return OCConverter::StandardBooleanToBoolean(((GeomFill_PlanFunc*)nativeHandle)->Values(X, F, D));
}

 void OCGeomFill_PlanFunc::D2(Standard_Real X, Standard_Real& F, Standard_Real& D1, Standard_Real& D2)
{
  ((GeomFill_PlanFunc*)nativeHandle)->D2(X, F, D1, D2);
}

 void OCGeomFill_PlanFunc::DEDT(Standard_Real X, OCNaroWrappers::OCgp_Vec^ DP, OCNaroWrappers::OCgp_Vec^ DV, Standard_Real& DF)
{
  ((GeomFill_PlanFunc*)nativeHandle)->DEDT(X, *((gp_Vec*)DP->Handle), *((gp_Vec*)DV->Handle), DF);
}

 void OCGeomFill_PlanFunc::D2E(Standard_Real X, OCNaroWrappers::OCgp_Vec^ DP, OCNaroWrappers::OCgp_Vec^ D2P, OCNaroWrappers::OCgp_Vec^ DV, OCNaroWrappers::OCgp_Vec^ D2V, Standard_Real& DFDT, Standard_Real& D2FDT2, Standard_Real& D2FDTDX)
{
  ((GeomFill_PlanFunc*)nativeHandle)->D2E(X, *((gp_Vec*)DP->Handle), *((gp_Vec*)D2P->Handle), *((gp_Vec*)DV->Handle), *((gp_Vec*)D2V->Handle), DFDT, D2FDT2, D2FDTDX);
}


