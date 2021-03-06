// File generated by CPPExt (CPP file)
//

#include "BOPTools_PaveBlockIterator.h"
#include "../Converter.h"
#include "BOPTools_PaveSet.h"
#include "BOPTools_PaveBlock.h"


using namespace OCNaroWrappers;

OCBOPTools_PaveBlockIterator::OCBOPTools_PaveBlockIterator(BOPTools_PaveBlockIterator* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_PaveBlockIterator::OCBOPTools_PaveBlockIterator() 
{
  nativeHandle = new BOPTools_PaveBlockIterator();
}

OCBOPTools_PaveBlockIterator::OCBOPTools_PaveBlockIterator(Standard_Integer aEdge, OCNaroWrappers::OCBOPTools_PaveSet^ aPaveSet) 
{
  nativeHandle = new BOPTools_PaveBlockIterator(aEdge, *((BOPTools_PaveSet*)aPaveSet->Handle));
}

 void OCBOPTools_PaveBlockIterator::Initialize(Standard_Integer aEdge, OCNaroWrappers::OCBOPTools_PaveSet^ aPaveSet)
{
  ((BOPTools_PaveBlockIterator*)nativeHandle)->Initialize(aEdge, *((BOPTools_PaveSet*)aPaveSet->Handle));
}

 System::Boolean OCBOPTools_PaveBlockIterator::More()
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_PaveBlockIterator*)nativeHandle)->More());
}

 void OCBOPTools_PaveBlockIterator::Next()
{
  ((BOPTools_PaveBlockIterator*)nativeHandle)->Next();
}

OCBOPTools_PaveBlock^ OCBOPTools_PaveBlockIterator::Value()
{
  BOPTools_PaveBlock* tmp = new BOPTools_PaveBlock();
  *tmp = ((BOPTools_PaveBlockIterator*)nativeHandle)->Value();
  return gcnew OCBOPTools_PaveBlock(tmp);
}


