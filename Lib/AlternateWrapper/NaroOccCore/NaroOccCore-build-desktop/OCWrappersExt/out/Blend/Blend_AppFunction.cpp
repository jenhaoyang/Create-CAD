// File generated by CPPExt (CPP file)
//

#include "Blend_AppFunction.h"
#include "../Converter.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "../gp/gp_Pnt.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../TColStd/TColStd_Array1OfInteger.h"
#include "Blend_Point.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "../TColgp/TColgp_Array1OfVec.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../TColgp/TColgp_Array1OfVec2d.h"


using namespace OCNaroWrappers;

OCBlend_AppFunction::OCBlend_AppFunction(Blend_AppFunction* nativeHandle) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

 Standard_Real OCBlend_AppFunction::Parameter(OCNaroWrappers::OCBlend_Point^ P)
{
  return ((Blend_AppFunction*)nativeHandle)->Parameter(*((Blend_Point*)P->Handle));
}


