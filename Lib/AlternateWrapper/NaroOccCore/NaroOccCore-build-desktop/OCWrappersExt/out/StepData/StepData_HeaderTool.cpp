// File generated by CPPExt (CPP file)
//

#include "StepData_HeaderTool.h"
#include "../Converter.h"
#include "StepData_StepReaderData.h"
#include "../TColStd/TColStd_SequenceOfAsciiString.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "StepData_Protocol.h"
#include "StepData_FileProtocol.h"


using namespace OCNaroWrappers;

OCStepData_HeaderTool::OCStepData_HeaderTool(StepData_HeaderTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepData_HeaderTool::OCStepData_HeaderTool(OCNaroWrappers::OCStepData_StepReaderData^ data) 
{
  nativeHandle = new StepData_HeaderTool(*((Handle_StepData_StepReaderData*)data->Handle));
}

OCStepData_HeaderTool::OCStepData_HeaderTool(OCNaroWrappers::OCTColStd_SequenceOfAsciiString^ names) 
{
  nativeHandle = new StepData_HeaderTool(*((TColStd_SequenceOfAsciiString*)names->Handle));
}

 Standard_Integer OCStepData_HeaderTool::NbSchemaNames()
{
  return ((StepData_HeaderTool*)nativeHandle)->NbSchemaNames();
}

OCTCollection_AsciiString^ OCStepData_HeaderTool::SchemaName(Standard_Integer num)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((StepData_HeaderTool*)nativeHandle)->SchemaName(num);
  return gcnew OCTCollection_AsciiString(tmp);
}

OCStepData_Protocol^ OCStepData_HeaderTool::NamedProtocol(OCNaroWrappers::OCTCollection_AsciiString^ name)
{
  Handle(StepData_Protocol) tmp = ((StepData_HeaderTool*)nativeHandle)->NamedProtocol(*((TCollection_AsciiString*)name->Handle));
  return gcnew OCStepData_Protocol(&tmp);
}

 void OCStepData_HeaderTool::Build(OCNaroWrappers::OCStepData_FileProtocol^ protocol)
{
  ((StepData_HeaderTool*)nativeHandle)->Build(*((Handle_StepData_FileProtocol*)protocol->Handle));
}

OCStepData_Protocol^ OCStepData_HeaderTool::Protocol()
{
  Handle(StepData_Protocol) tmp = ((StepData_HeaderTool*)nativeHandle)->Protocol();
  return gcnew OCStepData_Protocol(&tmp);
}

 System::Boolean OCStepData_HeaderTool::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((StepData_HeaderTool*)nativeHandle)->IsDone());
}

 Standard_Integer OCStepData_HeaderTool::NbIgnoreds()
{
  return ((StepData_HeaderTool*)nativeHandle)->NbIgnoreds();
}

OCTCollection_AsciiString^ OCStepData_HeaderTool::Ignored(Standard_Integer num)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((StepData_HeaderTool*)nativeHandle)->Ignored(num);
  return gcnew OCTCollection_AsciiString(tmp);
}

 void OCStepData_HeaderTool::Print(Standard_OStream& S)
{
  ((StepData_HeaderTool*)nativeHandle)->Print(S);
}


