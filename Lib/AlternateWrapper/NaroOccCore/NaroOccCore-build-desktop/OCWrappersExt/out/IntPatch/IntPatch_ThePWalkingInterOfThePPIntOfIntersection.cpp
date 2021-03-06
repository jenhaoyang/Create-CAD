// File generated by CPPExt (CPP file)
//

#include "IntPatch_ThePWalkingInterOfThePPIntOfIntersection.h"
#include "../Converter.h"
#include "../IntSurf/IntSurf_LineOn2S.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "IntPatch_HSurfaceTool.h"
#include "IntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection.h"
#include "IntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../IntSurf/IntSurf_PntOn2S.h"
#include "../gp/gp_Dir.h"


using namespace OCNaroWrappers;

OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection(IntPatch_ThePWalkingInterOfThePPIntOfIntersection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) 
{
  nativeHandle = new IntPatch_ThePWalkingInterOfThePPIntOfIntersection(*((Handle_Adaptor3d_HSurface*)Caro1->Handle), *((Handle_Adaptor3d_HSurface*)Caro2->Handle), TolTangency, Epsilon, Deflection, Increment);
}

OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2) 
{
  nativeHandle = new IntPatch_ThePWalkingInterOfThePPIntOfIntersection(*((Handle_Adaptor3d_HSurface*)Caro1->Handle), *((Handle_Adaptor3d_HSurface*)Caro2->Handle), TolTangency, Epsilon, Deflection, Increment, U1, V1, U2, V2);
}

 void OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::Perform(OCNaroWrappers::OCTColStd_Array1OfReal^ ParDep)
{
  ((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->Perform(*((TColStd_Array1OfReal*)ParDep->Handle));
}

 void OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::Perform(OCNaroWrappers::OCTColStd_Array1OfReal^ ParDep, Standard_Real u1min, Standard_Real v1min, Standard_Real u2min, Standard_Real v2min, Standard_Real u1max, Standard_Real v1max, Standard_Real u2max, Standard_Real v2max)
{
  ((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->Perform(*((TColStd_Array1OfReal*)ParDep->Handle), u1min, v1min, u2min, v2min, u1max, v1max, u2max, v2max);
}

 System::Boolean OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::PerformFirstPoint(OCNaroWrappers::OCTColStd_Array1OfReal^ ParDep, OCNaroWrappers::OCIntSurf_PntOn2S^ FirstPoint)
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->PerformFirstPoint(*((TColStd_Array1OfReal*)ParDep->Handle), *((IntSurf_PntOn2S*)FirstPoint->Handle)));
}

 System::Boolean OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->IsDone());
}

 Standard_Integer OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::NbPoints()
{
  return ((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->NbPoints();
}

OCIntSurf_PntOn2S^ OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::Value(Standard_Integer Index)
{
  IntSurf_PntOn2S* tmp = new IntSurf_PntOn2S();
  *tmp = ((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->Value(Index);
  return gcnew OCIntSurf_PntOn2S(tmp);
}

OCIntSurf_LineOn2S^ OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::Line()
{
  Handle(IntSurf_LineOn2S) tmp = ((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->Line();
  return gcnew OCIntSurf_LineOn2S(&tmp);
}

 System::Boolean OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::TangentAtFirst()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->TangentAtFirst());
}

 System::Boolean OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::TangentAtLast()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->TangentAtLast());
}

 System::Boolean OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::IsClosed()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->IsClosed());
}

OCgp_Dir^ OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::TangentAtLine(Standard_Integer& Index)
{
  gp_Dir* tmp = new gp_Dir();
  *tmp = ((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->TangentAtLine(Index);
  return gcnew OCgp_Dir(tmp);
}

 OCIntWalk_StatusDeflection OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::TestDeflection()
{
  return (OCIntWalk_StatusDeflection)(((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->TestDeflection());
}

 System::Boolean OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::TestArret(System::Boolean DejaReparti, OCNaroWrappers::OCTColStd_Array1OfReal^ Param, OCIntImp_ConstIsoparametric& ChoixIso)
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->TestArret(OCConverter::BooleanToStandardBoolean(DejaReparti), *((TColStd_Array1OfReal*)Param->Handle), (IntImp_ConstIsoparametric&)ChoixIso));
}

 void OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::RepartirOuDiviser(System::Boolean& DejaReparti, OCIntImp_ConstIsoparametric& ChoixIso, System::Boolean& Arrive)
{
  ((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->RepartirOuDiviser((Standard_Boolean&)(DejaReparti), (IntImp_ConstIsoparametric&)ChoixIso, (Standard_Boolean&)(Arrive));
}

 void OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection::AddAPoint(OCNaroWrappers::OCIntSurf_LineOn2S^ line, OCNaroWrappers::OCIntSurf_PntOn2S^ POn2S)
{
  ((IntPatch_ThePWalkingInterOfThePPIntOfIntersection*)nativeHandle)->AddAPoint(*((Handle_IntSurf_LineOn2S*)line->Handle), *((IntSurf_PntOn2S*)POn2S->Handle));
}


