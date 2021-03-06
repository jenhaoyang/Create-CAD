// File generated by CPPExt (Transient)
//
#ifndef _TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity_OCWrappers_HeaderFile
#define _TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity_OCWrappers_HeaderFile

// include the wrapped class
#include <TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"
#include "TopOpeBRepTool_connexity.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopOpeBRepTool_connexity;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopOpeBRepTool_IndexedDataMapOfShapeconnexity;



public ref class OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity(Handle(TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity)* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity(OCNaroWrappers::OCTopoDS_Shape^ K1, Standard_Integer K2, OCNaroWrappers::OCTopOpeBRepTool_connexity^ I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2);


 /*instead*/  OCTopoDS_Shape^ Key1() ;


 /*instead*/  Standard_Integer Key2() ;


 /*instead*/  TCollection_MapNodePtr& Next2() ;


 /*instead*/  OCTopOpeBRepTool_connexity^ Value() ;

~OCTopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
