// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY_OCWrappers_HeaderFile
#define _BRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCBRepMesh_ListOfXY;
ref class OCTColStd_MapIntegerHasher;
ref class OCBRepMesh_DataMapOfIntegerListOfXY;
ref class OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY;



public ref class OCBRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY(BRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY();


OCBRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY(OCNaroWrappers::OCBRepMesh_DataMapOfIntegerListOfXY^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepMesh_DataMapOfIntegerListOfXY^ aMap) ;


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCBRepMesh_ListOfXY^ Value() ;

~OCBRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
