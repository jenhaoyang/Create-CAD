// File generated by CPPExt (CPP file)
//

#include "PColStd_SeqExplorerOfHSequenceOfHExtendedString.h"
#include "../Converter.h"
#include "PColStd_SeqNodeOfHSequenceOfHExtendedString.h"
#include "PColStd_HSequenceOfHExtendedString.h"
#include "../PCollection/PCollection_HExtendedString.h"


using namespace OCNaroWrappers;

OCPColStd_SeqExplorerOfHSequenceOfHExtendedString::OCPColStd_SeqExplorerOfHSequenceOfHExtendedString(PColStd_SeqExplorerOfHSequenceOfHExtendedString* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPColStd_SeqExplorerOfHSequenceOfHExtendedString::OCPColStd_SeqExplorerOfHSequenceOfHExtendedString(OCNaroWrappers::OCPColStd_HSequenceOfHExtendedString^ S) 
{
  nativeHandle = new PColStd_SeqExplorerOfHSequenceOfHExtendedString(*((Handle_PColStd_HSequenceOfHExtendedString*)S->Handle));
}

OCPCollection_HExtendedString^ OCPColStd_SeqExplorerOfHSequenceOfHExtendedString::Value(Standard_Integer Index)
{
  Handle(PCollection_HExtendedString) tmp = ((PColStd_SeqExplorerOfHSequenceOfHExtendedString*)nativeHandle)->Value(Index);
  return gcnew OCPCollection_HExtendedString(&tmp);
}

 System::Boolean OCPColStd_SeqExplorerOfHSequenceOfHExtendedString::Contains(OCNaroWrappers::OCPCollection_HExtendedString^ T)
{
  return OCConverter::StandardBooleanToBoolean(((PColStd_SeqExplorerOfHSequenceOfHExtendedString*)nativeHandle)->Contains(*((Handle_PCollection_HExtendedString*)T->Handle)));
}

 Standard_Integer OCPColStd_SeqExplorerOfHSequenceOfHExtendedString::Location(Standard_Integer N, OCNaroWrappers::OCPCollection_HExtendedString^ T, Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  return ((PColStd_SeqExplorerOfHSequenceOfHExtendedString*)nativeHandle)->Location(N, *((Handle_PCollection_HExtendedString*)T->Handle), FromIndex, ToIndex);
}

 Standard_Integer OCPColStd_SeqExplorerOfHSequenceOfHExtendedString::Location(Standard_Integer N, OCNaroWrappers::OCPCollection_HExtendedString^ T)
{
  return ((PColStd_SeqExplorerOfHSequenceOfHExtendedString*)nativeHandle)->Location(N, *((Handle_PCollection_HExtendedString*)T->Handle));
}


