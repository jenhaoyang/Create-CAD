// File generated by CPPExt (MPV)
//
#ifndef _Storage_DataMapIteratorOfMapOfCallBack_OCWrappers_HeaderFile
#define _Storage_DataMapIteratorOfMapOfCallBack_OCWrappers_HeaderFile

// include native header
#include <Storage_DataMapIteratorOfMapOfCallBack.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;
ref class OCStorage_TypedCallBack;
ref class OCStorage_MapOfCallBack;
ref class OCStorage_DataMapNodeOfMapOfCallBack;



public ref class OCStorage_DataMapIteratorOfMapOfCallBack  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCStorage_DataMapIteratorOfMapOfCallBack(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCStorage_DataMapIteratorOfMapOfCallBack(Storage_DataMapIteratorOfMapOfCallBack* nativeHandle);

// Methods PUBLIC


OCStorage_DataMapIteratorOfMapOfCallBack();


OCStorage_DataMapIteratorOfMapOfCallBack(OCNaroWrappers::OCStorage_MapOfCallBack^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCStorage_MapOfCallBack^ aMap) ;


 /*instead*/  OCTCollection_AsciiString^ Key() ;


 /*instead*/  OCStorage_TypedCallBack^ Value() ;

~OCStorage_DataMapIteratorOfMapOfCallBack()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
