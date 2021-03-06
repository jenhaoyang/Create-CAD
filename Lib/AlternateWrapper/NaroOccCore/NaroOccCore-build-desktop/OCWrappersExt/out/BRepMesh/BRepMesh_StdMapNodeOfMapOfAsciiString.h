// File generated by CPPExt (Transient)
//
#ifndef _BRepMesh_StdMapNodeOfMapOfAsciiString_OCWrappers_HeaderFile
#define _BRepMesh_StdMapNodeOfMapOfAsciiString_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepMesh_StdMapNodeOfMapOfAsciiString.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TCollection/TCollection_AsciiString.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;
ref class OCBRepMesh_MapOfAsciiString;
ref class OCBRepMesh_MapIteratorOfMapOfAsciiString;



public ref class OCBRepMesh_StdMapNodeOfMapOfAsciiString : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCBRepMesh_StdMapNodeOfMapOfAsciiString(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_StdMapNodeOfMapOfAsciiString(Handle(BRepMesh_StdMapNodeOfMapOfAsciiString)* nativeHandle);

// Methods PUBLIC


OCBRepMesh_StdMapNodeOfMapOfAsciiString(OCNaroWrappers::OCTCollection_AsciiString^ K, TCollection_MapNodePtr n);


 /*instead*/  OCTCollection_AsciiString^ Key() ;

~OCBRepMesh_StdMapNodeOfMapOfAsciiString()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
