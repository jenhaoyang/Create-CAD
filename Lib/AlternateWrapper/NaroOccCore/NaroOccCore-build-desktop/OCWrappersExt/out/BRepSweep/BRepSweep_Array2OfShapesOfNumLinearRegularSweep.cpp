// File generated by CPPExt (CPP file)
//

#include "BRepSweep_Array2OfShapesOfNumLinearRegularSweep.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep(BRepSweep_Array2OfShapesOfNumLinearRegularSweep* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new BRepSweep_Array2OfShapesOfNumLinearRegularSweep(R1, R2, C1, C2);
}

OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep(OCNaroWrappers::OCTopoDS_Shape^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new BRepSweep_Array2OfShapesOfNumLinearRegularSweep(*((TopoDS_Shape*)Item->Handle), R1, R2, C1, C2);
}

 void OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::Init(OCNaroWrappers::OCTopoDS_Shape^ V)
{
  ((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)nativeHandle)->Init(*((TopoDS_Shape*)V->Handle));
}

OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep^ OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::Assign(OCNaroWrappers::OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep^ Other)
{
  BRepSweep_Array2OfShapesOfNumLinearRegularSweep* tmp = new BRepSweep_Array2OfShapesOfNumLinearRegularSweep(0, 0, 0, 0);
  *tmp = ((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)nativeHandle)->Assign(*((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)Other->Handle));
  return gcnew OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep(tmp);
}

 Standard_Integer OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::ColLength()
{
  return ((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)nativeHandle)->ColLength();
}

 Standard_Integer OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::RowLength()
{
  return ((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)nativeHandle)->RowLength();
}

 Standard_Integer OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::LowerCol()
{
  return ((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)nativeHandle)->LowerCol();
}

 Standard_Integer OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::LowerRow()
{
  return ((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)nativeHandle)->LowerRow();
}

 Standard_Integer OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::UpperCol()
{
  return ((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)nativeHandle)->UpperCol();
}

 Standard_Integer OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::UpperRow()
{
  return ((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)nativeHandle)->UpperRow();
}

 void OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCTopoDS_Shape^ Value)
{
  ((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)nativeHandle)->SetValue(Row, Col, *((TopoDS_Shape*)Value->Handle));
}

OCTopoDS_Shape^ OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::Value(Standard_Integer Row, Standard_Integer Col)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)nativeHandle)->Value(Row, Col);
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_Array2OfShapesOfNumLinearRegularSweep::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Array2OfShapesOfNumLinearRegularSweep*)nativeHandle)->ChangeValue(Row, Col);
  return gcnew OCTopoDS_Shape(tmp);
}

