// File generated by CPPExt (MPV)
//
#ifndef _CDM_MapIteratorOfMapOfDocument_OCWrappers_HeaderFile
#define _CDM_MapIteratorOfMapOfDocument_OCWrappers_HeaderFile

// include native header
#include <CDM_MapIteratorOfMapOfDocument.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCCDM_Document;
ref class OCCDM_DocumentHasher;
ref class OCCDM_MapOfDocument;
ref class OCCDM_StdMapNodeOfMapOfDocument;



public ref class OCCDM_MapIteratorOfMapOfDocument  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCCDM_MapIteratorOfMapOfDocument(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCCDM_MapIteratorOfMapOfDocument(CDM_MapIteratorOfMapOfDocument* nativeHandle);

// Methods PUBLIC


OCCDM_MapIteratorOfMapOfDocument();


OCCDM_MapIteratorOfMapOfDocument(OCNaroWrappers::OCCDM_MapOfDocument^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCCDM_MapOfDocument^ aMap) ;


 /*instead*/  OCCDM_Document^ Key() ;

~OCCDM_MapIteratorOfMapOfDocument()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
