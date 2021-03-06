// File generated by CPPExt (CPP file)
//

#include "BRepMesh_DataMapOfShapeEdgeDiscret.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BRepMesh_EdgeDiscret.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepMesh_DataMapNodeOfDataMapOfShapeEdgeDiscret.h"
#include "BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret.h"


using namespace OCNaroWrappers;

OCBRepMesh_DataMapOfShapeEdgeDiscret::OCBRepMesh_DataMapOfShapeEdgeDiscret(BRepMesh_DataMapOfShapeEdgeDiscret* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_DataMapOfShapeEdgeDiscret::OCBRepMesh_DataMapOfShapeEdgeDiscret(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BRepMesh_DataMapOfShapeEdgeDiscret(NbBuckets);
}

OCBRepMesh_DataMapOfShapeEdgeDiscret^ OCBRepMesh_DataMapOfShapeEdgeDiscret::Assign(OCNaroWrappers::OCBRepMesh_DataMapOfShapeEdgeDiscret^ Other)
{
  BRepMesh_DataMapOfShapeEdgeDiscret* tmp = new BRepMesh_DataMapOfShapeEdgeDiscret(0);
  *tmp = ((BRepMesh_DataMapOfShapeEdgeDiscret*)nativeHandle)->Assign(*((BRepMesh_DataMapOfShapeEdgeDiscret*)Other->Handle));
  return gcnew OCBRepMesh_DataMapOfShapeEdgeDiscret(tmp);
}

 void OCBRepMesh_DataMapOfShapeEdgeDiscret::ReSize(Standard_Integer NbBuckets)
{
  ((BRepMesh_DataMapOfShapeEdgeDiscret*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCBRepMesh_DataMapOfShapeEdgeDiscret::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepMesh_EdgeDiscret^ I)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_DataMapOfShapeEdgeDiscret*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), *((Handle_BRepMesh_EdgeDiscret*)I->Handle)));
}

 System::Boolean OCBRepMesh_DataMapOfShapeEdgeDiscret::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_DataMapOfShapeEdgeDiscret*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCBRepMesh_DataMapOfShapeEdgeDiscret::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_DataMapOfShapeEdgeDiscret*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

OCBRepMesh_EdgeDiscret^ OCBRepMesh_DataMapOfShapeEdgeDiscret::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  Handle(BRepMesh_EdgeDiscret) tmp = ((BRepMesh_DataMapOfShapeEdgeDiscret*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
  return gcnew OCBRepMesh_EdgeDiscret(&tmp);
}

OCBRepMesh_EdgeDiscret^ OCBRepMesh_DataMapOfShapeEdgeDiscret::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  Handle(BRepMesh_EdgeDiscret) tmp = ((BRepMesh_DataMapOfShapeEdgeDiscret*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
  return gcnew OCBRepMesh_EdgeDiscret(&tmp);
}


