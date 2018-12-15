// File generated by CPPExt (CPP file)
//

#include "gp_Sphere.h"
#include "../Converter.h"
#include "gp_Ax3.h"
#include "gp_Pnt.h"
#include "gp_Ax1.h"
#include "gp_Ax2.h"
#include "gp_Trsf.h"
#include "gp_Vec.h"


using namespace OCNaroWrappers;

OCgp_Sphere::OCgp_Sphere(gp_Sphere* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_Sphere::OCgp_Sphere() 
{
  nativeHandle = new gp_Sphere();
}

OCgp_Sphere::OCgp_Sphere(OCNaroWrappers::OCgp_Ax3^ A3, Standard_Real Radius) 
{
  nativeHandle = new gp_Sphere(*((gp_Ax3*)A3->Handle), Radius);
}

 void OCgp_Sphere::SetLocation(OCNaroWrappers::OCgp_Pnt^ Loc)
{
  ((gp_Sphere*)nativeHandle)->SetLocation(*((gp_Pnt*)Loc->Handle));
}

 void OCgp_Sphere::SetPosition(OCNaroWrappers::OCgp_Ax3^ A3)
{
  ((gp_Sphere*)nativeHandle)->SetPosition(*((gp_Ax3*)A3->Handle));
}

 void OCgp_Sphere::SetRadius(Standard_Real R)
{
  ((gp_Sphere*)nativeHandle)->SetRadius(R);
}

 Standard_Real OCgp_Sphere::Area()
{
  return ((gp_Sphere*)nativeHandle)->Area();
}

 void OCgp_Sphere::Coefficients(Standard_Real& A1, Standard_Real& A2, Standard_Real& A3, Standard_Real& B1, Standard_Real& B2, Standard_Real& B3, Standard_Real& C1, Standard_Real& C2, Standard_Real& C3, Standard_Real& D)
{
  ((gp_Sphere*)nativeHandle)->Coefficients(A1, A2, A3, B1, B2, B3, C1, C2, C3, D);
}

 void OCgp_Sphere::UReverse()
{
  ((gp_Sphere*)nativeHandle)->UReverse();
}

 void OCgp_Sphere::VReverse()
{
  ((gp_Sphere*)nativeHandle)->VReverse();
}

 System::Boolean OCgp_Sphere::Direct()
{
  return OCConverter::StandardBooleanToBoolean(((gp_Sphere*)nativeHandle)->Direct());
}

OCgp_Pnt^ OCgp_Sphere::Location()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Sphere*)nativeHandle)->Location();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Ax3^ OCgp_Sphere::Position()
{
  gp_Ax3* tmp = new gp_Ax3();
  *tmp = ((gp_Sphere*)nativeHandle)->Position();
  return gcnew OCgp_Ax3(tmp);
}

 Standard_Real OCgp_Sphere::Radius()
{
  return ((gp_Sphere*)nativeHandle)->Radius();
}

 Standard_Real OCgp_Sphere::Volume()
{
  return ((gp_Sphere*)nativeHandle)->Volume();
}

OCgp_Ax1^ OCgp_Sphere::XAxis()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Sphere*)nativeHandle)->XAxis();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Ax1^ OCgp_Sphere::YAxis()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Sphere*)nativeHandle)->YAxis();
  return gcnew OCgp_Ax1(tmp);
}

 void OCgp_Sphere::Mirror(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((gp_Sphere*)nativeHandle)->Mirror(*((gp_Pnt*)P->Handle));
}

OCgp_Sphere^ OCgp_Sphere::Mirrored(OCNaroWrappers::OCgp_Pnt^ P)
{
  gp_Sphere* tmp = new gp_Sphere();
  *tmp = ((gp_Sphere*)nativeHandle)->Mirrored(*((gp_Pnt*)P->Handle));
  return gcnew OCgp_Sphere(tmp);
}

 void OCgp_Sphere::Mirror(OCNaroWrappers::OCgp_Ax1^ A1)
{
  ((gp_Sphere*)nativeHandle)->Mirror(*((gp_Ax1*)A1->Handle));
}

OCgp_Sphere^ OCgp_Sphere::Mirrored(OCNaroWrappers::OCgp_Ax1^ A1)
{
  gp_Sphere* tmp = new gp_Sphere();
  *tmp = ((gp_Sphere*)nativeHandle)->Mirrored(*((gp_Ax1*)A1->Handle));
  return gcnew OCgp_Sphere(tmp);
}

 void OCgp_Sphere::Mirror(OCNaroWrappers::OCgp_Ax2^ A2)
{
  ((gp_Sphere*)nativeHandle)->Mirror(*((gp_Ax2*)A2->Handle));
}

OCgp_Sphere^ OCgp_Sphere::Mirrored(OCNaroWrappers::OCgp_Ax2^ A2)
{
  gp_Sphere* tmp = new gp_Sphere();
  *tmp = ((gp_Sphere*)nativeHandle)->Mirrored(*((gp_Ax2*)A2->Handle));
  return gcnew OCgp_Sphere(tmp);
}

 void OCgp_Sphere::Rotate(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  ((gp_Sphere*)nativeHandle)->Rotate(*((gp_Ax1*)A1->Handle), Ang);
}

OCgp_Sphere^ OCgp_Sphere::Rotated(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  gp_Sphere* tmp = new gp_Sphere();
  *tmp = ((gp_Sphere*)nativeHandle)->Rotated(*((gp_Ax1*)A1->Handle), Ang);
  return gcnew OCgp_Sphere(tmp);
}

 void OCgp_Sphere::Scale(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S)
{
  ((gp_Sphere*)nativeHandle)->Scale(*((gp_Pnt*)P->Handle), S);
}

OCgp_Sphere^ OCgp_Sphere::Scaled(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S)
{
  gp_Sphere* tmp = new gp_Sphere();
  *tmp = ((gp_Sphere*)nativeHandle)->Scaled(*((gp_Pnt*)P->Handle), S);
  return gcnew OCgp_Sphere(tmp);
}

 void OCgp_Sphere::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  ((gp_Sphere*)nativeHandle)->Transform(*((gp_Trsf*)T->Handle));
}

OCgp_Sphere^ OCgp_Sphere::Transformed(OCNaroWrappers::OCgp_Trsf^ T)
{
  gp_Sphere* tmp = new gp_Sphere();
  *tmp = ((gp_Sphere*)nativeHandle)->Transformed(*((gp_Trsf*)T->Handle));
  return gcnew OCgp_Sphere(tmp);
}

 void OCgp_Sphere::Translate(OCNaroWrappers::OCgp_Vec^ V)
{
  ((gp_Sphere*)nativeHandle)->Translate(*((gp_Vec*)V->Handle));
}

OCgp_Sphere^ OCgp_Sphere::Translated(OCNaroWrappers::OCgp_Vec^ V)
{
  gp_Sphere* tmp = new gp_Sphere();
  *tmp = ((gp_Sphere*)nativeHandle)->Translated(*((gp_Vec*)V->Handle));
  return gcnew OCgp_Sphere(tmp);
}

 void OCgp_Sphere::Translate(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  ((gp_Sphere*)nativeHandle)->Translate(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCgp_Sphere^ OCgp_Sphere::Translated(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  gp_Sphere* tmp = new gp_Sphere();
  *tmp = ((gp_Sphere*)nativeHandle)->Translated(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
  return gcnew OCgp_Sphere(tmp);
}


