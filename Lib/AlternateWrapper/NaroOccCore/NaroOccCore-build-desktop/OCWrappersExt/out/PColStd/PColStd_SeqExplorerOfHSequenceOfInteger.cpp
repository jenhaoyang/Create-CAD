// File generated by CPPExt (CPP file)
//

#include "PColStd_SeqExplorerOfHSequenceOfInteger.h"
#include "../Converter.h"
#include "PColStd_SeqNodeOfHSequenceOfInteger.h"
#include "PColStd_HSequenceOfInteger.h"


using namespace OCNaroWrappers;

OCPColStd_SeqExplorerOfHSequenceOfInteger::OCPColStd_SeqExplorerOfHSequenceOfInteger(PColStd_SeqExplorerOfHSequenceOfInteger* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPColStd_SeqExplorerOfHSequenceOfInteger::OCPColStd_SeqExplorerOfHSequenceOfInteger(OCNaroWrappers::OCPColStd_HSequenceOfInteger^ S) 
{
  nativeHandle = new PColStd_SeqExplorerOfHSequenceOfInteger(*((Handle_PColStd_HSequenceOfInteger*)S->Handle));
}

 Standard_Integer OCPColStd_SeqExplorerOfHSequenceOfInteger::Value(Standard_Integer Index)
{
  return ((PColStd_SeqExplorerOfHSequenceOfInteger*)nativeHandle)->Value(Index);
}

 System::Boolean OCPColStd_SeqExplorerOfHSequenceOfInteger::Contains(Standard_Integer T)
{
  return OCConverter::StandardBooleanToBoolean(((PColStd_SeqExplorerOfHSequenceOfInteger*)nativeHandle)->Contains(T));
}

 Standard_Integer OCPColStd_SeqExplorerOfHSequenceOfInteger::Location(Standard_Integer N, Standard_Integer T, Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  return ((PColStd_SeqExplorerOfHSequenceOfInteger*)nativeHandle)->Location(N, T, FromIndex, ToIndex);
}

 Standard_Integer OCPColStd_SeqExplorerOfHSequenceOfInteger::Location(Standard_Integer N, Standard_Integer T)
{
  return ((PColStd_SeqExplorerOfHSequenceOfInteger*)nativeHandle)->Location(N, T);
}


