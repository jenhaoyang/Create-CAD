// File generated by CPPExt (CPP file)
//

#include "BRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_SequenceOfShape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepOffsetAPI_DataMapOfShapeSequenceOfShape.h"
#include "BRepOffsetAPI_DataMapNodeOfDataMapOfShapeSequenceOfShape.h"


using namespace OCNaroWrappers;

OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape::OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape(BRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape::OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape();
}

OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape::OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape(OCNaroWrappers::OCBRepOffsetAPI_DataMapOfShapeSequenceOfShape^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape(*((BRepOffsetAPI_DataMapOfShapeSequenceOfShape*)aMap->Handle));
}

 void OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape::Initialize(OCNaroWrappers::OCBRepOffsetAPI_DataMapOfShapeSequenceOfShape^ aMap)
{
  ((BRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape*)nativeHandle)->Initialize(*((BRepOffsetAPI_DataMapOfShapeSequenceOfShape*)aMap->Handle));
}

OCTopoDS_Shape^ OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape*)nativeHandle)->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_SequenceOfShape^ OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape::Value()
{
  TopTools_SequenceOfShape* tmp = new TopTools_SequenceOfShape();
  *tmp = ((BRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape*)nativeHandle)->Value();
  return gcnew OCTopTools_SequenceOfShape(tmp);
}


