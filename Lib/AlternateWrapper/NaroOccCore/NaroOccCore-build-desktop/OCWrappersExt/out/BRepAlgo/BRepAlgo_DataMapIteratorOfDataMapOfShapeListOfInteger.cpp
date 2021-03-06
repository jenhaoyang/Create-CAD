// File generated by CPPExt (CPP file)
//

#include "BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TColStd/TColStd_ListOfInteger.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepAlgo_DataMapOfShapeListOfInteger.h"
#include "BRepAlgo_DataMapNodeOfDataMapOfShapeListOfInteger.h"


using namespace OCNaroWrappers;

OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger::OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger(BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger::OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger();
}

OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger::OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger(OCNaroWrappers::OCBRepAlgo_DataMapOfShapeListOfInteger^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger(*((BRepAlgo_DataMapOfShapeListOfInteger*)aMap->Handle));
}

 void OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger::Initialize(OCNaroWrappers::OCBRepAlgo_DataMapOfShapeListOfInteger^ aMap)
{
  ((BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger*)nativeHandle)->Initialize(*((BRepAlgo_DataMapOfShapeListOfInteger*)aMap->Handle));
}

OCTopoDS_Shape^ OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger*)nativeHandle)->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTColStd_ListOfInteger^ OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger::Value()
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = ((BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger*)nativeHandle)->Value();
  return gcnew OCTColStd_ListOfInteger(tmp);
}


