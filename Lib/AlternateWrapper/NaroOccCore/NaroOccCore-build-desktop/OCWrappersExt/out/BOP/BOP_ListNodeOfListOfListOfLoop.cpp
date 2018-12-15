// File generated by CPPExt (CPP file)
//

#include "BOP_ListNodeOfListOfListOfLoop.h"
#include "../Converter.h"
#include "BOP_ListOfLoop.h"
#include "BOP_ListOfListOfLoop.h"
#include "BOP_ListIteratorOfListOfListOfLoop.h"


using namespace OCNaroWrappers;

OCBOP_ListNodeOfListOfListOfLoop::OCBOP_ListNodeOfListOfListOfLoop(Handle(BOP_ListNodeOfListOfListOfLoop)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOP_ListNodeOfListOfListOfLoop(*nativeHandle);
}

OCBOP_ListNodeOfListOfListOfLoop::OCBOP_ListNodeOfListOfListOfLoop(OCNaroWrappers::OCBOP_ListOfLoop^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOP_ListNodeOfListOfListOfLoop(new BOP_ListNodeOfListOfListOfLoop(*((BOP_ListOfLoop*)I->Handle), n));
}

OCBOP_ListOfLoop^ OCBOP_ListNodeOfListOfListOfLoop::Value()
{
  BOP_ListOfLoop* tmp = new BOP_ListOfLoop();
  *tmp = (*((Handle_BOP_ListNodeOfListOfListOfLoop*)nativeHandle))->Value();
  return gcnew OCBOP_ListOfLoop(tmp);
}


