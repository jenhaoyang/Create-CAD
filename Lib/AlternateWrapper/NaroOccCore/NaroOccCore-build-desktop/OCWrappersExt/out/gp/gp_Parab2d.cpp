// File generated by CPPExt (CPP file)
//

#include "gp_Parab2d.h"
#include "../Converter.h"
#include "gp_Ax2d.h"
#include "gp_Ax22d.h"
#include "gp_Pnt2d.h"
#include "gp_Trsf2d.h"
#include "gp_Vec2d.h"


using namespace OCNaroWrappers;

OCgp_Parab2d::OCgp_Parab2d(gp_Parab2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_Parab2d::OCgp_Parab2d() 
{
  nativeHandle = new gp_Parab2d();
}

OCgp_Parab2d::OCgp_Parab2d(OCNaroWrappers::OCgp_Ax2d^ MirrorAxis, Standard_Real Focal, System::Boolean Sense) 
{
  nativeHandle = new gp_Parab2d(*((gp_Ax2d*)MirrorAxis->Handle), Focal, OCConverter::BooleanToStandardBoolean(Sense));
}

OCgp_Parab2d::OCgp_Parab2d(OCNaroWrappers::OCgp_Ax22d^ A, Standard_Real Focal) 
{
  nativeHandle = new gp_Parab2d(*((gp_Ax22d*)A->Handle), Focal);
}

OCgp_Parab2d::OCgp_Parab2d(OCNaroWrappers::OCgp_Ax2d^ D, OCNaroWrappers::OCgp_Pnt2d^ F, System::Boolean Sense) 
{
  nativeHandle = new gp_Parab2d(*((gp_Ax2d*)D->Handle), *((gp_Pnt2d*)F->Handle), OCConverter::BooleanToStandardBoolean(Sense));
}

OCgp_Parab2d::OCgp_Parab2d(OCNaroWrappers::OCgp_Ax22d^ D, OCNaroWrappers::OCgp_Pnt2d^ F) 
{
  nativeHandle = new gp_Parab2d(*((gp_Ax22d*)D->Handle), *((gp_Pnt2d*)F->Handle));
}

 void OCgp_Parab2d::SetFocal(Standard_Real Focal)
{
  ((gp_Parab2d*)nativeHandle)->SetFocal(Focal);
}

 void OCgp_Parab2d::SetLocation(OCNaroWrappers::OCgp_Pnt2d^ P)
{
  ((gp_Parab2d*)nativeHandle)->SetLocation(*((gp_Pnt2d*)P->Handle));
}

 void OCgp_Parab2d::SetMirrorAxis(OCNaroWrappers::OCgp_Ax2d^ A)
{
  ((gp_Parab2d*)nativeHandle)->SetMirrorAxis(*((gp_Ax2d*)A->Handle));
}

 void OCgp_Parab2d::SetAxis(OCNaroWrappers::OCgp_Ax22d^ A)
{
  ((gp_Parab2d*)nativeHandle)->SetAxis(*((gp_Ax22d*)A->Handle));
}

 void OCgp_Parab2d::Coefficients(Standard_Real& A, Standard_Real& B, Standard_Real& C, Standard_Real& D, Standard_Real& E, Standard_Real& F)
{
  ((gp_Parab2d*)nativeHandle)->Coefficients(A, B, C, D, E, F);
}

OCgp_Ax2d^ OCgp_Parab2d::Directrix()
{
  gp_Ax2d* tmp = new gp_Ax2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Directrix();
  return gcnew OCgp_Ax2d(tmp);
}

 Standard_Real OCgp_Parab2d::Focal()
{
  return ((gp_Parab2d*)nativeHandle)->Focal();
}

OCgp_Pnt2d^ OCgp_Parab2d::Focus()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Focus();
  return gcnew OCgp_Pnt2d(tmp);
}

OCgp_Pnt2d^ OCgp_Parab2d::Location()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Location();
  return gcnew OCgp_Pnt2d(tmp);
}

OCgp_Ax2d^ OCgp_Parab2d::MirrorAxis()
{
  gp_Ax2d* tmp = new gp_Ax2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->MirrorAxis();
  return gcnew OCgp_Ax2d(tmp);
}

OCgp_Ax22d^ OCgp_Parab2d::Axis()
{
  gp_Ax22d* tmp = new gp_Ax22d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Axis();
  return gcnew OCgp_Ax22d(tmp);
}

 Standard_Real OCgp_Parab2d::Parameter()
{
  return ((gp_Parab2d*)nativeHandle)->Parameter();
}

 void OCgp_Parab2d::Reverse()
{
  ((gp_Parab2d*)nativeHandle)->Reverse();
}

OCgp_Parab2d^ OCgp_Parab2d::Reversed()
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Reversed();
  return gcnew OCgp_Parab2d(tmp);
}

 System::Boolean OCgp_Parab2d::IsDirect()
{
  return OCConverter::StandardBooleanToBoolean(((gp_Parab2d*)nativeHandle)->IsDirect());
}

 void OCgp_Parab2d::Mirror(OCNaroWrappers::OCgp_Pnt2d^ P)
{
  ((gp_Parab2d*)nativeHandle)->Mirror(*((gp_Pnt2d*)P->Handle));
}

OCgp_Parab2d^ OCgp_Parab2d::Mirrored(OCNaroWrappers::OCgp_Pnt2d^ P)
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Mirrored(*((gp_Pnt2d*)P->Handle));
  return gcnew OCgp_Parab2d(tmp);
}

 void OCgp_Parab2d::Mirror(OCNaroWrappers::OCgp_Ax2d^ A)
{
  ((gp_Parab2d*)nativeHandle)->Mirror(*((gp_Ax2d*)A->Handle));
}

OCgp_Parab2d^ OCgp_Parab2d::Mirrored(OCNaroWrappers::OCgp_Ax2d^ A)
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Mirrored(*((gp_Ax2d*)A->Handle));
  return gcnew OCgp_Parab2d(tmp);
}

 void OCgp_Parab2d::Rotate(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Ang)
{
  ((gp_Parab2d*)nativeHandle)->Rotate(*((gp_Pnt2d*)P->Handle), Ang);
}

OCgp_Parab2d^ OCgp_Parab2d::Rotated(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Ang)
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Rotated(*((gp_Pnt2d*)P->Handle), Ang);
  return gcnew OCgp_Parab2d(tmp);
}

 void OCgp_Parab2d::Scale(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real S)
{
  ((gp_Parab2d*)nativeHandle)->Scale(*((gp_Pnt2d*)P->Handle), S);
}

OCgp_Parab2d^ OCgp_Parab2d::Scaled(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real S)
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Scaled(*((gp_Pnt2d*)P->Handle), S);
  return gcnew OCgp_Parab2d(tmp);
}

 void OCgp_Parab2d::Transform(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  ((gp_Parab2d*)nativeHandle)->Transform(*((gp_Trsf2d*)T->Handle));
}

OCgp_Parab2d^ OCgp_Parab2d::Transformed(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Transformed(*((gp_Trsf2d*)T->Handle));
  return gcnew OCgp_Parab2d(tmp);
}

 void OCgp_Parab2d::Translate(OCNaroWrappers::OCgp_Vec2d^ V)
{
  ((gp_Parab2d*)nativeHandle)->Translate(*((gp_Vec2d*)V->Handle));
}

OCgp_Parab2d^ OCgp_Parab2d::Translated(OCNaroWrappers::OCgp_Vec2d^ V)
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Translated(*((gp_Vec2d*)V->Handle));
  return gcnew OCgp_Parab2d(tmp);
}

 void OCgp_Parab2d::Translate(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2)
{
  ((gp_Parab2d*)nativeHandle)->Translate(*((gp_Pnt2d*)P1->Handle), *((gp_Pnt2d*)P2->Handle));
}

OCgp_Parab2d^ OCgp_Parab2d::Translated(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2)
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = ((gp_Parab2d*)nativeHandle)->Translated(*((gp_Pnt2d*)P1->Handle), *((gp_Pnt2d*)P2->Handle));
  return gcnew OCgp_Parab2d(tmp);
}


