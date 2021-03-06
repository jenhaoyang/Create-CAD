// File generated by CPPExt (CPP file)
//

#include "TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TColStd/TColStd_ListOfInteger.h"
#include "TopTools_ShapeMapHasher.h"
#include "TopTools_DataMapOfShapeListOfInteger.h"
#include "TopTools_DataMapNodeOfDataMapOfShapeListOfInteger.h"


using namespace OCNaroWrappers;

OCTopTools_DataMapIteratorOfDataMapOfShapeListOfInteger::OCTopTools_DataMapIteratorOfDataMapOfShapeListOfInteger(TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopTools_DataMapIteratorOfDataMapOfShapeListOfInteger::OCTopTools_DataMapIteratorOfDataMapOfShapeListOfInteger() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger();
}

OCTopTools_DataMapIteratorOfDataMapOfShapeListOfInteger::OCTopTools_DataMapIteratorOfDataMapOfShapeListOfInteger(OCNaroWrappers::OCTopTools_DataMapOfShapeListOfInteger^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger(*((TopTools_DataMapOfShapeListOfInteger*)aMap->Handle));
}

 void OCTopTools_DataMapIteratorOfDataMapOfShapeListOfInteger::Initialize(OCNaroWrappers::OCTopTools_DataMapOfShapeListOfInteger^ aMap)
{
  ((TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger*)nativeHandle)->Initialize(*((TopTools_DataMapOfShapeListOfInteger*)aMap->Handle));
}

OCTopoDS_Shape^ OCTopTools_DataMapIteratorOfDataMapOfShapeListOfInteger::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger*)nativeHandle)->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTColStd_ListOfInteger^ OCTopTools_DataMapIteratorOfDataMapOfShapeListOfInteger::Value()
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = ((TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger*)nativeHandle)->Value();
  return gcnew OCTColStd_ListOfInteger(tmp);
}


