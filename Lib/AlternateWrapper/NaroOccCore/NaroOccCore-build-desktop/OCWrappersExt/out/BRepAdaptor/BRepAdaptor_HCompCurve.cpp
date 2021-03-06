// File generated by CPPExt (CPP file)
//

#include "BRepAdaptor_HCompCurve.h"
#include "../Converter.h"
#include "BRepAdaptor_CompCurve.h"
#include "../Adaptor3d/Adaptor3d_Curve.h"


using namespace OCNaroWrappers;

OCBRepAdaptor_HCompCurve::OCBRepAdaptor_HCompCurve(Handle(BRepAdaptor_HCompCurve)* nativeHandle) : OCAdaptor3d_HCurve((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepAdaptor_HCompCurve(*nativeHandle);
}

OCBRepAdaptor_HCompCurve::OCBRepAdaptor_HCompCurve() : OCAdaptor3d_HCurve((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepAdaptor_HCompCurve(new BRepAdaptor_HCompCurve());
}

OCBRepAdaptor_HCompCurve::OCBRepAdaptor_HCompCurve(OCNaroWrappers::OCBRepAdaptor_CompCurve^ C) : OCAdaptor3d_HCurve((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepAdaptor_HCompCurve(new BRepAdaptor_HCompCurve(*((BRepAdaptor_CompCurve*)C->Handle)));
}

 void OCBRepAdaptor_HCompCurve::Set(OCNaroWrappers::OCBRepAdaptor_CompCurve^ C)
{
  (*((Handle_BRepAdaptor_HCompCurve*)nativeHandle))->Set(*((BRepAdaptor_CompCurve*)C->Handle));
}

OCAdaptor3d_Curve^ OCBRepAdaptor_HCompCurve::Curve()
{
  Adaptor3d_Curve* tmp = new Adaptor3d_Curve();
  *tmp = (*((Handle_BRepAdaptor_HCompCurve*)nativeHandle))->Curve();
  return gcnew OCAdaptor3d_Curve(tmp);
}

OCAdaptor3d_Curve^ OCBRepAdaptor_HCompCurve::GetCurve()
{
  Adaptor3d_Curve* tmp = new Adaptor3d_Curve();
  *tmp = (*((Handle_BRepAdaptor_HCompCurve*)nativeHandle))->GetCurve();
  return gcnew OCAdaptor3d_Curve(tmp);
}

OCBRepAdaptor_CompCurve^ OCBRepAdaptor_HCompCurve::ChangeCurve()
{
  BRepAdaptor_CompCurve* tmp = new BRepAdaptor_CompCurve();
  *tmp = (*((Handle_BRepAdaptor_HCompCurve*)nativeHandle))->ChangeCurve();
  return gcnew OCBRepAdaptor_CompCurve(tmp);
}


