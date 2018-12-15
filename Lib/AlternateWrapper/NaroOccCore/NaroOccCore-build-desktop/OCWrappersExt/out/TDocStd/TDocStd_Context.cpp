// File generated by CPPExt (CPP file)
//

#include "TDocStd_Context.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTDocStd_Context::OCTDocStd_Context(TDocStd_Context* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTDocStd_Context::OCTDocStd_Context() 
{
  nativeHandle = new TDocStd_Context();
}

 void OCTDocStd_Context::SetModifiedReferences(System::Boolean Mod)
{
  ((TDocStd_Context*)nativeHandle)->SetModifiedReferences(OCConverter::BooleanToStandardBoolean(Mod));
}

 System::Boolean OCTDocStd_Context::ModifiedReferences()
{
  return OCConverter::StandardBooleanToBoolean(((TDocStd_Context*)nativeHandle)->ModifiedReferences());
}


