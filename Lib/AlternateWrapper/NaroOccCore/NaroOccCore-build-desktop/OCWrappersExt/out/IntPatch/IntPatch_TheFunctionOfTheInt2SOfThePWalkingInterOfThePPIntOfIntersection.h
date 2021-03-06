// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection.hxx>
#include "../Converter.h"

#include "../math/math_FunctionSetWithDerivatives.h"

#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../IntImp/IntImp_ConstIsoparametric.h"
#include "../math/math_FunctionSetWithDerivatives.h"
#include "../gp/gp_Dir.h"
#include "../gp/gp_Dir2d.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCIntPatch_HSurfaceTool;
ref class OCmath_Vector;
ref class OCmath_Matrix;
ref class OCTColStd_Array1OfReal;



public ref class OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection  : public OCmath_FunctionSetWithDerivatives {

protected:
  // dummy constructor;
  OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection(OCDummy^) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection(IntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection();


OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2);


 /*instead*/  Standard_Integer NbVariables() ;


 /*instead*/  Standard_Integer NbEquations() ;


 /*instead*/  System::Boolean Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F) ;


 /*instead*/  System::Boolean Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D) ;


 /*instead*/  System::Boolean Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D) ;


 /*instead*/  void ComputeParameters(OCIntImp_ConstIsoparametric ChoixIso, OCNaroWrappers::OCTColStd_Array1OfReal^ Param, OCNaroWrappers::OCmath_Vector^ UVap, OCNaroWrappers::OCmath_Vector^ BornInf, OCNaroWrappers::OCmath_Vector^ BornSup, OCNaroWrappers::OCmath_Vector^ Tolerance) ;


 /*instead*/  Standard_Real Root() ;


 /*instead*/  OCgp_Pnt^ Point() ;


 /*instead*/  System::Boolean IsTangent(OCNaroWrappers::OCmath_Vector^ UVap, OCNaroWrappers::OCTColStd_Array1OfReal^ Param, OCIntImp_ConstIsoparametric& BestChoix) ;


 /*instead*/  OCgp_Dir^ Direction() ;


 /*instead*/  OCgp_Dir2d^ DirectionOnS1() ;


 /*instead*/  OCgp_Dir2d^ DirectionOnS2() ;


 /*instead*/  OCAdaptor3d_HSurface^ AuxillarSurface1() ;


 /*instead*/  OCAdaptor3d_HSurface^ AuxillarSurface2() ;

~OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
