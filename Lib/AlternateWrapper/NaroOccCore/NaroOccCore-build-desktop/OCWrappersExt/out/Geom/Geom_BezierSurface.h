// File generated by CPPExt (Transient)
//
#ifndef _Geom_BezierSurface_OCWrappers_HeaderFile
#define _Geom_BezierSurface_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom_BezierSurface.hxx>
#include "../Converter.h"

#include "Geom_BoundedSurface.h"

#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCTColgp_HArray2OfPnt;
ref class OCTColStd_HArray2OfReal;
ref class OCTColgp_Array2OfPnt;
ref class OCTColStd_Array2OfReal;
ref class OCTColgp_Array1OfPnt;
ref class OCTColStd_Array1OfReal;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCGeom_Curve;
ref class OCgp_Trsf;
ref class OCGeom_Geometry;


//! Describes a rational or non-rational Bezier surface. <br>
//! - A non-rational Bezier surface is defined by a table <br>
//!   of poles (also known as control points). <br>
//! - A rational Bezier surface is defined by a table of <br>
//!   poles with varying associated weights. <br>
//! This data is manipulated using two associative 2D arrays: <br>
//! - the poles table, which is a 2D array of gp_Pnt, and <br>
//! - the weights table, which is a 2D array of reals. <br>
//!  The bounds of these arrays are: <br>
//! - 1 and NbUPoles for the row bounds, where <br>
//!   NbUPoles is the number of poles of the surface <br>
//!   in the u parametric direction, and <br>
//! - 1 and NbVPoles for the column bounds, where <br>
//!   NbVPoles is the number of poles of the surface <br>
//!   in the v parametric direction. <br>
//!   The poles of the surface, the "control points", are the <br>
//! points used to shape and reshape the surface. They <br>
//! comprise a rectangular network of points: <br>
//! - The points (1, 1), (NbUPoles, 1), (1, <br>
//!   NbVPoles) and (NbUPoles, NbVPoles) <br>
//!   are the four parametric "corners" of the surface. <br>
//! - The first column of poles and the last column of <br>
//!   poles define two Bezier curves which delimit the <br>
//!   surface in the v parametric direction. These are <br>
//!   the v isoparametric curves corresponding to <br>
//!   values 0 and 1 of the v parameter. <br>
//! - The first row of poles and the last row of poles <br>
//!   define two Bezier curves which delimit the surface <br>
//!   in the u parametric direction. These are the u <br>
//!   isoparametric curves corresponding to values 0 <br>
//!   and 1 of the u parameter. <br>
//!  It is more difficult to define a geometrical significance <br>
//! for the weights. However they are useful for <br>
//! representing a quadric surface precisely. Moreover, if <br>
//! the weights of all the poles are equal, the surface has <br>
//! a polynomial equation, and hence is a "non-rational surface". <br>
//! The non-rational surface is a special, but frequently <br>
//! used, case, where all poles have identical weights. <br>
//! The weights are defined and used only in the case of <br>
//! a rational surface. This rational characteristic is <br>
//! defined in each parametric direction. Hence, a <br>
//! surface can be rational in the u parametric direction, <br>
//! and non-rational in the v parametric direction. <br>
//! Likewise, the degree of a surface is defined in each <br>
//! parametric direction. The degree of a Bezier surface <br>
//! in a given parametric direction is equal to the number <br>
//! of poles of the surface in that parametric direction, <br>
//! minus 1. This must be greater than or equal to 1. <br>
//! However, the degree for a Geom_BezierSurface is <br>
//! limited to a value of (25) which is defined and <br>
//! controlled by the system. This value is returned by the <br>
//! function MaxDegree. <br>
//! The parameter range for a Bezier surface is [ 0, 1 ] <br>
//! in the two parametric directions. <br>
//! A Bezier surface can also be closed, or open, in each <br>
//! parametric direction. If the first row of poles is <br>
//! identical to the last row of poles, the surface is closed <br>
//! in the u parametric direction. If the first column of <br>
//! poles is identical to the last column of poles, the <br>
//! surface is closed in the v parametric direction. <br>
//! The continuity of a Bezier surface is infinite in the u <br>
//! parametric direction and the in v parametric direction. <br>
//! Note: It is not possible to build a Bezier surface with <br>
//! negative weights. Any weight value that is less than, <br>
//! or equal to, gp::Resolution() is considered <br>
//! to be zero. Two weight values, W1 and W2, are <br>
//! considered equal if: |W2-W1| <= gp::Resolution() <br>
public ref class OCGeom_BezierSurface : OCGeom_BoundedSurface {

protected:
  // dummy constructor;
  OCGeom_BezierSurface(OCDummy^) : OCGeom_BoundedSurface((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom_BezierSurface(Handle(Geom_BezierSurface)* nativeHandle);

// Methods PUBLIC


//!  Creates a non-rational Bezier surface with a set of poles. <br>
//!  Control points representation : <br>
//!     SPoles(Uorigin,Vorigin) ...................SPoles(Uorigin,Vend) <br>
//!           .                                     . <br>
//!           .                                     . <br>
//!     SPoles(Uend, Vorigin) .....................SPoles(Uend, Vend) <br>
//!  For the double array the row indice corresponds to the parametric <br>
//!  U direction and the columns indice corresponds to the parametric <br>
//!  V direction. <br>
//!  The weights are defaulted to all being 1. <br>
//!  Raised if the number of poles of the surface is lower than 2 <br>
//!  or greater than MaxDegree + 1 in one of the two directions <br>
//!  U or V. <br>
OCGeom_BezierSurface(OCNaroWrappers::OCTColgp_Array2OfPnt^ SurfacePoles);

//!---Purpose <br>
//!  Creates a rational Bezier surface with a set of poles and a <br>
//!  set of weights. <br>
//!  For the double array the row indice corresponds to the parametric <br>
//!  U direction and the columns indice corresponds to the parametric <br>
//!  V direction. <br>
//!  If all the weights are identical the surface is considered as <br>
//!  non-rational (the tolerance criterion is Resolution from package <br>
//!  gp). <br>
//!  Raised if SurfacePoles and PoleWeights have not the same <br>
//!  Rowlength or have not the same ColLength. <br>
//!  Raised if PoleWeights (i, j) <= Resolution from gp; <br>
//!  Raised if the number of poles of the surface is lower than 2 <br>
//!  or greater than MaxDegree + 1 in one of the two directions U or V. <br>
OCGeom_BezierSurface(OCNaroWrappers::OCTColgp_Array2OfPnt^ SurfacePoles, OCNaroWrappers::OCTColStd_Array2OfReal^ PoleWeights);

//! Exchanges the direction U and V on a Bezier surface <br>
//! As a consequence: <br>
//! - the poles and weights tables are transposed, <br>
//! - degrees, rational characteristics and so on are <br>
//! exchanged between the two parametric directions, and <br>
//! - the orientation of the surface is reversed. <br>
 /*instead*/  void ExchangeUV() ;

//! Increases the degree of this Bezier surface in the two parametric directions. <br>
//!  Raised if UDegree < UDegree <me>  or VDegree < VDegree <me> <br>
//!  Raised if the degree of the surface is greater than MaxDegree <br>
//!  in one of the two directions U or V. <br>
 /*instead*/  void Increase(Standard_Integer UDeg, Standard_Integer VDeg) ;


//!  Inserts a column of poles. If the surface is rational the weights <br>
//!  values associated with CPoles are equal defaulted to 1. <br>
//!  Raised if Vindex < 1 or VIndex > NbVPoles. <br>
//!  raises if VDegree is greater than MaxDegree. <br>
//!  raises if the Length of CPoles is not equal to NbUPoles <br>
 /*instead*/  void InsertPoleColAfter(Standard_Integer VIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles) ;


//!  Inserts a column of poles and weights. <br>
//!  If the surface was non-rational it can become rational. <br>
//!  Raised if Vindex < 1 or VIndex > NbVPoles. <br>//!  Raised if <br>
//!  . VDegree is greater than MaxDegree. <br>
//!  . the Length of CPoles is not equal to NbUPoles <br>
//!  . a weight value is lower or equal to Resolution from <br>
//!    package gp <br>
 /*instead*/  void InsertPoleColAfter(Standard_Integer VIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles, OCNaroWrappers::OCTColStd_Array1OfReal^ CPoleWeights) ;


//!  Inserts a column of poles. If the surface is rational the weights <br>
//!  values associated with CPoles are equal defaulted to 1. <br>
//!  Raised if Vindex < 1 or VIndex > NbVPoles. <br>
//!  Raised if VDegree is greater than MaxDegree. <br>
//!  Raised if the Length of CPoles is not equal to NbUPoles <br>
 /*instead*/  void InsertPoleColBefore(Standard_Integer VIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles) ;


//!  Inserts a column of poles and weights. <br>
//!  If the surface was non-rational it can become rational. <br>
//!  Raised if Vindex < 1 or VIndex > NbVPoles. <br>//!  Raised if : <br>
//!  . VDegree is greater than MaxDegree. <br>
//!  . the Length of CPoles is not equal to NbUPoles <br>
//!  . a weight value is lower or equal to Resolution from <br>
//!    package gp <br>
 /*instead*/  void InsertPoleColBefore(Standard_Integer VIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles, OCNaroWrappers::OCTColStd_Array1OfReal^ CPoleWeights) ;


//!  Inserts a row of poles. If the surface is rational the weights <br>
//!  values associated with CPoles are equal defaulted to 1. <br>
//!  Raised if Uindex < 1 or UIndex > NbUPoles. <br>
//!  Raised if UDegree is greater than MaxDegree. <br>
//!  Raised if the Length of CPoles is not equal to NbVPoles <br>
 /*instead*/  void InsertPoleRowAfter(Standard_Integer UIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles) ;


//!  Inserts a row of poles and weights. <br>
//!  If the surface was non-rational it can become rational. <br>
//!  Raised if Uindex < 1 or UIndex > NbUPoles. <br>//!  Raised if : <br>
//!  . UDegree is greater than MaxDegree. <br>
//!  . the Length of CPoles is not equal to NbVPoles <br>
//!  . a weight value is lower or equal to Resolution from <br>
//!    package gp <br>
 /*instead*/  void InsertPoleRowAfter(Standard_Integer UIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles, OCNaroWrappers::OCTColStd_Array1OfReal^ CPoleWeights) ;


//!  Inserts a row of poles. If the surface is rational the weights <br>
//!  values associated with CPoles are equal defaulted to 1. <br>
//!  Raised if Uindex < 1 or UIndex > NbUPoles. <br>
//!  Raised if UDegree is greater than MaxDegree. <br>
//!  Raised if the Length of CPoles is not equal to NbVPoles <br>
 /*instead*/  void InsertPoleRowBefore(Standard_Integer UIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles) ;


//!  Inserts a row of poles and weights. <br>
//!  If the surface was non-rational it can become rational. <br>
//!  Raised if Uindex < 1 or UIndex > NbUPoles. <br>//!  Raised if : <br>
//!  . UDegree is greater than MaxDegree. <br>
//!  . the Length of CPoles is not equal to NbVPoles <br>
//!  . a weight value is lower or equal to Resolution from <br>
//!    pacakage gp <br>
 /*instead*/  void InsertPoleRowBefore(Standard_Integer UIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles, OCNaroWrappers::OCTColStd_Array1OfReal^ CPoleWeights) ;

//! Removes a column of poles. <br>
//!  If the surface was rational it can become non-rational. <br>
//!  Raised if NbVPoles <= 2 after removing, a Bezier surface <br>
//!  must have at least two columns of poles. <br>//! Raised if Vindex < 1 or VIndex > NbVPoles <br>
 /*instead*/  void RemovePoleCol(Standard_Integer VIndex) ;

//! Removes a row of poles. <br>
//!  If the surface was rational it can become non-rational. <br>
//!  Raised if NbUPoles <= 2 after removing, a Bezier surface <br>
//!  must have at least two rows of poles. <br>//! Raised if Uindex < 1 or UIndex > NbUPoles <br>
 /*instead*/  void RemovePoleRow(Standard_Integer UIndex) ;

//! Modifies this Bezier surface by segmenting it <br>
//! between U1 and U2 in the u parametric direction, <br>
//! and between V1 and V2 in the v parametric <br>
//! direction. U1, U2, V1, and V2 can be outside the <br>
//! bounds of this surface. <br>
//! - U1 and U2 isoparametric Bezier curves, <br>
//! segmented between V1 and V2, become the two <br>
//! bounds of the surface in the v parametric <br>
//! direction (0. and 1. u isoparametric curves). <br>
//! - V1 and V2 isoparametric Bezier curves, <br>
//! segmented between U1 and U2, become the two <br>
//! bounds of the surface in the u parametric <br>
//! direction (0. and 1. v isoparametric curves). <br>
//! The poles and weights tables are modified, but the <br>
//! degree of this surface in the u and v parametric <br>
//! directions does not change. <br>
//! U1 can be greater than U2, and V1 can be greater <br>
//! than V2. In these cases, the corresponding <br>
//! parametric direction is inverted. The orientation of <br>
//! the surface is inverted if one (and only one) <br>
//! parametric direction is inverted. <br>
 /*instead*/  void Segment(Standard_Real U1, Standard_Real U2, Standard_Real V1, Standard_Real V2) ;

//! Modifies a pole value. <br>
//!  If the surface is rational the weight of range (UIndex, VIndex) <br>
//!  is not modified. <br>
//!  Raised if  UIndex < 1 or UIndex > NbUPoles  or  VIndex < 1 <br>
//!  or VIndex > NbVPoles. <br>
 /*instead*/  void SetPole(Standard_Integer UIndex, Standard_Integer VIndex, OCNaroWrappers::OCgp_Pnt^ P) ;


//!  Substitutes the pole and the weight of range UIndex, VIndex. <br>
//!  If the surface <me> is not rational it can become rational. <br>
//!  if the surface was rational it can become non-rational. <br>
//!  raises if  UIndex < 1 or UIndex > NbUPoles  or  VIndex < 1 <br>
//!  or VIndex > NbVPoles. <br>//! Raised if Weight <= Resolution from package gp. <br>
 /*instead*/  void SetPole(Standard_Integer UIndex, Standard_Integer VIndex, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Weight) ;

//!  Modifies a column of poles. <br>
//!  The length of CPoles can be lower but not greater than NbUPoles <br>
//!  so you can modify just a part of the column. <br>//!  Raised if VIndex < 1 or  VIndex > NbVPoles <br>
//!  Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbUPoles <br>
 /*instead*/  void SetPoleCol(Standard_Integer VIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles) ;

//!  Modifies a column of poles. <br>
//!  If the surface was rational it can become non-rational <br>
//!  If the surface was non-rational it can become rational. <br>
//!  The length of CPoles can be lower but not greater than NbUPoles <br>
//!  so you can modify just a part of the column. <br>//!  Raised if VIndex < 1 or  VIndex > NbVPoles <br>
//!  Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbUPoles <br>
//!  Raised if CPoleWeights and CPoles have not the same bounds. <br>
//!  Raised if one of the weight value CPoleWeights (i) is lower <br>
//!  or equal to Resolution from package gp. <br>
 /*instead*/  void SetPoleCol(Standard_Integer VIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles, OCNaroWrappers::OCTColStd_Array1OfReal^ CPoleWeights) ;

//!  Modifies a row of poles. <br>
//!  The length of CPoles can be lower but not greater than NbVPoles <br>
//!  so you can modify just a part of the row. <br>//!  Raised if UIndex < 1 or  UIndex > NbUPoles <br>
//!  Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbVPoles <br>
 /*instead*/  void SetPoleRow(Standard_Integer UIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles) ;

//!  Modifies a row of poles and weights. <br>
//!  If the surface was rational it can become non-rational. <br>
//!  If the surface was non-rational it can become rational. <br>
//!  The length of CPoles can be lower but not greater than NbVPoles <br>
//!  so you can modify just a part of the row. <br>//!  Raised if UIndex < 1 or  UIndex > NbUPoles <br>
//!  Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbVPoles <br>
//!  Raised if CPoleWeights and CPoles have not the same bounds. <br>
//!  Raised if one of the weight value CPoleWeights (i) is lower <br>
//!  or equal to Resolution from gp. <br>
 /*instead*/  void SetPoleRow(Standard_Integer UIndex, OCNaroWrappers::OCTColgp_Array1OfPnt^ CPoles, OCNaroWrappers::OCTColStd_Array1OfReal^ CPoleWeights) ;


//!  Modifies the weight of the pole of range UIndex, VIndex. <br>
//!  If the surface was non-rational it can become rational. <br>
//!  If the surface was rational it can become non-rational. <br>
//!  Raised if UIndex < 1  or  UIndex > NbUPoles or VIndex < 1 or <br>
//!  VIndex > NbVPoles. <br>//! Raised if Weight <= Resolution from package gp. <br>
 /*instead*/  void SetWeight(Standard_Integer UIndex, Standard_Integer VIndex, Standard_Real Weight) ;

//!  Modifies a column of weights. <br>
//!  If the surface was rational it can become non-rational. <br>
//!  If the surface was non-rational it can become rational. <br>
//!  The length of CPoleWeights can be lower but not greater than <br>
//!  NbUPoles. <br>//!  Raised if VIndex < 1 or  VIndex > NbVPoles <br>
//!  Raised if CPoleWeights.Lower() < 1 or CPoleWeights.Upper() > <br>
//!  NbUPoles <br>
//!  Raised if one of the weight value CPoleWeights (i) is lower <br>
//!  or equal to Resolution from package gp. <br>
 /*instead*/  void SetWeightCol(Standard_Integer VIndex, OCNaroWrappers::OCTColStd_Array1OfReal^ CPoleWeights) ;

//!  Modifies a row of weights. <br>
//!  If the surface was rational it can become non-rational. <br>
//!  If the surface was non-rational it can become rational. <br>
//!  The length of CPoleWeights can be lower but not greater than <br>
//!  NbVPoles. <br>//!  Raised if UIndex < 1 or  UIndex > NbUPoles <br>
//!  Raised if CPoleWeights.Lower() < 1 or CPoleWeights.Upper() > <br>
//!  NbVPoles <br>
//!  Raised if one of the weight value CPoleWeights (i) is lower <br>
//!  or equal to Resolution from package gp. <br>
 /*instead*/  void SetWeightRow(Standard_Integer UIndex, OCNaroWrappers::OCTColStd_Array1OfReal^ CPoleWeights) ;

//! Changes the orientation of this Bezier surface in the <br>
//! u  parametric direction. The bounds of the <br>
//! surface are not changed, but the given parametric <br>
//! direction is reversed. Hence, the orientation of the surface is reversed. <br>
 /*instead*/  void UReverse() ;

//! Computes the u (or v) parameter on the modified <br>
//! surface, produced by reversing its u (or v) parametric <br>
//! direction, for any point of u parameter U (or of v <br>
//! parameter V) on this Bezier surface. <br>
//! In the case of a Bezier surface, these functions return respectively: <br>
//! - 1.-U, or 1.-V. <br>
 /*instead*/  Standard_Real UReversedParameter(Standard_Real U) ;

//! Changes the orientation of this Bezier surface in the <br>
//! v parametric direction. The bounds of the <br>
//! surface are not changed, but the given parametric <br>
//! direction is reversed. Hence, the orientation of the <br>
//! surface is reversed. <br>
 /*instead*/  void VReverse() ;

//! Computes the u (or v) parameter on the modified <br>
//! surface, produced by reversing its u (or v) parametric <br>
//! direction, for any point of u parameter U (or of v <br>
//! parameter V) on this Bezier surface. <br>
//! In the case of a Bezier surface, these functions return respectively: <br>
//! - 1.-U, or 1.-V. <br>
 /*instead*/  Standard_Real VReversedParameter(Standard_Real V) ;

//! Returns the parametric bounds U1, U2, V1 and V2 of <br>
//! this Bezier surface. <br>
//! In the case of a Bezier surface, this function returns <br>
//!        U1 = 0, V1 = 0, U2 = 1, V2 = 1. <br>
 /*instead*/  void Bounds(Standard_Real& U1, Standard_Real& U2, Standard_Real& V1, Standard_Real& V2) ;


//!  Returns the continuity of the surface CN : the order of <br>
//!  continuity is infinite. <br>
 /*instead*/  OCGeomAbs_Shape Continuity() ;


 /*instead*/  void D0(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P) ;


 /*instead*/  void D1(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V) ;


 /*instead*/  void D2(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV) ;

//! Computes P, the point of parameters (U, V) of this Bezier surface, and <br>
//! - one or more of the following sets of vectors: <br>
//! - D1U and D1V, the first derivative vectors at this point, <br>
//!   - D2U, D2V and D2UV, the second derivative <br>
//!    vectors at this point, <br>
//!   - D3U, D3V, D3UUV and D3UVV, the third <br>
//!    derivative vectors at this point. <br>
//! Note: The parameters U and V can be outside the bounds of the surface. <br>
 /*instead*/  void D3(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV) ;

//! Computes the derivative of order Nu in the u <br>
//!  parametric direction, and Nv in the v parametric <br>
//! direction, at the point of parameters (U, V) of this Bezier surface. <br>
//! Note: The parameters U and V can be outside the bounds of the surface. <br>
//! Exceptions <br>
//! Standard_RangeError if: <br>
//! - Nu + Nv is less than 1, or Nu or Nv is negative. <br>
 /*instead*/  OCgp_Vec^ DN(Standard_Real U, Standard_Real V, Standard_Integer Nu, Standard_Integer Nv) ;

//! Returns the number of poles in the U direction. <br>
 /*instead*/  Standard_Integer NbUPoles() ;

//! Returns the number of poles in the V direction. <br>
 /*instead*/  Standard_Integer NbVPoles() ;

//! Returns the pole of range UIndex, VIndex <br>//! Raised if UIndex < 1 or UIndex > NbUPoles, or <br>
//!  VIndex < 1 or VIndex > NbVPoles. <br>
 /*instead*/  OCgp_Pnt^ Pole(Standard_Integer UIndex, Standard_Integer VIndex) ;

//! Returns the poles of the Bezier surface. <br>
//!  Raised if the length of P in the U an V direction is not equal to <br>
//!  NbUPoles and NbVPoles. <br>
 /*instead*/  void Poles(OCNaroWrappers::OCTColgp_Array2OfPnt^ P) ;


//!  Returns the degree of the surface in the U direction it is <br>
//!  NbUPoles - 1 <br>
 /*instead*/  Standard_Integer UDegree() ;


//!  Computes the U isoparametric curve. For a Bezier surface the <br>
//!  UIso curve is a Bezier curve. <br>
 /*instead*/  OCGeom_Curve^ UIso(Standard_Real U) ;


//!  Returns the degree of the surface in the V direction it is <br>
//!  NbVPoles - 1 <br>
 /*instead*/  Standard_Integer VDegree() ;


//!  Computes the V isoparametric curve. For a Bezier surface the <br>
//!  VIso  curve is a Bezier curve. <br>
 /*instead*/  OCGeom_Curve^ VIso(Standard_Real V) ;

//! Returns the weight of range UIndex, VIndex <br>
//!  Raised if UIndex < 1 or UIndex > NbUPoles, or <br>
//!            VIndex < 1 or VIndex > NbVPoles. <br>
 /*instead*/  Standard_Real Weight(Standard_Integer UIndex, Standard_Integer VIndex) ;

//! Returns the weights of the Bezier surface. <br>
//!  Raised if the length of W in the U an V direction is not <br>
//!  equal to NbUPoles and NbVPoles. <br>
 /*instead*/  void Weights(OCNaroWrappers::OCTColStd_Array2OfReal^ W) ;


//!  Returns True if the first control points row and the <br>
//!  last control points row are identical. The tolerance <br>
//!  criterion is Resolution from package gp. <br>
 /*instead*/  System::Boolean IsUClosed() ;


//!  Returns True if the first control points column <br>
//!  and the last control points column are identical. <br>
//!  The tolerance criterion is Resolution from package gp. <br>
 /*instead*/  System::Boolean IsVClosed() ;

//! Returns True, a Bezier surface is always  CN <br>
 /*instead*/  System::Boolean IsCNu(Standard_Integer N) ;

//! Returns True, a BezierSurface is always  CN <br>
 /*instead*/  System::Boolean IsCNv(Standard_Integer N) ;

//! Returns False. <br>
 /*instead*/  System::Boolean IsUPeriodic() ;

//! Returns False. <br>
 /*instead*/  System::Boolean IsVPeriodic() ;


//!  Returns False if the weights are identical in the U direction, <br>
//!  The tolerance criterion is Resolution from package gp. <br>
//! Example : <br>
//!                 |1.0, 1.0, 1.0| <br>
//!   if Weights =  |0.5, 0.5, 0.5|   returns False <br>
//!                 |2.0, 2.0, 2.0| <br>
 /*instead*/  System::Boolean IsURational() ;


//!  Returns False if the weights are identical in the V direction, <br>
//!  The tolerance criterion is Resolution from package gp. <br>
//! Example : <br>
//!                 |1.0, 2.0, 0.5| <br>
//!   if Weights =  |1.0, 2.0, 0.5|   returns False <br>
//!                 |1.0, 2.0, 0.5| <br>
 /*instead*/  System::Boolean IsVRational() ;

//! Applies the transformation T to this Bezier surface. <br>
 /*instead*/  void Transform(OCNaroWrappers::OCgp_Trsf^ T) ;


//!  Returns the value of the maximum polynomial degree of a <br>
//!  Bezier surface. This value is 25. <br>
static /*instead*/  Standard_Integer MaxDegree() ;

//! Computes two tolerance values for this Bezier <br>
//! surface, based on the given tolerance in 3D space <br>
//! Tolerance3D. The tolerances computed are: <br>
//! - UTolerance in the u parametric direction, and <br>
//! - VTolerance in the v parametric direction. <br>
//! If f(u,v) is the equation of this Bezier surface, <br>
//! UTolerance and VTolerance guarantee that: <br>
//!          | u1 - u0 | < UTolerance and <br>
//!          | v1 - v0 | < VTolerance <br>
//!          ====> |f (u1,v1) - f (u0,v0)| < Tolerance3D <br>
 /*instead*/  void Resolution(Standard_Real Tolerance3D, Standard_Real& UTolerance, Standard_Real& VTolerance) ;

//! Creates a new object which is a copy of this Bezier surface. <br>
 /*instead*/  OCGeom_Geometry^ Copy() ;

~OCGeom_BezierSurface()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
