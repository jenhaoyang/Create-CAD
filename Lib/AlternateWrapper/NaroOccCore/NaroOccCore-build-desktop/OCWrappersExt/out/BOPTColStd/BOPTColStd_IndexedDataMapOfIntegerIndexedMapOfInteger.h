// File generated by CPPExt (MPV)
//
#ifndef _BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger_OCWrappers_HeaderFile
#define _BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger_OCWrappers_HeaderFile

// include native header
#include <BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTColStd_IndexedMapOfInteger;
ref class OCTColStd_MapIntegerHasher;
ref class OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger;



public ref class OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger(BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger* nativeHandle);

// Methods PUBLIC


OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger(Standard_Integer NbBuckets);


 /*instead*/  OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger^ Assign(OCNaroWrappers::OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(Standard_Integer K, OCNaroWrappers::OCTColStd_IndexedMapOfInteger^ I) ;


 /*instead*/  void Substitute(Standard_Integer I, Standard_Integer K, OCNaroWrappers::OCTColStd_IndexedMapOfInteger^ T) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(Standard_Integer K) ;


 /*instead*/  Standard_Integer FindKey(Standard_Integer I) ;


 /*instead*/  OCTColStd_IndexedMapOfInteger^ FindFromIndex(Standard_Integer I) ;


 /*instead*/  OCTColStd_IndexedMapOfInteger^ ChangeFromIndex(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(Standard_Integer K) ;


 /*instead*/  OCTColStd_IndexedMapOfInteger^ FindFromKey(Standard_Integer K) ;


 /*instead*/  OCTColStd_IndexedMapOfInteger^ ChangeFromKey(Standard_Integer K) ;


 /*instead*/  Standard_Address FindFromKey1(Standard_Integer K) ;


 /*instead*/  Standard_Address ChangeFromKey1(Standard_Integer K) ;

~OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
