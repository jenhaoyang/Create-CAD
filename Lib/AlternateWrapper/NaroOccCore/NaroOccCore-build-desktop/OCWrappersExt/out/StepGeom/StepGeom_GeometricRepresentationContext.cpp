// File generated by CPPExt (CPP file)
//

#include "StepGeom_GeometricRepresentationContext.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepGeom_GeometricRepresentationContext::OCStepGeom_GeometricRepresentationContext(StepGeom_GeometricRepresentationContext* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_GeometricRepresentationContext::OCStepGeom_GeometricRepresentationContext() 
{
  nativeHandle = new StepGeom_GeometricRepresentationContext();
}

 void OCStepGeom_GeometricRepresentationContext::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aContextIdentifier, OCNaroWrappers::OCTCollection_HAsciiString^ aContextType)
{
  ((StepGeom_GeometricRepresentationContext*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aContextIdentifier->Handle), *((Handle_TCollection_HAsciiString*)aContextType->Handle));
}

 void OCStepGeom_GeometricRepresentationContext::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aContextIdentifier, OCNaroWrappers::OCTCollection_HAsciiString^ aContextType, Standard_Integer aCoordinateSpaceDimension)
{
  ((StepGeom_GeometricRepresentationContext*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aContextIdentifier->Handle), *((Handle_TCollection_HAsciiString*)aContextType->Handle), aCoordinateSpaceDimension);
}

 void OCStepGeom_GeometricRepresentationContext::SetCoordinateSpaceDimension(Standard_Integer aCoordinateSpaceDimension)
{
  ((StepGeom_GeometricRepresentationContext*)nativeHandle)->SetCoordinateSpaceDimension(aCoordinateSpaceDimension);
}

 Standard_Integer OCStepGeom_GeometricRepresentationContext::CoordinateSpaceDimension()
{
  return ((StepGeom_GeometricRepresentationContext*)nativeHandle)->CoordinateSpaceDimension();
}


