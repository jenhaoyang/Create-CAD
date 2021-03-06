// File generated by CPPExt (MPV)
//
#ifndef _BooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors_OCWrappers_HeaderFile
#define _BooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors_OCWrappers_HeaderFile

// include native header
#include <BooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBooleanOperations_AncestorsSeqAndSuccessorsSeq;
ref class OCTopTools_ShapeMapHasher;
ref class OCBooleanOperations_IndexedDataMapNodeOfIndexedDataMapOfShapeAncestorsSuccessors;



public ref class OCBooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors(BooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors* nativeHandle);

// Methods PUBLIC


OCBooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors(Standard_Integer NbBuckets);


 /*instead*/  OCBooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors^ Assign(OCNaroWrappers::OCBooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBooleanOperations_AncestorsSeqAndSuccessorsSeq^ I) ;


 /*instead*/  void Substitute(Standard_Integer I, OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBooleanOperations_AncestorsSeqAndSuccessorsSeq^ T) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopoDS_Shape^ FindKey(Standard_Integer I) ;


 /*instead*/  OCBooleanOperations_AncestorsSeqAndSuccessorsSeq^ FindFromIndex(Standard_Integer I) ;


 /*instead*/  OCBooleanOperations_AncestorsSeqAndSuccessorsSeq^ ChangeFromIndex(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBooleanOperations_AncestorsSeqAndSuccessorsSeq^ FindFromKey(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBooleanOperations_AncestorsSeqAndSuccessorsSeq^ ChangeFromKey(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address FindFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCBooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
