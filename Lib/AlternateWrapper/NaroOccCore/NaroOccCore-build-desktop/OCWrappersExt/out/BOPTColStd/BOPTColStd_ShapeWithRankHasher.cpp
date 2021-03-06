// File generated by CPPExt (CPP file)
//

#include "BOPTColStd_ShapeWithRankHasher.h"
#include "../Converter.h"
#include "BOPTColStd_ShapeWithRank.h"


using namespace OCNaroWrappers;

OCBOPTColStd_ShapeWithRankHasher::OCBOPTColStd_ShapeWithRankHasher(BOPTColStd_ShapeWithRankHasher* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 Standard_Integer OCBOPTColStd_ShapeWithRankHasher::HashCode(OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ SR, Standard_Integer Upper)
{
  return BOPTColStd_ShapeWithRankHasher::HashCode(*((BOPTColStd_ShapeWithRank*)SR->Handle), Upper);
}

 System::Boolean OCBOPTColStd_ShapeWithRankHasher::IsEqual(OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ SR1, OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ SR2)
{
  return OCConverter::StandardBooleanToBoolean(BOPTColStd_ShapeWithRankHasher::IsEqual(*((BOPTColStd_ShapeWithRank*)SR1->Handle), *((BOPTColStd_ShapeWithRank*)SR2->Handle)));
}


