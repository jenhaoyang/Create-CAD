// File generated by CPPExt (MPV)
//
#ifndef _Interface_DataMapOfTransientInteger_OCWrappers_HeaderFile
#define _Interface_DataMapOfTransientInteger_OCWrappers_HeaderFile

// include native header
#include <Interface_DataMapOfTransientInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTColStd_MapTransientHasher;
ref class OCInterface_DataMapNodeOfDataMapOfTransientInteger;
ref class OCInterface_DataMapIteratorOfDataMapOfTransientInteger;



public ref class OCInterface_DataMapOfTransientInteger  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCInterface_DataMapOfTransientInteger(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCInterface_DataMapOfTransientInteger(Interface_DataMapOfTransientInteger* nativeHandle);

// Methods PUBLIC


OCInterface_DataMapOfTransientInteger(Standard_Integer NbBuckets);


 /*instead*/  OCInterface_DataMapOfTransientInteger^ Assign(OCNaroWrappers::OCInterface_DataMapOfTransientInteger^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCStandard_Transient^ K, Standard_Integer I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCStandard_Transient^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCStandard_Transient^ K) ;


 /*instead*/  Standard_Integer Find(OCNaroWrappers::OCStandard_Transient^ K) ;


 /*instead*/  Standard_Integer ChangeFind(OCNaroWrappers::OCStandard_Transient^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCStandard_Transient^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCStandard_Transient^ K) ;

~OCInterface_DataMapOfTransientInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
