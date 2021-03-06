// File generated by CPPExt (MPV)
//
#ifndef _GC_MakeArcOfCircle_OCWrappers_HeaderFile
#define _GC_MakeArcOfCircle_OCWrappers_HeaderFile

// include native header
#include <GC_MakeArcOfCircle.hxx>
#include "../Converter.h"

#include "GC_Root.h"

#include "GC_Root.h"


namespace OCNaroWrappers
{

ref class OCGeom_TrimmedCurve;
ref class OCgp_Circ;
ref class OCgp_Pnt;
ref class OCgp_Vec;


//! Implements construction algorithms for an <br>
//! arc of circle in 3D space. The result is a Geom_TrimmedCurve curve. <br>
//! A MakeArcOfCircle object provides a framework for: <br>
//! -   defining the construction of the arc of circle, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the results. In particular, the <br>
//!   Value function returns the constructed arc of circle. <br>
public ref class OCGC_MakeArcOfCircle  : public OCGC_Root {

protected:
  // dummy constructor;
  OCGC_MakeArcOfCircle(OCDummy^) : OCGC_Root((OCDummy^)nullptr) {};

public:

// constructor from native
OCGC_MakeArcOfCircle(GC_MakeArcOfCircle* nativeHandle);

// Methods PUBLIC

//! Make an arc of circle (TrimmedCurve from Geom) from <br>
//!          a circle between two angles Alpha1 and Alpha2 <br>
//!          given in radiians. <br>
OCGC_MakeArcOfCircle(OCNaroWrappers::OCgp_Circ^ Circ, Standard_Real Alpha1, Standard_Real Alpha2, System::Boolean Sense);

//! Make an arc of circle (TrimmedCurve from Geom) from <br>
//!          a circle between point <P> and the angle Alpha <br>
//!          given in radians. <br>
OCGC_MakeArcOfCircle(OCNaroWrappers::OCgp_Circ^ Circ, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Alpha, System::Boolean Sense);

//! Make an arc of circle (TrimmedCurve from Geom) from <br>
//!          a circle between two points P1 and P2. <br>
OCGC_MakeArcOfCircle(OCNaroWrappers::OCgp_Circ^ Circ, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, System::Boolean Sense);

//! Make an arc of circle (TrimmedCurve from Geom) from <br>
//!          three points P1,P2,P3 between two points P1 and P2. <br>
OCGC_MakeArcOfCircle(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, OCNaroWrappers::OCgp_Pnt^ P3);

//! Make an arc of circle (TrimmedCurve from Geom) from <br>
//!          two points P1,P2 and the tangente to the solution at <br>
//!          the point P1. <br>
//! The orientation of the arc is: <br>
//! -   the sense determined by the order of the points P1, P3 and P2; <br>
//! -   the sense defined by the vector V; or <br>
//! -   for other syntaxes: <br>
//!   -   the sense of Circ if Sense is true, or <br>
//!   -   the opposite sense if Sense is false. <br>
//! Note: Alpha1, Alpha2 and Alpha are angle values, given in radians. <br>
//! Warning <br>
//! If an error occurs (that is, when IsDone returns <br>
//! false), the Status function returns: <br>
//! -   gce_ConfusedPoints if: <br>
//!   -   any 2 of the 3 points P1, P2 and P3 are coincident, or <br>
//!   -   P1 and P2 are coincident; or <br>
//! -   gce_IntersectionError if: <br>
//!   -   P1, P2 and P3 are collinear and not coincident, or <br>
//!   -   the vector defined by the points P1 and <br>
//!    P2 is collinear with the vector V. <br>
OCGC_MakeArcOfCircle(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Vec^ V, OCNaroWrappers::OCgp_Pnt^ P2);

//! Returns the constructed arc of circle. <br>
//! Exceptions StdFail_NotDone if no arc of circle is constructed. <br>
 /*instead*/  OCGeom_TrimmedCurve^ Value() ;


 /*instead*/  OCGeom_TrimmedCurve^ Operator() ;

~OCGC_MakeArcOfCircle()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
