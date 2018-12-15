// File generated by CPPExt (CPP file)
//

#include "TNaming_DataMapOfShapeShapesSet.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TNaming_ShapesSet.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TNaming_DataMapNodeOfDataMapOfShapeShapesSet.h"
#include "TNaming_DataMapIteratorOfDataMapOfShapeShapesSet.h"


using namespace OCNaroWrappers;

OCTNaming_DataMapOfShapeShapesSet::OCTNaming_DataMapOfShapeShapesSet(TNaming_DataMapOfShapeShapesSet* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTNaming_DataMapOfShapeShapesSet::OCTNaming_DataMapOfShapeShapesSet(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TNaming_DataMapOfShapeShapesSet(NbBuckets);
}

OCTNaming_DataMapOfShapeShapesSet^ OCTNaming_DataMapOfShapeShapesSet::Assign(OCNaroWrappers::OCTNaming_DataMapOfShapeShapesSet^ Other)
{
  TNaming_DataMapOfShapeShapesSet* tmp = new TNaming_DataMapOfShapeShapesSet(0);
  *tmp = ((TNaming_DataMapOfShapeShapesSet*)nativeHandle)->Assign(*((TNaming_DataMapOfShapeShapesSet*)Other->Handle));
  return gcnew OCTNaming_DataMapOfShapeShapesSet(tmp);
}

 void OCTNaming_DataMapOfShapeShapesSet::ReSize(Standard_Integer NbBuckets)
{
  ((TNaming_DataMapOfShapeShapesSet*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTNaming_DataMapOfShapeShapesSet::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTNaming_ShapesSet^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TNaming_DataMapOfShapeShapesSet*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), *((TNaming_ShapesSet*)I->Handle)));
}

 System::Boolean OCTNaming_DataMapOfShapeShapesSet::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TNaming_DataMapOfShapeShapesSet*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCTNaming_DataMapOfShapeShapesSet::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TNaming_DataMapOfShapeShapesSet*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

OCTNaming_ShapesSet^ OCTNaming_DataMapOfShapeShapesSet::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TNaming_ShapesSet* tmp = new TNaming_ShapesSet();
  *tmp = ((TNaming_DataMapOfShapeShapesSet*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTNaming_ShapesSet(tmp);
}

OCTNaming_ShapesSet^ OCTNaming_DataMapOfShapeShapesSet::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TNaming_ShapesSet* tmp = new TNaming_ShapesSet();
  *tmp = ((TNaming_DataMapOfShapeShapesSet*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTNaming_ShapesSet(tmp);
}

 Standard_Address OCTNaming_DataMapOfShapeShapesSet::Find1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TNaming_DataMapOfShapeShapesSet*)nativeHandle)->Find1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCTNaming_DataMapOfShapeShapesSet::ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TNaming_DataMapOfShapeShapesSet*)nativeHandle)->ChangeFind1(*((TopoDS_Shape*)K->Handle));
}


