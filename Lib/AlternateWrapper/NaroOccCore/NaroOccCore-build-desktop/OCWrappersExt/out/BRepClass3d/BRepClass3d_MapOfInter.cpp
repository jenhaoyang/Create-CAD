// File generated by CPPExt (CPP file)
//

#include "BRepClass3d_MapOfInter.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepClass3d_DataMapNodeOfMapOfInter.h"
#include "BRepClass3d_DataMapIteratorOfMapOfInter.h"


using namespace OCNaroWrappers;

OCBRepClass3d_MapOfInter::OCBRepClass3d_MapOfInter(BRepClass3d_MapOfInter* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepClass3d_MapOfInter::OCBRepClass3d_MapOfInter(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BRepClass3d_MapOfInter(NbBuckets);
}

OCBRepClass3d_MapOfInter^ OCBRepClass3d_MapOfInter::Assign(OCNaroWrappers::OCBRepClass3d_MapOfInter^ Other)
{
  BRepClass3d_MapOfInter* tmp = new BRepClass3d_MapOfInter(0);
  *tmp = ((BRepClass3d_MapOfInter*)nativeHandle)->Assign(*((BRepClass3d_MapOfInter*)Other->Handle));
  return gcnew OCBRepClass3d_MapOfInter(tmp);
}

 void OCBRepClass3d_MapOfInter::ReSize(Standard_Integer NbBuckets)
{
  ((BRepClass3d_MapOfInter*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCBRepClass3d_MapOfInter::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Address I)
{
  return OCConverter::StandardBooleanToBoolean(((BRepClass3d_MapOfInter*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), I));
}

 System::Boolean OCBRepClass3d_MapOfInter::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepClass3d_MapOfInter*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCBRepClass3d_MapOfInter::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepClass3d_MapOfInter*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

 Standard_Address OCBRepClass3d_MapOfInter::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepClass3d_MapOfInter*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCBRepClass3d_MapOfInter::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepClass3d_MapOfInter*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCBRepClass3d_MapOfInter::Find1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepClass3d_MapOfInter*)nativeHandle)->Find1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCBRepClass3d_MapOfInter::ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepClass3d_MapOfInter*)nativeHandle)->ChangeFind1(*((TopoDS_Shape*)K->Handle));
}


