// File generated by CPPExt (CPP file)
//

#include "IntPatch_TheSearchInsideOfTheIPIntOfIntersection.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "IntPatch_HSurfaceTool.h"
#include "../Adaptor3d/Adaptor3d_TopolTool.h"
#include "IntPatch_HInterTool.h"
#include "IntPatch_TheSurfFunctionOfTheIPIntOfIntersection.h"
#include "../IntSurf/IntSurf_InteriorPoint.h"


using namespace OCNaroWrappers;

OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection::OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection(IntPatch_TheSearchInsideOfTheIPIntOfIntersection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection::OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection() 
{
  nativeHandle = new IntPatch_TheSearchInsideOfTheIPIntOfIntersection();
}

OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection::OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection(OCNaroWrappers::OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection^ F, OCNaroWrappers::OCAdaptor3d_HSurface^ Surf, OCNaroWrappers::OCAdaptor3d_TopolTool^ T, Standard_Real Epsilon) 
{
  nativeHandle = new IntPatch_TheSearchInsideOfTheIPIntOfIntersection(*((IntPatch_TheSurfFunctionOfTheIPIntOfIntersection*)F->Handle), *((Handle_Adaptor3d_HSurface*)Surf->Handle), *((Handle_Adaptor3d_TopolTool*)T->Handle), Epsilon);
}

 void OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection::Perform(OCNaroWrappers::OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection^ F, OCNaroWrappers::OCAdaptor3d_HSurface^ Surf, OCNaroWrappers::OCAdaptor3d_TopolTool^ T, Standard_Real Epsilon)
{
  ((IntPatch_TheSearchInsideOfTheIPIntOfIntersection*)nativeHandle)->Perform(*((IntPatch_TheSurfFunctionOfTheIPIntOfIntersection*)F->Handle), *((Handle_Adaptor3d_HSurface*)Surf->Handle), *((Handle_Adaptor3d_TopolTool*)T->Handle), Epsilon);
}

 void OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection::Perform(OCNaroWrappers::OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection^ F, OCNaroWrappers::OCAdaptor3d_HSurface^ Surf, Standard_Real UStart, Standard_Real VStart)
{
  ((IntPatch_TheSearchInsideOfTheIPIntOfIntersection*)nativeHandle)->Perform(*((IntPatch_TheSurfFunctionOfTheIPIntOfIntersection*)F->Handle), *((Handle_Adaptor3d_HSurface*)Surf->Handle), UStart, VStart);
}

 System::Boolean OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_TheSearchInsideOfTheIPIntOfIntersection*)nativeHandle)->IsDone());
}

 Standard_Integer OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection::NbPoints()
{
  return ((IntPatch_TheSearchInsideOfTheIPIntOfIntersection*)nativeHandle)->NbPoints();
}

OCIntSurf_InteriorPoint^ OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection::Value(Standard_Integer Index)
{
  IntSurf_InteriorPoint* tmp = new IntSurf_InteriorPoint();
  *tmp = ((IntPatch_TheSearchInsideOfTheIPIntOfIntersection*)nativeHandle)->Value(Index);
  return gcnew OCIntSurf_InteriorPoint(tmp);
}


