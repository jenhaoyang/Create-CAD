// File generated by CPPExt (MPV)
//
#ifndef _TNaming_DataMapIteratorOfDataMapOfShapeShapesSet_OCWrappers_HeaderFile
#define _TNaming_DataMapIteratorOfDataMapOfShapeShapesSet_OCWrappers_HeaderFile

// include native header
#include <TNaming_DataMapIteratorOfDataMapOfShapeShapesSet.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTNaming_ShapesSet;
ref class OCTopTools_ShapeMapHasher;
ref class OCTNaming_DataMapOfShapeShapesSet;
ref class OCTNaming_DataMapNodeOfDataMapOfShapeShapesSet;



public ref class OCTNaming_DataMapIteratorOfDataMapOfShapeShapesSet  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTNaming_DataMapIteratorOfDataMapOfShapeShapesSet(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTNaming_DataMapIteratorOfDataMapOfShapeShapesSet(TNaming_DataMapIteratorOfDataMapOfShapeShapesSet* nativeHandle);

// Methods PUBLIC


OCTNaming_DataMapIteratorOfDataMapOfShapeShapesSet();


OCTNaming_DataMapIteratorOfDataMapOfShapeShapesSet(OCNaroWrappers::OCTNaming_DataMapOfShapeShapesSet^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTNaming_DataMapOfShapeShapesSet^ aMap) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCTNaming_ShapesSet^ Value() ;

~OCTNaming_DataMapIteratorOfDataMapOfShapeShapesSet()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
