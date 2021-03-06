// File generated by CPPExt (Transient)
//
#ifndef _Geom_ToroidalSurface_OCWrappers_HeaderFile
#define _Geom_ToroidalSurface_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom_ToroidalSurface.hxx>
#include "../Converter.h"

#include "Geom_ElementarySurface.h"



namespace OCNaroWrappers
{

ref class OCgp_Ax3;
ref class OCgp_Torus;
ref class OCTColStd_Array1OfReal;
ref class OCGeom_Curve;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCgp_Trsf;
ref class OCGeom_Geometry;


//!  Describes a torus. <br>
//! A torus is defined by its major and minor radii, and <br>
//! positioned in space with a coordinate system (a <br>
//! gp_Ax3 object) as follows: <br>
//! - The origin is the center of the torus. <br>
//! - The surface is obtained by rotating a circle around <br>
//!   the "main Direction". This circle has a radius equal <br>
//!   to the minor radius, and is located in the plane <br>
//!   defined by the origin, "X Direction" and "main <br>
//!   Direction". It is centered on the "X Axis", on its <br>
//!   positive side, and positioned at a distance from the <br>
//!   origin equal to the major radius. This circle is the <br>
//!   "reference circle" of the torus. <br>
//! - The plane defined by the origin, the "X Direction" <br>
//!   and the "Y Direction" is called the "reference plane" of the torus. <br>
//!   This coordinate system is the "local coordinate <br>
//! system" of the torus. The following apply: <br>
//! - Rotation around its "main Axis", in the trigonometric <br>
//!   sense given by "X Direction" and "Y Direction", <br>
//!   defines the u parametric direction. <br>
//! - The "X Axis" gives the origin for the u parameter. <br>
//! - Rotation around an axis parallel to the "Y Axis" and <br>
//!   passing through the center of the "reference circle" <br>
//!   gives the v parameter on the "reference circle". <br>
//! - The "X Axis" gives the origin of the v parameter on <br>
//!   the "reference circle". <br>
//! - The v parametric direction is oriented by the <br>
//!   inverse of the "main Direction", i.e. near 0, as v <br>
//!   increases, the Z coordinate decreases. (This <br>
//!   implies that the "Y Direction" orients the reference <br>
//!   circle only when the local coordinate system is direct.) <br>
//! - The u isoparametric curve is a circle obtained by <br>
//!   rotating the "reference circle" of the torus through <br>
//!   an angle u about the "main Axis". <br>
//!   The parametric equation of the torus is : <br>
//!   P(u, v) = O + (R + r*cos(v)) * (cos(u)*XDir + <br>
//!   sin(u)*YDir ) + r*sin(v)*ZDir, where: <br>
//! - O, XDir, YDir and ZDir are respectively the <br>
//!   origin, the "X Direction", the "Y Direction" and the "Z <br>
//!   Direction" of the local coordinate system, <br>
//! - r and R are, respectively, the minor and major radius. <br>
//!   The parametric range of the two parameters is: <br>
//! - [ 0, 2.*Pi ] for u <br>
//! - [ 0, 2.*Pi ] for v <br>
public ref class OCGeom_ToroidalSurface : OCGeom_ElementarySurface {

protected:
  // dummy constructor;
  OCGeom_ToroidalSurface(OCDummy^) : OCGeom_ElementarySurface((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom_ToroidalSurface(Handle(Geom_ToroidalSurface)* nativeHandle);

// Methods PUBLIC


//!  A3 is the local coordinate system of the surface. <br>
//!  The orientation of increasing V parametric value is defined <br>
//!  by the rotation around the main axis (ZAxis) in the <br>
//!  trigonometric sense. The parametrization of the surface in the <br>
//!  U direction is defined such as the normal Vector (N = D1U ^ D1V) <br>
//!  is oriented towards the "outside region" of the surface. <br>
//!  Warnings : <br>
//!  It is not forbidden to create a toroidal surface with <br>
//!  MajorRadius = MinorRadius = 0.0 <br>
//!  Raised if MinorRadius < 0.0 or if MajorRadius < 0.0 <br>
OCGeom_ToroidalSurface(OCNaroWrappers::OCgp_Ax3^ A3, Standard_Real MajorRadius, Standard_Real MinorRadius);


//!  Creates a ToroidalSurface from a non transient Torus from <br>
//!  package gp. <br>
OCGeom_ToroidalSurface(OCNaroWrappers::OCgp_Torus^ T);

//!  Modifies this torus by changing its major radius. <br>
//! Exceptions <br>
//! Standard_ConstructionError if: <br>
//! - MajorRadius is negative, or <br>
//! - MajorRadius - r is less than or equal to <br>
//!   gp::Resolution(), where r is the minor radius of this torus. <br>
 /*instead*/  void SetMajorRadius(Standard_Real MajorRadius) ;

//! Modifies this torus by changing its minor radius. <br>
//! Exceptions <br>
//! Standard_ConstructionError if: <br>
//! - MinorRadius is negative, or <br>
//! - R - MinorRadius is less than or equal to <br>
//!   gp::Resolution(), where R is the major radius of this torus. <br>
 /*instead*/  void SetMinorRadius(Standard_Real MinorRadius) ;

//! Converts the gp_Torus torus T into this torus. <br>
 /*instead*/  void SetTorus(OCNaroWrappers::OCgp_Torus^ T) ;


//!  Returns the non transient torus with the same geometric <br>
//!  properties as <me>. <br>
 /*instead*/  OCgp_Torus^ Torus() ;

//! Return the  parameter on the  Ureversed surface for <br>
//!          the point of parameter U on <me>. <br>
//! Return 2.PI - U. <br>
 /*instead*/  Standard_Real UReversedParameter(Standard_Real U) ;

//! Return the  parameter on the  Ureversed surface for <br>
//!          the point of parameter U on <me>. <br>
//! Return 2.PI - U. <br>
 /*instead*/  Standard_Real VReversedParameter(Standard_Real U) ;

//! Computes the aera of the surface. <br>
 /*instead*/  Standard_Real Area() ;

//! Returns the parametric bounds U1, U2, V1 and V2 of this torus. <br>
//!  For a torus: U1 = V1 = 0 and V1 = V2 = 2*PI . <br>
 /*instead*/  void Bounds(Standard_Real& U1, Standard_Real& U2, Standard_Real& V1, Standard_Real& V2) ;


//!  Returns the coefficients of the implicit equation of the surface <br>
//!  in the absolute cartesian coordinate system : <br>
//!  Coef(1) * X**4 + Coef(2) * Y**4 + Coef(3) * Z**4 + <br>
//!  Coef(4) * X**3 * Y + Coef(5) * X**3 * Z + Coef(6) * Y**3 * X + <br>
//!  Coef(7) * Y**3 * Z + Coef(8) * Z**3 * X + Coef(9) * Z**3 * Y + <br>
//!  Coef(10) * X**2 * Y**2 + Coef(11) * X**2 * Z**2 + <br>
//!  Coef(12) * Y**2 * Z**2 + Coef(13) * X**3 + Coef(14) * Y**3 + <br>
//!  Coef(15) * Z**3 + Coef(16) * X**2 * Y + Coef(17) * X**2 * Z + <br>
//!  Coef(18) * Y**2 * X + Coef(19) * Y**2 * Z + Coef(20) * Z**2 * X + <br>
//!  Coef(21) * Z**2 * Y + Coef(22) * X**2 + Coef(23) * Y**2 + <br>
//!  Coef(24) * Z**2 + Coef(25) * X * Y + Coef(26) * X * Z + <br>
//!  Coef(27) * Y * Z + Coef(28) * X + Coef(29) * Y + Coef(30) *  Z + <br>
//!  Coef(31) = 0.0 <br>//! Raised if the length of Coef is lower than 31. <br>
 /*instead*/  void Coefficients(OCNaroWrappers::OCTColStd_Array1OfReal^ Coef) ;

//! Returns the major radius, or the minor radius, of this torus. <br>
 /*instead*/  Standard_Real MajorRadius() ;

//! Returns the major radius, or the minor radius, of this torus. <br>
 /*instead*/  Standard_Real MinorRadius() ;

//! Computes the volume. <br>
 /*instead*/  Standard_Real Volume() ;

//! Returns True. <br>
 /*instead*/  System::Boolean IsUClosed() ;

//! Returns True. <br>
 /*instead*/  System::Boolean IsVClosed() ;

//! Returns True. <br>
 /*instead*/  System::Boolean IsUPeriodic() ;

//! Returns True. <br>
 /*instead*/  System::Boolean IsVPeriodic() ;

//! Computes the U isoparametric curve. <br>
//! <br>
//!  For a toroidal surface the UIso curve is a circle. <br>
//!  The center of the Uiso circle is at the distance MajorRadius <br>
//!  from the location point of the toroidal surface. <br>
//!  Warnings : <br>
//!  The radius of the circle can be zero if for the surface <br>
//!  MinorRadius = 0.0 <br>
 /*instead*/  OCGeom_Curve^ UIso(Standard_Real U) ;

//! Computes the V isoparametric curve. <br>
//! <br>
//!  For a ToroidalSurface the VIso curve is a circle. <br>
//!  The axis of the circle is the main axis (ZAxis) of the <br>
//!  toroidal  surface. <br>
//!  Warnings : <br>
//!  The radius of the circle can be zero if for the surface <br>
//!  MajorRadius = MinorRadius <br>
 /*instead*/  OCGeom_Curve^ VIso(Standard_Real V) ;


//!  Computes the  point P (U, V) on the surface. <br>
//!  P (U, V) = Loc + MinorRadius * Sin (V) * Zdir + <br>
//!             (MajorRadius + MinorRadius * Cos(V)) * <br>
//!             (cos (U) * XDir + sin (U) * YDir) <br>
//!  where Loc is the origin of the placement plane (XAxis, YAxis) <br>
//!  XDir is the direction of the XAxis and YDir the direction of <br>
//!  the YAxis and ZDir the direction of the ZAxis. <br>
 /*instead*/  void D0(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P) ;


//!  Computes the current point and the first derivatives in <br>
//!  the directions U and V. <br>
 /*instead*/  void D1(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V) ;


//!  Computes the current point, the first and the second derivatives <br>
//!  in the directions U and V. <br>
 /*instead*/  void D2(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV) ;


//!  Computes the current point, the first,the second and the <br>
//!  third derivatives in the directions U and V. <br>
 /*instead*/  void D3(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV) ;


//!  Computes the derivative of order Nu in the direction u and <br>
//!  Nv in the direction v. <br>//! Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0. <br>
 /*instead*/  OCgp_Vec^ DN(Standard_Real U, Standard_Real V, Standard_Integer Nu, Standard_Integer Nv) ;

//! Applies the transformation T to this torus. <br>
 /*instead*/  void Transform(OCNaroWrappers::OCgp_Trsf^ T) ;

//! Creates a new object which is a copy of this torus. <br>
 /*instead*/  OCGeom_Geometry^ Copy() ;

~OCGeom_ToroidalSurface()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
