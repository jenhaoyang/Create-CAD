// File generated by CPPExt (CPP file)
//

#include "IntPatch_LineConstructor.h"
#include "../Converter.h"
#include "IntPatch_SequenceOfLine.h"
#include "IntPatch_Line.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "../Adaptor3d/Adaptor3d_TopolTool.h"


using namespace OCNaroWrappers;

OCIntPatch_LineConstructor::OCIntPatch_LineConstructor(IntPatch_LineConstructor* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_LineConstructor::OCIntPatch_LineConstructor(Standard_Integer mode) 
{
  nativeHandle = new IntPatch_LineConstructor(mode);
}

 void OCIntPatch_LineConstructor::Perform(OCNaroWrappers::OCIntPatch_SequenceOfLine^ SL, OCNaroWrappers::OCIntPatch_Line^ L, OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_TopolTool^ D2, Standard_Real Tol)
{
  ((IntPatch_LineConstructor*)nativeHandle)->Perform(*((IntPatch_SequenceOfLine*)SL->Handle), *((Handle_IntPatch_Line*)L->Handle), *((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_TopolTool*)D1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), *((Handle_Adaptor3d_TopolTool*)D2->Handle), Tol);
}

 Standard_Integer OCIntPatch_LineConstructor::NbLines()
{
  return ((IntPatch_LineConstructor*)nativeHandle)->NbLines();
}

OCIntPatch_Line^ OCIntPatch_LineConstructor::Line(Standard_Integer index)
{
  Handle(IntPatch_Line) tmp = ((IntPatch_LineConstructor*)nativeHandle)->Line(index);
  return gcnew OCIntPatch_Line(&tmp);
}


