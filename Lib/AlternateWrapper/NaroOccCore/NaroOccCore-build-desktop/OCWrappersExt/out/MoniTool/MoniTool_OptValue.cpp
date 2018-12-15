// File generated by CPPExt (CPP file)
//

#include "MoniTool_OptValue.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "MoniTool_Profile.h"


using namespace OCNaroWrappers;

OCMoniTool_OptValue::OCMoniTool_OptValue(MoniTool_OptValue* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMoniTool_OptValue::OCMoniTool_OptValue(System::String^ opt) 
{
  nativeHandle = new MoniTool_OptValue(OCConverter::StringToStandardCString(opt));
}

 void OCMoniTool_OptValue::Clear()
{
  ((MoniTool_OptValue*)nativeHandle)->Clear();
}

 void OCMoniTool_OptValue::SetValue(OCNaroWrappers::OCMoniTool_Profile^ prof, System::String^ opt, System::Boolean fast)
{
  ((MoniTool_OptValue*)nativeHandle)->SetValue(*((Handle_MoniTool_Profile*)prof->Handle), OCConverter::StringToStandardCString(opt), OCConverter::BooleanToStandardBoolean(fast));
}

OCMoniTool_Profile^ OCMoniTool_OptValue::Prof()
{
  Handle(MoniTool_Profile) tmp = ((MoniTool_OptValue*)nativeHandle)->Prof();
  return gcnew OCMoniTool_Profile(&tmp);
}

 void OCMoniTool_OptValue::Load(System::Boolean fast)
{
  ((MoniTool_OptValue*)nativeHandle)->Load(OCConverter::BooleanToStandardBoolean(fast));
}

 System::Boolean OCMoniTool_OptValue::IsLoaded()
{
  return OCConverter::StandardBooleanToBoolean(((MoniTool_OptValue*)nativeHandle)->IsLoaded());
}

 void OCMoniTool_OptValue::Value(OCNaroWrappers::OCStandard_Transient^ val)
{
  ((MoniTool_OptValue*)nativeHandle)->Value(*((Handle_Standard_Transient*)val->Handle));
}

 void OCMoniTool_OptValue::Delete()
{
  ((MoniTool_OptValue*)nativeHandle)->Delete();
}


