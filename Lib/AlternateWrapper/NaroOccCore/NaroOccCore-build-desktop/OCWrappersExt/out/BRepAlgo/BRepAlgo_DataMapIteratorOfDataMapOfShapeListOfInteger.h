// File generated by CPPExt (MPV)
//
#ifndef _BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger_OCWrappers_HeaderFile
#define _BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger_OCWrappers_HeaderFile

// include native header
#include <BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTColStd_ListOfInteger;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepAlgo_DataMapOfShapeListOfInteger;
ref class OCBRepAlgo_DataMapNodeOfDataMapOfShapeListOfInteger;



public ref class OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger(BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger* nativeHandle);

// Methods PUBLIC


OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger();


OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger(OCNaroWrappers::OCBRepAlgo_DataMapOfShapeListOfInteger^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepAlgo_DataMapOfShapeListOfInteger^ aMap) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCTColStd_ListOfInteger^ Value() ;

~OCBRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
