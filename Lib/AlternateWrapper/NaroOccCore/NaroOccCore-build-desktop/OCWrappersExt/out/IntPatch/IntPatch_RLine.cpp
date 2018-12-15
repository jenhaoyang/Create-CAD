// File generated by CPPExt (CPP file)
//

#include "IntPatch_RLine.h"
#include "../Converter.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "../IntSurf/IntSurf_LineOn2S.h"
#include "IntPatch_Point.h"
#include "../IntSurf/IntSurf_PntOn2S.h"


using namespace OCNaroWrappers;

OCIntPatch_RLine::OCIntPatch_RLine(Handle(IntPatch_RLine)* nativeHandle) : OCIntPatch_Line((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IntPatch_RLine(*nativeHandle);
}

OCIntPatch_RLine::OCIntPatch_RLine(System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2) : OCIntPatch_Line((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntPatch_RLine(new IntPatch_RLine(OCConverter::BooleanToStandardBoolean(Tang), (IntSurf_TypeTrans)Trans1, (IntSurf_TypeTrans)Trans2));
}

OCIntPatch_RLine::OCIntPatch_RLine(System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2) : OCIntPatch_Line((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntPatch_RLine(new IntPatch_RLine(OCConverter::BooleanToStandardBoolean(Tang), (IntSurf_Situation)Situ1, (IntSurf_Situation)Situ2));
}

OCIntPatch_RLine::OCIntPatch_RLine(System::Boolean Tang) : OCIntPatch_Line((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntPatch_RLine(new IntPatch_RLine(OCConverter::BooleanToStandardBoolean(Tang)));
}

 void OCIntPatch_RLine::AddVertex(OCNaroWrappers::OCIntPatch_Point^ Pnt)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->AddVertex(*((IntPatch_Point*)Pnt->Handle));
}

 void OCIntPatch_RLine::Replace(Standard_Integer Index, OCNaroWrappers::OCIntPatch_Point^ Pnt)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->Replace(Index, *((IntPatch_Point*)Pnt->Handle));
}

 void OCIntPatch_RLine::SetFirstPoint(Standard_Integer IndFirst)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->SetFirstPoint(IndFirst);
}

 void OCIntPatch_RLine::SetLastPoint(Standard_Integer IndLast)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->SetLastPoint(IndLast);
}

 void OCIntPatch_RLine::Add(OCNaroWrappers::OCIntSurf_LineOn2S^ L)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->Add(*((Handle_IntSurf_LineOn2S*)L->Handle));
}

 System::Boolean OCIntPatch_RLine::IsArcOnS1()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntPatch_RLine*)nativeHandle))->IsArcOnS1());
}

 System::Boolean OCIntPatch_RLine::IsArcOnS2()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntPatch_RLine*)nativeHandle))->IsArcOnS2());
}

 void OCIntPatch_RLine::SetArcOnS1(OCNaroWrappers::OCAdaptor2d_HCurve2d^ A)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->SetArcOnS1(*((Handle_Adaptor2d_HCurve2d*)A->Handle));
}

 void OCIntPatch_RLine::SetArcOnS2(OCNaroWrappers::OCAdaptor2d_HCurve2d^ A)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->SetArcOnS2(*((Handle_Adaptor2d_HCurve2d*)A->Handle));
}

 void OCIntPatch_RLine::SetParamOnS1(Standard_Real p1, Standard_Real p2)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->SetParamOnS1(p1, p2);
}

 void OCIntPatch_RLine::SetParamOnS2(Standard_Real& p1, Standard_Real& p2)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->SetParamOnS2(p1, p2);
}

OCAdaptor2d_HCurve2d^ OCIntPatch_RLine::ArcOnS1()
{
  Handle(Adaptor2d_HCurve2d) tmp = (*((Handle_IntPatch_RLine*)nativeHandle))->ArcOnS1();
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}

OCAdaptor2d_HCurve2d^ OCIntPatch_RLine::ArcOnS2()
{
  Handle(Adaptor2d_HCurve2d) tmp = (*((Handle_IntPatch_RLine*)nativeHandle))->ArcOnS2();
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}

 void OCIntPatch_RLine::ParamOnS1(Standard_Real& p1, Standard_Real& p2)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->ParamOnS1(p1, p2);
}

 void OCIntPatch_RLine::ParamOnS2(Standard_Real& p1, Standard_Real& p2)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->ParamOnS2(p1, p2);
}

 System::Boolean OCIntPatch_RLine::HasFirstPoint()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntPatch_RLine*)nativeHandle))->HasFirstPoint());
}

 System::Boolean OCIntPatch_RLine::HasLastPoint()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntPatch_RLine*)nativeHandle))->HasLastPoint());
}

OCIntPatch_Point^ OCIntPatch_RLine::FirstPoint()
{
  IntPatch_Point* tmp = new IntPatch_Point();
  *tmp = (*((Handle_IntPatch_RLine*)nativeHandle))->FirstPoint();
  return gcnew OCIntPatch_Point(tmp);
}

OCIntPatch_Point^ OCIntPatch_RLine::LastPoint()
{
  IntPatch_Point* tmp = new IntPatch_Point();
  *tmp = (*((Handle_IntPatch_RLine*)nativeHandle))->LastPoint();
  return gcnew OCIntPatch_Point(tmp);
}

 Standard_Integer OCIntPatch_RLine::NbVertex()
{
  return (*((Handle_IntPatch_RLine*)nativeHandle))->NbVertex();
}

OCIntPatch_Point^ OCIntPatch_RLine::Vertex(Standard_Integer Index)
{
  IntPatch_Point* tmp = new IntPatch_Point();
  *tmp = (*((Handle_IntPatch_RLine*)nativeHandle))->Vertex(Index);
  return gcnew OCIntPatch_Point(tmp);
}

 System::Boolean OCIntPatch_RLine::HasPolygon()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntPatch_RLine*)nativeHandle))->HasPolygon());
}

 Standard_Integer OCIntPatch_RLine::NbPnts()
{
  return (*((Handle_IntPatch_RLine*)nativeHandle))->NbPnts();
}

OCIntSurf_PntOn2S^ OCIntPatch_RLine::Point(Standard_Integer Index)
{
  IntSurf_PntOn2S* tmp = new IntSurf_PntOn2S();
  *tmp = (*((Handle_IntPatch_RLine*)nativeHandle))->Point(Index);
  return gcnew OCIntSurf_PntOn2S(tmp);
}

 void OCIntPatch_RLine::SetPoint(Standard_Integer Index, OCNaroWrappers::OCIntPatch_Point^ Pnt)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->SetPoint(Index, *((IntPatch_Point*)Pnt->Handle));
}

 void OCIntPatch_RLine::ComputeVertexParameters(Standard_Real Tol)
{
  (*((Handle_IntPatch_RLine*)nativeHandle))->ComputeVertexParameters(Tol);
}


