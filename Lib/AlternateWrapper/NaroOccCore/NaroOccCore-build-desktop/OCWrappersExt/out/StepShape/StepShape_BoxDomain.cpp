// File generated by CPPExt (CPP file)
//

#include "StepShape_BoxDomain.h"
#include "../Converter.h"
#include "../StepGeom/StepGeom_CartesianPoint.h"


using namespace OCNaroWrappers;

OCStepShape_BoxDomain::OCStepShape_BoxDomain(Handle(StepShape_BoxDomain)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepShape_BoxDomain(*nativeHandle);
}

OCStepShape_BoxDomain::OCStepShape_BoxDomain() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepShape_BoxDomain(new StepShape_BoxDomain());
}

 void OCStepShape_BoxDomain::Init(OCNaroWrappers::OCStepGeom_CartesianPoint^ aCorner, Standard_Real aXlength, Standard_Real aYlength, Standard_Real aZlength)
{
  (*((Handle_StepShape_BoxDomain*)nativeHandle))->Init(*((StepGeom_CartesianPoint*)aCorner->Handle), aXlength, aYlength, aZlength);
}

 void OCStepShape_BoxDomain::SetCorner(OCNaroWrappers::OCStepGeom_CartesianPoint^ aCorner)
{
  (*((Handle_StepShape_BoxDomain*)nativeHandle))->SetCorner(*((StepGeom_CartesianPoint*)aCorner->Handle));
}

OCStepGeom_CartesianPoint^ OCStepShape_BoxDomain::Corner()
{
  StepGeom_CartesianPoint* tmp = new StepGeom_CartesianPoint();
  *tmp = (*((Handle_StepShape_BoxDomain*)nativeHandle))->Corner();
  return gcnew OCStepGeom_CartesianPoint(tmp);
}

 void OCStepShape_BoxDomain::SetXlength(Standard_Real aXlength)
{
  (*((Handle_StepShape_BoxDomain*)nativeHandle))->SetXlength(aXlength);
}

 Standard_Real OCStepShape_BoxDomain::Xlength()
{
  return (*((Handle_StepShape_BoxDomain*)nativeHandle))->Xlength();
}

 void OCStepShape_BoxDomain::SetYlength(Standard_Real aYlength)
{
  (*((Handle_StepShape_BoxDomain*)nativeHandle))->SetYlength(aYlength);
}

 Standard_Real OCStepShape_BoxDomain::Ylength()
{
  return (*((Handle_StepShape_BoxDomain*)nativeHandle))->Ylength();
}

 void OCStepShape_BoxDomain::SetZlength(Standard_Real aZlength)
{
  (*((Handle_StepShape_BoxDomain*)nativeHandle))->SetZlength(aZlength);
}

 Standard_Real OCStepShape_BoxDomain::Zlength()
{
  return (*((Handle_StepShape_BoxDomain*)nativeHandle))->Zlength();
}


