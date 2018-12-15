// File generated by CPPExt (MPV)
//
#ifndef _ProjLib_ProjectedCurve_OCWrappers_HeaderFile
#define _ProjLib_ProjectedCurve_OCWrappers_HeaderFile

// include native header
#include <ProjLib_ProjectedCurve.hxx>
#include "../Converter.h"

#include "../Adaptor2d/Adaptor2d_Curve2d.h"

#include "ProjLib_Projector.h"
#include "../Adaptor2d/Adaptor2d_Curve2d.h"
#include "../GeomAbs/GeomAbs_Shape.h"
#include "../GeomAbs/GeomAbs_CurveType.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCAdaptor3d_HCurve;
ref class OCTColStd_Array1OfReal;
ref class OCAdaptor2d_HCurve2d;
ref class OCgp_Pnt2d;
ref class OCgp_Vec2d;
ref class OCgp_Lin2d;
ref class OCgp_Circ2d;
ref class OCgp_Elips2d;
ref class OCgp_Hypr2d;
ref class OCgp_Parab2d;
ref class OCGeom2d_BezierCurve;
ref class OCGeom2d_BSplineCurve;



public ref class OCProjLib_ProjectedCurve  : public OCAdaptor2d_Curve2d {

protected:
  // dummy constructor;
  OCProjLib_ProjectedCurve(OCDummy^) : OCAdaptor2d_Curve2d((OCDummy^)nullptr) {};

public:

// constructor from native
OCProjLib_ProjectedCurve(ProjLib_ProjectedCurve* nativeHandle);

// Methods PUBLIC


OCProjLib_ProjectedCurve();


OCProjLib_ProjectedCurve(OCNaroWrappers::OCAdaptor3d_HSurface^ S);


OCProjLib_ProjectedCurve(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor3d_HCurve^ C);


OCProjLib_ProjectedCurve(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor3d_HCurve^ C, Standard_Real Tol);

//! Changes the tolerance used to project <br>
//!          the curve on the surface <br>
 /*instead*/  void Load(Standard_Real Tolerance) ;

//! Changes the Surface. <br>
 /*instead*/  void Load(OCNaroWrappers::OCAdaptor3d_HSurface^ S) ;

//! Changes the Curve. <br>
 /*instead*/  void Load(OCNaroWrappers::OCAdaptor3d_HCurve^ C) ;


 /*instead*/  OCAdaptor3d_HSurface^ GetSurface() ;


 /*instead*/  OCAdaptor3d_HCurve^ GetCurve() ;

//! returns the tolerance reached if an approximation <br>
//!          is Done. <br>
 /*instead*/  Standard_Real GetTolerance() ;


virtual /*instead*/  Standard_Real FirstParameter() override;


virtual /*instead*/  Standard_Real LastParameter() override;


virtual /*instead*/  OCGeomAbs_Shape Continuity() override;

//! If necessary,  breaks the  curve in  intervals  of <br>
//!          continuity  <S>.    And  returns   the number   of <br>
//!          intervals. <br>
virtual /*instead*/  Standard_Integer NbIntervals(OCGeomAbs_Shape S) override;

//! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
virtual /*instead*/  void Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) override;

//! Returns    a  curve equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
virtual /*instead*/  OCAdaptor2d_HCurve2d^ Trim(Standard_Real First, Standard_Real Last, Standard_Real Tol) override;


virtual /*instead*/  System::Boolean IsClosed() override;


virtual /*instead*/  System::Boolean IsPeriodic() override;


virtual /*instead*/  Standard_Real Period() override;

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


//!  Returns the point P of parameter U, the first, the second <br>
//!  and the third derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C3. <br>
virtual /*instead*/  void D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2, OCNaroWrappers::OCgp_Vec2d^ V3) override;


//!  The returned vector gives the value of the derivative for the <br>
//!  order of derivation N. <br>//! Raised if the continuity of the current interval <br>
//!  is not CN. <br>//! Raised if N < 1. <br>
virtual /*instead*/  OCgp_Vec2d^ DN(Standard_Real U, Standard_Integer N) override;

//!  Returns the parametric  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
virtual /*instead*/  Standard_Real Resolution(Standard_Real R3d) override;

//! Returns  the  type of the   curve  in the  current <br>
//!          interval :   Line,   Circle,   Ellipse, Hyperbola, <br>
//!          Parabola, BezierCurve, BSplineCurve, OtherCurve. <br>
virtual /*instead*/  OCGeomAbs_CurveType GetType() override;


virtual /*instead*/  OCgp_Lin2d^ Line() override;


virtual /*instead*/  OCgp_Circ2d^ Circle() override;


virtual /*instead*/  OCgp_Elips2d^ Ellipse() override;


virtual /*instead*/  OCgp_Hypr2d^ Hyperbola() override;


virtual /*instead*/  OCgp_Parab2d^ Parabola() override;


virtual /*instead*/  Standard_Integer Degree() override;


virtual /*instead*/  System::Boolean IsRational() override;


virtual /*instead*/  Standard_Integer NbPoles() override;


virtual /*instead*/  Standard_Integer NbKnots() override;

//!  Warning ! This will  NOT make a copy  of the -- Bezier Curve - <br>
//!         If you want to modify -- the Curve  please make a copy <br>
//!         yourself --  Also it will  NOT trim the surface  to -- <br>
//!         myFirst/Last. <br>
virtual /*instead*/  OCGeom2d_BezierCurve^ Bezier() override;

//!  Warning ! This will NOT make a copy of the BSpline Curve - If <br>
//!         you want to  modify the   Curve  please make a   copy <br>
//!         yourself Also it   will  NOT  trim   the surface   to <br>
//!         myFirst/Last. <br>
virtual /*instead*/  OCGeom2d_BSplineCurve^ BSpline() override;

~OCProjLib_ProjectedCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
