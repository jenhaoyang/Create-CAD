// File generated by CPPExt (CPP file)
//

#include "MAT2d_Mat2d.h"
#include "../Converter.h"
#include "../MAT/MAT_ListOfEdge.h"
#include "../MAT/MAT_ListOfBisector.h"
#include "MAT2d_Tool2d.h"
#include "../MAT/MAT_Bisector.h"


using namespace OCNaroWrappers;

OCMAT2d_Mat2d::OCMAT2d_Mat2d(MAT2d_Mat2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMAT2d_Mat2d::OCMAT2d_Mat2d() 
{
  nativeHandle = new MAT2d_Mat2d();
}

 void OCMAT2d_Mat2d::CreateMat(OCNaroWrappers::OCMAT2d_Tool2d^ aTool)
{
  ((MAT2d_Mat2d*)nativeHandle)->CreateMat(*((MAT2d_Tool2d*)aTool->Handle));
}

 System::Boolean OCMAT2d_Mat2d::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_Mat2d*)nativeHandle)->IsDone());
}

 void OCMAT2d_Mat2d::Init()
{
  ((MAT2d_Mat2d*)nativeHandle)->Init();
}

 System::Boolean OCMAT2d_Mat2d::More()
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_Mat2d*)nativeHandle)->More());
}

 void OCMAT2d_Mat2d::Next()
{
  ((MAT2d_Mat2d*)nativeHandle)->Next();
}

OCMAT_Bisector^ OCMAT2d_Mat2d::Bisector()
{
  Handle(MAT_Bisector) tmp = ((MAT2d_Mat2d*)nativeHandle)->Bisector();
  return gcnew OCMAT_Bisector(&tmp);
}

 System::Boolean OCMAT2d_Mat2d::SemiInfinite()
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_Mat2d*)nativeHandle)->SemiInfinite());
}

 Standard_Integer OCMAT2d_Mat2d::NumberOfBisectors()
{
  return ((MAT2d_Mat2d*)nativeHandle)->NumberOfBisectors();
}


