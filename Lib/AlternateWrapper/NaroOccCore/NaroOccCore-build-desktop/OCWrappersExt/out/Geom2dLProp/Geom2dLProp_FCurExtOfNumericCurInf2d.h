// File generated by CPPExt (MPV)
//
#ifndef _Geom2dLProp_FCurExtOfNumericCurInf2d_OCWrappers_HeaderFile
#define _Geom2dLProp_FCurExtOfNumericCurInf2d_OCWrappers_HeaderFile

// include native header
#include <Geom2dLProp_FCurExtOfNumericCurInf2d.hxx>
#include "../Converter.h"

#include "../math/math_FunctionWithDerivative.h"

#include "../math/math_FunctionWithDerivative.h"


namespace OCNaroWrappers
{

ref class OCGeom2d_Curve;
ref class OCgp_Vec2d;
ref class OCgp_Pnt2d;
ref class OCgp_Dir2d;
ref class OCGeom2dLProp_Curve2dTool;



public ref class OCGeom2dLProp_FCurExtOfNumericCurInf2d  : public OCmath_FunctionWithDerivative {

protected:
  // dummy constructor;
  OCGeom2dLProp_FCurExtOfNumericCurInf2d(OCDummy^) : OCmath_FunctionWithDerivative((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom2dLProp_FCurExtOfNumericCurInf2d(Geom2dLProp_FCurExtOfNumericCurInf2d* nativeHandle);

// Methods PUBLIC


OCGeom2dLProp_FCurExtOfNumericCurInf2d(OCNaroWrappers::OCGeom2d_Curve^ C, Standard_Real Tol);


 /*instead*/  System::Boolean Value(Standard_Real X, Standard_Real& F) ;


 /*instead*/  System::Boolean Derivative(Standard_Real X, Standard_Real& D) ;


 /*instead*/  System::Boolean Values(Standard_Real X, Standard_Real& F, Standard_Real& D) ;


 /*instead*/  System::Boolean IsMinKC(Standard_Real Param) ;

~OCGeom2dLProp_FCurExtOfNumericCurInf2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
