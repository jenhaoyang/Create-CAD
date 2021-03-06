// File generated by CPPExt (MPV)
//
#ifndef _AIS_DataMapIteratorOfDataMapOfTransientTransient_OCWrappers_HeaderFile
#define _AIS_DataMapIteratorOfDataMapOfTransientTransient_OCWrappers_HeaderFile

// include native header
#include <AIS_DataMapIteratorOfDataMapOfTransientTransient.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTColStd_MapTransientHasher;
ref class OCAIS_DataMapOfTransientTransient;
ref class OCAIS_DataMapNodeOfDataMapOfTransientTransient;



public ref class OCAIS_DataMapIteratorOfDataMapOfTransientTransient  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCAIS_DataMapIteratorOfDataMapOfTransientTransient(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_DataMapIteratorOfDataMapOfTransientTransient(AIS_DataMapIteratorOfDataMapOfTransientTransient* nativeHandle);

// Methods PUBLIC


OCAIS_DataMapIteratorOfDataMapOfTransientTransient();


OCAIS_DataMapIteratorOfDataMapOfTransientTransient(OCNaroWrappers::OCAIS_DataMapOfTransientTransient^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCAIS_DataMapOfTransientTransient^ aMap) ;


 /*instead*/  OCStandard_Transient^ Key() ;


 /*instead*/  OCStandard_Transient^ Value() ;

~OCAIS_DataMapIteratorOfDataMapOfTransientTransient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
