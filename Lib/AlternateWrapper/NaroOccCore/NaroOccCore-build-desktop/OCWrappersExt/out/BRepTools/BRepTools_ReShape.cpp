// File generated by CPPExt (CPP file)
//

#include "BRepTools_ReShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBRepTools_ReShape::OCBRepTools_ReShape(Handle(BRepTools_ReShape)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepTools_ReShape(*nativeHandle);
}

OCBRepTools_ReShape::OCBRepTools_ReShape() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepTools_ReShape(new BRepTools_ReShape());
}

 void OCBRepTools_ReShape::Clear()
{
  (*((Handle_BRepTools_ReShape*)nativeHandle))->Clear();
}

 void OCBRepTools_ReShape::Remove(OCNaroWrappers::OCTopoDS_Shape^ shape, System::Boolean oriented)
{
  (*((Handle_BRepTools_ReShape*)nativeHandle))->Remove(*((TopoDS_Shape*)shape->Handle), OCConverter::BooleanToStandardBoolean(oriented));
}

 void OCBRepTools_ReShape::Replace(OCNaroWrappers::OCTopoDS_Shape^ shape, OCNaroWrappers::OCTopoDS_Shape^ newshape, System::Boolean oriented)
{
  (*((Handle_BRepTools_ReShape*)nativeHandle))->Replace(*((TopoDS_Shape*)shape->Handle), *((TopoDS_Shape*)newshape->Handle), OCConverter::BooleanToStandardBoolean(oriented));
}

 System::Boolean OCBRepTools_ReShape::IsRecorded(OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepTools_ReShape*)nativeHandle))->IsRecorded(*((TopoDS_Shape*)shape->Handle)));
}

OCTopoDS_Shape^ OCBRepTools_ReShape::Value(OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepTools_ReShape*)nativeHandle))->Value(*((TopoDS_Shape*)shape->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCBRepTools_ReShape::Status(OCNaroWrappers::OCTopoDS_Shape^ shape, OCNaroWrappers::OCTopoDS_Shape^ newsh, System::Boolean last)
{
  return (*((Handle_BRepTools_ReShape*)nativeHandle))->Status(*((TopoDS_Shape*)shape->Handle), *((TopoDS_Shape*)newsh->Handle), OCConverter::BooleanToStandardBoolean(last));
}

OCTopoDS_Shape^ OCBRepTools_ReShape::Apply(OCNaroWrappers::OCTopoDS_Shape^ shape, OCTopAbs_ShapeEnum until, Standard_Integer buildmode)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepTools_ReShape*)nativeHandle))->Apply(*((TopoDS_Shape*)shape->Handle), (TopAbs_ShapeEnum)until, buildmode);
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepTools_ReShape::Apply(OCNaroWrappers::OCTopoDS_Shape^ shape, OCTopAbs_ShapeEnum until)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepTools_ReShape*)nativeHandle))->Apply(*((TopoDS_Shape*)shape->Handle), (TopAbs_ShapeEnum)until);
  return gcnew OCTopoDS_Shape(tmp);
}

 System::Boolean OCBRepTools_ReShape::ModeConsiderLocation()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepTools_ReShape*)nativeHandle))->ModeConsiderLocation());
}

 System::Boolean OCBRepTools_ReShape::ModeConsiderOrientation()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepTools_ReShape*)nativeHandle))->ModeConsiderOrientation());
}


