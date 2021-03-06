// File generated by CPPExt (CPP file)
//

#include "StepGeom_ConicalSurface.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_Axis2Placement3d.h"


using namespace OCNaroWrappers;

OCStepGeom_ConicalSurface::OCStepGeom_ConicalSurface(StepGeom_ConicalSurface* nativeHandle) : OCStepGeom_ElementarySurface((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_ConicalSurface::OCStepGeom_ConicalSurface() : OCStepGeom_ElementarySurface((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_ConicalSurface();
}

 void OCStepGeom_ConicalSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition)
{
  ((StepGeom_ConicalSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Axis2Placement3d*)aPosition->Handle));
}

 void OCStepGeom_ConicalSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition, Standard_Real aRadius, Standard_Real aSemiAngle)
{
  ((StepGeom_ConicalSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Axis2Placement3d*)aPosition->Handle), aRadius, aSemiAngle);
}

 void OCStepGeom_ConicalSurface::SetRadius(Standard_Real aRadius)
{
  ((StepGeom_ConicalSurface*)nativeHandle)->SetRadius(aRadius);
}

 Standard_Real OCStepGeom_ConicalSurface::Radius()
{
  return ((StepGeom_ConicalSurface*)nativeHandle)->Radius();
}

 void OCStepGeom_ConicalSurface::SetSemiAngle(Standard_Real aSemiAngle)
{
  ((StepGeom_ConicalSurface*)nativeHandle)->SetSemiAngle(aSemiAngle);
}

 Standard_Real OCStepGeom_ConicalSurface::SemiAngle()
{
  return ((StepGeom_ConicalSurface*)nativeHandle)->SemiAngle();
}


