// File generated by CPPExt (CPP file)
//

#include "Geom2d_AxisPlacement.h"
#include "../Converter.h"
#include "../gp/gp_Ax2d.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Dir2d.h"
#include "../gp/gp_Trsf2d.h"
#include "Geom2d_Geometry.h"


using namespace OCNaroWrappers;

OCGeom2d_AxisPlacement::OCGeom2d_AxisPlacement(Handle(Geom2d_AxisPlacement)* nativeHandle) : OCGeom2d_Geometry((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom2d_AxisPlacement(*nativeHandle);
}

OCGeom2d_AxisPlacement::OCGeom2d_AxisPlacement(OCNaroWrappers::OCgp_Ax2d^ A) : OCGeom2d_Geometry((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_AxisPlacement(new Geom2d_AxisPlacement(*((gp_Ax2d*)A->Handle)));
}

OCGeom2d_AxisPlacement::OCGeom2d_AxisPlacement(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Dir2d^ V) : OCGeom2d_Geometry((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_AxisPlacement(new Geom2d_AxisPlacement(*((gp_Pnt2d*)P->Handle), *((gp_Dir2d*)V->Handle)));
}

 void OCGeom2d_AxisPlacement::Reverse()
{
  (*((Handle_Geom2d_AxisPlacement*)nativeHandle))->Reverse();
}

OCGeom2d_AxisPlacement^ OCGeom2d_AxisPlacement::Reversed()
{
  Handle(Geom2d_AxisPlacement) tmp = (*((Handle_Geom2d_AxisPlacement*)nativeHandle))->Reversed();
  return gcnew OCGeom2d_AxisPlacement(&tmp);
}

 void OCGeom2d_AxisPlacement::SetAxis(OCNaroWrappers::OCgp_Ax2d^ A)
{
  (*((Handle_Geom2d_AxisPlacement*)nativeHandle))->SetAxis(*((gp_Ax2d*)A->Handle));
}

 void OCGeom2d_AxisPlacement::SetDirection(OCNaroWrappers::OCgp_Dir2d^ V)
{
  (*((Handle_Geom2d_AxisPlacement*)nativeHandle))->SetDirection(*((gp_Dir2d*)V->Handle));
}

 void OCGeom2d_AxisPlacement::SetLocation(OCNaroWrappers::OCgp_Pnt2d^ P)
{
  (*((Handle_Geom2d_AxisPlacement*)nativeHandle))->SetLocation(*((gp_Pnt2d*)P->Handle));
}

 Standard_Real OCGeom2d_AxisPlacement::Angle(OCNaroWrappers::OCGeom2d_AxisPlacement^ Other)
{
  return (*((Handle_Geom2d_AxisPlacement*)nativeHandle))->Angle(*((Handle_Geom2d_AxisPlacement*)Other->Handle));
}

OCgp_Ax2d^ OCGeom2d_AxisPlacement::Ax2d()
{
  gp_Ax2d* tmp = new gp_Ax2d();
  *tmp = (*((Handle_Geom2d_AxisPlacement*)nativeHandle))->Ax2d();
  return gcnew OCgp_Ax2d(tmp);
}

OCgp_Dir2d^ OCGeom2d_AxisPlacement::Direction()
{
  gp_Dir2d* tmp = new gp_Dir2d();
  *tmp = (*((Handle_Geom2d_AxisPlacement*)nativeHandle))->Direction();
  return gcnew OCgp_Dir2d(tmp);
}

OCgp_Pnt2d^ OCGeom2d_AxisPlacement::Location()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Geom2d_AxisPlacement*)nativeHandle))->Location();
  return gcnew OCgp_Pnt2d(tmp);
}

 void OCGeom2d_AxisPlacement::Transform(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  (*((Handle_Geom2d_AxisPlacement*)nativeHandle))->Transform(*((gp_Trsf2d*)T->Handle));
}

OCGeom2d_Geometry^ OCGeom2d_AxisPlacement::Copy()
{
  Handle(Geom2d_Geometry) tmp = (*((Handle_Geom2d_AxisPlacement*)nativeHandle))->Copy();
  return gcnew OCGeom2d_Geometry(&tmp);
}


