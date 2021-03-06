// File generated by CPPExt (MPV)
//
#ifndef _ProjLib_CompProjectedCurve_OCWrappers_HeaderFile
#define _ProjLib_CompProjectedCurve_OCWrappers_HeaderFile

// include native header
#include <ProjLib_CompProjectedCurve.hxx>
#include "../Converter.h"

#include "../Adaptor2d/Adaptor2d_Curve2d.h"

#include "../Adaptor2d/Adaptor2d_Curve2d.h"
#include "../GeomAbs/GeomAbs_Shape.h"
#include "../GeomAbs/GeomAbs_CurveType.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCAdaptor3d_HCurve;
ref class OCProjLib_HSequenceOfHSequenceOfPnt;
ref class OCTColStd_HArray1OfBoolean;
ref class OCTColStd_HArray1OfReal;
ref class OCgp_Pnt2d;
ref class OCgp_Vec2d;
ref class OCAdaptor2d_HCurve2d;
ref class OCTColStd_Array1OfReal;



public ref class OCProjLib_CompProjectedCurve  : public OCAdaptor2d_Curve2d {

protected:
  // dummy constructor;
  OCProjLib_CompProjectedCurve(OCDummy^) : OCAdaptor2d_Curve2d((OCDummy^)nullptr) {};

public:

// constructor from native
OCProjLib_CompProjectedCurve(ProjLib_CompProjectedCurve* nativeHandle);

// Methods PUBLIC


OCProjLib_CompProjectedCurve();

//! try to find all solutions <br>
OCProjLib_CompProjectedCurve(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor3d_HCurve^ C, Standard_Real TolU, Standard_Real TolV);

//! this constructor tries to optimize the search using the <br>
//! assamption that maximum distance between surface and curve less or <br>
//! equal then MaxDist. <br>
//! if MaxDist < 0 then algorithm works as above. <br>
OCProjLib_CompProjectedCurve(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor3d_HCurve^ C, Standard_Real TolU, Standard_Real TolV, Standard_Real MaxDist);

//! computes a set of projected point and determine the <br>
//! continuous parts of the projected  curves. The  points <br>
//! corresponding to a projection on the bounds of the surface are <br>
//! included  in this set of points. <br>
 /*instead*/  void Init() ;

//! Changes the surface. <br>
 /*instead*/  void Load(OCNaroWrappers::OCAdaptor3d_HSurface^ S) ;

//! Changes the  curve. <br>
 /*instead*/  void Load(OCNaroWrappers::OCAdaptor3d_HCurve^ C) ;


 /*instead*/  OCAdaptor3d_HSurface^ GetSurface() ;


 /*instead*/  OCAdaptor3d_HCurve^ GetCurve() ;


 /*instead*/  void GetTolerance(Standard_Real& TolU, Standard_Real& TolV) ;

//! returns the number of continuous part of the projected curve <br>
 /*instead*/  Standard_Integer NbCurves() ;

//! returns the bounds of the continuous part corresponding to Index <br>
 /*instead*/  void Bounds(Standard_Integer Index, Standard_Real& Udeb, Standard_Real& Ufin) ;

//! returns  True  if  part  of  projection with  number  Index is  a  single  point  and  writes  its  coordinats in  P <br>
 /*instead*/  System::Boolean IsSinglePnt(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt2d^ P) ;

//! returns  True  if  part  of  projection with  number  Index is  an  u-isoparametric curve  of  input  surface <br>
 /*instead*/  System::Boolean IsUIso(Standard_Integer Index, Standard_Real& U) ;

//! returns  True  if  part  of  projection with  number  Index is  an  v-isoparametric curve  of  input  surface <br>
 /*instead*/  System::Boolean IsVIso(Standard_Integer Index, Standard_Real& V) ;

//! Computes the point of parameter U on the curve. <br>
virtual /*instead*/  OCgp_Pnt2d^ Value(Standard_Real U) override;

//! Computes the point of parameter U on the curve. <br>
virtual /*instead*/  void D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P) override;

//! Computes the point of parameter U on the curve with its <br>
//!  first derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C1. <br>
virtual /*instead*/  void D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V) override;


//!  Returns the point P of parameter U, the first and second <br>
//!  derivatives V1 and V2. <br>//! Raised if the continuity of the current interval <br>
//!  is not C2. <br>
virtual /*instead*/  void D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2) override;


//!  The returned vector gives the value of the derivative for the <br>
//!  order of derivation N. <br>//! Raised if N < 1. <br>//! Raised if N > 2. <br>
virtual /*instead*/  OCgp_Vec2d^ DN(Standard_Real U, Standard_Integer N) override;

//! Returns  the  first  parameter of  the  curve  C <br>
//!  which  has  a  projection  on  S. <br>
virtual /*instead*/  Standard_Real FirstParameter() override;

//! Returns  the  last  parameter of  the  curve  C <br>
//!  which  has  a  projection  on  S. <br>
virtual /*instead*/  Standard_Real LastParameter() override;

//! Returns  the number  of  intervals which  define <br>
//!  an  S  continuous  part  of  the  projected  curve <br>
virtual /*instead*/  Standard_Integer NbIntervals(OCGeomAbs_Shape S) override;

//! Returns    a  curve equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 2d points confusion. <br>//! If <First> >= <Last> <br>
virtual /*instead*/  OCAdaptor2d_HCurve2d^ Trim(Standard_Real FirstParam, Standard_Real LastParam, Standard_Real Tol) override;

//! Returns  the  parameters  corresponding  to <br>
//!          S  discontinuities. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
virtual /*instead*/  void Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) override;

//!  returns  the  maximum  distance  between <br>
//!  curve  to  project  and  surface <br>
 /*instead*/  Standard_Real MaxDistance(Standard_Integer Index) ;


 /*instead*/  OCProjLib_HSequenceOfHSequenceOfPnt^ GetSequence() ;

//! Returns  the  type of the   curve  in the  current <br>
//!          interval :   Line,   Circle,   Ellipse, Hyperbola, <br>
//!          Parabola, BezierCurve, BSplineCurve, OtherCurve. <br>
virtual /*instead*/  OCGeomAbs_CurveType GetType() override;

~OCProjLib_CompProjectedCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
