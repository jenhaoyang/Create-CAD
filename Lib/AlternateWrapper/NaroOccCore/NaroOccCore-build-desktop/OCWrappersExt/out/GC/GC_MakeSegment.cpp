// File generated by CPPExt (CPP file)
//

#include "GC_MakeSegment.h"
#include "../Converter.h"
#include "../Geom/Geom_TrimmedCurve.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Lin.h"


using namespace OCNaroWrappers;

OCGC_MakeSegment::OCGC_MakeSegment(GC_MakeSegment* nativeHandle) : OCGC_Root((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGC_MakeSegment::OCGC_MakeSegment(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCGC_Root((OCDummy^)nullptr)

{
  nativeHandle = new GC_MakeSegment(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCGC_MakeSegment::OCGC_MakeSegment(OCNaroWrappers::OCgp_Lin^ Line, Standard_Real U1, Standard_Real U2) : OCGC_Root((OCDummy^)nullptr)

{
  nativeHandle = new GC_MakeSegment(*((gp_Lin*)Line->Handle), U1, U2);
}

OCGC_MakeSegment::OCGC_MakeSegment(OCNaroWrappers::OCgp_Lin^ Line, OCNaroWrappers::OCgp_Pnt^ Point, Standard_Real Ulast) : OCGC_Root((OCDummy^)nullptr)

{
  nativeHandle = new GC_MakeSegment(*((gp_Lin*)Line->Handle), *((gp_Pnt*)Point->Handle), Ulast);
}

OCGC_MakeSegment::OCGC_MakeSegment(OCNaroWrappers::OCgp_Lin^ Line, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCGC_Root((OCDummy^)nullptr)

{
  nativeHandle = new GC_MakeSegment(*((gp_Lin*)Line->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCGeom_TrimmedCurve^ OCGC_MakeSegment::Value()
{
  Handle(Geom_TrimmedCurve) tmp = ((GC_MakeSegment*)nativeHandle)->Value();
  return gcnew OCGeom_TrimmedCurve(&tmp);
}

OCGeom_TrimmedCurve^ OCGC_MakeSegment::Operator()
{
  Handle(Geom_TrimmedCurve) tmp = ((GC_MakeSegment*)nativeHandle)->Operator();
  return gcnew OCGeom_TrimmedCurve(&tmp);
}

