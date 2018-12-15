// File generated by CPPExt (MPV)
//
#ifndef _Approx_Curve2d_OCWrappers_HeaderFile
#define _Approx_Curve2d_OCWrappers_HeaderFile

// include native header
#include <Approx_Curve2d.hxx>
#include "../Converter.h"


#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCGeom2d_BSplineCurve;
ref class OCAdaptor2d_HCurve2d;


//! Makes  an  approximation  for  HCurve2d  from  Adaptor3d <br>
public ref class OCApprox_Curve2d  {

protected:
  Approx_Curve2d* nativeHandle;
  OCApprox_Curve2d(OCDummy^) {};

public:
  property Approx_Curve2d* Handle
  {
    Approx_Curve2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCApprox_Curve2d(Approx_Curve2d* nativeHandle);

// Methods PUBLIC


OCApprox_Curve2d(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C2D, Standard_Real First, Standard_Real Last, Standard_Real TolU, Standard_Real TolV, OCGeomAbs_Shape Continuity, Standard_Integer MaxDegree, Standard_Integer MaxSegments);


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  System::Boolean HasResult() ;


 /*instead*/  OCGeom2d_BSplineCurve^ Curve() ;


 /*instead*/  Standard_Real MaxError2dU() ;


 /*instead*/  Standard_Real MaxError2dV() ;

~OCApprox_Curve2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
