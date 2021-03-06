// File generated by CPPExt (CPP file)
//

#include "TDF_DataMapNodeOfLabelDataMap.h"
#include "../Converter.h"
#include "TDF_Label.h"
#include "TDF_LabelMapHasher.h"
#include "TDF_LabelDataMap.h"
#include "TDF_DataMapIteratorOfLabelDataMap.h"


using namespace OCNaroWrappers;

OCTDF_DataMapNodeOfLabelDataMap::OCTDF_DataMapNodeOfLabelDataMap(Handle(TDF_DataMapNodeOfLabelDataMap)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDF_DataMapNodeOfLabelDataMap(*nativeHandle);
}

OCTDF_DataMapNodeOfLabelDataMap::OCTDF_DataMapNodeOfLabelDataMap(OCNaroWrappers::OCTDF_Label^ K, OCNaroWrappers::OCTDF_Label^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDF_DataMapNodeOfLabelDataMap(new TDF_DataMapNodeOfLabelDataMap(*((TDF_Label*)K->Handle), *((TDF_Label*)I->Handle), n));
}

OCTDF_Label^ OCTDF_DataMapNodeOfLabelDataMap::Key()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = (*((Handle_TDF_DataMapNodeOfLabelDataMap*)nativeHandle))->Key();
  return gcnew OCTDF_Label(tmp);
}

OCTDF_Label^ OCTDF_DataMapNodeOfLabelDataMap::Value()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = (*((Handle_TDF_DataMapNodeOfLabelDataMap*)nativeHandle))->Value();
  return gcnew OCTDF_Label(tmp);
}


