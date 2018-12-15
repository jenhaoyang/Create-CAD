// File generated by CPPExt (MPV)
//
#ifndef _Adaptor3d_OffsetCurve_OCWrappers_HeaderFile
#define _Adaptor3d_OffsetCurve_OCWrappers_HeaderFile

// include native header
#include <Adaptor3d_OffsetCurve.hxx>
#include "../Converter.h"

#include "../Adaptor2d/Adaptor2d_Curve2d.h"

#include "../Adaptor2d/Adaptor2d_Curve2d.h"
#include "../GeomAbs/GeomAbs_Shape.h"
#include "../GeomAbs/GeomAbs_CurveType.h"


namespace OCNaroWrappers
{

ref class OCAdaptor2d_HCurve2d;
ref class OCTColStd_Array1OfReal;
ref class OCgp_Pnt2d;
ref class OCgp_Vec2d;
ref class OCgp_Lin2d;
ref class OCgp_Circ2d;
ref class OCgp_Elips2d;
ref class OCgp_Hypr2d;
ref class OCgp_Parab2d;
ref class OCGeom2d_BezierCurve;
ref class OCGeom2d_BSplineCurve;


//! Defines an Offset curve. <br>
//! <br>
public ref class OCAdaptor3d_OffsetCurve  : public OCAdaptor2d_Curve2d {

protected:
  // dummy constructor;
  OCAdaptor3d_OffsetCurve(OCDummy^) : OCAdaptor2d_Curve2d((OCDummy^)nullptr) {};

public:

// constructor from native
OCAdaptor3d_OffsetCurve(Adaptor3d_OffsetCurve* nativeHandle);

// Methods PUBLIC

//! The Offset is set to 0. <br>
OCAdaptor3d_OffsetCurve();

//! The curve is loaded. The Offset is set to 0. <br>
OCAdaptor3d_OffsetCurve(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C);

//! Creates  an  OffsetCurve curve. <br>
//!          The Offset is set to Offset. <br>
//! <br>
OCAdaptor3d_OffsetCurve(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real Offset);

//! Create an Offset curve. <br>
//!          WFirst,WLast define the bounds of the Offset curve. <br>
OCAdaptor3d_OffsetCurve(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real Offset, Standard_Real WFirst, Standard_Real WLast);

//! Changes  the curve.  The Offset is reset to 0. <br>
 /*instead*/  void Load(OCNaroWrappers::OCAdaptor2d_HCurve2d^ S) ;

//! Changes the Offset on the current Curve. <br>
 /*instead*/  void Load(Standard_Real Offset) ;

//! Changes the Offset Curve on the current Curve. <br>
 /*instead*/  void Load(Standard_Real Offset, Standard_Real WFirst, Standard_Real WLast) ;


 /*instead*/  OCAdaptor2d_HCurve2d^ Curve() ;


 /*instead*/  Standard_Real Offset() ;


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


virtual /*instead*/  OCGeom2d_BezierCurve^ Bezier() override;


virtual /*instead*/  OCGeom2d_BSplineCurve^ BSpline() override;

~OCAdaptor3d_OffsetCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
