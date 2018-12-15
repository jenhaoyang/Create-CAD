// File generated by CPPExt (CPP file)
//

#include "FEmTool_SeqOfLinConstr.h"
#include "../Converter.h"
#include "FEmTool_ListOfVectors.h"
#include "FEmTool_SequenceNodeOfSeqOfLinConstr.h"


using namespace OCNaroWrappers;

OCFEmTool_SeqOfLinConstr::OCFEmTool_SeqOfLinConstr(FEmTool_SeqOfLinConstr* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCFEmTool_SeqOfLinConstr::OCFEmTool_SeqOfLinConstr() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new FEmTool_SeqOfLinConstr();
}

OCFEmTool_SeqOfLinConstr^ OCFEmTool_SeqOfLinConstr::Assign(OCNaroWrappers::OCFEmTool_SeqOfLinConstr^ Other)
{
  FEmTool_SeqOfLinConstr* tmp = new FEmTool_SeqOfLinConstr();
  *tmp = ((FEmTool_SeqOfLinConstr*)nativeHandle)->Assign(*((FEmTool_SeqOfLinConstr*)Other->Handle));
  return gcnew OCFEmTool_SeqOfLinConstr(tmp);
}

 void OCFEmTool_SeqOfLinConstr::Append(OCNaroWrappers::OCFEmTool_ListOfVectors^ T)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->Append(*((FEmTool_ListOfVectors*)T->Handle));
}

 void OCFEmTool_SeqOfLinConstr::Append(OCNaroWrappers::OCFEmTool_SeqOfLinConstr^ S)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->Append(*((FEmTool_SeqOfLinConstr*)S->Handle));
}

 void OCFEmTool_SeqOfLinConstr::Prepend(OCNaroWrappers::OCFEmTool_ListOfVectors^ T)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->Prepend(*((FEmTool_ListOfVectors*)T->Handle));
}

 void OCFEmTool_SeqOfLinConstr::Prepend(OCNaroWrappers::OCFEmTool_SeqOfLinConstr^ S)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->Prepend(*((FEmTool_SeqOfLinConstr*)S->Handle));
}

 void OCFEmTool_SeqOfLinConstr::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCFEmTool_ListOfVectors^ T)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->InsertBefore(Index, *((FEmTool_ListOfVectors*)T->Handle));
}

 void OCFEmTool_SeqOfLinConstr::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCFEmTool_SeqOfLinConstr^ S)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->InsertBefore(Index, *((FEmTool_SeqOfLinConstr*)S->Handle));
}

 void OCFEmTool_SeqOfLinConstr::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCFEmTool_ListOfVectors^ T)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->InsertAfter(Index, *((FEmTool_ListOfVectors*)T->Handle));
}

 void OCFEmTool_SeqOfLinConstr::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCFEmTool_SeqOfLinConstr^ S)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->InsertAfter(Index, *((FEmTool_SeqOfLinConstr*)S->Handle));
}

OCFEmTool_ListOfVectors^ OCFEmTool_SeqOfLinConstr::First()
{
  FEmTool_ListOfVectors* tmp = new FEmTool_ListOfVectors();
  *tmp = ((FEmTool_SeqOfLinConstr*)nativeHandle)->First();
  return gcnew OCFEmTool_ListOfVectors(tmp);
}

OCFEmTool_ListOfVectors^ OCFEmTool_SeqOfLinConstr::Last()
{
  FEmTool_ListOfVectors* tmp = new FEmTool_ListOfVectors();
  *tmp = ((FEmTool_SeqOfLinConstr*)nativeHandle)->Last();
  return gcnew OCFEmTool_ListOfVectors(tmp);
}

 void OCFEmTool_SeqOfLinConstr::Split(Standard_Integer Index, OCNaroWrappers::OCFEmTool_SeqOfLinConstr^ Sub)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->Split(Index, *((FEmTool_SeqOfLinConstr*)Sub->Handle));
}

OCFEmTool_ListOfVectors^ OCFEmTool_SeqOfLinConstr::Value(Standard_Integer Index)
{
  FEmTool_ListOfVectors* tmp = new FEmTool_ListOfVectors();
  *tmp = ((FEmTool_SeqOfLinConstr*)nativeHandle)->Value(Index);
  return gcnew OCFEmTool_ListOfVectors(tmp);
}

 void OCFEmTool_SeqOfLinConstr::SetValue(Standard_Integer Index, OCNaroWrappers::OCFEmTool_ListOfVectors^ I)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->SetValue(Index, *((FEmTool_ListOfVectors*)I->Handle));
}

OCFEmTool_ListOfVectors^ OCFEmTool_SeqOfLinConstr::ChangeValue(Standard_Integer Index)
{
  FEmTool_ListOfVectors* tmp = new FEmTool_ListOfVectors();
  *tmp = ((FEmTool_SeqOfLinConstr*)nativeHandle)->ChangeValue(Index);
  return gcnew OCFEmTool_ListOfVectors(tmp);
}

 void OCFEmTool_SeqOfLinConstr::Remove(Standard_Integer Index)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->Remove(Index);
}

 void OCFEmTool_SeqOfLinConstr::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((FEmTool_SeqOfLinConstr*)nativeHandle)->Remove(FromIndex, ToIndex);
}


