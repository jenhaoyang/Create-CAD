// File generated by CPPExt (MPV)
//
#ifndef _GeomConvert_ApproxCurve_OCWrappers_HeaderFile
#define _GeomConvert_ApproxCurve_OCWrappers_HeaderFile

// include native header
#include <GeomConvert_ApproxCurve.hxx>
#include "../Converter.h"


#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCGeom_Curve;
ref class OCGeom_BSplineCurve;


//! A framework to convert a 3D curve to a 3D BSpline. <br>
//! This is done by approximation to a BSpline curve within a given tolerance. <br>
public ref class OCGeomConvert_ApproxCurve  {

protected:
  GeomConvert_ApproxCurve* nativeHandle;
  OCGeomConvert_ApproxCurve(OCDummy^) {};

public:
  property GeomConvert_ApproxCurve* Handle
  {
    GeomConvert_ApproxCurve* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomConvert_ApproxCurve(GeomConvert_ApproxCurve* nativeHandle);

// Methods PUBLIC

//! Constructs a curve approximation framework defined by - <br>
//!   -      the conic Curve, <br>
//!   -      the tolerance value Tol3d, <br>
//!   -      the degree of continuity Order, <br>
//!   -      the maximum number of segments <br>
//!     MaxSegments allowed in the resulting BSpline curve, and <br>
//!   -      the highest degree MaxDeg which the <br>
//!     polynomial defining the BSpline curve may have. <br>
OCGeomConvert_ApproxCurve(OCNaroWrappers::OCGeom_Curve^ Curve, Standard_Real Tol3d, OCGeomAbs_Shape Order, Standard_Integer MaxSegments, Standard_Integer MaxDegree);

//! Returns the BSpline curve resulting from the approximation algorithm. <br>
 /*instead*/  OCGeom_BSplineCurve^ Curve() ;

//!  returns  Standard_True  if  the  approximation  has <br>
//! been  done  within  requiered tolerance <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns  Standard_True if the approximation did come out <br>
//! with a result that  is not NECESSARELY within the required tolerance <br>
 /*instead*/  System::Boolean HasResult() ;

//!  Returns the greatest distance between a point on the <br>
//! source conic and the BSpline curve resulting from the <br>
//! approximation. (>0 when an approximation <br>
//!  has  been  done, 0  if  no  approximation) <br>
 /*instead*/  Standard_Real MaxError() ;

//!  Print on the stream  o  information about the object <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCGeomConvert_ApproxCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
