// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_DataMapNodeOfDataMapOfStringByte_OCWrappers_HeaderFile
#define _TDataStd_DataMapNodeOfDataMapOfStringByte_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_DataMapNodeOfDataMapOfStringByte.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TCollection/TCollection_ExtendedString.h"


namespace OCNaroWrappers
{

ref class OCTCollection_ExtendedString;
ref class OCTDataStd_DataMapOfStringByte;
ref class OCTDataStd_DataMapIteratorOfDataMapOfStringByte;



public ref class OCTDataStd_DataMapNodeOfDataMapOfStringByte : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTDataStd_DataMapNodeOfDataMapOfStringByte(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_DataMapNodeOfDataMapOfStringByte(Handle(TDataStd_DataMapNodeOfDataMapOfStringByte)* nativeHandle);

// Methods PUBLIC


OCTDataStd_DataMapNodeOfDataMapOfStringByte(OCNaroWrappers::OCTCollection_ExtendedString^ K, Standard_Byte I, TCollection_MapNodePtr n);


 /*instead*/  OCTCollection_ExtendedString^ Key() ;


 /*instead*/  Standard_Byte Value() ;

~OCTDataStd_DataMapNodeOfDataMapOfStringByte()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
