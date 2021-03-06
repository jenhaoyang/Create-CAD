// File generated by CPPExt (CPP file)
//

#include "Storage_DataMapIteratorOfMapOfPers.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "Storage_Root.h"
#include "Storage_MapOfPers.h"
#include "Storage_DataMapNodeOfMapOfPers.h"


using namespace OCNaroWrappers;

OCStorage_DataMapIteratorOfMapOfPers::OCStorage_DataMapIteratorOfMapOfPers(Storage_DataMapIteratorOfMapOfPers* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStorage_DataMapIteratorOfMapOfPers::OCStorage_DataMapIteratorOfMapOfPers() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new Storage_DataMapIteratorOfMapOfPers();
}

OCStorage_DataMapIteratorOfMapOfPers::OCStorage_DataMapIteratorOfMapOfPers(OCNaroWrappers::OCStorage_MapOfPers^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new Storage_DataMapIteratorOfMapOfPers(*((Storage_MapOfPers*)aMap->Handle));
}

 void OCStorage_DataMapIteratorOfMapOfPers::Initialize(OCNaroWrappers::OCStorage_MapOfPers^ aMap)
{
  ((Storage_DataMapIteratorOfMapOfPers*)nativeHandle)->Initialize(*((Storage_MapOfPers*)aMap->Handle));
}

OCTCollection_AsciiString^ OCStorage_DataMapIteratorOfMapOfPers::Key()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((Storage_DataMapIteratorOfMapOfPers*)nativeHandle)->Key();
  return gcnew OCTCollection_AsciiString(tmp);
}

OCStorage_Root^ OCStorage_DataMapIteratorOfMapOfPers::Value()
{
  Handle(Storage_Root) tmp = ((Storage_DataMapIteratorOfMapOfPers*)nativeHandle)->Value();
  return gcnew OCStorage_Root(&tmp);
}


