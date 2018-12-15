// File generated by CPPExt (CPP file)
//

#include "BRepBuilderAPI_Transform.h"
#include "../Converter.h"
#include "../gp/gp_Trsf.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ListOfShape.h"


using namespace OCNaroWrappers;

OCBRepBuilderAPI_Transform::OCBRepBuilderAPI_Transform(BRepBuilderAPI_Transform* nativeHandle) : OCBRepBuilderAPI_ModifyShape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepBuilderAPI_Transform::OCBRepBuilderAPI_Transform(OCNaroWrappers::OCgp_Trsf^ T) : OCBRepBuilderAPI_ModifyShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_Transform(*((gp_Trsf*)T->Handle));
}

OCBRepBuilderAPI_Transform::OCBRepBuilderAPI_Transform(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Trsf^ T, System::Boolean Copy) : OCBRepBuilderAPI_ModifyShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_Transform(*((TopoDS_Shape*)S->Handle), *((gp_Trsf*)T->Handle), OCConverter::BooleanToStandardBoolean(Copy));
}

 void OCBRepBuilderAPI_Transform::Perform(OCNaroWrappers::OCTopoDS_Shape^ S, System::Boolean Copy)
{
  ((BRepBuilderAPI_Transform*)nativeHandle)->Perform(*((TopoDS_Shape*)S->Handle), OCConverter::BooleanToStandardBoolean(Copy));
}

OCTopoDS_Shape^ OCBRepBuilderAPI_Transform::ModifiedShape(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepBuilderAPI_Transform*)nativeHandle)->ModifiedShape(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_ListOfShape^ OCBRepBuilderAPI_Transform::Modified(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepBuilderAPI_Transform*)nativeHandle)->Modified(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}


