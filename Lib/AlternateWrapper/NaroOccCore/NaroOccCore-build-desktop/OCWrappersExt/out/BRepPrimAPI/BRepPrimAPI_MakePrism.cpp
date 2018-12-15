// File generated by CPPExt (CPP file)
//

#include "BRepPrimAPI_MakePrism.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Dir.h"
#include "../BRepSweep/BRepSweep_Prism.h"
#include "../TopTools/TopTools_ListOfShape.h"


using namespace OCNaroWrappers;

OCBRepPrimAPI_MakePrism::OCBRepPrimAPI_MakePrism(BRepPrimAPI_MakePrism* nativeHandle) : OCBRepPrimAPI_MakeSweep((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepPrimAPI_MakePrism::OCBRepPrimAPI_MakePrism(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Vec^ V, System::Boolean Copy, System::Boolean Canonize) : OCBRepPrimAPI_MakeSweep((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakePrism(*((TopoDS_Shape*)S->Handle), *((gp_Vec*)V->Handle), OCConverter::BooleanToStandardBoolean(Copy), OCConverter::BooleanToStandardBoolean(Canonize));
}

OCBRepPrimAPI_MakePrism::OCBRepPrimAPI_MakePrism(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Dir^ D, System::Boolean Inf, System::Boolean Copy, System::Boolean Canonize) : OCBRepPrimAPI_MakeSweep((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakePrism(*((TopoDS_Shape*)S->Handle), *((gp_Dir*)D->Handle), OCConverter::BooleanToStandardBoolean(Inf), OCConverter::BooleanToStandardBoolean(Copy), OCConverter::BooleanToStandardBoolean(Canonize));
}

OCBRepSweep_Prism^ OCBRepPrimAPI_MakePrism::Prism()
{
  BRepSweep_Prism* tmp = new BRepSweep_Prism(123abc, 123abc, 0, 0);
  *tmp = ((BRepPrimAPI_MakePrism*)nativeHandle)->Prism();
  return gcnew OCBRepSweep_Prism(tmp);
}

 void OCBRepPrimAPI_MakePrism::Build()
{
  ((BRepPrimAPI_MakePrism*)nativeHandle)->Build();
}

OCTopoDS_Shape^ OCBRepPrimAPI_MakePrism::FirstShape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepPrimAPI_MakePrism*)nativeHandle)->FirstShape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepPrimAPI_MakePrism::LastShape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepPrimAPI_MakePrism*)nativeHandle)->LastShape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_ListOfShape^ OCBRepPrimAPI_MakePrism::Generated(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepPrimAPI_MakePrism*)nativeHandle)->Generated(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopoDS_Shape^ OCBRepPrimAPI_MakePrism::FirstShape(OCNaroWrappers::OCTopoDS_Shape^ theShape)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepPrimAPI_MakePrism*)nativeHandle)->FirstShape(*((TopoDS_Shape*)theShape->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepPrimAPI_MakePrism::LastShape(OCNaroWrappers::OCTopoDS_Shape^ theShape)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepPrimAPI_MakePrism*)nativeHandle)->LastShape(*((TopoDS_Shape*)theShape->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}


