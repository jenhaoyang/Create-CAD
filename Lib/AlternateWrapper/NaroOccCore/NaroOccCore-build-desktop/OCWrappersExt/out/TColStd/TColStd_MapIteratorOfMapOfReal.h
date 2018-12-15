// File generated by CPPExt (MPV)
//
#ifndef _TColStd_MapIteratorOfMapOfReal_OCWrappers_HeaderFile
#define _TColStd_MapIteratorOfMapOfReal_OCWrappers_HeaderFile

// include native header
#include <TColStd_MapIteratorOfMapOfReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTColStd_MapRealHasher;
ref class OCTColStd_MapOfReal;
ref class OCTColStd_StdMapNodeOfMapOfReal;



public ref class OCTColStd_MapIteratorOfMapOfReal  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTColStd_MapIteratorOfMapOfReal(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_MapIteratorOfMapOfReal(TColStd_MapIteratorOfMapOfReal* nativeHandle);

// Methods PUBLIC


OCTColStd_MapIteratorOfMapOfReal();


OCTColStd_MapIteratorOfMapOfReal(OCNaroWrappers::OCTColStd_MapOfReal^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTColStd_MapOfReal^ aMap) ;


 /*instead*/  Standard_Real Key() ;

~OCTColStd_MapIteratorOfMapOfReal()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
