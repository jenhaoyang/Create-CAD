// File generated by CPPExt (MPV)
//
#ifndef _Draft_DataMapIteratorOfDataMapOfVertexVertexInfo_OCWrappers_HeaderFile
#define _Draft_DataMapIteratorOfDataMapOfVertexVertexInfo_OCWrappers_HeaderFile

// include native header
#include <Draft_DataMapIteratorOfDataMapOfVertexVertexInfo.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Vertex;
ref class OCDraft_VertexInfo;
ref class OCTopTools_ShapeMapHasher;
ref class OCDraft_DataMapOfVertexVertexInfo;
ref class OCDraft_DataMapNodeOfDataMapOfVertexVertexInfo;



public ref class OCDraft_DataMapIteratorOfDataMapOfVertexVertexInfo  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCDraft_DataMapIteratorOfDataMapOfVertexVertexInfo(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCDraft_DataMapIteratorOfDataMapOfVertexVertexInfo(Draft_DataMapIteratorOfDataMapOfVertexVertexInfo* nativeHandle);

// Methods PUBLIC


OCDraft_DataMapIteratorOfDataMapOfVertexVertexInfo();


OCDraft_DataMapIteratorOfDataMapOfVertexVertexInfo(OCNaroWrappers::OCDraft_DataMapOfVertexVertexInfo^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCDraft_DataMapOfVertexVertexInfo^ aMap) ;


 /*instead*/  OCTopoDS_Vertex^ Key() ;


 /*instead*/  OCDraft_VertexInfo^ Value() ;

~OCDraft_DataMapIteratorOfDataMapOfVertexVertexInfo()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
