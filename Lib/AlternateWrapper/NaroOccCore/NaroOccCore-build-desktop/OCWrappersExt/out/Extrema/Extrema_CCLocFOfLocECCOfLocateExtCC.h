// File generated by CPPExt (MPV)
//
#ifndef _Extrema_CCLocFOfLocECCOfLocateExtCC_OCWrappers_HeaderFile
#define _Extrema_CCLocFOfLocECCOfLocateExtCC_OCWrappers_HeaderFile

// include native header
#include <Extrema_CCLocFOfLocECCOfLocateExtCC.hxx>
#include "../Converter.h"

#include "../math/math_FunctionSetWithDerivatives.h"

#include "../gp/gp_Pnt.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC.h"
#include "../math/math_FunctionSetWithDerivatives.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_Curve;
ref class OCExtrema_CurveTool;
ref class OCExtrema_POnCurv;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC;
ref class OCExtrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC;
ref class OCmath_Vector;
ref class OCmath_Matrix;



public ref class OCExtrema_CCLocFOfLocECCOfLocateExtCC  : public OCmath_FunctionSetWithDerivatives {

protected:
  // dummy constructor;
  OCExtrema_CCLocFOfLocECCOfLocateExtCC(OCDummy^) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr) {};

public:

// constructor from native
OCExtrema_CCLocFOfLocECCOfLocateExtCC(Extrema_CCLocFOfLocECCOfLocateExtCC* nativeHandle);

// Methods PUBLIC


OCExtrema_CCLocFOfLocECCOfLocateExtCC(Standard_Real thetol);


OCExtrema_CCLocFOfLocECCOfLocateExtCC(OCNaroWrappers::OCAdaptor3d_Curve^ C1, OCNaroWrappers::OCAdaptor3d_Curve^ C2, Standard_Real thetol);


 /*instead*/  void SetCurve(Standard_Integer theRank, OCNaroWrappers::OCAdaptor3d_Curve^ C1) ;


 /*instead*/  void SetTolerance(Standard_Real theTol) ;


virtual /*instead*/  Standard_Integer NbVariables() ;


virtual /*instead*/  Standard_Integer NbEquations() ;


virtual /*instead*/  System::Boolean Value(OCNaroWrappers::OCmath_Vector^ UV, OCNaroWrappers::OCmath_Vector^ F) ;


 /*instead*/  System::Boolean Derivatives(OCNaroWrappers::OCmath_Vector^ UV, OCNaroWrappers::OCmath_Matrix^ DF) ;


 /*instead*/  System::Boolean Values(OCNaroWrappers::OCmath_Vector^ UV, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ DF) ;


virtual /*instead*/  Standard_Integer GetStateNumber() override;


 /*instead*/  Standard_Integer NbExt() ;


 /*instead*/  Standard_Real SquareDistance(Standard_Integer N) ;


 /*instead*/  void Points(Standard_Integer N, OCNaroWrappers::OCExtrema_POnCurv^ P1, OCNaroWrappers::OCExtrema_POnCurv^ P2) ;


 /*instead*/  Standard_Address CurvePtr(Standard_Integer theRank) ;


 /*instead*/  Standard_Real Tolerance() ;

~OCExtrema_CCLocFOfLocECCOfLocateExtCC()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
