// File generated by CPPExt (CPP file)
//

#include "Extrema_HArray2OfPOnSurf.h"
#include "../Converter.h"
#include "Extrema_POnSurf.h"
#include "Extrema_Array2OfPOnSurf.h"


using namespace OCNaroWrappers;

OCExtrema_HArray2OfPOnSurf::OCExtrema_HArray2OfPOnSurf(Handle(Extrema_HArray2OfPOnSurf)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Extrema_HArray2OfPOnSurf(*nativeHandle);
}

OCExtrema_HArray2OfPOnSurf::OCExtrema_HArray2OfPOnSurf(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Extrema_HArray2OfPOnSurf(new Extrema_HArray2OfPOnSurf(R1, R2, C1, C2));
}

OCExtrema_HArray2OfPOnSurf::OCExtrema_HArray2OfPOnSurf(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, OCNaroWrappers::OCExtrema_POnSurf^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Extrema_HArray2OfPOnSurf(new Extrema_HArray2OfPOnSurf(R1, R2, C1, C2, *((Extrema_POnSurf*)V->Handle)));
}

 void OCExtrema_HArray2OfPOnSurf::Init(OCNaroWrappers::OCExtrema_POnSurf^ V)
{
  (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->Init(*((Extrema_POnSurf*)V->Handle));
}

 Standard_Integer OCExtrema_HArray2OfPOnSurf::ColLength()
{
  return (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->ColLength();
}

 Standard_Integer OCExtrema_HArray2OfPOnSurf::RowLength()
{
  return (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->RowLength();
}

 Standard_Integer OCExtrema_HArray2OfPOnSurf::LowerCol()
{
  return (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->LowerCol();
}

 Standard_Integer OCExtrema_HArray2OfPOnSurf::LowerRow()
{
  return (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->LowerRow();
}

 Standard_Integer OCExtrema_HArray2OfPOnSurf::UpperCol()
{
  return (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->UpperCol();
}

 Standard_Integer OCExtrema_HArray2OfPOnSurf::UpperRow()
{
  return (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->UpperRow();
}

 void OCExtrema_HArray2OfPOnSurf::SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCExtrema_POnSurf^ Value)
{
  (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->SetValue(Row, Col, *((Extrema_POnSurf*)Value->Handle));
}

OCExtrema_POnSurf^ OCExtrema_HArray2OfPOnSurf::Value(Standard_Integer Row, Standard_Integer Col)
{
  Extrema_POnSurf* tmp = new Extrema_POnSurf();
  *tmp = (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->Value(Row, Col);
  return gcnew OCExtrema_POnSurf(tmp);
}

OCExtrema_POnSurf^ OCExtrema_HArray2OfPOnSurf::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  Extrema_POnSurf* tmp = new Extrema_POnSurf();
  *tmp = (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->ChangeValue(Row, Col);
  return gcnew OCExtrema_POnSurf(tmp);
}

OCExtrema_Array2OfPOnSurf^ OCExtrema_HArray2OfPOnSurf::Array2()
{
  Extrema_Array2OfPOnSurf* tmp = new Extrema_Array2OfPOnSurf(0, 0, 0, 0);
  *tmp = (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->Array2();
  return gcnew OCExtrema_Array2OfPOnSurf(tmp);
}

OCExtrema_Array2OfPOnSurf^ OCExtrema_HArray2OfPOnSurf::ChangeArray2()
{
  Extrema_Array2OfPOnSurf* tmp = new Extrema_Array2OfPOnSurf(0, 0, 0, 0);
  *tmp = (*((Handle_Extrema_HArray2OfPOnSurf*)nativeHandle))->ChangeArray2();
  return gcnew OCExtrema_Array2OfPOnSurf(tmp);
}

