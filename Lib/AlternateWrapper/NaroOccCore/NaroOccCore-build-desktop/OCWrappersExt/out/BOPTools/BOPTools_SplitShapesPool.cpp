// File generated by CPPExt (CPP file)
//

#include "BOPTools_SplitShapesPool.h"
#include "../Converter.h"
#include "BOPTools_ListOfPaveBlock.h"


using namespace OCNaroWrappers;

OCBOPTools_SplitShapesPool::OCBOPTools_SplitShapesPool(BOPTools_SplitShapesPool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_SplitShapesPool::OCBOPTools_SplitShapesPool(Standard_Integer Length, Standard_Integer BlockLength) 
{
  nativeHandle = new BOPTools_SplitShapesPool(Length, BlockLength);
}

 void OCBOPTools_SplitShapesPool::Resize(Standard_Integer theNewLength)
{
  ((BOPTools_SplitShapesPool*)nativeHandle)->Resize(theNewLength);
}

 Standard_Integer OCBOPTools_SplitShapesPool::Length()
{
  return ((BOPTools_SplitShapesPool*)nativeHandle)->Length();
}

 Standard_Integer OCBOPTools_SplitShapesPool::Extent()
{
  return ((BOPTools_SplitShapesPool*)nativeHandle)->Extent();
}

 Standard_Integer OCBOPTools_SplitShapesPool::FactLength()
{
  return ((BOPTools_SplitShapesPool*)nativeHandle)->FactLength();
}

 Standard_Integer OCBOPTools_SplitShapesPool::Append(OCNaroWrappers::OCBOPTools_ListOfPaveBlock^ Value)
{
  return ((BOPTools_SplitShapesPool*)nativeHandle)->Append(*((BOPTools_ListOfPaveBlock*)Value->Handle));
}

 void OCBOPTools_SplitShapesPool::Remove(Standard_Integer Index)
{
  ((BOPTools_SplitShapesPool*)nativeHandle)->Remove(Index);
}

OCBOPTools_ListOfPaveBlock^ OCBOPTools_SplitShapesPool::Value(Standard_Integer Index)
{
  BOPTools_ListOfPaveBlock* tmp = new BOPTools_ListOfPaveBlock();
  *tmp = ((BOPTools_SplitShapesPool*)nativeHandle)->Value(Index);
  return gcnew OCBOPTools_ListOfPaveBlock(tmp);
}

OCBOPTools_ListOfPaveBlock^ OCBOPTools_SplitShapesPool::ChangeValue(Standard_Integer Index)
{
  BOPTools_ListOfPaveBlock* tmp = new BOPTools_ListOfPaveBlock();
  *tmp = ((BOPTools_SplitShapesPool*)nativeHandle)->ChangeValue(Index);
  return gcnew OCBOPTools_ListOfPaveBlock(tmp);
}

 void OCBOPTools_SplitShapesPool::SetBlockLength(Standard_Integer aBL)
{
  ((BOPTools_SplitShapesPool*)nativeHandle)->SetBlockLength(aBL);
}

 Standard_Integer OCBOPTools_SplitShapesPool::BlockLength()
{
  return ((BOPTools_SplitShapesPool*)nativeHandle)->BlockLength();
}

 void OCBOPTools_SplitShapesPool::Purge()
{
  ((BOPTools_SplitShapesPool*)nativeHandle)->Purge();
}


