// File generated by CPPExt (CPP file)
//

#include "Geom2dHatch_DataMapNodeOfHatchingsOfHatcher.h"
#include "../Converter.h"
#include "Geom2dHatch_HatchingOfHatcher.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "Geom2dHatch_HatchingsOfHatcher.h"
#include "Geom2dHatch_DataMapIteratorOfHatchingsOfHatcher.h"


using namespace OCNaroWrappers;

OCGeom2dHatch_DataMapNodeOfHatchingsOfHatcher::OCGeom2dHatch_DataMapNodeOfHatchingsOfHatcher(Handle(Geom2dHatch_DataMapNodeOfHatchingsOfHatcher)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom2dHatch_DataMapNodeOfHatchingsOfHatcher(*nativeHandle);
}

OCGeom2dHatch_DataMapNodeOfHatchingsOfHatcher::OCGeom2dHatch_DataMapNodeOfHatchingsOfHatcher(Standard_Integer K, OCNaroWrappers::OCGeom2dHatch_HatchingOfHatcher^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2dHatch_DataMapNodeOfHatchingsOfHatcher(new Geom2dHatch_DataMapNodeOfHatchingsOfHatcher(K, *((Geom2dHatch_HatchingOfHatcher*)I->Handle), n));
}

 Standard_Integer OCGeom2dHatch_DataMapNodeOfHatchingsOfHatcher::Key()
{
  return (*((Handle_Geom2dHatch_DataMapNodeOfHatchingsOfHatcher*)nativeHandle))->Key();
}

OCGeom2dHatch_HatchingOfHatcher^ OCGeom2dHatch_DataMapNodeOfHatchingsOfHatcher::Value()
{
  Geom2dHatch_HatchingOfHatcher* tmp = new Geom2dHatch_HatchingOfHatcher();
  *tmp = (*((Handle_Geom2dHatch_DataMapNodeOfHatchingsOfHatcher*)nativeHandle))->Value();
  return gcnew OCGeom2dHatch_HatchingOfHatcher(tmp);
}


