// File generated by CPPExt (MPV)
//
#ifndef _TColStd_IndexedMapOfInteger_OCWrappers_HeaderFile
#define _TColStd_IndexedMapOfInteger_OCWrappers_HeaderFile

// include native header
#include <TColStd_IndexedMapOfInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTColStd_MapIntegerHasher;
ref class OCTColStd_IndexedMapNodeOfIndexedMapOfInteger;



public ref class OCTColStd_IndexedMapOfInteger  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTColStd_IndexedMapOfInteger(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_IndexedMapOfInteger(TColStd_IndexedMapOfInteger* nativeHandle);

// Methods PUBLIC


OCTColStd_IndexedMapOfInteger(Standard_Integer NbBuckets);


 /*instead*/  OCTColStd_IndexedMapOfInteger^ Assign(OCNaroWrappers::OCTColStd_IndexedMapOfInteger^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(Standard_Integer K) ;


 /*instead*/  void Substitute(Standard_Integer I, Standard_Integer K) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(Standard_Integer K) ;


 /*instead*/  Standard_Integer FindKey(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(Standard_Integer K) ;

~OCTColStd_IndexedMapOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
