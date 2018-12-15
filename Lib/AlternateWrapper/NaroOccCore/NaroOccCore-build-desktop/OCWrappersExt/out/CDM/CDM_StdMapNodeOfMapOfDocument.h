// File generated by CPPExt (Transient)
//
#ifndef _CDM_StdMapNodeOfMapOfDocument_OCWrappers_HeaderFile
#define _CDM_StdMapNodeOfMapOfDocument_OCWrappers_HeaderFile

// include the wrapped class
#include <CDM_StdMapNodeOfMapOfDocument.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCCDM_Document;
ref class OCCDM_DocumentHasher;
ref class OCCDM_MapOfDocument;
ref class OCCDM_MapIteratorOfMapOfDocument;



public ref class OCCDM_StdMapNodeOfMapOfDocument : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCCDM_StdMapNodeOfMapOfDocument(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCCDM_StdMapNodeOfMapOfDocument(Handle(CDM_StdMapNodeOfMapOfDocument)* nativeHandle);

// Methods PUBLIC


OCCDM_StdMapNodeOfMapOfDocument(OCNaroWrappers::OCCDM_Document^ K, TCollection_MapNodePtr n);


 /*instead*/  OCCDM_Document^ Key() ;

~OCCDM_StdMapNodeOfMapOfDocument()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
