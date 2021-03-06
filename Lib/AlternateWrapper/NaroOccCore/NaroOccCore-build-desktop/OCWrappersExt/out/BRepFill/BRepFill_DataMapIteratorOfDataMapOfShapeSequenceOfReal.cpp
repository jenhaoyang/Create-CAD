// File generated by CPPExt (CPP file)
//

#include "BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepFill_DataMapOfShapeSequenceOfReal.h"
#include "BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfReal.h"


using namespace OCNaroWrappers;

OCBRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal::OCBRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal(BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal::OCBRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal();
}

OCBRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal::OCBRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal(OCNaroWrappers::OCBRepFill_DataMapOfShapeSequenceOfReal^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal(*((BRepFill_DataMapOfShapeSequenceOfReal*)aMap->Handle));
}

 void OCBRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal::Initialize(OCNaroWrappers::OCBRepFill_DataMapOfShapeSequenceOfReal^ aMap)
{
  ((BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal*)nativeHandle)->Initialize(*((BRepFill_DataMapOfShapeSequenceOfReal*)aMap->Handle));
}

OCTopoDS_Shape^ OCBRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal*)nativeHandle)->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTColStd_SequenceOfReal^ OCBRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal::Value()
{
  TColStd_SequenceOfReal* tmp = new TColStd_SequenceOfReal();
  *tmp = ((BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal*)nativeHandle)->Value();
  return gcnew OCTColStd_SequenceOfReal(tmp);
}


