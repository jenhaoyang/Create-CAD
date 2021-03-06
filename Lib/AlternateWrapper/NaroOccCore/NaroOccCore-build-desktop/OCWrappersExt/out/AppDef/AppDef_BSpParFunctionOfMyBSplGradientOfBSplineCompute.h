// File generated by CPPExt (MPV)
//
#ifndef _AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute_OCWrappers_HeaderFile
#define _AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute_OCWrappers_HeaderFile

// include native header
#include <AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx>
#include "../Converter.h"

#include "../math/math_MultipleVarFunctionWithGradient.h"

#include "AppDef_MultiLine.h"
#include "../AppParCurves/AppParCurves_MultiBSpCurve.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.h"
#include "../math/math_MultipleVarFunctionWithGradient.h"
#include "../AppParCurves/AppParCurves_Constraint.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfInteger;
ref class OCAppParCurves_HArray1OfConstraintCouple;
ref class OCAppDef_MultiLine;
ref class OCAppDef_MyLineTool;
ref class OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute;
ref class OCmath_Vector;
ref class OCTColStd_Array1OfReal;
ref class OCTColStd_Array1OfInteger;
ref class OCAppParCurves_MultiBSpCurve;
ref class OCmath_Matrix;
ref class OCmath_IntegerVector;



public ref class OCAppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute  : public OCmath_MultipleVarFunctionWithGradient {

protected:
  // dummy constructor;
  OCAppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute(OCDummy^) : OCmath_MultipleVarFunctionWithGradient((OCDummy^)nullptr) {};

public:

// constructor from native
OCAppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute(AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute* nativeHandle);

// Methods PUBLIC


OCAppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute(OCNaroWrappers::OCAppDef_MultiLine^ SSP, Standard_Integer FirstPoint, Standard_Integer LastPoint, OCNaroWrappers::OCAppParCurves_HArray1OfConstraintCouple^ TheConstraints, OCNaroWrappers::OCmath_Vector^ Parameters, OCNaroWrappers::OCTColStd_Array1OfReal^ Knots, OCNaroWrappers::OCTColStd_Array1OfInteger^ Mults, Standard_Integer NbPol);


 /*instead*/  Standard_Integer NbVariables() ;


 /*instead*/  System::Boolean Value(OCNaroWrappers::OCmath_Vector^ X, Standard_Real& F) ;


 /*instead*/  System::Boolean Gradient(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ G) ;


 /*instead*/  System::Boolean Values(OCNaroWrappers::OCmath_Vector^ X, Standard_Real& F, OCNaroWrappers::OCmath_Vector^ G) ;


 /*instead*/  OCmath_Vector^ NewParameters() ;


 /*instead*/  OCAppParCurves_MultiBSpCurve^ CurveValue() ;


 /*instead*/  Standard_Real Error(Standard_Integer IPoint, Standard_Integer CurveIndex) ;


 /*instead*/  Standard_Real MaxError3d() ;


 /*instead*/  Standard_Real MaxError2d() ;


 /*instead*/  OCmath_Matrix^ FunctionMatrix() ;


 /*instead*/  OCmath_Matrix^ DerivativeFunctionMatrix() ;


 /*instead*/  OCmath_IntegerVector^ Index() ;


 /*instead*/  OCAppParCurves_Constraint FirstConstraint(OCNaroWrappers::OCAppParCurves_HArray1OfConstraintCouple^ TheConstraints, Standard_Integer FirstPoint) ;


 /*instead*/  OCAppParCurves_Constraint LastConstraint(OCNaroWrappers::OCAppParCurves_HArray1OfConstraintCouple^ TheConstraints, Standard_Integer LastPoint) ;


 /*instead*/  void SetFirstLambda(Standard_Real l1) ;


 /*instead*/  void SetLastLambda(Standard_Real l2) ;

~OCAppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
