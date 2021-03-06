// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_InterferenceTool.h"
#include "../Converter.h"
#include "TopOpeBRepDS_Interference.h"
#include "TopOpeBRepDS_Transition.h"
#include "../Geom2d/Geom2d_Curve.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_InterferenceTool::OCTopOpeBRepDS_InterferenceTool(TopOpeBRepDS_InterferenceTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_Interference^ OCTopOpeBRepDS_InterferenceTool::MakeEdgeInterference(OCNaroWrappers::OCTopOpeBRepDS_Transition^ T, OCTopOpeBRepDS_Kind SK, Standard_Integer SI, OCTopOpeBRepDS_Kind GK, Standard_Integer GI, Standard_Real P)
{
  Handle(TopOpeBRepDS_Interference) tmp = TopOpeBRepDS_InterferenceTool::MakeEdgeInterference(*((TopOpeBRepDS_Transition*)T->Handle), (TopOpeBRepDS_Kind)SK, SI, (TopOpeBRepDS_Kind)GK, GI, P);
  return gcnew OCTopOpeBRepDS_Interference(&tmp);
}

OCTopOpeBRepDS_Interference^ OCTopOpeBRepDS_InterferenceTool::MakeCurveInterference(OCNaroWrappers::OCTopOpeBRepDS_Transition^ T, OCTopOpeBRepDS_Kind SK, Standard_Integer SI, OCTopOpeBRepDS_Kind GK, Standard_Integer GI, Standard_Real P)
{
  Handle(TopOpeBRepDS_Interference) tmp = TopOpeBRepDS_InterferenceTool::MakeCurveInterference(*((TopOpeBRepDS_Transition*)T->Handle), (TopOpeBRepDS_Kind)SK, SI, (TopOpeBRepDS_Kind)GK, GI, P);
  return gcnew OCTopOpeBRepDS_Interference(&tmp);
}

OCTopOpeBRepDS_Interference^ OCTopOpeBRepDS_InterferenceTool::DuplicateCurvePointInterference(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I)
{
  Handle(TopOpeBRepDS_Interference) tmp = TopOpeBRepDS_InterferenceTool::DuplicateCurvePointInterference(*((Handle_TopOpeBRepDS_Interference*)I->Handle));
  return gcnew OCTopOpeBRepDS_Interference(&tmp);
}

OCTopOpeBRepDS_Interference^ OCTopOpeBRepDS_InterferenceTool::MakeFaceCurveInterference(OCNaroWrappers::OCTopOpeBRepDS_Transition^ Transition, Standard_Integer FaceI, Standard_Integer CurveI, OCNaroWrappers::OCGeom2d_Curve^ PC)
{
  Handle(TopOpeBRepDS_Interference) tmp = TopOpeBRepDS_InterferenceTool::MakeFaceCurveInterference(*((TopOpeBRepDS_Transition*)Transition->Handle), FaceI, CurveI, *((Handle_Geom2d_Curve*)PC->Handle));
  return gcnew OCTopOpeBRepDS_Interference(&tmp);
}

OCTopOpeBRepDS_Interference^ OCTopOpeBRepDS_InterferenceTool::MakeSolidSurfaceInterference(OCNaroWrappers::OCTopOpeBRepDS_Transition^ Transition, Standard_Integer SolidI, Standard_Integer SurfaceI)
{
  Handle(TopOpeBRepDS_Interference) tmp = TopOpeBRepDS_InterferenceTool::MakeSolidSurfaceInterference(*((TopOpeBRepDS_Transition*)Transition->Handle), SolidI, SurfaceI);
  return gcnew OCTopOpeBRepDS_Interference(&tmp);
}

OCTopOpeBRepDS_Interference^ OCTopOpeBRepDS_InterferenceTool::MakeEdgeVertexInterference(OCNaroWrappers::OCTopOpeBRepDS_Transition^ Transition, Standard_Integer EdgeI, Standard_Integer VertexI, System::Boolean VertexIsBound, OCTopOpeBRepDS_Config Config, Standard_Real param)
{
  Handle(TopOpeBRepDS_Interference) tmp = TopOpeBRepDS_InterferenceTool::MakeEdgeVertexInterference(*((TopOpeBRepDS_Transition*)Transition->Handle), EdgeI, VertexI, OCConverter::BooleanToStandardBoolean(VertexIsBound), (TopOpeBRepDS_Config)Config, param);
  return gcnew OCTopOpeBRepDS_Interference(&tmp);
}

OCTopOpeBRepDS_Interference^ OCTopOpeBRepDS_InterferenceTool::MakeFaceEdgeInterference(OCNaroWrappers::OCTopOpeBRepDS_Transition^ Transition, Standard_Integer FaceI, Standard_Integer EdgeI, System::Boolean EdgeIsBound, OCTopOpeBRepDS_Config Config)
{
  Handle(TopOpeBRepDS_Interference) tmp = TopOpeBRepDS_InterferenceTool::MakeFaceEdgeInterference(*((TopOpeBRepDS_Transition*)Transition->Handle), FaceI, EdgeI, OCConverter::BooleanToStandardBoolean(EdgeIsBound), (TopOpeBRepDS_Config)Config);
  return gcnew OCTopOpeBRepDS_Interference(&tmp);
}

 Standard_Real OCTopOpeBRepDS_InterferenceTool::Parameter(OCNaroWrappers::OCTopOpeBRepDS_Interference^ CPI)
{
  return TopOpeBRepDS_InterferenceTool::Parameter(*((Handle_TopOpeBRepDS_Interference*)CPI->Handle));
}

 void OCTopOpeBRepDS_InterferenceTool::Parameter(OCNaroWrappers::OCTopOpeBRepDS_Interference^ CPI, Standard_Real Par)
{
  TopOpeBRepDS_InterferenceTool::Parameter(*((Handle_TopOpeBRepDS_Interference*)CPI->Handle), Par);
}


