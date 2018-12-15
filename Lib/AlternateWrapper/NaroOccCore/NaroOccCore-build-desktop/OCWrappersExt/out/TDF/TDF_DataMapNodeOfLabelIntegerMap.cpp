// File generated by CPPExt (CPP file)
//

#include "TDF_DataMapNodeOfLabelIntegerMap.h"
#include "../Converter.h"
#include "TDF_Label.h"
#include "TDF_LabelMapHasher.h"
#include "TDF_LabelIntegerMap.h"
#include "TDF_DataMapIteratorOfLabelIntegerMap.h"


using namespace OCNaroWrappers;

OCTDF_DataMapNodeOfLabelIntegerMap::OCTDF_DataMapNodeOfLabelIntegerMap(Handle(TDF_DataMapNodeOfLabelIntegerMap)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDF_DataMapNodeOfLabelIntegerMap(*nativeHandle);
}

OCTDF_DataMapNodeOfLabelIntegerMap::OCTDF_DataMapNodeOfLabelIntegerMap(OCNaroWrappers::OCTDF_Label^ K, Standard_Integer I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDF_DataMapNodeOfLabelIntegerMap(new TDF_DataMapNodeOfLabelIntegerMap(*((TDF_Label*)K->Handle), I, n));
}

OCTDF_Label^ OCTDF_DataMapNodeOfLabelIntegerMap::Key()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = (*((Handle_TDF_DataMapNodeOfLabelIntegerMap*)nativeHandle))->Key();
  return gcnew OCTDF_Label(tmp);
}

 Standard_Integer OCTDF_DataMapNodeOfLabelIntegerMap::Value()
{
  return (*((Handle_TDF_DataMapNodeOfLabelIntegerMap*)nativeHandle))->Value();
}


