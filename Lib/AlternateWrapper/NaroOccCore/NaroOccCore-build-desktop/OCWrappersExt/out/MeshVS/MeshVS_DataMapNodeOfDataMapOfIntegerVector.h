// File generated by CPPExt (Transient)
//
#ifndef _MeshVS_DataMapNodeOfDataMapOfIntegerVector_OCWrappers_HeaderFile
#define _MeshVS_DataMapNodeOfDataMapOfIntegerVector_OCWrappers_HeaderFile

// include the wrapped class
#include <MeshVS_DataMapNodeOfDataMapOfIntegerVector.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../gp/gp_Vec.h"


namespace OCNaroWrappers
{

ref class OCgp_Vec;
ref class OCTColStd_MapIntegerHasher;
ref class OCMeshVS_DataMapOfIntegerVector;
ref class OCMeshVS_DataMapIteratorOfDataMapOfIntegerVector;



public ref class OCMeshVS_DataMapNodeOfDataMapOfIntegerVector : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCMeshVS_DataMapNodeOfDataMapOfIntegerVector(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_DataMapNodeOfDataMapOfIntegerVector(Handle(MeshVS_DataMapNodeOfDataMapOfIntegerVector)* nativeHandle);

// Methods PUBLIC


OCMeshVS_DataMapNodeOfDataMapOfIntegerVector(Standard_Integer K, OCNaroWrappers::OCgp_Vec^ I, TCollection_MapNodePtr n);


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCgp_Vec^ Value() ;

~OCMeshVS_DataMapNodeOfDataMapOfIntegerVector()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
