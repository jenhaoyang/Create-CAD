// File generated by CPPExt (CPP file)
//

#include "StepBasic_SiUnitAndMassUnit.h"
#include "../Converter.h"
#include "StepBasic_MassUnit.h"
#include "StepBasic_DimensionalExponents.h"


using namespace OCNaroWrappers;

OCStepBasic_SiUnitAndMassUnit::OCStepBasic_SiUnitAndMassUnit(Handle(StepBasic_SiUnitAndMassUnit)* nativeHandle) : OCStepBasic_SiUnit((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_SiUnitAndMassUnit(*nativeHandle);
}

OCStepBasic_SiUnitAndMassUnit::OCStepBasic_SiUnitAndMassUnit() : OCStepBasic_SiUnit((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_SiUnitAndMassUnit(new StepBasic_SiUnitAndMassUnit());
}

 void OCStepBasic_SiUnitAndMassUnit::Init(OCNaroWrappers::OCStepBasic_DimensionalExponents^ aDimensions)
{
  (*((Handle_StepBasic_SiUnitAndMassUnit*)nativeHandle))->Init(*((Handle_StepBasic_DimensionalExponents*)aDimensions->Handle));
}

 void OCStepBasic_SiUnitAndMassUnit::Init(System::Boolean hasAprefix, OCStepBasic_SiPrefix aPrefix, OCStepBasic_SiUnitName aName)
{
  (*((Handle_StepBasic_SiUnitAndMassUnit*)nativeHandle))->Init(OCConverter::BooleanToStandardBoolean(hasAprefix), (StepBasic_SiPrefix)aPrefix, (StepBasic_SiUnitName)aName);
}

 void OCStepBasic_SiUnitAndMassUnit::SetMassUnit(OCNaroWrappers::OCStepBasic_MassUnit^ aMassUnit)
{
  (*((Handle_StepBasic_SiUnitAndMassUnit*)nativeHandle))->SetMassUnit(*((Handle_StepBasic_MassUnit*)aMassUnit->Handle));
}

OCStepBasic_MassUnit^ OCStepBasic_SiUnitAndMassUnit::MassUnit()
{
  Handle(StepBasic_MassUnit) tmp = (*((Handle_StepBasic_SiUnitAndMassUnit*)nativeHandle))->MassUnit();
  return gcnew OCStepBasic_MassUnit(&tmp);
}


