// File generated by CPPExt (CPP file)
//

#include "TopTools_DataMapOfIntegerShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "TopTools_DataMapNodeOfDataMapOfIntegerShape.h"
#include "TopTools_DataMapIteratorOfDataMapOfIntegerShape.h"


using namespace OCNaroWrappers;

OCTopTools_DataMapOfIntegerShape::OCTopTools_DataMapOfIntegerShape(TopTools_DataMapOfIntegerShape* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopTools_DataMapOfIntegerShape::OCTopTools_DataMapOfIntegerShape(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopTools_DataMapOfIntegerShape(NbBuckets);
}

OCTopTools_DataMapOfIntegerShape^ OCTopTools_DataMapOfIntegerShape::Assign(OCNaroWrappers::OCTopTools_DataMapOfIntegerShape^ Other)
{
  TopTools_DataMapOfIntegerShape* tmp = new TopTools_DataMapOfIntegerShape(0);
  *tmp = ((TopTools_DataMapOfIntegerShape*)nativeHandle)->Assign(*((TopTools_DataMapOfIntegerShape*)Other->Handle));
  return gcnew OCTopTools_DataMapOfIntegerShape(tmp);
}

 void OCTopTools_DataMapOfIntegerShape::ReSize(Standard_Integer NbBuckets)
{
  ((TopTools_DataMapOfIntegerShape*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTopTools_DataMapOfIntegerShape::Bind(Standard_Integer K, OCNaroWrappers::OCTopoDS_Shape^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_DataMapOfIntegerShape*)nativeHandle)->Bind(K, *((TopoDS_Shape*)I->Handle)));
}

 System::Boolean OCTopTools_DataMapOfIntegerShape::IsBound(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_DataMapOfIntegerShape*)nativeHandle)->IsBound(K));
}

 System::Boolean OCTopTools_DataMapOfIntegerShape::UnBind(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_DataMapOfIntegerShape*)nativeHandle)->UnBind(K));
}

OCTopoDS_Shape^ OCTopTools_DataMapOfIntegerShape::Find(Standard_Integer K)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_DataMapOfIntegerShape*)nativeHandle)->Find(K);
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTopTools_DataMapOfIntegerShape::ChangeFind(Standard_Integer K)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_DataMapOfIntegerShape*)nativeHandle)->ChangeFind(K);
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Address OCTopTools_DataMapOfIntegerShape::Find1(Standard_Integer K)
{
  return ((TopTools_DataMapOfIntegerShape*)nativeHandle)->Find1(K);
}

 Standard_Address OCTopTools_DataMapOfIntegerShape::ChangeFind1(Standard_Integer K)
{
  return ((TopTools_DataMapOfIntegerShape*)nativeHandle)->ChangeFind1(K);
}


