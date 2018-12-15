// File generated by CPPExt (CPP file)
//

#include "BRepOffset_DataMapOfShapeReal.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepOffset_DataMapNodeOfDataMapOfShapeReal.h"
#include "BRepOffset_DataMapIteratorOfDataMapOfShapeReal.h"


using namespace OCNaroWrappers;

OCBRepOffset_DataMapOfShapeReal::OCBRepOffset_DataMapOfShapeReal(BRepOffset_DataMapOfShapeReal* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepOffset_DataMapOfShapeReal::OCBRepOffset_DataMapOfShapeReal(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BRepOffset_DataMapOfShapeReal(NbBuckets);
}

OCBRepOffset_DataMapOfShapeReal^ OCBRepOffset_DataMapOfShapeReal::Assign(OCNaroWrappers::OCBRepOffset_DataMapOfShapeReal^ Other)
{
  BRepOffset_DataMapOfShapeReal* tmp = new BRepOffset_DataMapOfShapeReal(0);
  *tmp = ((BRepOffset_DataMapOfShapeReal*)nativeHandle)->Assign(*((BRepOffset_DataMapOfShapeReal*)Other->Handle));
  return gcnew OCBRepOffset_DataMapOfShapeReal(tmp);
}

 void OCBRepOffset_DataMapOfShapeReal::ReSize(Standard_Integer NbBuckets)
{
  ((BRepOffset_DataMapOfShapeReal*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCBRepOffset_DataMapOfShapeReal::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Real I)
{
  return OCConverter::StandardBooleanToBoolean(((BRepOffset_DataMapOfShapeReal*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), I));
}

 System::Boolean OCBRepOffset_DataMapOfShapeReal::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepOffset_DataMapOfShapeReal*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCBRepOffset_DataMapOfShapeReal::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepOffset_DataMapOfShapeReal*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

 Standard_Real OCBRepOffset_DataMapOfShapeReal::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepOffset_DataMapOfShapeReal*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
}

 Standard_Real OCBRepOffset_DataMapOfShapeReal::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepOffset_DataMapOfShapeReal*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
}

