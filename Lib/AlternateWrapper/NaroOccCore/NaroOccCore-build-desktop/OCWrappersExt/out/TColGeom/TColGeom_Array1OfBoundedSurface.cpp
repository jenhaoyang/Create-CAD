// File generated by CPPExt (CPP file)
//

#include "TColGeom_Array1OfBoundedSurface.h"
#include "../Converter.h"
#include "../Geom/Geom_BoundedSurface.h"


using namespace OCNaroWrappers;

OCTColGeom_Array1OfBoundedSurface::OCTColGeom_Array1OfBoundedSurface(TColGeom_Array1OfBoundedSurface* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColGeom_Array1OfBoundedSurface::OCTColGeom_Array1OfBoundedSurface(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom_Array1OfBoundedSurface(Low, Up);
}

OCTColGeom_Array1OfBoundedSurface::OCTColGeom_Array1OfBoundedSurface(OCNaroWrappers::OCGeom_BoundedSurface^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom_Array1OfBoundedSurface(*((Handle_Geom_BoundedSurface*)Item->Handle), Low, Up);
}

 void OCTColGeom_Array1OfBoundedSurface::Init(OCNaroWrappers::OCGeom_BoundedSurface^ V)
{
  ((TColGeom_Array1OfBoundedSurface*)nativeHandle)->Init(*((Handle_Geom_BoundedSurface*)V->Handle));
}

 System::Boolean OCTColGeom_Array1OfBoundedSurface::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TColGeom_Array1OfBoundedSurface*)nativeHandle)->IsAllocated());
}

OCTColGeom_Array1OfBoundedSurface^ OCTColGeom_Array1OfBoundedSurface::Assign(OCNaroWrappers::OCTColGeom_Array1OfBoundedSurface^ Other)
{
  TColGeom_Array1OfBoundedSurface* tmp = new TColGeom_Array1OfBoundedSurface(0, 0);
  *tmp = ((TColGeom_Array1OfBoundedSurface*)nativeHandle)->Assign(*((TColGeom_Array1OfBoundedSurface*)Other->Handle));
  return gcnew OCTColGeom_Array1OfBoundedSurface(tmp);
}

 Standard_Integer OCTColGeom_Array1OfBoundedSurface::Length()
{
  return ((TColGeom_Array1OfBoundedSurface*)nativeHandle)->Length();
}

 Standard_Integer OCTColGeom_Array1OfBoundedSurface::Lower()
{
  return ((TColGeom_Array1OfBoundedSurface*)nativeHandle)->Lower();
}

 Standard_Integer OCTColGeom_Array1OfBoundedSurface::Upper()
{
  return ((TColGeom_Array1OfBoundedSurface*)nativeHandle)->Upper();
}

 void OCTColGeom_Array1OfBoundedSurface::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom_BoundedSurface^ Value)
{
  ((TColGeom_Array1OfBoundedSurface*)nativeHandle)->SetValue(Index, *((Handle_Geom_BoundedSurface*)Value->Handle));
}

OCGeom_BoundedSurface^ OCTColGeom_Array1OfBoundedSurface::Value(Standard_Integer Index)
{
  Handle(Geom_BoundedSurface) tmp = ((TColGeom_Array1OfBoundedSurface*)nativeHandle)->Value(Index);
  return gcnew OCGeom_BoundedSurface(&tmp);
}

OCGeom_BoundedSurface^ OCTColGeom_Array1OfBoundedSurface::ChangeValue(Standard_Integer Index)
{
  Handle(Geom_BoundedSurface) tmp = ((TColGeom_Array1OfBoundedSurface*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGeom_BoundedSurface(&tmp);
}

