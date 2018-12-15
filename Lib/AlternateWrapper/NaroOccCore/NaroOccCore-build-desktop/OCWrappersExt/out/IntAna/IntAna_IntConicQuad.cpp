// File generated by CPPExt (CPP file)
//

#include "IntAna_IntConicQuad.h"
#include "../Converter.h"
#include "../gp/gp_Lin.h"
#include "IntAna_Quadric.h"
#include "../gp/gp_Circ.h"
#include "../gp/gp_Elips.h"
#include "../gp/gp_Parab.h"
#include "../gp/gp_Hypr.h"
#include "../gp/gp_Pln.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad(IntAna_IntConicQuad* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad() 
{
  nativeHandle = new IntAna_IntConicQuad();
}

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad(OCNaroWrappers::OCgp_Lin^ L, OCNaroWrappers::OCIntAna_Quadric^ Q) 
{
  nativeHandle = new IntAna_IntConicQuad(*((gp_Lin*)L->Handle), *((IntAna_Quadric*)Q->Handle));
}

 void OCIntAna_IntConicQuad::Perform(OCNaroWrappers::OCgp_Lin^ L, OCNaroWrappers::OCIntAna_Quadric^ Q)
{
  ((IntAna_IntConicQuad*)nativeHandle)->Perform(*((gp_Lin*)L->Handle), *((IntAna_Quadric*)Q->Handle));
}

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad(OCNaroWrappers::OCgp_Circ^ C, OCNaroWrappers::OCIntAna_Quadric^ Q) 
{
  nativeHandle = new IntAna_IntConicQuad(*((gp_Circ*)C->Handle), *((IntAna_Quadric*)Q->Handle));
}

 void OCIntAna_IntConicQuad::Perform(OCNaroWrappers::OCgp_Circ^ C, OCNaroWrappers::OCIntAna_Quadric^ Q)
{
  ((IntAna_IntConicQuad*)nativeHandle)->Perform(*((gp_Circ*)C->Handle), *((IntAna_Quadric*)Q->Handle));
}

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad(OCNaroWrappers::OCgp_Elips^ E, OCNaroWrappers::OCIntAna_Quadric^ Q) 
{
  nativeHandle = new IntAna_IntConicQuad(*((gp_Elips*)E->Handle), *((IntAna_Quadric*)Q->Handle));
}

 void OCIntAna_IntConicQuad::Perform(OCNaroWrappers::OCgp_Elips^ E, OCNaroWrappers::OCIntAna_Quadric^ Q)
{
  ((IntAna_IntConicQuad*)nativeHandle)->Perform(*((gp_Elips*)E->Handle), *((IntAna_Quadric*)Q->Handle));
}

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad(OCNaroWrappers::OCgp_Parab^ P, OCNaroWrappers::OCIntAna_Quadric^ Q) 
{
  nativeHandle = new IntAna_IntConicQuad(*((gp_Parab*)P->Handle), *((IntAna_Quadric*)Q->Handle));
}

 void OCIntAna_IntConicQuad::Perform(OCNaroWrappers::OCgp_Parab^ P, OCNaroWrappers::OCIntAna_Quadric^ Q)
{
  ((IntAna_IntConicQuad*)nativeHandle)->Perform(*((gp_Parab*)P->Handle), *((IntAna_Quadric*)Q->Handle));
}

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad(OCNaroWrappers::OCgp_Hypr^ H, OCNaroWrappers::OCIntAna_Quadric^ Q) 
{
  nativeHandle = new IntAna_IntConicQuad(*((gp_Hypr*)H->Handle), *((IntAna_Quadric*)Q->Handle));
}

 void OCIntAna_IntConicQuad::Perform(OCNaroWrappers::OCgp_Hypr^ H, OCNaroWrappers::OCIntAna_Quadric^ Q)
{
  ((IntAna_IntConicQuad*)nativeHandle)->Perform(*((gp_Hypr*)H->Handle), *((IntAna_Quadric*)Q->Handle));
}

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad(OCNaroWrappers::OCgp_Lin^ L, OCNaroWrappers::OCgp_Pln^ P, Standard_Real Tolang) 
{
  nativeHandle = new IntAna_IntConicQuad(*((gp_Lin*)L->Handle), *((gp_Pln*)P->Handle), Tolang);
}

 void OCIntAna_IntConicQuad::Perform(OCNaroWrappers::OCgp_Lin^ L, OCNaroWrappers::OCgp_Pln^ P, Standard_Real Tolang)
{
  ((IntAna_IntConicQuad*)nativeHandle)->Perform(*((gp_Lin*)L->Handle), *((gp_Pln*)P->Handle), Tolang);
}

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad(OCNaroWrappers::OCgp_Circ^ C, OCNaroWrappers::OCgp_Pln^ P, Standard_Real Tolang, Standard_Real Tol) 
{
  nativeHandle = new IntAna_IntConicQuad(*((gp_Circ*)C->Handle), *((gp_Pln*)P->Handle), Tolang, Tol);
}

 void OCIntAna_IntConicQuad::Perform(OCNaroWrappers::OCgp_Circ^ C, OCNaroWrappers::OCgp_Pln^ P, Standard_Real Tolang, Standard_Real Tol)
{
  ((IntAna_IntConicQuad*)nativeHandle)->Perform(*((gp_Circ*)C->Handle), *((gp_Pln*)P->Handle), Tolang, Tol);
}

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad(OCNaroWrappers::OCgp_Elips^ E, OCNaroWrappers::OCgp_Pln^ P, Standard_Real Tolang, Standard_Real Tol) 
{
  nativeHandle = new IntAna_IntConicQuad(*((gp_Elips*)E->Handle), *((gp_Pln*)P->Handle), Tolang, Tol);
}

 void OCIntAna_IntConicQuad::Perform(OCNaroWrappers::OCgp_Elips^ E, OCNaroWrappers::OCgp_Pln^ P, Standard_Real Tolang, Standard_Real Tol)
{
  ((IntAna_IntConicQuad*)nativeHandle)->Perform(*((gp_Elips*)E->Handle), *((gp_Pln*)P->Handle), Tolang, Tol);
}

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad(OCNaroWrappers::OCgp_Parab^ Pb, OCNaroWrappers::OCgp_Pln^ P, Standard_Real Tolang) 
{
  nativeHandle = new IntAna_IntConicQuad(*((gp_Parab*)Pb->Handle), *((gp_Pln*)P->Handle), Tolang);
}

 void OCIntAna_IntConicQuad::Perform(OCNaroWrappers::OCgp_Parab^ Pb, OCNaroWrappers::OCgp_Pln^ P, Standard_Real Tolang)
{
  ((IntAna_IntConicQuad*)nativeHandle)->Perform(*((gp_Parab*)Pb->Handle), *((gp_Pln*)P->Handle), Tolang);
}

OCIntAna_IntConicQuad::OCIntAna_IntConicQuad(OCNaroWrappers::OCgp_Hypr^ H, OCNaroWrappers::OCgp_Pln^ P, Standard_Real Tolang) 
{
  nativeHandle = new IntAna_IntConicQuad(*((gp_Hypr*)H->Handle), *((gp_Pln*)P->Handle), Tolang);
}

 void OCIntAna_IntConicQuad::Perform(OCNaroWrappers::OCgp_Hypr^ H, OCNaroWrappers::OCgp_Pln^ P, Standard_Real Tolang)
{
  ((IntAna_IntConicQuad*)nativeHandle)->Perform(*((gp_Hypr*)H->Handle), *((gp_Pln*)P->Handle), Tolang);
}

 System::Boolean OCIntAna_IntConicQuad::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntAna_IntConicQuad*)nativeHandle)->IsDone());
}

 System::Boolean OCIntAna_IntConicQuad::IsInQuadric()
{
  return OCConverter::StandardBooleanToBoolean(((IntAna_IntConicQuad*)nativeHandle)->IsInQuadric());
}

 System::Boolean OCIntAna_IntConicQuad::IsParallel()
{
  return OCConverter::StandardBooleanToBoolean(((IntAna_IntConicQuad*)nativeHandle)->IsParallel());
}

 Standard_Integer OCIntAna_IntConicQuad::NbPoints()
{
  return ((IntAna_IntConicQuad*)nativeHandle)->NbPoints();
}

OCgp_Pnt^ OCIntAna_IntConicQuad::Point(Standard_Integer N)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntAna_IntConicQuad*)nativeHandle)->Point(N);
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCIntAna_IntConicQuad::ParamOnConic(Standard_Integer N)
{
  return ((IntAna_IntConicQuad*)nativeHandle)->ParamOnConic(N);
}


