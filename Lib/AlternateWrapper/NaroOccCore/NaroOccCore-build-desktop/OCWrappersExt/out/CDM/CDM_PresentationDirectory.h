// File generated by CPPExt (MPV)
//
#ifndef _CDM_PresentationDirectory_OCWrappers_HeaderFile
#define _CDM_PresentationDirectory_OCWrappers_HeaderFile

// include native header
#include <CDM_PresentationDirectory.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTCollection_ExtendedString;
ref class OCCDM_Document;
ref class OCCDM_DataMapNodeOfPresentationDirectory;
ref class OCCDM_DataMapIteratorOfPresentationDirectory;



public ref class OCCDM_PresentationDirectory  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCCDM_PresentationDirectory(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCCDM_PresentationDirectory(CDM_PresentationDirectory* nativeHandle);

// Methods PUBLIC


OCCDM_PresentationDirectory(Standard_Integer NbBuckets);


 /*instead*/  OCCDM_PresentationDirectory^ Assign(OCNaroWrappers::OCCDM_PresentationDirectory^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTCollection_ExtendedString^ K, OCNaroWrappers::OCCDM_Document^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;


 /*instead*/  OCCDM_Document^ Find(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;


 /*instead*/  OCCDM_Document^ ChangeFind(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;

~OCCDM_PresentationDirectory()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
