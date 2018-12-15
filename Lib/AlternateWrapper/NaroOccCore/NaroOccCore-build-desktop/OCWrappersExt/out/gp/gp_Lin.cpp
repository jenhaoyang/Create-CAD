// File generated by CPPExt (CPP file)
//

#include "gp_Lin.h"
#include "../Converter.h"
#include "gp_Ax1.h"
#include "gp_Pnt.h"
#include "gp_Dir.h"
#include "gp_Ax2.h"
#include "gp_Trsf.h"
#include "gp_Vec.h"


using namespace OCNaroWrappers;

OCgp_Lin::OCgp_Lin(gp_Lin* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_Lin::OCgp_Lin() 
{
  nativeHandle = new gp_Lin();
}

OCgp_Lin::OCgp_Lin(OCNaroWrappers::OCgp_Ax1^ A1) 
{
  nativeHandle = new gp_Lin(*((gp_Ax1*)A1->Handle));
}

OCgp_Lin::OCgp_Lin(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Dir^ V) 
{
  nativeHandle = new gp_Lin(*((gp_Pnt*)P->Handle), *((gp_Dir*)V->Handle));
}

 void OCgp_Lin::Reverse()
{
  ((gp_Lin*)nativeHandle)->Reverse();
}

OCgp_Lin^ OCgp_Lin::Reversed()
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((gp_Lin*)nativeHandle)->Reversed();
  return gcnew OCgp_Lin(tmp);
}

 void OCgp_Lin::SetDirection(OCNaroWrappers::OCgp_Dir^ V)
{
  ((gp_Lin*)nativeHandle)->SetDirection(*((gp_Dir*)V->Handle));
}

 void OCgp_Lin::SetLocation(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((gp_Lin*)nativeHandle)->SetLocation(*((gp_Pnt*)P->Handle));
}

 void OCgp_Lin::SetPosition(OCNaroWrappers::OCgp_Ax1^ A1)
{
  ((gp_Lin*)nativeHandle)->SetPosition(*((gp_Ax1*)A1->Handle));
}

OCgp_Dir^ OCgp_Lin::Direction()
{
  gp_Dir* tmp = new gp_Dir();
  *tmp = ((gp_Lin*)nativeHandle)->Direction();
  return gcnew OCgp_Dir(tmp);
}

OCgp_Pnt^ OCgp_Lin::Location()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Lin*)nativeHandle)->Location();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Ax1^ OCgp_Lin::Position()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Lin*)nativeHandle)->Position();
  return gcnew OCgp_Ax1(tmp);
}

 Standard_Real OCgp_Lin::Angle(OCNaroWrappers::OCgp_Lin^ Other)
{
  return ((gp_Lin*)nativeHandle)->Angle(*((gp_Lin*)Other->Handle));
}

 System::Boolean OCgp_Lin::Contains(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real LinearTolerance)
{
  return OCConverter::StandardBooleanToBoolean(((gp_Lin*)nativeHandle)->Contains(*((gp_Pnt*)P->Handle), LinearTolerance));
}

 Standard_Real OCgp_Lin::Distance(OCNaroWrappers::OCgp_Pnt^ P)
{
  return ((gp_Lin*)nativeHandle)->Distance(*((gp_Pnt*)P->Handle));
}

 Standard_Real OCgp_Lin::Distance(OCNaroWrappers::OCgp_Lin^ Other)
{
  return ((gp_Lin*)nativeHandle)->Distance(*((gp_Lin*)Other->Handle));
}

 Standard_Real OCgp_Lin::SquareDistance(OCNaroWrappers::OCgp_Pnt^ P)
{
  return ((gp_Lin*)nativeHandle)->SquareDistance(*((gp_Pnt*)P->Handle));
}

 Standard_Real OCgp_Lin::SquareDistance(OCNaroWrappers::OCgp_Lin^ Other)
{
  return ((gp_Lin*)nativeHandle)->SquareDistance(*((gp_Lin*)Other->Handle));
}

OCgp_Lin^ OCgp_Lin::Normal(OCNaroWrappers::OCgp_Pnt^ P)
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((gp_Lin*)nativeHandle)->Normal(*((gp_Pnt*)P->Handle));
  return gcnew OCgp_Lin(tmp);
}

 void OCgp_Lin::Mirror(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((gp_Lin*)nativeHandle)->Mirror(*((gp_Pnt*)P->Handle));
}

OCgp_Lin^ OCgp_Lin::Mirrored(OCNaroWrappers::OCgp_Pnt^ P)
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((gp_Lin*)nativeHandle)->Mirrored(*((gp_Pnt*)P->Handle));
  return gcnew OCgp_Lin(tmp);
}

 void OCgp_Lin::Mirror(OCNaroWrappers::OCgp_Ax1^ A1)
{
  ((gp_Lin*)nativeHandle)->Mirror(*((gp_Ax1*)A1->Handle));
}

OCgp_Lin^ OCgp_Lin::Mirrored(OCNaroWrappers::OCgp_Ax1^ A1)
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((gp_Lin*)nativeHandle)->Mirrored(*((gp_Ax1*)A1->Handle));
  return gcnew OCgp_Lin(tmp);
}

 void OCgp_Lin::Mirror(OCNaroWrappers::OCgp_Ax2^ A2)
{
  ((gp_Lin*)nativeHandle)->Mirror(*((gp_Ax2*)A2->Handle));
}

OCgp_Lin^ OCgp_Lin::Mirrored(OCNaroWrappers::OCgp_Ax2^ A2)
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((gp_Lin*)nativeHandle)->Mirrored(*((gp_Ax2*)A2->Handle));
  return gcnew OCgp_Lin(tmp);
}

 void OCgp_Lin::Rotate(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  ((gp_Lin*)nativeHandle)->Rotate(*((gp_Ax1*)A1->Handle), Ang);
}

OCgp_Lin^ OCgp_Lin::Rotated(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((gp_Lin*)nativeHandle)->Rotated(*((gp_Ax1*)A1->Handle), Ang);
  return gcnew OCgp_Lin(tmp);
}

 void OCgp_Lin::Scale(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S)
{
  ((gp_Lin*)nativeHandle)->Scale(*((gp_Pnt*)P->Handle), S);
}

OCgp_Lin^ OCgp_Lin::Scaled(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S)
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((gp_Lin*)nativeHandle)->Scaled(*((gp_Pnt*)P->Handle), S);
  return gcnew OCgp_Lin(tmp);
}

 void OCgp_Lin::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  ((gp_Lin*)nativeHandle)->Transform(*((gp_Trsf*)T->Handle));
}

OCgp_Lin^ OCgp_Lin::Transformed(OCNaroWrappers::OCgp_Trsf^ T)
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((gp_Lin*)nativeHandle)->Transformed(*((gp_Trsf*)T->Handle));
  return gcnew OCgp_Lin(tmp);
}

 void OCgp_Lin::Translate(OCNaroWrappers::OCgp_Vec^ V)
{
  ((gp_Lin*)nativeHandle)->Translate(*((gp_Vec*)V->Handle));
}

OCgp_Lin^ OCgp_Lin::Translated(OCNaroWrappers::OCgp_Vec^ V)
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((gp_Lin*)nativeHandle)->Translated(*((gp_Vec*)V->Handle));
  return gcnew OCgp_Lin(tmp);
}

 void OCgp_Lin::Translate(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  ((gp_Lin*)nativeHandle)->Translate(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCgp_Lin^ OCgp_Lin::Translated(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((gp_Lin*)nativeHandle)->Translated(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
  return gcnew OCgp_Lin(tmp);
}


