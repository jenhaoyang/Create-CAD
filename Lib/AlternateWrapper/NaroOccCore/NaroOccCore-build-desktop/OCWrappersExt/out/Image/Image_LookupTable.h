// File generated by CPPExt (MPV)
//
#ifndef _Image_LookupTable_OCWrappers_HeaderFile
#define _Image_LookupTable_OCWrappers_HeaderFile

// include native header
#include <Image_LookupTable.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCAspect_IndexPixel;
ref class OCImage_IndexPixelMapHasher;
ref class OCImage_DataMapNodeOfLookupTable;
ref class OCImage_DataMapIteratorOfLookupTable;



public ref class OCImage_LookupTable  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCImage_LookupTable(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCImage_LookupTable(Image_LookupTable* nativeHandle);

// Methods PUBLIC


OCImage_LookupTable(Standard_Integer NbBuckets);


 /*instead*/  OCImage_LookupTable^ Assign(OCNaroWrappers::OCImage_LookupTable^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCAspect_IndexPixel^ K, OCNaroWrappers::OCAspect_IndexPixel^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCAspect_IndexPixel^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCAspect_IndexPixel^ K) ;


 /*instead*/  OCAspect_IndexPixel^ Find(OCNaroWrappers::OCAspect_IndexPixel^ K) ;


 /*instead*/  OCAspect_IndexPixel^ ChangeFind(OCNaroWrappers::OCAspect_IndexPixel^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCAspect_IndexPixel^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCAspect_IndexPixel^ K) ;

~OCImage_LookupTable()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
