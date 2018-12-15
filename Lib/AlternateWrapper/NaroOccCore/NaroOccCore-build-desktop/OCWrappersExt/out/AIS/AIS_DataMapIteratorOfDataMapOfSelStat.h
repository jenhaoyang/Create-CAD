// File generated by CPPExt (MPV)
//
#ifndef _AIS_DataMapIteratorOfDataMapOfSelStat_OCWrappers_HeaderFile
#define _AIS_DataMapIteratorOfDataMapOfSelStat_OCWrappers_HeaderFile

// include native header
#include <AIS_DataMapIteratorOfDataMapOfSelStat.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCSelectMgr_SelectableObject;
ref class OCAIS_LocalStatus;
ref class OCTColStd_MapTransientHasher;
ref class OCAIS_DataMapOfSelStat;
ref class OCAIS_DataMapNodeOfDataMapOfSelStat;



public ref class OCAIS_DataMapIteratorOfDataMapOfSelStat  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCAIS_DataMapIteratorOfDataMapOfSelStat(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_DataMapIteratorOfDataMapOfSelStat(AIS_DataMapIteratorOfDataMapOfSelStat* nativeHandle);

// Methods PUBLIC


OCAIS_DataMapIteratorOfDataMapOfSelStat();


OCAIS_DataMapIteratorOfDataMapOfSelStat(OCNaroWrappers::OCAIS_DataMapOfSelStat^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCAIS_DataMapOfSelStat^ aMap) ;


 /*instead*/  OCSelectMgr_SelectableObject^ Key() ;


 /*instead*/  OCAIS_LocalStatus^ Value() ;

~OCAIS_DataMapIteratorOfDataMapOfSelStat()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif