// File generated by CPPExt (Transient)
//
#ifndef _TopTools_ListNodeOfListOfShape_OCWrappers_HeaderFile
#define _TopTools_ListNodeOfListOfShape_OCWrappers_HeaderFile

// include the wrapped class
#include <TopTools_ListNodeOfListOfShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ListOfShape;
ref class OCTopTools_ListIteratorOfListOfShape;



public ref class OCTopTools_ListNodeOfListOfShape : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTopTools_ListNodeOfListOfShape(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopTools_ListNodeOfListOfShape(Handle(TopTools_ListNodeOfListOfShape)* nativeHandle);

// Methods PUBLIC


OCTopTools_ListNodeOfListOfShape(OCNaroWrappers::OCTopoDS_Shape^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Shape^ Value() ;

~OCTopTools_ListNodeOfListOfShape()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
