// File generated by CPPExt (CPP file)
//

#include "StepBasic_VolumeUnit.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepBasic_VolumeUnit::OCStepBasic_VolumeUnit(Handle(StepBasic_VolumeUnit)* nativeHandle) : OCStepBasic_NamedUnit((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_VolumeUnit(*nativeHandle);
}

OCStepBasic_VolumeUnit::OCStepBasic_VolumeUnit() : OCStepBasic_NamedUnit((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_VolumeUnit(new StepBasic_VolumeUnit());
}


