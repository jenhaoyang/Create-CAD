// File generated by CPPExt (CPP file)
//

#include "TColGeom_HArray1OfBoundedCurve.h"
#include "../Converter.h"
#include "../Geom/Geom_BoundedCurve.h"
#include "TColGeom_Array1OfBoundedCurve.h"


using namespace OCNaroWrappers;

OCTColGeom_HArray1OfBoundedCurve::OCTColGeom_HArray1OfBoundedCurve(Handle(TColGeom_HArray1OfBoundedCurve)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColGeom_HArray1OfBoundedCurve(*nativeHandle);
}

OCTColGeom_HArray1OfBoundedCurve::OCTColGeom_HArray1OfBoundedCurve(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColGeom_HArray1OfBoundedCurve(new TColGeom_HArray1OfBoundedCurve(Low, Up));
}

OCTColGeom_HArray1OfBoundedCurve::OCTColGeom_HArray1OfBoundedCurve(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCGeom_BoundedCurve^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColGeom_HArray1OfBoundedCurve(new TColGeom_HArray1OfBoundedCurve(Low, Up, *((Handle_Geom_BoundedCurve*)V->Handle)));
}

 void OCTColGeom_HArray1OfBoundedCurve::Init(OCNaroWrappers::OCGeom_BoundedCurve^ V)
{
  (*((Handle_TColGeom_HArray1OfBoundedCurve*)nativeHandle))->Init(*((Handle_Geom_BoundedCurve*)V->Handle));
}

 Standard_Integer OCTColGeom_HArray1OfBoundedCurve::Length()
{
  return (*((Handle_TColGeom_HArray1OfBoundedCurve*)nativeHandle))->Length();
}

 Standard_Integer OCTColGeom_HArray1OfBoundedCurve::Lower()
{
  return (*((Handle_TColGeom_HArray1OfBoundedCurve*)nativeHandle))->Lower();
}

 Standard_Integer OCTColGeom_HArray1OfBoundedCurve::Upper()
{
  return (*((Handle_TColGeom_HArray1OfBoundedCurve*)nativeHandle))->Upper();
}

 void OCTColGeom_HArray1OfBoundedCurve::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom_BoundedCurve^ Value)
{
  (*((Handle_TColGeom_HArray1OfBoundedCurve*)nativeHandle))->SetValue(Index, *((Handle_Geom_BoundedCurve*)Value->Handle));
}

OCGeom_BoundedCurve^ OCTColGeom_HArray1OfBoundedCurve::Value(Standard_Integer Index)
{
  Handle(Geom_BoundedCurve) tmp = (*((Handle_TColGeom_HArray1OfBoundedCurve*)nativeHandle))->Value(Index);
  return gcnew OCGeom_BoundedCurve(&tmp);
}

OCGeom_BoundedCurve^ OCTColGeom_HArray1OfBoundedCurve::ChangeValue(Standard_Integer Index)
{
  Handle(Geom_BoundedCurve) tmp = (*((Handle_TColGeom_HArray1OfBoundedCurve*)nativeHandle))->ChangeValue(Index);
  return gcnew OCGeom_BoundedCurve(&tmp);
}

OCTColGeom_Array1OfBoundedCurve^ OCTColGeom_HArray1OfBoundedCurve::Array1()
{
  TColGeom_Array1OfBoundedCurve* tmp = new TColGeom_Array1OfBoundedCurve(0, 0);
  *tmp = (*((Handle_TColGeom_HArray1OfBoundedCurve*)nativeHandle))->Array1();
  return gcnew OCTColGeom_Array1OfBoundedCurve(tmp);
}

OCTColGeom_Array1OfBoundedCurve^ OCTColGeom_HArray1OfBoundedCurve::ChangeArray1()
{
  TColGeom_Array1OfBoundedCurve* tmp = new TColGeom_Array1OfBoundedCurve(0, 0);
  *tmp = (*((Handle_TColGeom_HArray1OfBoundedCurve*)nativeHandle))->ChangeArray1();
  return gcnew OCTColGeom_Array1OfBoundedCurve(tmp);
}


