// File generated by CPPExt (MPV)
//
#ifndef _AIS_DataMapIteratorOfDataMapOfILC_OCWrappers_HeaderFile
#define _AIS_DataMapIteratorOfDataMapOfILC_OCWrappers_HeaderFile

// include native header
#include <AIS_DataMapIteratorOfDataMapOfILC.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCAIS_LocalContext;
ref class OCTColStd_MapIntegerHasher;
ref class OCAIS_DataMapOfILC;
ref class OCAIS_DataMapNodeOfDataMapOfILC;



public ref class OCAIS_DataMapIteratorOfDataMapOfILC  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCAIS_DataMapIteratorOfDataMapOfILC(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_DataMapIteratorOfDataMapOfILC(AIS_DataMapIteratorOfDataMapOfILC* nativeHandle);

// Methods PUBLIC


OCAIS_DataMapIteratorOfDataMapOfILC();


OCAIS_DataMapIteratorOfDataMapOfILC(OCNaroWrappers::OCAIS_DataMapOfILC^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCAIS_DataMapOfILC^ aMap) ;


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCAIS_LocalContext^ Value() ;

~OCAIS_DataMapIteratorOfDataMapOfILC()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
