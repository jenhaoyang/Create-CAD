// File generated by CPPExt (MPV)
//
#ifndef _Blend_Point_OCWrappers_HeaderFile
#define _Blend_Point_OCWrappers_HeaderFile

// include native header
#include <Blend_Point.hxx>
#include "../Converter.h"


#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Vec2d.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCgp_Vec2d;



public ref class OCBlend_Point  {

protected:
  Blend_Point* nativeHandle;
  OCBlend_Point(OCDummy^) {};

public:
  property Blend_Point* Handle
  {
    Blend_Point* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBlend_Point(Blend_Point* nativeHandle);

// Methods PUBLIC


OCBlend_Point();

//! Creates a point on 2 surfaces, with tangents. <br>
OCBlend_Point(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, OCNaroWrappers::OCgp_Vec^ Tg1, OCNaroWrappers::OCgp_Vec^ Tg2, OCNaroWrappers::OCgp_Vec2d^ Tg12d, OCNaroWrappers::OCgp_Vec2d^ Tg22d);

//! Creates a point on 2 surfaces, without tangents. <br>
OCBlend_Point(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2);

//! Creates a point on a surface and a curve, with tangents. <br>
OCBlend_Point(OCNaroWrappers::OCgp_Pnt^ Pts, OCNaroWrappers::OCgp_Pnt^ Ptc, Standard_Real Param, Standard_Real U, Standard_Real V, Standard_Real W, OCNaroWrappers::OCgp_Vec^ Tgs, OCNaroWrappers::OCgp_Vec^ Tgc, OCNaroWrappers::OCgp_Vec2d^ Tg2d);

//! Creates a point on a surface and a curve, without tangents. <br>
OCBlend_Point(OCNaroWrappers::OCgp_Pnt^ Pts, OCNaroWrappers::OCgp_Pnt^ Ptc, Standard_Real Param, Standard_Real U, Standard_Real V, Standard_Real W);

//! Creates a point on a surface and a curve on surface, <br>
//!          with tangents. <br>
OCBlend_Point(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real PC, OCNaroWrappers::OCgp_Vec^ Tg1, OCNaroWrappers::OCgp_Vec^ Tg2, OCNaroWrappers::OCgp_Vec2d^ Tg12d, OCNaroWrappers::OCgp_Vec2d^ Tg22d);

//! Creates a point on a surface and a curve on surface, <br>
//!          without tangents. <br>
OCBlend_Point(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real PC);

//! Creates a point on two curves on surfaces, with tangents. <br>
OCBlend_Point(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real PC1, Standard_Real PC2, OCNaroWrappers::OCgp_Vec^ Tg1, OCNaroWrappers::OCgp_Vec^ Tg2, OCNaroWrappers::OCgp_Vec2d^ Tg12d, OCNaroWrappers::OCgp_Vec2d^ Tg22d);

//! Creates a point on two curves on surfaces, with tangents. <br>
OCBlend_Point(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real PC1, Standard_Real PC2);

//! Set the values for a point on 2 surfaces, with tangents. <br>
 /*instead*/  void SetValue(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, OCNaroWrappers::OCgp_Vec^ Tg1, OCNaroWrappers::OCgp_Vec^ Tg2, OCNaroWrappers::OCgp_Vec2d^ Tg12d, OCNaroWrappers::OCgp_Vec2d^ Tg22d) ;

//! Set the values for a point on 2 surfaces, without tangents. <br>
 /*instead*/  void SetValue(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2) ;

//! Set the values for a point on a surface and a curve, <br>
//!          with tangents. <br>
 /*instead*/  void SetValue(OCNaroWrappers::OCgp_Pnt^ Pts, OCNaroWrappers::OCgp_Pnt^ Ptc, Standard_Real Param, Standard_Real U, Standard_Real V, Standard_Real W, OCNaroWrappers::OCgp_Vec^ Tgs, OCNaroWrappers::OCgp_Vec^ Tgc, OCNaroWrappers::OCgp_Vec2d^ Tg2d) ;

//! Set the values for a point on a surface and a curve, <br>
//!          without tangents. <br>
 /*instead*/  void SetValue(OCNaroWrappers::OCgp_Pnt^ Pts, OCNaroWrappers::OCgp_Pnt^ Ptc, Standard_Real Param, Standard_Real U, Standard_Real V, Standard_Real W) ;

//! Creates a point on a surface and a curve on surface, <br>
//!          with tangents. <br>
 /*instead*/  void SetValue(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real PC, OCNaroWrappers::OCgp_Vec^ Tg1, OCNaroWrappers::OCgp_Vec^ Tg2, OCNaroWrappers::OCgp_Vec2d^ Tg12d, OCNaroWrappers::OCgp_Vec2d^ Tg22d) ;

//! Creates a point on a surface and a curve on surface, <br>
//!          without tangents. <br>
 /*instead*/  void SetValue(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real PC) ;

//! Creates a point on two curves on surfaces, with tangents. <br>
 /*instead*/  void SetValue(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real PC1, Standard_Real PC2, OCNaroWrappers::OCgp_Vec^ Tg1, OCNaroWrappers::OCgp_Vec^ Tg2, OCNaroWrappers::OCgp_Vec2d^ Tg12d, OCNaroWrappers::OCgp_Vec2d^ Tg22d) ;

//! Creates a point on two curves on surfaces, without tangents. <br>
 /*instead*/  void SetValue(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real PC1, Standard_Real PC2) ;

//! Creates a point on two curves. <br>
 /*instead*/  void SetValue(OCNaroWrappers::OCgp_Pnt^ Pt1, OCNaroWrappers::OCgp_Pnt^ Pt2, Standard_Real Param, Standard_Real PC1, Standard_Real PC2) ;


 /*instead*/  Standard_Real Parameter() ;

//! Returns Standard_True if it was not possible to compute <br>
//!          the tangent vectors at PointOnS1 and/or PointOnS2. <br>
 /*instead*/  System::Boolean IsTangencyPoint() ;


 /*instead*/  OCgp_Pnt^ PointOnS1() ;


 /*instead*/  OCgp_Pnt^ PointOnS2() ;


 /*instead*/  void ParametersOnS1(Standard_Real& U, Standard_Real& V) ;


 /*instead*/  void ParametersOnS2(Standard_Real& U, Standard_Real& V) ;


 /*instead*/  OCgp_Vec^ TangentOnS1() ;


 /*instead*/  OCgp_Vec^ TangentOnS2() ;


 /*instead*/  OCgp_Vec2d^ Tangent2dOnS1() ;


 /*instead*/  OCgp_Vec2d^ Tangent2dOnS2() ;


 /*instead*/  OCgp_Pnt^ PointOnS() ;


 /*instead*/  OCgp_Pnt^ PointOnC() ;


 /*instead*/  void ParametersOnS(Standard_Real& U, Standard_Real& V) ;


 /*instead*/  Standard_Real ParameterOnC() ;


 /*instead*/  OCgp_Vec^ TangentOnS() ;


 /*instead*/  OCgp_Vec^ TangentOnC() ;


 /*instead*/  OCgp_Vec2d^ Tangent2d() ;


 /*instead*/  OCgp_Pnt^ PointOnC1() ;


 /*instead*/  OCgp_Pnt^ PointOnC2() ;


 /*instead*/  Standard_Real ParameterOnC1() ;


 /*instead*/  Standard_Real ParameterOnC2() ;


 /*instead*/  OCgp_Vec^ TangentOnC1() ;


 /*instead*/  OCgp_Vec^ TangentOnC2() ;

~OCBlend_Point()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
