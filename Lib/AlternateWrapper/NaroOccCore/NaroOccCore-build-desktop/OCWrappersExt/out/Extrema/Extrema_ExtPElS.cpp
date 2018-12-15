// File generated by CPPExt (CPP file)
//

#include "Extrema_ExtPElS.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Cylinder.h"
#include "../gp/gp_Pln.h"
#include "../gp/gp_Cone.h"
#include "../gp/gp_Torus.h"
#include "../gp/gp_Sphere.h"
#include "Extrema_POnSurf.h"


using namespace OCNaroWrappers;

OCExtrema_ExtPElS::OCExtrema_ExtPElS(Extrema_ExtPElS* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCExtrema_ExtPElS::OCExtrema_ExtPElS() 
{
  nativeHandle = new Extrema_ExtPElS();
}

OCExtrema_ExtPElS::OCExtrema_ExtPElS(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Cylinder^ S, Standard_Real Tol) 
{
  nativeHandle = new Extrema_ExtPElS(*((gp_Pnt*)P->Handle), *((gp_Cylinder*)S->Handle), Tol);
}

 void OCExtrema_ExtPElS::Perform(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Cylinder^ S, Standard_Real Tol)
{
  ((Extrema_ExtPElS*)nativeHandle)->Perform(*((gp_Pnt*)P->Handle), *((gp_Cylinder*)S->Handle), Tol);
}

OCExtrema_ExtPElS::OCExtrema_ExtPElS(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Pln^ S, Standard_Real Tol) 
{
  nativeHandle = new Extrema_ExtPElS(*((gp_Pnt*)P->Handle), *((gp_Pln*)S->Handle), Tol);
}

 void OCExtrema_ExtPElS::Perform(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Pln^ S, Standard_Real Tol)
{
  ((Extrema_ExtPElS*)nativeHandle)->Perform(*((gp_Pnt*)P->Handle), *((gp_Pln*)S->Handle), Tol);
}

OCExtrema_ExtPElS::OCExtrema_ExtPElS(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Cone^ S, Standard_Real Tol) 
{
  nativeHandle = new Extrema_ExtPElS(*((gp_Pnt*)P->Handle), *((gp_Cone*)S->Handle), Tol);
}

 void OCExtrema_ExtPElS::Perform(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Cone^ S, Standard_Real Tol)
{
  ((Extrema_ExtPElS*)nativeHandle)->Perform(*((gp_Pnt*)P->Handle), *((gp_Cone*)S->Handle), Tol);
}

OCExtrema_ExtPElS::OCExtrema_ExtPElS(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Torus^ S, Standard_Real Tol) 
{
  nativeHandle = new Extrema_ExtPElS(*((gp_Pnt*)P->Handle), *((gp_Torus*)S->Handle), Tol);
}

 void OCExtrema_ExtPElS::Perform(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Torus^ S, Standard_Real Tol)
{
  ((Extrema_ExtPElS*)nativeHandle)->Perform(*((gp_Pnt*)P->Handle), *((gp_Torus*)S->Handle), Tol);
}

OCExtrema_ExtPElS::OCExtrema_ExtPElS(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Sphere^ S, Standard_Real Tol) 
{
  nativeHandle = new Extrema_ExtPElS(*((gp_Pnt*)P->Handle), *((gp_Sphere*)S->Handle), Tol);
}

 void OCExtrema_ExtPElS::Perform(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Sphere^ S, Standard_Real Tol)
{
  ((Extrema_ExtPElS*)nativeHandle)->Perform(*((gp_Pnt*)P->Handle), *((gp_Sphere*)S->Handle), Tol);
}

 System::Boolean OCExtrema_ExtPElS::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_ExtPElS*)nativeHandle)->IsDone());
}

 Standard_Integer OCExtrema_ExtPElS::NbExt()
{
  return ((Extrema_ExtPElS*)nativeHandle)->NbExt();
}

 Standard_Real OCExtrema_ExtPElS::SquareDistance(Standard_Integer N)
{
  return ((Extrema_ExtPElS*)nativeHandle)->SquareDistance(N);
}

OCExtrema_POnSurf^ OCExtrema_ExtPElS::Point(Standard_Integer N)
{
  Extrema_POnSurf* tmp = new Extrema_POnSurf();
  *tmp = ((Extrema_ExtPElS*)nativeHandle)->Point(N);
  return gcnew OCExtrema_POnSurf(tmp);
}


