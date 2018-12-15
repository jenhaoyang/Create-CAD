// File generated by CPPExt (CPP file)
//

#include "StepShape_Array1OfFaceBound.h"
#include "../Converter.h"
#include "StepShape_FaceBound.h"


using namespace OCNaroWrappers;

OCStepShape_Array1OfFaceBound::OCStepShape_Array1OfFaceBound(StepShape_Array1OfFaceBound* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepShape_Array1OfFaceBound::OCStepShape_Array1OfFaceBound(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepShape_Array1OfFaceBound(Low, Up);
}

OCStepShape_Array1OfFaceBound::OCStepShape_Array1OfFaceBound(OCNaroWrappers::OCStepShape_FaceBound^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepShape_Array1OfFaceBound(*((StepShape_FaceBound*)Item->Handle), Low, Up);
}

 void OCStepShape_Array1OfFaceBound::Init(OCNaroWrappers::OCStepShape_FaceBound^ V)
{
  ((StepShape_Array1OfFaceBound*)nativeHandle)->Init(*((StepShape_FaceBound*)V->Handle));
}

 System::Boolean OCStepShape_Array1OfFaceBound::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepShape_Array1OfFaceBound*)nativeHandle)->IsAllocated());
}

OCStepShape_Array1OfFaceBound^ OCStepShape_Array1OfFaceBound::Assign(OCNaroWrappers::OCStepShape_Array1OfFaceBound^ Other)
{
  StepShape_Array1OfFaceBound* tmp = new StepShape_Array1OfFaceBound(0, 0);
  *tmp = ((StepShape_Array1OfFaceBound*)nativeHandle)->Assign(*((StepShape_Array1OfFaceBound*)Other->Handle));
  return gcnew OCStepShape_Array1OfFaceBound(tmp);
}

 Standard_Integer OCStepShape_Array1OfFaceBound::Length()
{
  return ((StepShape_Array1OfFaceBound*)nativeHandle)->Length();
}

 Standard_Integer OCStepShape_Array1OfFaceBound::Lower()
{
  return ((StepShape_Array1OfFaceBound*)nativeHandle)->Lower();
}

 Standard_Integer OCStepShape_Array1OfFaceBound::Upper()
{
  return ((StepShape_Array1OfFaceBound*)nativeHandle)->Upper();
}

 void OCStepShape_Array1OfFaceBound::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepShape_FaceBound^ Value)
{
  ((StepShape_Array1OfFaceBound*)nativeHandle)->SetValue(Index, *((StepShape_FaceBound*)Value->Handle));
}

OCStepShape_FaceBound^ OCStepShape_Array1OfFaceBound::Value(Standard_Integer Index)
{
  StepShape_FaceBound* tmp = new StepShape_FaceBound();
  *tmp = ((StepShape_Array1OfFaceBound*)nativeHandle)->Value(Index);
  return gcnew OCStepShape_FaceBound(tmp);
}

OCStepShape_FaceBound^ OCStepShape_Array1OfFaceBound::ChangeValue(Standard_Integer Index)
{
  StepShape_FaceBound* tmp = new StepShape_FaceBound();
  *tmp = ((StepShape_Array1OfFaceBound*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepShape_FaceBound(tmp);
}


