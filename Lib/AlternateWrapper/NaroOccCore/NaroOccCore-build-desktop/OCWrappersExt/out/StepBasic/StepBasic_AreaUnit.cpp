// File generated by CPPExt (CPP file)
//

#include "StepBasic_AreaUnit.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepBasic_AreaUnit::OCStepBasic_AreaUnit(Handle(StepBasic_AreaUnit)* nativeHandle) : OCStepBasic_NamedUnit((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_AreaUnit(*nativeHandle);
}

OCStepBasic_AreaUnit::OCStepBasic_AreaUnit() : OCStepBasic_NamedUnit((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_AreaUnit(new StepBasic_AreaUnit());
}


