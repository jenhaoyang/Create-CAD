// File generated by CPPExt (CPP file)
//

#include "BRepMesh_DataMapOfShapePairOfPolygon.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BRepMesh_PairOfPolygon.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon.h"
#include "BRepMesh_DataMapIteratorOfDataMapOfShapePairOfPolygon.h"


using namespace OCNaroWrappers;

OCBRepMesh_DataMapOfShapePairOfPolygon::OCBRepMesh_DataMapOfShapePairOfPolygon(BRepMesh_DataMapOfShapePairOfPolygon* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_DataMapOfShapePairOfPolygon::OCBRepMesh_DataMapOfShapePairOfPolygon(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BRepMesh_DataMapOfShapePairOfPolygon(NbBuckets);
}

OCBRepMesh_DataMapOfShapePairOfPolygon^ OCBRepMesh_DataMapOfShapePairOfPolygon::Assign(OCNaroWrappers::OCBRepMesh_DataMapOfShapePairOfPolygon^ Other)
{
  BRepMesh_DataMapOfShapePairOfPolygon* tmp = new BRepMesh_DataMapOfShapePairOfPolygon(0);
  *tmp = ((BRepMesh_DataMapOfShapePairOfPolygon*)nativeHandle)->Assign(*((BRepMesh_DataMapOfShapePairOfPolygon*)Other->Handle));
  return gcnew OCBRepMesh_DataMapOfShapePairOfPolygon(tmp);
}

 void OCBRepMesh_DataMapOfShapePairOfPolygon::ReSize(Standard_Integer NbBuckets)
{
  ((BRepMesh_DataMapOfShapePairOfPolygon*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCBRepMesh_DataMapOfShapePairOfPolygon::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepMesh_PairOfPolygon^ I)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_DataMapOfShapePairOfPolygon*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), *((BRepMesh_PairOfPolygon*)I->Handle)));
}

 System::Boolean OCBRepMesh_DataMapOfShapePairOfPolygon::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_DataMapOfShapePairOfPolygon*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCBRepMesh_DataMapOfShapePairOfPolygon::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_DataMapOfShapePairOfPolygon*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

OCBRepMesh_PairOfPolygon^ OCBRepMesh_DataMapOfShapePairOfPolygon::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  BRepMesh_PairOfPolygon* tmp = new BRepMesh_PairOfPolygon();
  *tmp = ((BRepMesh_DataMapOfShapePairOfPolygon*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
  return gcnew OCBRepMesh_PairOfPolygon(tmp);
}

OCBRepMesh_PairOfPolygon^ OCBRepMesh_DataMapOfShapePairOfPolygon::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  BRepMesh_PairOfPolygon* tmp = new BRepMesh_PairOfPolygon();
  *tmp = ((BRepMesh_DataMapOfShapePairOfPolygon*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
  return gcnew OCBRepMesh_PairOfPolygon(tmp);
}

 Standard_Address OCBRepMesh_DataMapOfShapePairOfPolygon::Find1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepMesh_DataMapOfShapePairOfPolygon*)nativeHandle)->Find1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCBRepMesh_DataMapOfShapePairOfPolygon::ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepMesh_DataMapOfShapePairOfPolygon*)nativeHandle)->ChangeFind1(*((TopoDS_Shape*)K->Handle));
}


