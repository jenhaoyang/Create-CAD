// File generated by CPPExt (CPP file)
//

#include "StepData_FileRecognizer.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCStepData_FileRecognizer::OCStepData_FileRecognizer(Handle(StepData_FileRecognizer)* nativeHandle) : OCStandard_Transient((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepData_FileRecognizer(*nativeHandle);
}

OCStepData_FileRecognizer::OCStepData_FileRecognizer() : OCStandard_Transient((OCDummy^)nullptr)

{}

 System::Boolean OCStepData_FileRecognizer::Evaluate(OCNaroWrappers::OCTCollection_AsciiString^ akey, OCNaroWrappers::OCStandard_Transient^ res)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepData_FileRecognizer*)nativeHandle))->Evaluate(*((TCollection_AsciiString*)akey->Handle), *((Handle_Standard_Transient*)res->Handle)));
}

OCStandard_Transient^ OCStepData_FileRecognizer::Result()
{
  Handle(Standard_Transient) tmp = (*((Handle_StepData_FileRecognizer*)nativeHandle))->Result();
  return gcnew OCStandard_Transient(&tmp);
}

 void OCStepData_FileRecognizer::Add(OCNaroWrappers::OCStepData_FileRecognizer^ reco)
{
  (*((Handle_StepData_FileRecognizer*)nativeHandle))->Add(*((Handle_StepData_FileRecognizer*)reco->Handle));
}


