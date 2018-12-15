// File generated by CPPExt (Enum)

#ifndef _GeomAbs_SurfaceForm_OCWrappers_HeaderFile
#define _GeomAbs_SurfaceForm_OCWrappers_HeaderFile

namespace OCNaroWrappers
{


//! Provides information about the continuity of a curve: <br>
//! -   C0: only geometric continuity. <br>
//! -   G1: for each point on the curve, the tangent vectors <br>
//!   "on the right" and "on the left" are collinear with the same orientation. <br>
//! -   C1: continuity of the first derivative. The "C1" curve is <br>
//!   also "G1" but, in addition, the tangent vectors " on the <br>
//!   right" and "on the left" are equal. <br>
//! -   G2: for each point on the curve, the normalized <br>
//! normal vectors "on the right" and "on the left" are equal. <br>
//! -   C2: continuity of the second derivative. <br>
//! -   C3: continuity of the third derivative. <br>
//! -   CN: continuity of the N-th derivative, whatever is the <br>
//!   value given for N (infinite order of continuity). <br>
//! Also provides information about the continuity of a surface: <br>
//! -   C0: only geometric continuity. <br>
//! -   C1: continuity of the first derivatives; any <br>
//!   isoparametric (in U or V) of a surface "C1" is also "C1". <br>
//! -   G2: for BSpline curves only; "on the right" and "on the <br>
//!   left" of a knot the computation of the "main curvature <br>
//! radii" and the "main directions" (when they exist) gives the same result. <br>
//! -   C2: continuity of the second derivative. <br>
//! -   C3: continuity of the third derivative. <br>
//! -   CN: continuity of any N-th derivative, whatever is the <br>
//!   value given for N (infinite order of continuity). <br>
//! We may also say that a surface is "Ci" in u, and "Cj" in v <br>
//! to indicate the continuity of its derivatives up to the order <br>
//! i in the u parametric direction, and j in the v parametric direction. <br>
public enum class OCGeomAbs_SurfaceForm
{ 
 GeomAbs_PlanarForm,
GeomAbs_ConicalForm,
GeomAbs_CylindricalForm,
GeomAbs_ToroidalForm,
GeomAbs_SphericalForm,
GeomAbs_RevolutionForm,
GeomAbs_RuledForm,
GeomAbs_QuadricForm,
GeomAbs_OtherSurfaceForm
};

}; // OCNaroWrappers

#endif
