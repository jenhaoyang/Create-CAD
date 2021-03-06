// File generated by CPPExt (CPP file)
//

#include "TopLoc_StdMapNodeOfMapOfLocation.h"
#include "../Converter.h"
#include "TopLoc_Location.h"
#include "TopLoc_MapLocationHasher.h"
#include "TopLoc_MapOfLocation.h"
#include "TopLoc_MapIteratorOfMapOfLocation.h"


using namespace OCNaroWrappers;

OCTopLoc_StdMapNodeOfMapOfLocation::OCTopLoc_StdMapNodeOfMapOfLocation(Handle(TopLoc_StdMapNodeOfMapOfLocation)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopLoc_StdMapNodeOfMapOfLocation(*nativeHandle);
}

OCTopLoc_StdMapNodeOfMapOfLocation::OCTopLoc_StdMapNodeOfMapOfLocation(OCNaroWrappers::OCTopLoc_Location^ K, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopLoc_StdMapNodeOfMapOfLocation(new TopLoc_StdMapNodeOfMapOfLocation(*((TopLoc_Location*)K->Handle), n));
}

OCTopLoc_Location^ OCTopLoc_StdMapNodeOfMapOfLocation::Key()
{
  TopLoc_Location* tmp = new TopLoc_Location();
  *tmp = (*((Handle_TopLoc_StdMapNodeOfMapOfLocation*)nativeHandle))->Key();
  return gcnew OCTopLoc_Location(tmp);
}


