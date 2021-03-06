// File generated by CPPExt (CPP file)
//

#include "IFSelect_SessionDumper.h"
#include "../Converter.h"
#include "IFSelect_SessionFile.h"
#include "../Standard/Standard_Transient.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCIFSelect_SessionDumper::OCIFSelect_SessionDumper(Handle(IFSelect_SessionDumper)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_SessionDumper(*nativeHandle);
}

OCIFSelect_SessionDumper::OCIFSelect_SessionDumper() : OCMMgt_TShared((OCDummy^)nullptr)

{}

OCIFSelect_SessionDumper^ OCIFSelect_SessionDumper::First()
{
  Handle(IFSelect_SessionDumper) tmp = IFSelect_SessionDumper::First();
  return gcnew OCIFSelect_SessionDumper(&tmp);
}

OCIFSelect_SessionDumper^ OCIFSelect_SessionDumper::Next()
{
  Handle(IFSelect_SessionDumper) tmp = (*((Handle_IFSelect_SessionDumper*)nativeHandle))->Next();
  return gcnew OCIFSelect_SessionDumper(&tmp);
}


