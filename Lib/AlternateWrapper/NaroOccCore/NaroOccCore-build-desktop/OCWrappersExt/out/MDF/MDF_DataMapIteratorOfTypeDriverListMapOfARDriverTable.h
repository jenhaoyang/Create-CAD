// File generated by CPPExt (MPV)
//
#ifndef _MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable_OCWrappers_HeaderFile
#define _MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable_OCWrappers_HeaderFile

// include native header
#include <MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCStandard_Type;
ref class OCMDF_DriverListOfARDriverTable;
ref class OCTColStd_MapTransientHasher;
ref class OCMDF_TypeDriverListMapOfARDriverTable;
ref class OCMDF_DataMapNodeOfTypeDriverListMapOfARDriverTable;



public ref class OCMDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCMDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCMDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable(MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable* nativeHandle);

// Methods PUBLIC


OCMDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable();


OCMDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable(OCNaroWrappers::OCMDF_TypeDriverListMapOfARDriverTable^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCMDF_TypeDriverListMapOfARDriverTable^ aMap) ;


 /*instead*/  OCStandard_Type^ Key() ;


 /*instead*/  OCMDF_DriverListOfARDriverTable^ Value() ;

~OCMDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
