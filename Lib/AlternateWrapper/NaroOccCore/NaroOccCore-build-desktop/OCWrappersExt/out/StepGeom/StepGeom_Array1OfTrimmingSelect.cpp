// File generated by CPPExt (CPP file)
//

#include "StepGeom_Array1OfTrimmingSelect.h"
#include "../Converter.h"
#include "StepGeom_TrimmingSelect.h"


using namespace OCNaroWrappers;

OCStepGeom_Array1OfTrimmingSelect::OCStepGeom_Array1OfTrimmingSelect(StepGeom_Array1OfTrimmingSelect* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_Array1OfTrimmingSelect::OCStepGeom_Array1OfTrimmingSelect(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepGeom_Array1OfTrimmingSelect(Low, Up);
}

OCStepGeom_Array1OfTrimmingSelect::OCStepGeom_Array1OfTrimmingSelect(OCNaroWrappers::OCStepGeom_TrimmingSelect^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepGeom_Array1OfTrimmingSelect(*((StepGeom_TrimmingSelect*)Item->Handle), Low, Up);
}

 void OCStepGeom_Array1OfTrimmingSelect::Init(OCNaroWrappers::OCStepGeom_TrimmingSelect^ V)
{
  ((StepGeom_Array1OfTrimmingSelect*)nativeHandle)->Init(*((StepGeom_TrimmingSelect*)V->Handle));
}

 System::Boolean OCStepGeom_Array1OfTrimmingSelect::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepGeom_Array1OfTrimmingSelect*)nativeHandle)->IsAllocated());
}

OCStepGeom_Array1OfTrimmingSelect^ OCStepGeom_Array1OfTrimmingSelect::Assign(OCNaroWrappers::OCStepGeom_Array1OfTrimmingSelect^ Other)
{
  StepGeom_Array1OfTrimmingSelect* tmp = new StepGeom_Array1OfTrimmingSelect(0, 0);
  *tmp = ((StepGeom_Array1OfTrimmingSelect*)nativeHandle)->Assign(*((StepGeom_Array1OfTrimmingSelect*)Other->Handle));
  return gcnew OCStepGeom_Array1OfTrimmingSelect(tmp);
}

 Standard_Integer OCStepGeom_Array1OfTrimmingSelect::Length()
{
  return ((StepGeom_Array1OfTrimmingSelect*)nativeHandle)->Length();
}

 Standard_Integer OCStepGeom_Array1OfTrimmingSelect::Lower()
{
  return ((StepGeom_Array1OfTrimmingSelect*)nativeHandle)->Lower();
}

 Standard_Integer OCStepGeom_Array1OfTrimmingSelect::Upper()
{
  return ((StepGeom_Array1OfTrimmingSelect*)nativeHandle)->Upper();
}

 void OCStepGeom_Array1OfTrimmingSelect::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepGeom_TrimmingSelect^ Value)
{
  ((StepGeom_Array1OfTrimmingSelect*)nativeHandle)->SetValue(Index, *((StepGeom_TrimmingSelect*)Value->Handle));
}

OCStepGeom_TrimmingSelect^ OCStepGeom_Array1OfTrimmingSelect::Value(Standard_Integer Index)
{
  StepGeom_TrimmingSelect* tmp = new StepGeom_TrimmingSelect();
  *tmp = ((StepGeom_Array1OfTrimmingSelect*)nativeHandle)->Value(Index);
  return gcnew OCStepGeom_TrimmingSelect(tmp);
}

OCStepGeom_TrimmingSelect^ OCStepGeom_Array1OfTrimmingSelect::ChangeValue(Standard_Integer Index)
{
  StepGeom_TrimmingSelect* tmp = new StepGeom_TrimmingSelect();
  *tmp = ((StepGeom_Array1OfTrimmingSelect*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepGeom_TrimmingSelect(tmp);
}


