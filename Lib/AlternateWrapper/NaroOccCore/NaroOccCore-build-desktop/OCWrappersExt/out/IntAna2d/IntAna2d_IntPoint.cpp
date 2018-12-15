// File generated by CPPExt (CPP file)
//

#include "IntAna2d_IntPoint.h"
#include "../Converter.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCIntAna2d_IntPoint::OCIntAna2d_IntPoint(IntAna2d_IntPoint* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntAna2d_IntPoint::OCIntAna2d_IntPoint(Standard_Real X, Standard_Real Y, Standard_Real U1, Standard_Real U2) 
{
  nativeHandle = new IntAna2d_IntPoint(X, Y, U1, U2);
}

OCIntAna2d_IntPoint::OCIntAna2d_IntPoint(Standard_Real X, Standard_Real Y, Standard_Real U1) 
{
  nativeHandle = new IntAna2d_IntPoint(X, Y, U1);
}

OCIntAna2d_IntPoint::OCIntAna2d_IntPoint() 
{
  nativeHandle = new IntAna2d_IntPoint();
}

 void OCIntAna2d_IntPoint::SetValue(Standard_Real X, Standard_Real Y, Standard_Real U1, Standard_Real U2)
{
  ((IntAna2d_IntPoint*)nativeHandle)->SetValue(X, Y, U1, U2);
}

 void OCIntAna2d_IntPoint::SetValue(Standard_Real X, Standard_Real Y, Standard_Real U1)
{
  ((IntAna2d_IntPoint*)nativeHandle)->SetValue(X, Y, U1);
}

OCgp_Pnt2d^ OCIntAna2d_IntPoint::Value()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ((IntAna2d_IntPoint*)nativeHandle)->Value();
  return gcnew OCgp_Pnt2d(tmp);
}

 System::Boolean OCIntAna2d_IntPoint::SecondIsImplicit()
{
  return OCConverter::StandardBooleanToBoolean(((IntAna2d_IntPoint*)nativeHandle)->SecondIsImplicit());
}

 Standard_Real OCIntAna2d_IntPoint::ParamOnFirst()
{
  return ((IntAna2d_IntPoint*)nativeHandle)->ParamOnFirst();
}

 Standard_Real OCIntAna2d_IntPoint::ParamOnSecond()
{
  return ((IntAna2d_IntPoint*)nativeHandle)->ParamOnSecond();
}


