// File generated by CPPExt (CPP file)
//

#include "Transfer_FindHasher.h"
#include "../Converter.h"
#include "Transfer_Finder.h"


using namespace OCNaroWrappers;

OCTransfer_FindHasher::OCTransfer_FindHasher(Transfer_FindHasher* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 Standard_Integer OCTransfer_FindHasher::HashCode(OCNaroWrappers::OCTransfer_Finder^ K, Standard_Integer Upper)
{
  return Transfer_FindHasher::HashCode(*((Handle_Transfer_Finder*)K->Handle), Upper);
}

 System::Boolean OCTransfer_FindHasher::IsEqual(OCNaroWrappers::OCTransfer_Finder^ K1, OCNaroWrappers::OCTransfer_Finder^ K2)
{
  return OCConverter::StandardBooleanToBoolean(Transfer_FindHasher::IsEqual(*((Handle_Transfer_Finder*)K1->Handle), *((Handle_Transfer_Finder*)K2->Handle)));
}

