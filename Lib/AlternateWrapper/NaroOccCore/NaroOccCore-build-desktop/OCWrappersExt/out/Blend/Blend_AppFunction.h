// File generated by CPPExt (MPV)
//
#ifndef _Blend_AppFunction_OCWrappers_HeaderFile
#define _Blend_AppFunction_OCWrappers_HeaderFile

// include native header
#include <Blend_AppFunction.hxx>
#include "../Converter.h"

#include "../math/math_FunctionSetWithDerivatives.h"

#include "../math/math_FunctionSetWithDerivatives.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCmath_Vector;
ref class OCmath_Matrix;
ref class OCgp_Pnt;
ref class OCTColStd_Array1OfReal;
ref class OCTColStd_Array1OfInteger;
ref class OCBlend_Point;
ref class OCTColgp_Array1OfPnt;
ref class OCTColgp_Array1OfVec;
ref class OCTColgp_Array1OfPnt2d;
ref class OCTColgp_Array1OfVec2d;


//! Deferred class for a function used to compute a blending <br>
//!          surface between two surfaces, using a guide line. <br>
//!          The vector <X> used in Value, Values and Derivatives methods <br>
//!          has to be the vector of the parametric coordinates U1,V1, <br>
//!          U2,V2, of the extremities of a section on the first and <br>
//!          second surface. <br>
public ref class OCBlend_AppFunction  : public OCmath_FunctionSetWithDerivatives {

protected:
  // dummy constructor;
  OCBlend_AppFunction(OCDummy^) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr) {};

public:

// constructor from native
OCBlend_AppFunction(Blend_AppFunction* nativeHandle);

// Methods PUBLIC

//! Returns  the parameter  of  the point  P. Used  to <br>
//!          impose the parameters in the approximation. <br>
 /*instead*/  Standard_Real Parameter(OCNaroWrappers::OCBlend_Point^ P) ;

~OCBlend_AppFunction()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
