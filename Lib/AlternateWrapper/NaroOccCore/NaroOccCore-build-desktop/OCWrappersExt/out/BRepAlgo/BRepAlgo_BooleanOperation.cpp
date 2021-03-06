// File generated by CPPExt (CPP file)
//

#include "BRepAlgo_BooleanOperation.h"
#include "../Converter.h"
#include "../TopOpeBRepBuild/TopOpeBRepBuild_HBuilder.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ListOfShape.h"


using namespace OCNaroWrappers;

OCBRepAlgo_BooleanOperation::OCBRepAlgo_BooleanOperation(BRepAlgo_BooleanOperation* nativeHandle) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepAlgo_BooleanOperation::OCBRepAlgo_BooleanOperation(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{}

 void OCBRepAlgo_BooleanOperation::Delete()
{
  ((BRepAlgo_BooleanOperation*)nativeHandle)->Delete();
}

 void OCBRepAlgo_BooleanOperation::PerformDS()
{
  ((BRepAlgo_BooleanOperation*)nativeHandle)->PerformDS();
}

 void OCBRepAlgo_BooleanOperation::Perform(OCTopAbs_State St1, OCTopAbs_State St2)
{
  ((BRepAlgo_BooleanOperation*)nativeHandle)->Perform((TopAbs_State)St1, (TopAbs_State)St2);
}

OCTopOpeBRepBuild_HBuilder^ OCBRepAlgo_BooleanOperation::Builder()
{
  Handle(TopOpeBRepBuild_HBuilder) tmp = ((BRepAlgo_BooleanOperation*)nativeHandle)->Builder();
  return gcnew OCTopOpeBRepBuild_HBuilder(&tmp);
}

OCTopoDS_Shape^ OCBRepAlgo_BooleanOperation::Shape1()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_BooleanOperation*)nativeHandle)->Shape1();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepAlgo_BooleanOperation::Shape2()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_BooleanOperation*)nativeHandle)->Shape2();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_ListOfShape^ OCBRepAlgo_BooleanOperation::Modified(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepAlgo_BooleanOperation*)nativeHandle)->Modified(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

 System::Boolean OCBRepAlgo_BooleanOperation::IsDeleted(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgo_BooleanOperation*)nativeHandle)->IsDeleted(*((TopoDS_Shape*)S->Handle)));
}


