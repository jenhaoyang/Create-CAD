// File generated by CPPExt (MPV)
//
#ifndef _Approx_CurvilinearParameter_OCWrappers_HeaderFile
#define _Approx_CurvilinearParameter_OCWrappers_HeaderFile

// include native header
#include <Approx_CurvilinearParameter.hxx>
#include "../Converter.h"


#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCGeom_BSplineCurve;
ref class OCGeom2d_BSplineCurve;
ref class OCAdaptor3d_HCurve;
ref class OCAdaptor2d_HCurve2d;
ref class OCAdaptor3d_HSurface;


//! Approximation of a Curve to make its parameter be its <br>
//!          curvilinear  abscissa <br>
//!          If the curve is a curve on a surface S, C2D is the corresponding Pcurve, <br>
//!          we considere the curve is given by its representation S(C2D(u)) <br>
//!          If the curve is a curve on 2 surfaces S1 and S2 and C2D1 C2D2 are <br>
//!          the two corresponding Pcurve, we considere the curve is given <br>
//!          by its representation  1/2(S1(C2D1(u) + S2 (C2D2(u))) <br>
public ref class OCApprox_CurvilinearParameter  {

protected:
  Approx_CurvilinearParameter* nativeHandle;
  OCApprox_CurvilinearParameter(OCDummy^) {};

public:
  property Approx_CurvilinearParameter* Handle
  {
    Approx_CurvilinearParameter* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCApprox_CurvilinearParameter(Approx_CurvilinearParameter* nativeHandle);

// Methods PUBLIC

//! case of a free 3D curve <br>
OCApprox_CurvilinearParameter(OCNaroWrappers::OCAdaptor3d_HCurve^ C3D, Standard_Real Tol, OCGeomAbs_Shape Order, Standard_Integer MaxDegree, Standard_Integer MaxSegments);

//! case of a curve on one surface <br>
OCApprox_CurvilinearParameter(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C2D, OCNaroWrappers::OCAdaptor3d_HSurface^ Surf, Standard_Real Tol, OCGeomAbs_Shape Order, Standard_Integer MaxDegree, Standard_Integer MaxSegments);

//! case of a curve on two surfaces <br>
//! <br>
OCApprox_CurvilinearParameter(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C2D1, OCNaroWrappers::OCAdaptor3d_HSurface^ Surf1, OCNaroWrappers::OCAdaptor2d_HCurve2d^ C2D2, OCNaroWrappers::OCAdaptor3d_HSurface^ Surf2, Standard_Real Tol, OCGeomAbs_Shape Order, Standard_Integer MaxDegree, Standard_Integer MaxSegments);


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  System::Boolean HasResult() ;

//! returns the Bspline curve corresponding to the reparametrized 3D curve <br>
 /*instead*/  OCGeom_BSplineCurve^ Curve3d() ;

//! returns the maximum error on the reparametrized 3D curve <br>
 /*instead*/  Standard_Real MaxError3d() ;

//! returns the BsplineCurve representing the reparametrized 2D curve on the <br>
//!          first surface (case of a curve on one or two surfaces) <br>
 /*instead*/  OCGeom2d_BSplineCurve^ Curve2d1() ;

//! returns the maximum error on the first reparametrized 2D curve <br>
 /*instead*/  Standard_Real MaxError2d1() ;

//! returns the BsplineCurve representing the reparametrized 2D curve on the <br>
//!          second surface (case of a curve on two surfaces) <br>
 /*instead*/  OCGeom2d_BSplineCurve^ Curve2d2() ;

//! returns the maximum error on the second reparametrized 2D curve <br>
 /*instead*/  Standard_Real MaxError2d2() ;

//! print the maximum errors(s) <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCApprox_CurvilinearParameter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif