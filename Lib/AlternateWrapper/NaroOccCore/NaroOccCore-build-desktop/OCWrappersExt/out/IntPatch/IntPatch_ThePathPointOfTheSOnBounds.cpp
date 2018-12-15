// File generated by CPPExt (CPP file)
//

#include "IntPatch_ThePathPointOfTheSOnBounds.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HVertex.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCIntPatch_ThePathPointOfTheSOnBounds::OCIntPatch_ThePathPointOfTheSOnBounds(IntPatch_ThePathPointOfTheSOnBounds* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_ThePathPointOfTheSOnBounds::OCIntPatch_ThePathPointOfTheSOnBounds() 
{
  nativeHandle = new IntPatch_ThePathPointOfTheSOnBounds();
}

OCIntPatch_ThePathPointOfTheSOnBounds::OCIntPatch_ThePathPointOfTheSOnBounds(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor3d_HVertex^ V, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter) 
{
  nativeHandle = new IntPatch_ThePathPointOfTheSOnBounds(*((gp_Pnt*)P->Handle), Tol, *((Handle_Adaptor3d_HVertex*)V->Handle), *((Handle_Adaptor2d_HCurve2d*)A->Handle), Parameter);
}

OCIntPatch_ThePathPointOfTheSOnBounds::OCIntPatch_ThePathPointOfTheSOnBounds(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter) 
{
  nativeHandle = new IntPatch_ThePathPointOfTheSOnBounds(*((gp_Pnt*)P->Handle), Tol, *((Handle_Adaptor2d_HCurve2d*)A->Handle), Parameter);
}

 void OCIntPatch_ThePathPointOfTheSOnBounds::SetValue(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor3d_HVertex^ V, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter)
{
  ((IntPatch_ThePathPointOfTheSOnBounds*)nativeHandle)->SetValue(*((gp_Pnt*)P->Handle), Tol, *((Handle_Adaptor3d_HVertex*)V->Handle), *((Handle_Adaptor2d_HCurve2d*)A->Handle), Parameter);
}

 void OCIntPatch_ThePathPointOfTheSOnBounds::SetValue(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter)
{
  ((IntPatch_ThePathPointOfTheSOnBounds*)nativeHandle)->SetValue(*((gp_Pnt*)P->Handle), Tol, *((Handle_Adaptor2d_HCurve2d*)A->Handle), Parameter);
}

OCgp_Pnt^ OCIntPatch_ThePathPointOfTheSOnBounds::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntPatch_ThePathPointOfTheSOnBounds*)nativeHandle)->Value();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCIntPatch_ThePathPointOfTheSOnBounds::Tolerance()
{
  return ((IntPatch_ThePathPointOfTheSOnBounds*)nativeHandle)->Tolerance();
}

 System::Boolean OCIntPatch_ThePathPointOfTheSOnBounds::IsNew()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePathPointOfTheSOnBounds*)nativeHandle)->IsNew());
}

OCAdaptor3d_HVertex^ OCIntPatch_ThePathPointOfTheSOnBounds::Vertex()
{
  Handle(Adaptor3d_HVertex) tmp = ((IntPatch_ThePathPointOfTheSOnBounds*)nativeHandle)->Vertex();
  return gcnew OCAdaptor3d_HVertex(&tmp);
}

OCAdaptor2d_HCurve2d^ OCIntPatch_ThePathPointOfTheSOnBounds::Arc()
{
  Handle(Adaptor2d_HCurve2d) tmp = ((IntPatch_ThePathPointOfTheSOnBounds*)nativeHandle)->Arc();
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}

 Standard_Real OCIntPatch_ThePathPointOfTheSOnBounds::Parameter()
{
  return ((IntPatch_ThePathPointOfTheSOnBounds*)nativeHandle)->Parameter();
}


