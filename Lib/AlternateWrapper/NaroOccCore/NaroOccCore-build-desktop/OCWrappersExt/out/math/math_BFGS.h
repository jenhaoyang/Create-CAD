// File generated by CPPExt (MPV)
//
#ifndef _math_BFGS_OCWrappers_HeaderFile
#define _math_BFGS_OCWrappers_HeaderFile

// include native header
#include <math_BFGS.hxx>
#include "../Converter.h"


#include "math_Status.h"
#include "math_Vector.h"


namespace OCNaroWrappers
{

ref class OCmath_MultipleVarFunctionWithGradient;
ref class OCmath_Vector;



//! This class implements the Broyden-Fletcher-Goldfarb-Shanno variant of <br>
//! Davidson-Fletcher-Powell minimization algorithm of a function of <br>
//! multiple variables.Knowledge of the function's gradient is required. <br>
public ref class OCmath_BFGS  {

protected:
  math_BFGS* nativeHandle;
  OCmath_BFGS(OCDummy^) {};

public:
  property math_BFGS* Handle
  {
    math_BFGS* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_BFGS(math_BFGS* nativeHandle);

// Methods PUBLIC


//! Given the starting point StartingPoint, <br>
//! the Broyden-Fletcher-Goldfarb-Shanno variant of Davidson-Fletcher-Powell <br>
//! minimization is done on the function F. <br>
//! The tolerance required on F is given by Tolerance. <br>
//! The solution F = Fi is found when : <br>
//!   2.0 * abs(Fi - Fi-1) <= Tolerance * (abs(Fi) + abs(Fi-1) + ZEPS). <br>
//! The maximum number of iterations allowed is given by NbIterations. <br>
OCmath_BFGS(OCNaroWrappers::OCmath_MultipleVarFunctionWithGradient^ F, OCNaroWrappers::OCmath_Vector^ StartingPoint, Standard_Real Tolerance, Standard_Integer NbIterations, Standard_Real ZEPS);

//! Initializes the computation of the minimum of F. <br>
//! Warning <br>
//! A call to the Perform method must be made after this <br>
//! initialization to effectively compute the minimum of the <br>
//! function F. <br>
OCmath_BFGS(OCNaroWrappers::OCmath_MultipleVarFunctionWithGradient^ F, Standard_Real Tolerance, Standard_Integer NbIterations, Standard_Real ZEPS);


virtual /*instead*/  void Delete() ;

//! Is used internally by the constructors. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCmath_MultipleVarFunctionWithGradient^ F, OCNaroWrappers::OCmath_Vector^ StartingPoint) ;


//! This method is called at the end of each iteration to check if the <br>
//! solution is found. <br>
//! It can be redefined in a sub-class to implement a specific test to <br>
//! stop the iterations. <br>
virtual /*instead*/  System::Boolean IsSolutionReached(OCNaroWrappers::OCmath_MultipleVarFunctionWithGradient^ F) ;

//! Returns true if the computations are successful, otherwise returns false. <br>
 /*instead*/  System::Boolean IsDone() ;

//! returns the location vector of the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
 /*instead*/  OCmath_Vector^ Location() ;

//! outputs the location vector of the minimum in Loc. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
//! Exception DimensionError is raised if the range of Loc is not <br>
//! equal to the range of the StartingPoint. <br>
 /*instead*/  void Location(OCNaroWrappers::OCmath_Vector^ Loc) ;

//! returns the value of the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
 /*instead*/  Standard_Real Minimum() ;

//! Returns the gradient vector at the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
 /*instead*/  OCmath_Vector^ Gradient() ;

//! Returns the value of the gradient vector at the minimum in Grad. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
//! Exception DimensionError is raised if the range of Grad is not <br>
//! equal to the range of the StartingPoint. <br>
 /*instead*/  void Gradient(OCNaroWrappers::OCmath_Vector^ Grad) ;

//! Returns the number of iterations really done in the <br>
//!          calculation of the minimum. <br>
//! The exception NotDone is raised if the minimum was not found. <br>
 /*instead*/  Standard_Integer NbIterations() ;

//! Prints on the stream o information on the current state <br>
//!          of the object. <br>
//!          Is used to redefine the operator <<. <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCmath_BFGS()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
