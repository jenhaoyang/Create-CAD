// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_ListNodeOfListOfLoop.h"
#include "../Converter.h"
#include "TopOpeBRepBuild_Loop.h"
#include "TopOpeBRepBuild_ListOfLoop.h"
#include "TopOpeBRepBuild_ListIteratorOfListOfLoop.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_ListNodeOfListOfLoop::OCTopOpeBRepBuild_ListNodeOfListOfLoop(Handle(TopOpeBRepBuild_ListNodeOfListOfLoop)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepBuild_ListNodeOfListOfLoop(*nativeHandle);
}

OCTopOpeBRepBuild_ListNodeOfListOfLoop::OCTopOpeBRepBuild_ListNodeOfListOfLoop(OCNaroWrappers::OCTopOpeBRepBuild_Loop^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepBuild_ListNodeOfListOfLoop(new TopOpeBRepBuild_ListNodeOfListOfLoop(*((Handle_TopOpeBRepBuild_Loop*)I->Handle), n));
}

OCTopOpeBRepBuild_Loop^ OCTopOpeBRepBuild_ListNodeOfListOfLoop::Value()
{
  Handle(TopOpeBRepBuild_Loop) tmp = (*((Handle_TopOpeBRepBuild_ListNodeOfListOfLoop*)nativeHandle))->Value();
  return gcnew OCTopOpeBRepBuild_Loop(&tmp);
}


