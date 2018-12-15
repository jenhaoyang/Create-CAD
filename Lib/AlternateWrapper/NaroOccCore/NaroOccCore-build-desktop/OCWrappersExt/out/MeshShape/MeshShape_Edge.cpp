// File generated by CPPExt (CPP file)
//

#include "MeshShape_Edge.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCMeshShape_Edge::OCMeshShape_Edge(MeshShape_Edge* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMeshShape_Edge::OCMeshShape_Edge(Standard_Integer vDebut, Standard_Integer vFin, OCMeshDS_DegreeOfFreedom canMove) 
{}

 Standard_Integer OCMeshShape_Edge::FirstNode()
{
  return ((MeshShape_Edge*)nativeHandle)->FirstNode();
}

 Standard_Integer OCMeshShape_Edge::LastNode()
{
  return ((MeshShape_Edge*)nativeHandle)->LastNode();
}

 OCMeshDS_DegreeOfFreedom OCMeshShape_Edge::Movability()
{
  return (OCMeshDS_DegreeOfFreedom)(((MeshShape_Edge*)nativeHandle)->Movability());
}

 void OCMeshShape_Edge::SetMovability(OCMeshDS_DegreeOfFreedom Move)
{
  ((MeshShape_Edge*)nativeHandle)->SetMovability((MeshDS_DegreeOfFreedom)Move);
}

 Standard_Integer OCMeshShape_Edge::HashCode(Standard_Integer Upper)
{
  return ((MeshShape_Edge*)nativeHandle)->HashCode(Upper);
}

 System::Boolean OCMeshShape_Edge::SameOrientation(OCNaroWrappers::OCMeshShape_Edge^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((MeshShape_Edge*)nativeHandle)->SameOrientation(*((MeshShape_Edge*)Other->Handle)));
}

 System::Boolean OCMeshShape_Edge::IsEqual(OCNaroWrappers::OCMeshShape_Edge^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((MeshShape_Edge*)nativeHandle)->IsEqual(*((MeshShape_Edge*)Other->Handle)));
}

