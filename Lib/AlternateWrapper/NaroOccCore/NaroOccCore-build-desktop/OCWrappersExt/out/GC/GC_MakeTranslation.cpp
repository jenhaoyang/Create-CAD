// File generated by CPPExt (CPP file)
//

#include "GC_MakeTranslation.h"
#include "../Converter.h"
#include "../Geom/Geom_Transformation.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCGC_MakeTranslation::OCGC_MakeTranslation(GC_MakeTranslation* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGC_MakeTranslation::OCGC_MakeTranslation(OCNaroWrappers::OCgp_Vec^ Vect) 
{
  nativeHandle = new GC_MakeTranslation(*((gp_Vec*)Vect->Handle));
}

OCGC_MakeTranslation::OCGC_MakeTranslation(OCNaroWrappers::OCgp_Pnt^ Point1, OCNaroWrappers::OCgp_Pnt^ Point2) 
{
  nativeHandle = new GC_MakeTranslation(*((gp_Pnt*)Point1->Handle), *((gp_Pnt*)Point2->Handle));
}

OCGeom_Transformation^ OCGC_MakeTranslation::Value()
{
  Handle(Geom_Transformation) tmp = ((GC_MakeTranslation*)nativeHandle)->Value();
  return gcnew OCGeom_Transformation(&tmp);
}

OCGeom_Transformation^ OCGC_MakeTranslation::Operator()
{
  Handle(Geom_Transformation) tmp = ((GC_MakeTranslation*)nativeHandle)->Operator();
  return gcnew OCGeom_Transformation(&tmp);
}


