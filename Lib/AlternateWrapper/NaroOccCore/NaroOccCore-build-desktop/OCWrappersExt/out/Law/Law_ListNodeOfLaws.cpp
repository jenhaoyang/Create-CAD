// File generated by CPPExt (CPP file)
//

#include "Law_ListNodeOfLaws.h"
#include "../Converter.h"
#include "Law_Function.h"
#include "Law_Laws.h"
#include "Law_ListIteratorOfLaws.h"


using namespace OCNaroWrappers;

OCLaw_ListNodeOfLaws::OCLaw_ListNodeOfLaws(Handle(Law_ListNodeOfLaws)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Law_ListNodeOfLaws(*nativeHandle);
}

OCLaw_ListNodeOfLaws::OCLaw_ListNodeOfLaws(OCNaroWrappers::OCLaw_Function^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Law_ListNodeOfLaws(new Law_ListNodeOfLaws(*((Handle_Law_Function*)I->Handle), n));
}

OCLaw_Function^ OCLaw_ListNodeOfLaws::Value()
{
  Handle(Law_Function) tmp = (*((Handle_Law_ListNodeOfLaws*)nativeHandle))->Value();
  return gcnew OCLaw_Function(&tmp);
}


