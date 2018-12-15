// File generated by CPPExt (CPP file)
//

#include "BRepAlgoAPI_BooleanOperation.h"
#include "../Converter.h"
#include "../BOP/BOP_HistoryCollector.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../BOPTools/BOPTools_DSFiller.h"
#include "../TopTools/TopTools_ListOfShape.h"


using namespace OCNaroWrappers;

OCBRepAlgoAPI_BooleanOperation::OCBRepAlgoAPI_BooleanOperation(BRepAlgoAPI_BooleanOperation* nativeHandle) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepAlgoAPI_BooleanOperation::OCBRepAlgoAPI_BooleanOperation(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCBOP_Operation anOperation) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{}

OCBRepAlgoAPI_BooleanOperation::OCBRepAlgoAPI_BooleanOperation(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCBOPTools_DSFiller^ aDSF, OCBOP_Operation anOperation) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{}

 void OCBRepAlgoAPI_BooleanOperation::SetOperation(OCBOP_Operation anOp)
{
  ((BRepAlgoAPI_BooleanOperation*)nativeHandle)->SetOperation((BOP_Operation)anOp);
}

 void OCBRepAlgoAPI_BooleanOperation::Build()
{
  ((BRepAlgoAPI_BooleanOperation*)nativeHandle)->Build();
}

OCTopoDS_Shape^ OCBRepAlgoAPI_BooleanOperation::Shape1()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgoAPI_BooleanOperation*)nativeHandle)->Shape1();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepAlgoAPI_BooleanOperation::Shape2()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgoAPI_BooleanOperation*)nativeHandle)->Shape2();
  return gcnew OCTopoDS_Shape(tmp);
}

 OCBOP_Operation OCBRepAlgoAPI_BooleanOperation::Operation()
{
  return (OCBOP_Operation)(((BRepAlgoAPI_BooleanOperation*)nativeHandle)->Operation());
}

 System::Boolean OCBRepAlgoAPI_BooleanOperation::FuseEdges()
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgoAPI_BooleanOperation*)nativeHandle)->FuseEdges());
}

 void OCBRepAlgoAPI_BooleanOperation::RefineEdges()
{
  ((BRepAlgoAPI_BooleanOperation*)nativeHandle)->RefineEdges();
}

 System::Boolean OCBRepAlgoAPI_BooleanOperation::BuilderCanWork()
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgoAPI_BooleanOperation*)nativeHandle)->BuilderCanWork());
}

 Standard_Integer OCBRepAlgoAPI_BooleanOperation::ErrorStatus()
{
  return ((BRepAlgoAPI_BooleanOperation*)nativeHandle)->ErrorStatus();
}

OCTopTools_ListOfShape^ OCBRepAlgoAPI_BooleanOperation::Modified(OCNaroWrappers::OCTopoDS_Shape^ aS)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepAlgoAPI_BooleanOperation*)nativeHandle)->Modified(*((TopoDS_Shape*)aS->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

 System::Boolean OCBRepAlgoAPI_BooleanOperation::IsDeleted(OCNaroWrappers::OCTopoDS_Shape^ aS)
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgoAPI_BooleanOperation*)nativeHandle)->IsDeleted(*((TopoDS_Shape*)aS->Handle)));
}

OCTopTools_ListOfShape^ OCBRepAlgoAPI_BooleanOperation::Modified2(OCNaroWrappers::OCTopoDS_Shape^ aS)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepAlgoAPI_BooleanOperation*)nativeHandle)->Modified2(*((TopoDS_Shape*)aS->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopTools_ListOfShape^ OCBRepAlgoAPI_BooleanOperation::Generated(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepAlgoAPI_BooleanOperation*)nativeHandle)->Generated(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

 System::Boolean OCBRepAlgoAPI_BooleanOperation::HasModified()
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgoAPI_BooleanOperation*)nativeHandle)->HasModified());
}

 System::Boolean OCBRepAlgoAPI_BooleanOperation::HasGenerated()
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgoAPI_BooleanOperation*)nativeHandle)->HasGenerated());
}

 System::Boolean OCBRepAlgoAPI_BooleanOperation::HasDeleted()
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgoAPI_BooleanOperation*)nativeHandle)->HasDeleted());
}

 void OCBRepAlgoAPI_BooleanOperation::Destroy()
{
  ((BRepAlgoAPI_BooleanOperation*)nativeHandle)->Destroy();
}

OCTopTools_ListOfShape^ OCBRepAlgoAPI_BooleanOperation::SectionEdges()
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepAlgoAPI_BooleanOperation*)nativeHandle)->SectionEdges();
  return gcnew OCTopTools_ListOfShape(tmp);
}

