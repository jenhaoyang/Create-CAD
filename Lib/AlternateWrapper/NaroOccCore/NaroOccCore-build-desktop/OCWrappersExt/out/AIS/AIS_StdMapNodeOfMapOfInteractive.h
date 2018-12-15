// File generated by CPPExt (Transient)
//
#ifndef _AIS_StdMapNodeOfMapOfInteractive_OCWrappers_HeaderFile
#define _AIS_StdMapNodeOfMapOfInteractive_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS_StdMapNodeOfMapOfInteractive.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCAIS_InteractiveObject;
ref class OCTColStd_MapTransientHasher;
ref class OCAIS_MapOfInteractive;
ref class OCAIS_MapIteratorOfMapOfInteractive;



public ref class OCAIS_StdMapNodeOfMapOfInteractive : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCAIS_StdMapNodeOfMapOfInteractive(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_StdMapNodeOfMapOfInteractive(Handle(AIS_StdMapNodeOfMapOfInteractive)* nativeHandle);

// Methods PUBLIC


OCAIS_StdMapNodeOfMapOfInteractive(OCNaroWrappers::OCAIS_InteractiveObject^ K, TCollection_MapNodePtr n);


 /*instead*/  OCAIS_InteractiveObject^ Key() ;

~OCAIS_StdMapNodeOfMapOfInteractive()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif