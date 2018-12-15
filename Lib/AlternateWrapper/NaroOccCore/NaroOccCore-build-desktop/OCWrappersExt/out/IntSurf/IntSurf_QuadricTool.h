// File generated by CPPExt (MPV)
//
#ifndef _IntSurf_QuadricTool_OCWrappers_HeaderFile
#define _IntSurf_QuadricTool_OCWrappers_HeaderFile

// include native header
#include <IntSurf_QuadricTool.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCIntSurf_Quadric;
ref class OCgp_Vec;


//! This class provides a tool on a quadric that can be <br>
//!          used to instantiates the Walking algorithmes (see <br>
//!          package IntWalk) with a Quadric from IntSurf <br>
//!          as implicit surface. <br>
public ref class OCIntSurf_QuadricTool  {

protected:
  IntSurf_QuadricTool* nativeHandle;
  OCIntSurf_QuadricTool(OCDummy^) {};

public:
  property IntSurf_QuadricTool* Handle
  {
    IntSurf_QuadricTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntSurf_QuadricTool(IntSurf_QuadricTool* nativeHandle);

// Methods PUBLIC

//! Returns the value of the function. <br>
static /*instead*/  Standard_Real Value(OCNaroWrappers::OCIntSurf_Quadric^ Quad, Standard_Real X, Standard_Real Y, Standard_Real Z) ;

//! Returns the gradient of the function. <br>
static /*instead*/  void Gradient(OCNaroWrappers::OCIntSurf_Quadric^ Quad, Standard_Real X, Standard_Real Y, Standard_Real Z, OCNaroWrappers::OCgp_Vec^ V) ;

//! Returns the value and the gradient. <br>
static /*instead*/  void ValueAndGradient(OCNaroWrappers::OCIntSurf_Quadric^ Quad, Standard_Real X, Standard_Real Y, Standard_Real Z, Standard_Real& Val, OCNaroWrappers::OCgp_Vec^ Grad) ;

//! returns the tolerance of the zero of the implicit function <br>
static /*instead*/  Standard_Real Tolerance(OCNaroWrappers::OCIntSurf_Quadric^ Quad) ;

~OCIntSurf_QuadricTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
