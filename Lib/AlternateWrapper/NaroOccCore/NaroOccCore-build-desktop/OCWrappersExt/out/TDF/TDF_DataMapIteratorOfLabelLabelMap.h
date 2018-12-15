// File generated by CPPExt (MPV)
//
#ifndef _TDF_DataMapIteratorOfLabelLabelMap_OCWrappers_HeaderFile
#define _TDF_DataMapIteratorOfLabelLabelMap_OCWrappers_HeaderFile

// include native header
#include <TDF_DataMapIteratorOfLabelLabelMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTDF_LabelMapHasher;
ref class OCTDF_LabelLabelMap;
ref class OCTDF_DataMapNodeOfLabelLabelMap;



public ref class OCTDF_DataMapIteratorOfLabelLabelMap  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTDF_DataMapIteratorOfLabelLabelMap(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_DataMapIteratorOfLabelLabelMap(TDF_DataMapIteratorOfLabelLabelMap* nativeHandle);

// Methods PUBLIC


OCTDF_DataMapIteratorOfLabelLabelMap();


OCTDF_DataMapIteratorOfLabelLabelMap(OCNaroWrappers::OCTDF_LabelLabelMap^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTDF_LabelLabelMap^ aMap) ;


 /*instead*/  OCTDF_Label^ Key() ;


 /*instead*/  OCTDF_Label^ Value() ;

~OCTDF_DataMapIteratorOfLabelLabelMap()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
