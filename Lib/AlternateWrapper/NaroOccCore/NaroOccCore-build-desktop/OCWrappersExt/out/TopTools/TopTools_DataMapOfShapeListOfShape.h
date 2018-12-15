// File generated by CPPExt (MPV)
//
#ifndef _TopTools_DataMapOfShapeListOfShape_OCWrappers_HeaderFile
#define _TopTools_DataMapOfShapeListOfShape_OCWrappers_HeaderFile

// include native header
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ListOfShape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopTools_DataMapNodeOfDataMapOfShapeListOfShape;
ref class OCTopTools_DataMapIteratorOfDataMapOfShapeListOfShape;



public ref class OCTopTools_DataMapOfShapeListOfShape  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTopTools_DataMapOfShapeListOfShape(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopTools_DataMapOfShapeListOfShape(TopTools_DataMapOfShapeListOfShape* nativeHandle);

// Methods PUBLIC


OCTopTools_DataMapOfShapeListOfShape(Standard_Integer NbBuckets);


 /*instead*/  OCTopTools_DataMapOfShapeListOfShape^ Assign(OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopTools_ListOfShape^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopTools_ListOfShape^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopTools_ListOfShape^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCTopTools_DataMapOfShapeListOfShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
