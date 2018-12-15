// File generated by CPPExt (CPP file)
//

#include "ChFiKPart_DataMapIteratorOfRstMap.h"
#include "../Converter.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "ChFiKPart_RstMap.h"
#include "ChFiKPart_DataMapNodeOfRstMap.h"


using namespace OCNaroWrappers;

OCChFiKPart_DataMapIteratorOfRstMap::OCChFiKPart_DataMapIteratorOfRstMap(ChFiKPart_DataMapIteratorOfRstMap* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCChFiKPart_DataMapIteratorOfRstMap::OCChFiKPart_DataMapIteratorOfRstMap() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new ChFiKPart_DataMapIteratorOfRstMap();
}

OCChFiKPart_DataMapIteratorOfRstMap::OCChFiKPart_DataMapIteratorOfRstMap(OCNaroWrappers::OCChFiKPart_RstMap^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new ChFiKPart_DataMapIteratorOfRstMap(*((ChFiKPart_RstMap*)aMap->Handle));
}

 void OCChFiKPart_DataMapIteratorOfRstMap::Initialize(OCNaroWrappers::OCChFiKPart_RstMap^ aMap)
{
  ((ChFiKPart_DataMapIteratorOfRstMap*)nativeHandle)->Initialize(*((ChFiKPart_RstMap*)aMap->Handle));
}

 Standard_Integer OCChFiKPart_DataMapIteratorOfRstMap::Key()
{
  return ((ChFiKPart_DataMapIteratorOfRstMap*)nativeHandle)->Key();
}

OCAdaptor2d_HCurve2d^ OCChFiKPart_DataMapIteratorOfRstMap::Value()
{
  Handle(Adaptor2d_HCurve2d) tmp = ((ChFiKPart_DataMapIteratorOfRstMap*)nativeHandle)->Value();
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}


