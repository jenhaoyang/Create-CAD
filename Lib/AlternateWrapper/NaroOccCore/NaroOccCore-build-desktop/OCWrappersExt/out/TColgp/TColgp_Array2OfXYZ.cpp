// File generated by CPPExt (CPP file)
//

#include "TColgp_Array2OfXYZ.h"
#include "../Converter.h"
#include "../gp/gp_XYZ.h"


using namespace OCNaroWrappers;

OCTColgp_Array2OfXYZ::OCTColgp_Array2OfXYZ(TColgp_Array2OfXYZ* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColgp_Array2OfXYZ::OCTColgp_Array2OfXYZ(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TColgp_Array2OfXYZ(R1, R2, C1, C2);
}

OCTColgp_Array2OfXYZ::OCTColgp_Array2OfXYZ(OCNaroWrappers::OCgp_XYZ^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TColgp_Array2OfXYZ(*((gp_XYZ*)Item->Handle), R1, R2, C1, C2);
}

 void OCTColgp_Array2OfXYZ::Init(OCNaroWrappers::OCgp_XYZ^ V)
{
  ((TColgp_Array2OfXYZ*)nativeHandle)->Init(*((gp_XYZ*)V->Handle));
}

OCTColgp_Array2OfXYZ^ OCTColgp_Array2OfXYZ::Assign(OCNaroWrappers::OCTColgp_Array2OfXYZ^ Other)
{
  TColgp_Array2OfXYZ* tmp = new TColgp_Array2OfXYZ(0, 0, 0, 0);
  *tmp = ((TColgp_Array2OfXYZ*)nativeHandle)->Assign(*((TColgp_Array2OfXYZ*)Other->Handle));
  return gcnew OCTColgp_Array2OfXYZ(tmp);
}

 Standard_Integer OCTColgp_Array2OfXYZ::ColLength()
{
  return ((TColgp_Array2OfXYZ*)nativeHandle)->ColLength();
}

 Standard_Integer OCTColgp_Array2OfXYZ::RowLength()
{
  return ((TColgp_Array2OfXYZ*)nativeHandle)->RowLength();
}

 Standard_Integer OCTColgp_Array2OfXYZ::LowerCol()
{
  return ((TColgp_Array2OfXYZ*)nativeHandle)->LowerCol();
}

 Standard_Integer OCTColgp_Array2OfXYZ::LowerRow()
{
  return ((TColgp_Array2OfXYZ*)nativeHandle)->LowerRow();
}

 Standard_Integer OCTColgp_Array2OfXYZ::UpperCol()
{
  return ((TColgp_Array2OfXYZ*)nativeHandle)->UpperCol();
}

 Standard_Integer OCTColgp_Array2OfXYZ::UpperRow()
{
  return ((TColgp_Array2OfXYZ*)nativeHandle)->UpperRow();
}

 void OCTColgp_Array2OfXYZ::SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCgp_XYZ^ Value)
{
  ((TColgp_Array2OfXYZ*)nativeHandle)->SetValue(Row, Col, *((gp_XYZ*)Value->Handle));
}

OCgp_XYZ^ OCTColgp_Array2OfXYZ::Value(Standard_Integer Row, Standard_Integer Col)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((TColgp_Array2OfXYZ*)nativeHandle)->Value(Row, Col);
  return gcnew OCgp_XYZ(tmp);
}

OCgp_XYZ^ OCTColgp_Array2OfXYZ::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((TColgp_Array2OfXYZ*)nativeHandle)->ChangeValue(Row, Col);
  return gcnew OCgp_XYZ(tmp);
}


