// File generated by CPPExt (CPP file)
//

#include "ChFiDS_HElSpine.h"
#include "../Converter.h"
#include "ChFiDS_ElSpine.h"
#include "../Adaptor3d/Adaptor3d_Curve.h"


using namespace OCNaroWrappers;

OCChFiDS_HElSpine::OCChFiDS_HElSpine(Handle(ChFiDS_HElSpine)* nativeHandle) : OCAdaptor3d_HCurve((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_ChFiDS_HElSpine(*nativeHandle);
}

OCChFiDS_HElSpine::OCChFiDS_HElSpine() : OCAdaptor3d_HCurve((OCDummy^)nullptr)

{
  nativeHandle = new Handle_ChFiDS_HElSpine(new ChFiDS_HElSpine());
}

OCChFiDS_HElSpine::OCChFiDS_HElSpine(OCNaroWrappers::OCChFiDS_ElSpine^ C) : OCAdaptor3d_HCurve((OCDummy^)nullptr)

{
  nativeHandle = new Handle_ChFiDS_HElSpine(new ChFiDS_HElSpine(*((ChFiDS_ElSpine*)C->Handle)));
}

 void OCChFiDS_HElSpine::Set(OCNaroWrappers::OCChFiDS_ElSpine^ C)
{
  (*((Handle_ChFiDS_HElSpine*)nativeHandle))->Set(*((ChFiDS_ElSpine*)C->Handle));
}

OCAdaptor3d_Curve^ OCChFiDS_HElSpine::Curve()
{
  Adaptor3d_Curve* tmp = new Adaptor3d_Curve();
  *tmp = (*((Handle_ChFiDS_HElSpine*)nativeHandle))->Curve();
  return gcnew OCAdaptor3d_Curve(tmp);
}

OCAdaptor3d_Curve^ OCChFiDS_HElSpine::GetCurve()
{
  Adaptor3d_Curve* tmp = new Adaptor3d_Curve();
  *tmp = (*((Handle_ChFiDS_HElSpine*)nativeHandle))->GetCurve();
  return gcnew OCAdaptor3d_Curve(tmp);
}

OCChFiDS_ElSpine^ OCChFiDS_HElSpine::ChangeCurve()
{
  ChFiDS_ElSpine* tmp = new ChFiDS_ElSpine();
  *tmp = (*((Handle_ChFiDS_HElSpine*)nativeHandle))->ChangeCurve();
  return gcnew OCChFiDS_ElSpine(tmp);
}


