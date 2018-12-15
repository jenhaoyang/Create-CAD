// File generated by CPPExt (MPV)
//
#ifndef _BRepClass3d_DataMapIteratorOfMapOfInter_OCWrappers_HeaderFile
#define _BRepClass3d_DataMapIteratorOfMapOfInter_OCWrappers_HeaderFile

// include native header
#include <BRepClass3d_DataMapIteratorOfMapOfInter.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepClass3d_MapOfInter;
ref class OCBRepClass3d_DataMapNodeOfMapOfInter;



public ref class OCBRepClass3d_DataMapIteratorOfMapOfInter  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCBRepClass3d_DataMapIteratorOfMapOfInter(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepClass3d_DataMapIteratorOfMapOfInter(BRepClass3d_DataMapIteratorOfMapOfInter* nativeHandle);

// Methods PUBLIC


OCBRepClass3d_DataMapIteratorOfMapOfInter();


OCBRepClass3d_DataMapIteratorOfMapOfInter(OCNaroWrappers::OCBRepClass3d_MapOfInter^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepClass3d_MapOfInter^ aMap) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  Standard_Address Value() ;

~OCBRepClass3d_DataMapIteratorOfMapOfInter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
