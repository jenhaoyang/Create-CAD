// File generated by CPPExt (CPP file)
//

#include "TColgp_HArray2OfVec.h"
#include "../Converter.h"
#include "../gp/gp_Vec.h"
#include "TColgp_Array2OfVec.h"


using namespace OCNaroWrappers;

OCTColgp_HArray2OfVec::OCTColgp_HArray2OfVec(Handle(TColgp_HArray2OfVec)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColgp_HArray2OfVec(*nativeHandle);
}

OCTColgp_HArray2OfVec::OCTColgp_HArray2OfVec(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray2OfVec(new TColgp_HArray2OfVec(R1, R2, C1, C2));
}

OCTColgp_HArray2OfVec::OCTColgp_HArray2OfVec(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, OCNaroWrappers::OCgp_Vec^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray2OfVec(new TColgp_HArray2OfVec(R1, R2, C1, C2, *((gp_Vec*)V->Handle)));
}

 void OCTColgp_HArray2OfVec::Init(OCNaroWrappers::OCgp_Vec^ V)
{
  (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->Init(*((gp_Vec*)V->Handle));
}

 Standard_Integer OCTColgp_HArray2OfVec::ColLength()
{
  return (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->ColLength();
}

 Standard_Integer OCTColgp_HArray2OfVec::RowLength()
{
  return (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->RowLength();
}

 Standard_Integer OCTColgp_HArray2OfVec::LowerCol()
{
  return (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->LowerCol();
}

 Standard_Integer OCTColgp_HArray2OfVec::LowerRow()
{
  return (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->LowerRow();
}

 Standard_Integer OCTColgp_HArray2OfVec::UpperCol()
{
  return (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->UpperCol();
}

 Standard_Integer OCTColgp_HArray2OfVec::UpperRow()
{
  return (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->UpperRow();
}

 void OCTColgp_HArray2OfVec::SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCgp_Vec^ Value)
{
  (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->SetValue(Row, Col, *((gp_Vec*)Value->Handle));
}

OCgp_Vec^ OCTColgp_HArray2OfVec::Value(Standard_Integer Row, Standard_Integer Col)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->Value(Row, Col);
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec^ OCTColgp_HArray2OfVec::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->ChangeValue(Row, Col);
  return gcnew OCgp_Vec(tmp);
}

OCTColgp_Array2OfVec^ OCTColgp_HArray2OfVec::Array2()
{
  TColgp_Array2OfVec* tmp = new TColgp_Array2OfVec(0, 0, 0, 0);
  *tmp = (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->Array2();
  return gcnew OCTColgp_Array2OfVec(tmp);
}

OCTColgp_Array2OfVec^ OCTColgp_HArray2OfVec::ChangeArray2()
{
  TColgp_Array2OfVec* tmp = new TColgp_Array2OfVec(0, 0, 0, 0);
  *tmp = (*((Handle_TColgp_HArray2OfVec*)nativeHandle))->ChangeArray2();
  return gcnew OCTColgp_Array2OfVec(tmp);
}


