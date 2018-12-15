// File generated by CPPExt (MPV)
//
#ifndef _gce_MakeElips_OCWrappers_HeaderFile
#define _gce_MakeElips_OCWrappers_HeaderFile

// include native header
#include <gce_MakeElips.hxx>
#include "../Converter.h"

#include "gce_Root.h"

#include "../gp/gp_Elips.h"
#include "gce_Root.h"


namespace OCNaroWrappers
{

ref class OCgp_Ax2;
ref class OCgp_Pnt;
ref class OCgp_Elips;


//!This class implements the following algorithms used to <br>
//!          create an ellipse from gp. <br>
//! <br>
//!          * Create an ellipse from its center, and two points: <br>
//!            one on the ciconference giving the major radius, the <br>
//!            other giving the value of the small radius. <br>
public ref class OCgce_MakeElips  : public OCgce_Root {

protected:
  // dummy constructor;
  OCgce_MakeElips(OCDummy^) : OCgce_Root((OCDummy^)nullptr) {};

public:

// constructor from native
OCgce_MakeElips(gce_MakeElips* nativeHandle);

// Methods PUBLIC

//!The major radius of the ellipse is on the "XAxis" and the <br>
//!           minor radius is on the "YAxis" of the ellipse. The "XAxis" <br>
//!           is defined with the "XDirection" of A2 and the "YAxis" is <br>
//!           defined with the "YDirection" of A2. <br>
//! Warnings : <br>
//!           It is not forbidden to create an ellipse with <br>
//!           MajorRadius = MinorRadius. <br>
OCgce_MakeElips(OCNaroWrappers::OCgp_Ax2^ A2, Standard_Real MajorRadius, Standard_Real MinorRadius);

//! Make an ellipse with its center and two points. <br>
//! Warning <br>
//! The MakeElips class does not prevent the <br>
//! construction of an ellipse where the MajorRadius is <br>
//! equal to the MinorRadius. <br>
//! If an error occurs (that is, when IsDone returns <br>
//! false), the Status function returns: <br>
//! -   gce_InvertRadius if MajorRadius is less than MinorRadius; <br>
//! -   gce_NegativeRadius if MinorRadius is less than 0.0; <br>
//! -   gce_NullAxis if the points S1 and Center are coincident; or <br>
//! -   gce_InvertAxis if: <br>
//!   -   the major radius computed with Center and S1 <br>
//!    is less than the minor radius computed with Center, S1 and S2, or <br>
//!   -   Center, S1 and S2 are collinear. <br>
OCgce_MakeElips(OCNaroWrappers::OCgp_Pnt^ S1, OCNaroWrappers::OCgp_Pnt^ S2, OCNaroWrappers::OCgp_Pnt^ Center);

//! Returns the constructed ellipse. <br>
//! Exceptions StdFail_NotDone if no ellipse is constructed. <br>
 /*instead*/  OCgp_Elips^ Value() ;


 /*instead*/  OCgp_Elips^ Operator() ;

~OCgce_MakeElips()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
