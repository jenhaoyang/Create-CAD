// File generated by CPPExt (Transient)
//
#ifndef _ShapeAnalysis_DataMapNodeOfDataMapOfShapeReal_OCWrappers_HeaderFile
#define _ShapeAnalysis_DataMapNodeOfDataMapOfShapeReal_OCWrappers_HeaderFile

// include the wrapped class
#include <ShapeAnalysis_DataMapNodeOfDataMapOfShapeReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCShapeAnalysis_DataMapOfShapeReal;
ref class OCShapeAnalysis_DataMapIteratorOfDataMapOfShapeReal;



public ref class OCShapeAnalysis_DataMapNodeOfDataMapOfShapeReal : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCShapeAnalysis_DataMapNodeOfDataMapOfShapeReal(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCShapeAnalysis_DataMapNodeOfDataMapOfShapeReal(Handle(ShapeAnalysis_DataMapNodeOfDataMapOfShapeReal)* nativeHandle);

// Methods PUBLIC


OCShapeAnalysis_DataMapNodeOfDataMapOfShapeReal(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Real I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  Standard_Real Value() ;

~OCShapeAnalysis_DataMapNodeOfDataMapOfShapeReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
