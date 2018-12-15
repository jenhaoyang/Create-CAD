// File generated by CPPExt (CPP file)
//

#include "StepBasic_Group.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepBasic_Group::OCStepBasic_Group(Handle(StepBasic_Group)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_Group(*nativeHandle);
}

OCStepBasic_Group::OCStepBasic_Group() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_Group(new StepBasic_Group());
}

 void OCStepBasic_Group::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasDescription, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription)
{
  (*((Handle_StepBasic_Group*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), OCConverter::BooleanToStandardBoolean(hasDescription), *((Handle_TCollection_HAsciiString*)aDescription->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_Group::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_Group*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_Group::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name)
{
  (*((Handle_StepBasic_Group*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)Name->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_Group::Description()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_Group*)nativeHandle))->Description();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_Group::SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ Description)
{
  (*((Handle_StepBasic_Group*)nativeHandle))->SetDescription(*((Handle_TCollection_HAsciiString*)Description->Handle));
}

 System::Boolean OCStepBasic_Group::HasDescription()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepBasic_Group*)nativeHandle))->HasDescription());
}


