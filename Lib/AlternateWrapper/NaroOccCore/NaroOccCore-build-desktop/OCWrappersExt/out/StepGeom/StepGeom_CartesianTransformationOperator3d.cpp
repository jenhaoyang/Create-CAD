// File generated by CPPExt (CPP file)
//

#include "StepGeom_CartesianTransformationOperator3d.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_Direction.h"
#include "StepGeom_CartesianPoint.h"


using namespace OCNaroWrappers;

OCStepGeom_CartesianTransformationOperator3d::OCStepGeom_CartesianTransformationOperator3d(StepGeom_CartesianTransformationOperator3d* nativeHandle) : OCStepGeom_CartesianTransformationOperator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_CartesianTransformationOperator3d::OCStepGeom_CartesianTransformationOperator3d() : OCStepGeom_CartesianTransformationOperator((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_CartesianTransformationOperator3d();
}

 void OCStepGeom_CartesianTransformationOperator3d::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasAaxis1, OCNaroWrappers::OCStepGeom_Direction^ aAxis1, System::Boolean hasAaxis2, OCNaroWrappers::OCStepGeom_Direction^ aAxis2, OCNaroWrappers::OCStepGeom_CartesianPoint^ aLocalOrigin, System::Boolean hasAscale, Standard_Real aScale)
{
  ((StepGeom_CartesianTransformationOperator3d*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), OCConverter::BooleanToStandardBoolean(hasAaxis1), *((StepGeom_Direction*)aAxis1->Handle), OCConverter::BooleanToStandardBoolean(hasAaxis2), *((StepGeom_Direction*)aAxis2->Handle), *((StepGeom_CartesianPoint*)aLocalOrigin->Handle), OCConverter::BooleanToStandardBoolean(hasAscale), aScale);
}

 void OCStepGeom_CartesianTransformationOperator3d::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasAaxis1, OCNaroWrappers::OCStepGeom_Direction^ aAxis1, System::Boolean hasAaxis2, OCNaroWrappers::OCStepGeom_Direction^ aAxis2, OCNaroWrappers::OCStepGeom_CartesianPoint^ aLocalOrigin, System::Boolean hasAscale, Standard_Real aScale, System::Boolean hasAaxis3, OCNaroWrappers::OCStepGeom_Direction^ aAxis3)
{
  ((StepGeom_CartesianTransformationOperator3d*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), OCConverter::BooleanToStandardBoolean(hasAaxis1), *((StepGeom_Direction*)aAxis1->Handle), OCConverter::BooleanToStandardBoolean(hasAaxis2), *((StepGeom_Direction*)aAxis2->Handle), *((StepGeom_CartesianPoint*)aLocalOrigin->Handle), OCConverter::BooleanToStandardBoolean(hasAscale), aScale, OCConverter::BooleanToStandardBoolean(hasAaxis3), *((StepGeom_Direction*)aAxis3->Handle));
}

 void OCStepGeom_CartesianTransformationOperator3d::SetAxis3(OCNaroWrappers::OCStepGeom_Direction^ aAxis3)
{
  ((StepGeom_CartesianTransformationOperator3d*)nativeHandle)->SetAxis3(*((StepGeom_Direction*)aAxis3->Handle));
}

 void OCStepGeom_CartesianTransformationOperator3d::UnSetAxis3()
{
  ((StepGeom_CartesianTransformationOperator3d*)nativeHandle)->UnSetAxis3();
}

OCStepGeom_Direction^ OCStepGeom_CartesianTransformationOperator3d::Axis3()
{
  StepGeom_Direction* tmp = new StepGeom_Direction();
  *tmp = ((StepGeom_CartesianTransformationOperator3d*)nativeHandle)->Axis3();
  return gcnew OCStepGeom_Direction(tmp);
}

 System::Boolean OCStepGeom_CartesianTransformationOperator3d::HasAxis3()
{
  return OCConverter::StandardBooleanToBoolean(((StepGeom_CartesianTransformationOperator3d*)nativeHandle)->HasAxis3());
}


