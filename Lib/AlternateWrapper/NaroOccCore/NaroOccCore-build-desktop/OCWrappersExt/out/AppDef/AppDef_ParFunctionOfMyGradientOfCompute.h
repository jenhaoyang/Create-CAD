// File generated by CPPExt (MPV)
//
#ifndef _AppDef_ParFunctionOfMyGradientOfCompute_OCWrappers_HeaderFile
#define _AppDef_ParFunctionOfMyGradientOfCompute_OCWrappers_HeaderFile

// include native header
#include <AppDef_ParFunctionOfMyGradientOfCompute.hxx>
#include "../Converter.h"

#include "../math/math_MultipleVarFunctionWithGradient.h"

#include "AppDef_MultiLine.h"
#include "../AppParCurves/AppParCurves_MultiCurve.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "AppDef_ParLeastSquareOfMyGradientOfCompute.h"
#include "../math/math_MultipleVarFunctionWithGradient.h"
#include "../AppParCurves/AppParCurves_Constraint.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfInteger;
ref class OCAppParCurves_HArray1OfConstraintCouple;
ref class OCAppDef_MultiLine;
ref class OCAppDef_MyLineTool;
ref class OCAppDef_ParLeastSquareOfMyGradientOfCompute;
ref class OCAppDef_ResConstraintOfMyGradientOfCompute;
ref class OCmath_Vector;
ref class OCAppParCurves_MultiCurve;



public ref class OCAppDef_ParFunctionOfMyGradientOfCompute  : public OCmath_MultipleVarFunctionWithGradient {

protected:
  // dummy constructor;
  OCAppDef_ParFunctionOfMyGradientOfCompute(OCDummy^) : OCmath_MultipleVarFunctionWithGradient((OCDummy^)nullptr) {};

public:

// constructor from native
OCAppDef_ParFunctionOfMyGradientOfCompute(AppDef_ParFunctionOfMyGradientOfCompute* nativeHandle);

// Methods PUBLIC


OCAppDef_ParFunctionOfMyGradientOfCompute(OCNaroWrappers::OCAppDef_MultiLine^ SSP, Standard_Integer FirstPoint, Standard_Integer LastPoint, OCNaroWrappers::OCAppParCurves_HArray1OfConstraintCouple^ TheConstraints, OCNaroWrappers::OCmath_Vector^ Parameters, Standard_Integer Deg);


 /*instead*/  Standard_Integer NbVariables() ;


 /*instead*/  System::Boolean Value(OCNaroWrappers::OCmath_Vector^ X, Standard_Real& F) ;


 /*instead*/  System::Boolean Gradient(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ G) ;


 /*instead*/  System::Boolean Values(OCNaroWrappers::OCmath_Vector^ X, Standard_Real& F, OCNaroWrappers::OCmath_Vector^ G) ;


 /*instead*/  OCmath_Vector^ NewParameters() ;


 /*instead*/  OCAppParCurves_MultiCurve^ CurveValue() ;


 /*instead*/  Standard_Real Error(Standard_Integer IPoint, Standard_Integer CurveIndex) ;


 /*instead*/  Standard_Real MaxError3d() ;


 /*instead*/  Standard_Real MaxError2d() ;


 /*instead*/  OCAppParCurves_Constraint FirstConstraint(OCNaroWrappers::OCAppParCurves_HArray1OfConstraintCouple^ TheConstraints, Standard_Integer FirstPoint) ;


 /*instead*/  OCAppParCurves_Constraint LastConstraint(OCNaroWrappers::OCAppParCurves_HArray1OfConstraintCouple^ TheConstraints, Standard_Integer LastPoint) ;

~OCAppDef_ParFunctionOfMyGradientOfCompute()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
