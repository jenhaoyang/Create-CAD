// File generated by CPPExt (MPV)
//
#ifndef _math_FunctionSample_OCWrappers_HeaderFile
#define _math_FunctionSample_OCWrappers_HeaderFile

// include native header
#include <math_FunctionSample.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{



//! This class gives a default sample (constant difference <br>
//!          of parameter) for a function defined between <br>
//!          two bound A,B. <br>
public ref class OCmath_FunctionSample  {

protected:
  math_FunctionSample* nativeHandle;
  OCmath_FunctionSample(OCDummy^) {};

public:
  property math_FunctionSample* Handle
  {
    math_FunctionSample* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_FunctionSample(math_FunctionSample* nativeHandle);

// Methods PUBLIC


OCmath_FunctionSample(Standard_Real A, Standard_Real B, Standard_Integer N);

//! Returns the bounds of parameters. <br>
virtual /*instead*/  void Bounds(Standard_Real& A, Standard_Real& B) ;

//! Returns the number of sample points. <br>
 /*instead*/  Standard_Integer NbPoints() ;

//! Returns the value of parameter of the point of <br>
//!          range Index : A + ((Index-1)/(NbPoints-1))*B. <br>
//!          An exception is raised if Index<=0 or Index>NbPoints. <br>
virtual /*instead*/  Standard_Real GetParameter(Standard_Integer Index) ;

~OCmath_FunctionSample()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
