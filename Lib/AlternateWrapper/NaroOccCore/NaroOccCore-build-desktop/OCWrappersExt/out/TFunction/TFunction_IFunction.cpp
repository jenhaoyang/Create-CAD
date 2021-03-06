// File generated by CPPExt (CPP file)
//

#include "TFunction_IFunction.h"
#include "../Converter.h"
#include "../TDF/TDF_Label.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_LabelList.h"
#include "TFunction_DoubleMapOfIntegerLabel.h"
#include "TFunction_Logbook.h"
#include "TFunction_Driver.h"
#include "TFunction_GraphNode.h"


using namespace OCNaroWrappers;

OCTFunction_IFunction::OCTFunction_IFunction(TFunction_IFunction* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 System::Boolean OCTFunction_IFunction::NewFunction(OCNaroWrappers::OCTDF_Label^ L, OCNaroWrappers::OCStandard_GUID^ ID)
{
  return OCConverter::StandardBooleanToBoolean(TFunction_IFunction::NewFunction(*((TDF_Label*)L->Handle), *((Standard_GUID*)ID->Handle)));
}

 System::Boolean OCTFunction_IFunction::DeleteFunction(OCNaroWrappers::OCTDF_Label^ L)
{
  return OCConverter::StandardBooleanToBoolean(TFunction_IFunction::DeleteFunction(*((TDF_Label*)L->Handle)));
}

 System::Boolean OCTFunction_IFunction::UpdateDependencies(OCNaroWrappers::OCTDF_Label^ Access)
{
  return OCConverter::StandardBooleanToBoolean(TFunction_IFunction::UpdateDependencies(*((TDF_Label*)Access->Handle)));
}

OCTFunction_IFunction::OCTFunction_IFunction() 
{
  nativeHandle = new TFunction_IFunction();
}

OCTFunction_IFunction::OCTFunction_IFunction(OCNaroWrappers::OCTDF_Label^ L) 
{
  nativeHandle = new TFunction_IFunction(*((TDF_Label*)L->Handle));
}

 void OCTFunction_IFunction::Init(OCNaroWrappers::OCTDF_Label^ L)
{
  ((TFunction_IFunction*)nativeHandle)->Init(*((TDF_Label*)L->Handle));
}

OCTDF_Label^ OCTFunction_IFunction::Label()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = ((TFunction_IFunction*)nativeHandle)->Label();
  return gcnew OCTDF_Label(tmp);
}

 System::Boolean OCTFunction_IFunction::UpdateDependencies()
{
  return OCConverter::StandardBooleanToBoolean(((TFunction_IFunction*)nativeHandle)->UpdateDependencies());
}

 void OCTFunction_IFunction::Arguments(OCNaroWrappers::OCTDF_LabelList^ args)
{
  ((TFunction_IFunction*)nativeHandle)->Arguments(*((TDF_LabelList*)args->Handle));
}

 void OCTFunction_IFunction::Results(OCNaroWrappers::OCTDF_LabelList^ res)
{
  ((TFunction_IFunction*)nativeHandle)->Results(*((TDF_LabelList*)res->Handle));
}

 void OCTFunction_IFunction::GetPrevious(OCNaroWrappers::OCTDF_LabelList^ prev)
{
  ((TFunction_IFunction*)nativeHandle)->GetPrevious(*((TDF_LabelList*)prev->Handle));
}

 void OCTFunction_IFunction::GetNext(OCNaroWrappers::OCTDF_LabelList^ prev)
{
  ((TFunction_IFunction*)nativeHandle)->GetNext(*((TDF_LabelList*)prev->Handle));
}

 OCTFunction_ExecutionStatus OCTFunction_IFunction::GetStatus()
{
  return (OCTFunction_ExecutionStatus)(((TFunction_IFunction*)nativeHandle)->GetStatus());
}

 void OCTFunction_IFunction::SetStatus(OCTFunction_ExecutionStatus status)
{
  ((TFunction_IFunction*)nativeHandle)->SetStatus((TFunction_ExecutionStatus)status);
}

OCTFunction_DoubleMapOfIntegerLabel^ OCTFunction_IFunction::GetAllFunctions()
{
  TFunction_DoubleMapOfIntegerLabel* tmp = new TFunction_DoubleMapOfIntegerLabel(0);
  *tmp = ((TFunction_IFunction*)nativeHandle)->GetAllFunctions();
  return gcnew OCTFunction_DoubleMapOfIntegerLabel(tmp);
}

OCTFunction_Logbook^ OCTFunction_IFunction::GetLogbook()
{
  TFunction_Logbook* tmp = new TFunction_Logbook();
  *tmp = ((TFunction_IFunction*)nativeHandle)->GetLogbook();
  return gcnew OCTFunction_Logbook(tmp);
}

OCTFunction_Driver^ OCTFunction_IFunction::GetDriver(Standard_Integer thread)
{
  Handle(TFunction_Driver) tmp = ((TFunction_IFunction*)nativeHandle)->GetDriver(thread);
  return gcnew OCTFunction_Driver(&tmp);
}

OCTFunction_GraphNode^ OCTFunction_IFunction::GetGraphNode()
{
  Handle(TFunction_GraphNode) tmp = ((TFunction_IFunction*)nativeHandle)->GetGraphNode();
  return gcnew OCTFunction_GraphNode(&tmp);
}


