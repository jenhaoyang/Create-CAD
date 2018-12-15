// File generated by CPPExt (Transient)
//
#ifndef _PTColStd_DataMapNodeOfPersistentTransientMap_OCWrappers_HeaderFile
#define _PTColStd_DataMapNodeOfPersistentTransientMap_OCWrappers_HeaderFile

// include the wrapped class
#include <PTColStd_DataMapNodeOfPersistentTransientMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCStandard_Persistent;
ref class OCStandard_Transient;
ref class OCPTColStd_MapPersistentHasher;
ref class OCPTColStd_PersistentTransientMap;
ref class OCPTColStd_DataMapIteratorOfPersistentTransientMap;



public ref class OCPTColStd_DataMapNodeOfPersistentTransientMap : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCPTColStd_DataMapNodeOfPersistentTransientMap(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCPTColStd_DataMapNodeOfPersistentTransientMap(Handle(PTColStd_DataMapNodeOfPersistentTransientMap)* nativeHandle);

// Methods PUBLIC


OCPTColStd_DataMapNodeOfPersistentTransientMap(OCNaroWrappers::OCStandard_Persistent^ K, OCNaroWrappers::OCStandard_Transient^ I, TCollection_MapNodePtr n);


 /*instead*/  OCStandard_Persistent^ Key() ;


 /*instead*/  OCStandard_Transient^ Value() ;

~OCPTColStd_DataMapNodeOfPersistentTransientMap()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
