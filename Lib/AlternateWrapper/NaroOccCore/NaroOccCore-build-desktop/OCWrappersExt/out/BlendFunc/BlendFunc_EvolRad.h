// File generated by CPPExt (MPV)
//
#ifndef _BlendFunc_EvolRad_OCWrappers_HeaderFile
#define _BlendFunc_EvolRad_OCWrappers_HeaderFile

// include native header
#include <BlendFunc_EvolRad.hxx>
#include "../Converter.h"

#include "../Blend/Blend_Function.h"

#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Vec2d.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "BlendFunc_Tensor.h"
#include "BlendFunc_SectionShape.h"
#include "../Convert/Convert_ParameterisationType.h"
#include "../Blend/Blend_Function.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCAdaptor3d_HCurve;
ref class OCLaw_Function;
ref class OCmath_Vector;
ref class OCmath_Matrix;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCgp_Vec2d;
ref class OCgp_Circ;
ref class OCTColStd_Array1OfReal;
ref class OCTColStd_Array1OfInteger;
ref class OCBlend_Point;
ref class OCTColgp_Array1OfPnt;
ref class OCTColgp_Array1OfVec;
ref class OCTColgp_Array1OfPnt2d;
ref class OCTColgp_Array1OfVec2d;



public ref class OCBlendFunc_EvolRad  : public OCBlend_Function {

protected:
  // dummy constructor;
  OCBlendFunc_EvolRad(OCDummy^) : OCBlend_Function((OCDummy^)nullptr) {};

public:

// constructor from native
OCBlendFunc_EvolRad(BlendFunc_EvolRad* nativeHandle);

// Methods PUBLIC


OCBlendFunc_EvolRad(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_HCurve^ C, OCNaroWrappers::OCLaw_Function^ Law);

//! returns the number of equations of the function. <br>
virtual /*instead*/  Standard_Integer NbEquations() ;

//! computes the values <F> of the Functions for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
virtual /*instead*/  System::Boolean Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F) ;

//! returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
virtual /*instead*/  System::Boolean Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D) ;

//! returns the values <F> of the functions and the derivatives <br>
//!          <D> for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
virtual /*instead*/  System::Boolean Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D) ;


 /*instead*/  void Set(Standard_Real Param) ;


 /*instead*/  void Set(Standard_Real First, Standard_Real Last) ;


 /*instead*/  void GetTolerance(OCNaroWrappers::OCmath_Vector^ Tolerance, Standard_Real Tol) ;


 /*instead*/  void GetBounds(OCNaroWrappers::OCmath_Vector^ InfBound, OCNaroWrappers::OCmath_Vector^ SupBound) ;


 /*instead*/  System::Boolean IsSolution(OCNaroWrappers::OCmath_Vector^ Sol, Standard_Real Tol) ;

//! Returns   the    minimal  Distance  beetween   two <br>
//!          extremitys of calculed sections. <br>
 /*instead*/  Standard_Real GetMinimalDistance() ;


 /*instead*/  OCgp_Pnt^ PointOnS1() ;


 /*instead*/  OCgp_Pnt^ PointOnS2() ;


 /*instead*/  System::Boolean IsTangencyPoint() ;


 /*instead*/  OCgp_Vec^ TangentOnS1() ;


 /*instead*/  OCgp_Vec2d^ Tangent2dOnS1() ;


 /*instead*/  OCgp_Vec^ TangentOnS2() ;


 /*instead*/  OCgp_Vec2d^ Tangent2dOnS2() ;

//! Returns the tangent vector at the section, <br>
//!          at the beginning and the end of the section, and <br>
//!          returns the normal (of the surfaces) at <br>
//!          these points. <br>
 /*instead*/  void Tangent(Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, OCNaroWrappers::OCgp_Vec^ TgFirst, OCNaroWrappers::OCgp_Vec^ TgLast, OCNaroWrappers::OCgp_Vec^ NormFirst, OCNaroWrappers::OCgp_Vec^ NormLast) ;


virtual /*instead*/  System::Boolean TwistOnS1() override;


virtual /*instead*/  System::Boolean TwistOnS2() override;


 /*instead*/  void Set(Standard_Integer Choix) ;

//! Sets  the  type  of   section generation   for the <br>
//!          approximations. <br>
 /*instead*/  void Set(OCBlendFunc_SectionShape TypeSection) ;

//! Method for graphic traces <br>
 /*instead*/  void Section(Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real& Pdeb, Standard_Real& Pfin, OCNaroWrappers::OCgp_Circ^ C) ;

//! Returns  if the section is rationnal <br>
 /*instead*/  System::Boolean IsRational() ;

//!  Returns the length of the maximum section <br>
 /*instead*/  Standard_Real GetSectionSize() ;

//! Compute the minimal value of weight for each poles <br>
//!          of all sections. <br>
 /*instead*/  void GetMinimalWeight(OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths) ;

//! Returns  the number  of  intervals for  continuity <br>
//!          <S>. May be one if Continuity(me) >= <S> <br>
 /*instead*/  Standard_Integer NbIntervals(OCGeomAbs_Shape S) ;

//! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
 /*instead*/  void Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) ;


 /*instead*/  void GetShape(Standard_Integer& NbPoles, Standard_Integer& NbKnots, Standard_Integer& Degree, Standard_Integer& NbPoles2d) ;

//! Returns the tolerance to reach in approximation <br>
//!          to respecte <br>
//!          BoundTol error at the Boundary <br>
//!          AngleTol tangent error at the Boundary <br>
//!          SurfTol error inside the surface. <br>
 /*instead*/  void GetTolerance(Standard_Real BoundTol, Standard_Real SurfTol, Standard_Real AngleTol, OCNaroWrappers::OCmath_Vector^ Tol3d, OCNaroWrappers::OCmath_Vector^ Tol1D) ;


 /*instead*/  void Knots(OCNaroWrappers::OCTColStd_Array1OfReal^ TKnots) ;


 /*instead*/  void Mults(OCNaroWrappers::OCTColStd_Array1OfInteger^ TMults) ;

//! Used for the first and last section <br>
virtual /*instead*/  System::Boolean Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfVec^ D2Poles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ DPoles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ D2Poles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths, OCNaroWrappers::OCTColStd_Array1OfReal^ D2Weigths) override;

//! Used for the first and last section <br>
virtual /*instead*/  System::Boolean Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ DPoles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths) ;


 /*instead*/  void Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths) ;


 /*instead*/  void Resolution(Standard_Integer IC2d, Standard_Real Tol, Standard_Real& TolU, Standard_Real& TolV) ;

~OCBlendFunc_EvolRad()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
