// File generated by CPPExt (CPP file)
//

#include "IntPatch_ImpImpIntersection.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "../Adaptor3d/Adaptor3d_TopolTool.h"
#include "IntPatch_Point.h"
#include "IntPatch_Line.h"


using namespace OCNaroWrappers;

OCIntPatch_ImpImpIntersection::OCIntPatch_ImpImpIntersection(IntPatch_ImpImpIntersection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_ImpImpIntersection::OCIntPatch_ImpImpIntersection() 
{
  nativeHandle = new IntPatch_ImpImpIntersection();
}

OCIntPatch_ImpImpIntersection::OCIntPatch_ImpImpIntersection(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_TopolTool^ D2, Standard_Real TolArc, Standard_Real TolTang) 
{
  nativeHandle = new IntPatch_ImpImpIntersection(*((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_TopolTool*)D1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), *((Handle_Adaptor3d_TopolTool*)D2->Handle), TolArc, TolTang);
}

 void OCIntPatch_ImpImpIntersection::Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_TopolTool^ D2, Standard_Real TolArc, Standard_Real TolTang)
{
  ((IntPatch_ImpImpIntersection*)nativeHandle)->Perform(*((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_TopolTool*)D1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), *((Handle_Adaptor3d_TopolTool*)D2->Handle), TolArc, TolTang);
}

 System::Boolean OCIntPatch_ImpImpIntersection::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ImpImpIntersection*)nativeHandle)->IsDone());
}

 System::Boolean OCIntPatch_ImpImpIntersection::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ImpImpIntersection*)nativeHandle)->IsEmpty());
}

 System::Boolean OCIntPatch_ImpImpIntersection::TangentFaces()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ImpImpIntersection*)nativeHandle)->TangentFaces());
}

 System::Boolean OCIntPatch_ImpImpIntersection::OppositeFaces()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ImpImpIntersection*)nativeHandle)->OppositeFaces());
}

 Standard_Integer OCIntPatch_ImpImpIntersection::NbPnts()
{
  return ((IntPatch_ImpImpIntersection*)nativeHandle)->NbPnts();
}

OCIntPatch_Point^ OCIntPatch_ImpImpIntersection::Point(Standard_Integer Index)
{
  IntPatch_Point* tmp = new IntPatch_Point();
  *tmp = ((IntPatch_ImpImpIntersection*)nativeHandle)->Point(Index);
  return gcnew OCIntPatch_Point(tmp);
}

 Standard_Integer OCIntPatch_ImpImpIntersection::NbLines()
{
  return ((IntPatch_ImpImpIntersection*)nativeHandle)->NbLines();
}

OCIntPatch_Line^ OCIntPatch_ImpImpIntersection::Line(Standard_Integer Index)
{
  Handle(IntPatch_Line) tmp = ((IntPatch_ImpImpIntersection*)nativeHandle)->Line(Index);
  return gcnew OCIntPatch_Line(&tmp);
}


