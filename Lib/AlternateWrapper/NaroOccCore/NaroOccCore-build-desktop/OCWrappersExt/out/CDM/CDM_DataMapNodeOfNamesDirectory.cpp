// File generated by CPPExt (CPP file)
//

#include "CDM_DataMapNodeOfNamesDirectory.h"
#include "../Converter.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "CDM_NamesDirectory.h"
#include "CDM_DataMapIteratorOfNamesDirectory.h"


using namespace OCNaroWrappers;

OCCDM_DataMapNodeOfNamesDirectory::OCCDM_DataMapNodeOfNamesDirectory(Handle(CDM_DataMapNodeOfNamesDirectory)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_CDM_DataMapNodeOfNamesDirectory(*nativeHandle);
}

OCCDM_DataMapNodeOfNamesDirectory::OCCDM_DataMapNodeOfNamesDirectory(OCNaroWrappers::OCTCollection_ExtendedString^ K, Standard_Integer I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_CDM_DataMapNodeOfNamesDirectory(new CDM_DataMapNodeOfNamesDirectory(*((TCollection_ExtendedString*)K->Handle), I, n));
}

OCTCollection_ExtendedString^ OCCDM_DataMapNodeOfNamesDirectory::Key()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_DataMapNodeOfNamesDirectory*)nativeHandle))->Key();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 Standard_Integer OCCDM_DataMapNodeOfNamesDirectory::Value()
{
  return (*((Handle_CDM_DataMapNodeOfNamesDirectory*)nativeHandle))->Value();
}


