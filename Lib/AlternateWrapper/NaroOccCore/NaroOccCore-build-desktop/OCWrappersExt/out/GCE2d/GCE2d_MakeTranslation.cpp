// File generated by CPPExt (CPP file)
//

#include "GCE2d_MakeTranslation.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_Transformation.h"
#include "../gp/gp_Vec2d.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCGCE2d_MakeTranslation::OCGCE2d_MakeTranslation(GCE2d_MakeTranslation* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGCE2d_MakeTranslation::OCGCE2d_MakeTranslation(OCNaroWrappers::OCgp_Vec2d^ Vect) 
{
  nativeHandle = new GCE2d_MakeTranslation(*((gp_Vec2d*)Vect->Handle));
}

OCGCE2d_MakeTranslation::OCGCE2d_MakeTranslation(OCNaroWrappers::OCgp_Pnt2d^ Point1, OCNaroWrappers::OCgp_Pnt2d^ Point2) 
{
  nativeHandle = new GCE2d_MakeTranslation(*((gp_Pnt2d*)Point1->Handle), *((gp_Pnt2d*)Point2->Handle));
}

OCGeom2d_Transformation^ OCGCE2d_MakeTranslation::Value()
{
  Handle(Geom2d_Transformation) tmp = ((GCE2d_MakeTranslation*)nativeHandle)->Value();
  return gcnew OCGeom2d_Transformation(&tmp);
}

OCGeom2d_Transformation^ OCGCE2d_MakeTranslation::Operator()
{
  Handle(Geom2d_Transformation) tmp = ((GCE2d_MakeTranslation*)nativeHandle)->Operator();
  return gcnew OCGeom2d_Transformation(&tmp);
}


