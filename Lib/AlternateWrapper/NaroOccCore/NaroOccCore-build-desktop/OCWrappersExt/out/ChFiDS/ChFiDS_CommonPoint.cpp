// File generated by CPPExt (CPP file)
//

#include "ChFiDS_CommonPoint.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"


using namespace OCNaroWrappers;

OCChFiDS_CommonPoint::OCChFiDS_CommonPoint(ChFiDS_CommonPoint* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCChFiDS_CommonPoint::OCChFiDS_CommonPoint() 
{
  nativeHandle = new ChFiDS_CommonPoint();
}

 void OCChFiDS_CommonPoint::Reset()
{
  ((ChFiDS_CommonPoint*)nativeHandle)->Reset();
}

 void OCChFiDS_CommonPoint::SetVertex(OCNaroWrappers::OCTopoDS_Vertex^ V)
{
  ((ChFiDS_CommonPoint*)nativeHandle)->SetVertex(*((TopoDS_Vertex*)V->Handle));
}

 void OCChFiDS_CommonPoint::SetArc(Standard_Real Tol, OCNaroWrappers::OCTopoDS_Edge^ A, Standard_Real Param, OCTopAbs_Orientation TArc)
{
  ((ChFiDS_CommonPoint*)nativeHandle)->SetArc(Tol, *((TopoDS_Edge*)A->Handle), Param, (TopAbs_Orientation)TArc);
}

 void OCChFiDS_CommonPoint::SetParameter(Standard_Real Param)
{
  ((ChFiDS_CommonPoint*)nativeHandle)->SetParameter(Param);
}

 void OCChFiDS_CommonPoint::SetPoint(OCNaroWrappers::OCgp_Pnt^ Point)
{
  ((ChFiDS_CommonPoint*)nativeHandle)->SetPoint(*((gp_Pnt*)Point->Handle));
}

 void OCChFiDS_CommonPoint::SetVector(OCNaroWrappers::OCgp_Vec^ Vector)
{
  ((ChFiDS_CommonPoint*)nativeHandle)->SetVector(*((gp_Vec*)Vector->Handle));
}

 void OCChFiDS_CommonPoint::SetTolerance(Standard_Real Tol)
{
  ((ChFiDS_CommonPoint*)nativeHandle)->SetTolerance(Tol);
}

 Standard_Real OCChFiDS_CommonPoint::Tolerance()
{
  return ((ChFiDS_CommonPoint*)nativeHandle)->Tolerance();
}

 System::Boolean OCChFiDS_CommonPoint::IsVertex()
{
  return OCConverter::StandardBooleanToBoolean(((ChFiDS_CommonPoint*)nativeHandle)->IsVertex());
}

OCTopoDS_Vertex^ OCChFiDS_CommonPoint::Vertex()
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((ChFiDS_CommonPoint*)nativeHandle)->Vertex();
  return gcnew OCTopoDS_Vertex(tmp);
}

 System::Boolean OCChFiDS_CommonPoint::IsOnArc()
{
  return OCConverter::StandardBooleanToBoolean(((ChFiDS_CommonPoint*)nativeHandle)->IsOnArc());
}

OCTopoDS_Edge^ OCChFiDS_CommonPoint::Arc()
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = ((ChFiDS_CommonPoint*)nativeHandle)->Arc();
  return gcnew OCTopoDS_Edge(tmp);
}

 OCTopAbs_Orientation OCChFiDS_CommonPoint::TransitionOnArc()
{
  return (OCTopAbs_Orientation)(((ChFiDS_CommonPoint*)nativeHandle)->TransitionOnArc());
}

 Standard_Real OCChFiDS_CommonPoint::ParameterOnArc()
{
  return ((ChFiDS_CommonPoint*)nativeHandle)->ParameterOnArc();
}

 Standard_Real OCChFiDS_CommonPoint::Parameter()
{
  return ((ChFiDS_CommonPoint*)nativeHandle)->Parameter();
}

OCgp_Pnt^ OCChFiDS_CommonPoint::Point()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((ChFiDS_CommonPoint*)nativeHandle)->Point();
  return gcnew OCgp_Pnt(tmp);
}

 System::Boolean OCChFiDS_CommonPoint::HasVector()
{
  return OCConverter::StandardBooleanToBoolean(((ChFiDS_CommonPoint*)nativeHandle)->HasVector());
}

OCgp_Vec^ OCChFiDS_CommonPoint::Vector()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((ChFiDS_CommonPoint*)nativeHandle)->Vector();
  return gcnew OCgp_Vec(tmp);
}


