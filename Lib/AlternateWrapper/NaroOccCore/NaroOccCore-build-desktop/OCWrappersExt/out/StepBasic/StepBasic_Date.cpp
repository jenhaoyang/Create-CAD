// File generated by CPPExt (CPP file)
//

#include "StepBasic_Date.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepBasic_Date::OCStepBasic_Date(Handle(StepBasic_Date)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_Date(*nativeHandle);
}

OCStepBasic_Date::OCStepBasic_Date() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_Date(new StepBasic_Date());
}

 void OCStepBasic_Date::Init(Standard_Integer aYearComponent)
{
  (*((Handle_StepBasic_Date*)nativeHandle))->Init(aYearComponent);
}

 void OCStepBasic_Date::SetYearComponent(Standard_Integer aYearComponent)
{
  (*((Handle_StepBasic_Date*)nativeHandle))->SetYearComponent(aYearComponent);
}

 Standard_Integer OCStepBasic_Date::YearComponent()
{
  return (*((Handle_StepBasic_Date*)nativeHandle))->YearComponent();
}


