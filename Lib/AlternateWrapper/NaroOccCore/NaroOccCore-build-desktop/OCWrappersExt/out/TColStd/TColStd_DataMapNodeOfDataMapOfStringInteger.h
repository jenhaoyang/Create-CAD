// File generated by CPPExt (Transient)
//
#ifndef _TColStd_DataMapNodeOfDataMapOfStringInteger_OCWrappers_HeaderFile
#define _TColStd_DataMapNodeOfDataMapOfStringInteger_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_DataMapNodeOfDataMapOfStringInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TCollection/TCollection_ExtendedString.h"


namespace OCNaroWrappers
{

ref class OCTCollection_ExtendedString;
ref class OCTColStd_DataMapOfStringInteger;
ref class OCTColStd_DataMapIteratorOfDataMapOfStringInteger;



public ref class OCTColStd_DataMapNodeOfDataMapOfStringInteger : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTColStd_DataMapNodeOfDataMapOfStringInteger(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_DataMapNodeOfDataMapOfStringInteger(Handle(TColStd_DataMapNodeOfDataMapOfStringInteger)* nativeHandle);

// Methods PUBLIC


OCTColStd_DataMapNodeOfDataMapOfStringInteger(OCNaroWrappers::OCTCollection_ExtendedString^ K, Standard_Integer I, TCollection_MapNodePtr n);


 /*instead*/  OCTCollection_ExtendedString^ Key() ;


 /*instead*/  Standard_Integer Value() ;

~OCTColStd_DataMapNodeOfDataMapOfStringInteger()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
