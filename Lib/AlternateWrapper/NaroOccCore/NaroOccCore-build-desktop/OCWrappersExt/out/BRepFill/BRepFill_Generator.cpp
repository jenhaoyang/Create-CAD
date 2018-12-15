// File generated by CPPExt (CPP file)
//

#include "BRepFill_Generator.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Wire.h"
#include "../TopoDS/TopoDS_Shell.h"
#include "../TopTools/TopTools_DataMapOfShapeListOfShape.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBRepFill_Generator::OCBRepFill_Generator(BRepFill_Generator* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepFill_Generator::OCBRepFill_Generator() 
{
  nativeHandle = new BRepFill_Generator();
}

 void OCBRepFill_Generator::AddWire(OCNaroWrappers::OCTopoDS_Wire^ Wire)
{
  ((BRepFill_Generator*)nativeHandle)->AddWire(*((TopoDS_Wire*)Wire->Handle));
}

 void OCBRepFill_Generator::Perform()
{
  ((BRepFill_Generator*)nativeHandle)->Perform();
}

OCTopoDS_Shell^ OCBRepFill_Generator::Shell()
{
  TopoDS_Shell* tmp = new TopoDS_Shell();
  *tmp = ((BRepFill_Generator*)nativeHandle)->Shell();
  return gcnew OCTopoDS_Shell(tmp);
}

OCTopTools_DataMapOfShapeListOfShape^ OCBRepFill_Generator::Generated()
{
  TopTools_DataMapOfShapeListOfShape* tmp = new TopTools_DataMapOfShapeListOfShape(0);
  *tmp = ((BRepFill_Generator*)nativeHandle)->Generated();
  return gcnew OCTopTools_DataMapOfShapeListOfShape(tmp);
}

OCTopTools_ListOfShape^ OCBRepFill_Generator::GeneratedShapes(OCNaroWrappers::OCTopoDS_Shape^ SSection)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepFill_Generator*)nativeHandle)->GeneratedShapes(*((TopoDS_Shape*)SSection->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}


