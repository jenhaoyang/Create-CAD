// File generated by CPPExt (CPP file)
//

#include "StepGeom_CurveReplica.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_Curve.h"
#include "StepGeom_CartesianTransformationOperator.h"


using namespace OCNaroWrappers;

OCStepGeom_CurveReplica::OCStepGeom_CurveReplica(StepGeom_CurveReplica* nativeHandle) : OCStepGeom_Curve((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_CurveReplica::OCStepGeom_CurveReplica() : OCStepGeom_Curve((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_CurveReplica();
}

 void OCStepGeom_CurveReplica::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepGeom_CurveReplica*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepGeom_CurveReplica::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Curve^ aParentCurve, OCNaroWrappers::OCStepGeom_CartesianTransformationOperator^ aTransformation)
{
  ((StepGeom_CurveReplica*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Curve*)aParentCurve->Handle), *((StepGeom_CartesianTransformationOperator*)aTransformation->Handle));
}

 void OCStepGeom_CurveReplica::SetParentCurve(OCNaroWrappers::OCStepGeom_Curve^ aParentCurve)
{
  ((StepGeom_CurveReplica*)nativeHandle)->SetParentCurve(*((StepGeom_Curve*)aParentCurve->Handle));
}

OCStepGeom_Curve^ OCStepGeom_CurveReplica::ParentCurve()
{
  StepGeom_Curve* tmp = new StepGeom_Curve();
  *tmp = ((StepGeom_CurveReplica*)nativeHandle)->ParentCurve();
  return gcnew OCStepGeom_Curve(tmp);
}

 void OCStepGeom_CurveReplica::SetTransformation(OCNaroWrappers::OCStepGeom_CartesianTransformationOperator^ aTransformation)
{
  ((StepGeom_CurveReplica*)nativeHandle)->SetTransformation(*((StepGeom_CartesianTransformationOperator*)aTransformation->Handle));
}

OCStepGeom_CartesianTransformationOperator^ OCStepGeom_CurveReplica::Transformation()
{
  StepGeom_CartesianTransformationOperator* tmp = new StepGeom_CartesianTransformationOperator();
  *tmp = ((StepGeom_CurveReplica*)nativeHandle)->Transformation();
  return gcnew OCStepGeom_CartesianTransformationOperator(tmp);
}


