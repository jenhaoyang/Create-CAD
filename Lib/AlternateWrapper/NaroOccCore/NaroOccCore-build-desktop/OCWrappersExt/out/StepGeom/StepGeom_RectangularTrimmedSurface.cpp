// File generated by CPPExt (CPP file)
//

#include "StepGeom_RectangularTrimmedSurface.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_Surface.h"


using namespace OCNaroWrappers;

OCStepGeom_RectangularTrimmedSurface::OCStepGeom_RectangularTrimmedSurface(StepGeom_RectangularTrimmedSurface* nativeHandle) : OCStepGeom_BoundedSurface((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_RectangularTrimmedSurface::OCStepGeom_RectangularTrimmedSurface() : OCStepGeom_BoundedSurface((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_RectangularTrimmedSurface();
}

 void OCStepGeom_RectangularTrimmedSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepGeom_RectangularTrimmedSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Surface^ aBasisSurface, Standard_Real aU1, Standard_Real aU2, Standard_Real aV1, Standard_Real aV2, System::Boolean aUsense, System::Boolean aVsense)
{
  ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Surface*)aBasisSurface->Handle), aU1, aU2, aV1, aV2, OCConverter::BooleanToStandardBoolean(aUsense), OCConverter::BooleanToStandardBoolean(aVsense));
}

 void OCStepGeom_RectangularTrimmedSurface::SetBasisSurface(OCNaroWrappers::OCStepGeom_Surface^ aBasisSurface)
{
  ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->SetBasisSurface(*((StepGeom_Surface*)aBasisSurface->Handle));
}

OCStepGeom_Surface^ OCStepGeom_RectangularTrimmedSurface::BasisSurface()
{
  StepGeom_Surface* tmp = new StepGeom_Surface();
  *tmp = ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->BasisSurface();
  return gcnew OCStepGeom_Surface(tmp);
}

 void OCStepGeom_RectangularTrimmedSurface::SetU1(Standard_Real aU1)
{
  ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->SetU1(aU1);
}

 Standard_Real OCStepGeom_RectangularTrimmedSurface::U1()
{
  return ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->U1();
}

 void OCStepGeom_RectangularTrimmedSurface::SetU2(Standard_Real aU2)
{
  ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->SetU2(aU2);
}

 Standard_Real OCStepGeom_RectangularTrimmedSurface::U2()
{
  return ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->U2();
}

 void OCStepGeom_RectangularTrimmedSurface::SetV1(Standard_Real aV1)
{
  ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->SetV1(aV1);
}

 Standard_Real OCStepGeom_RectangularTrimmedSurface::V1()
{
  return ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->V1();
}

 void OCStepGeom_RectangularTrimmedSurface::SetV2(Standard_Real aV2)
{
  ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->SetV2(aV2);
}

 Standard_Real OCStepGeom_RectangularTrimmedSurface::V2()
{
  return ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->V2();
}

 void OCStepGeom_RectangularTrimmedSurface::SetUsense(System::Boolean aUsense)
{
  ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->SetUsense(OCConverter::BooleanToStandardBoolean(aUsense));
}

 System::Boolean OCStepGeom_RectangularTrimmedSurface::Usense()
{
  return OCConverter::StandardBooleanToBoolean(((StepGeom_RectangularTrimmedSurface*)nativeHandle)->Usense());
}

 void OCStepGeom_RectangularTrimmedSurface::SetVsense(System::Boolean aVsense)
{
  ((StepGeom_RectangularTrimmedSurface*)nativeHandle)->SetVsense(OCConverter::BooleanToStandardBoolean(aVsense));
}

 System::Boolean OCStepGeom_RectangularTrimmedSurface::Vsense()
{
  return OCConverter::StandardBooleanToBoolean(((StepGeom_RectangularTrimmedSurface*)nativeHandle)->Vsense());
}


