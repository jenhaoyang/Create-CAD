// File generated by CPPExt (MPV)
//
#ifndef _Convert_HyperbolaToBSplineCurve_OCWrappers_HeaderFile
#define _Convert_HyperbolaToBSplineCurve_OCWrappers_HeaderFile

// include native header
#include <Convert_HyperbolaToBSplineCurve.hxx>
#include "../Converter.h"

#include "Convert_ConicToBSplineCurve.h"

#include "Convert_ConicToBSplineCurve.h"


namespace OCNaroWrappers
{

ref class OCgp_Hypr2d;



//!  This algorithm converts a hyperbola into a rational B-spline curve. <br>
//!  The hyperbola is an Hypr2d from package gp with the <br>
//!  parametrization : <br>
//!  P (U) = <br>
//!  Loc + (MajorRadius * Cosh(U) * Xdir + MinorRadius * Sinh(U) * Ydir) <br>
//!  where Loc is the location point of the hyperbola, Xdir and Ydir are <br>
//!  the normalized directions of the local cartesian coordinate system <br>
//!  of the hyperbola. <br>
//! KeyWords : <br>
//!  Convert, Hyperbola, BSplineCurve, 2D . <br>
public ref class OCConvert_HyperbolaToBSplineCurve  : public OCConvert_ConicToBSplineCurve {

protected:
  // dummy constructor;
  OCConvert_HyperbolaToBSplineCurve(OCDummy^) : OCConvert_ConicToBSplineCurve((OCDummy^)nullptr) {};

public:

// constructor from native
OCConvert_HyperbolaToBSplineCurve(Convert_HyperbolaToBSplineCurve* nativeHandle);

// Methods PUBLIC


//!  The hyperbola H is limited between the parametric values U1, U2 <br>
//!  and the equivalent B-spline curve has the same orientation as the <br>
//!  hyperbola. <br>
OCConvert_HyperbolaToBSplineCurve(OCNaroWrappers::OCgp_Hypr2d^ H, Standard_Real U1, Standard_Real U2);

~OCConvert_HyperbolaToBSplineCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
