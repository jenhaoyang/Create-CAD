// File generated by CPPExt (MPV)
//
#ifndef _Convert_ParabolaToBSplineCurve_OCWrappers_HeaderFile
#define _Convert_ParabolaToBSplineCurve_OCWrappers_HeaderFile

// include native header
#include <Convert_ParabolaToBSplineCurve.hxx>
#include "../Converter.h"

#include "Convert_ConicToBSplineCurve.h"

#include "Convert_ConicToBSplineCurve.h"


namespace OCNaroWrappers
{

ref class OCgp_Parab2d;



//!  This algorithm converts a parabola into a non rational B-spline <br>
//!  curve. <br>
//!  The parabola is a Parab2d from package gp with the parametrization <br>
//!  P (U) = Loc + F * (U*U * Xdir + 2 * U * Ydir) where Loc is the <br>
//!  apex of the parabola, Xdir is the normalized direction of the <br>
//!  symmetry axis of the parabola, Ydir is the normalized direction of <br>
//!  the directrix and F is the focal length. <br>
//! KeyWords : <br>
//!  Convert, Parabola, BSplineCurve, 2D . <br>
public ref class OCConvert_ParabolaToBSplineCurve  : public OCConvert_ConicToBSplineCurve {

protected:
  // dummy constructor;
  OCConvert_ParabolaToBSplineCurve(OCDummy^) : OCConvert_ConicToBSplineCurve((OCDummy^)nullptr) {};

public:

// constructor from native
OCConvert_ParabolaToBSplineCurve(Convert_ParabolaToBSplineCurve* nativeHandle);

// Methods PUBLIC


//!  The parabola Prb is limited between the parametric values U1, U2 <br>
//!  and the equivalent B-spline curve as the same orientation as the <br>
//!  parabola Prb. <br>
OCConvert_ParabolaToBSplineCurve(OCNaroWrappers::OCgp_Parab2d^ Prb, Standard_Real U1, Standard_Real U2);

~OCConvert_ParabolaToBSplineCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
