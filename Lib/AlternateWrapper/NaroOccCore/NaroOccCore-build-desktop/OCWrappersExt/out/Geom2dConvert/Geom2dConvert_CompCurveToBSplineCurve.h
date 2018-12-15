// File generated by CPPExt (MPV)
//
#ifndef _Geom2dConvert_CompCurveToBSplineCurve_OCWrappers_HeaderFile
#define _Geom2dConvert_CompCurveToBSplineCurve_OCWrappers_HeaderFile

// include native header
#include <Geom2dConvert_CompCurveToBSplineCurve.hxx>
#include "../Converter.h"


#include "../Convert/Convert_ParameterisationType.h"


namespace OCNaroWrappers
{

ref class OCGeom2d_BSplineCurve;
ref class OCGeom2d_BoundedCurve;


//! Concat sevral curve in an BSplineCurve <br>
public ref class OCGeom2dConvert_CompCurveToBSplineCurve  {

protected:
  Geom2dConvert_CompCurveToBSplineCurve* nativeHandle;
  OCGeom2dConvert_CompCurveToBSplineCurve(OCDummy^) {};

public:
  property Geom2dConvert_CompCurveToBSplineCurve* Handle
  {
    Geom2dConvert_CompCurveToBSplineCurve* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeom2dConvert_CompCurveToBSplineCurve(Geom2dConvert_CompCurveToBSplineCurve* nativeHandle);

// Methods PUBLIC

//! Initialize the algorithme with one curve <br>
//!        - Parameterisation is used to convert <br>
OCGeom2dConvert_CompCurveToBSplineCurve(OCNaroWrappers::OCGeom2d_BoundedCurve^ BasisCurve, OCConvert_ParameterisationType Parameterisation);

//! Append a curve in the BSpline <br>
//!          Return False if the curve is not G0 with the BSplineCurve. <br>
//!          Tolerance is used to check continuity and decrease <br>
//!          Multiplicty at the common Knot <br>
//!          After is usefull if BasisCurve is a closed curve . <br>
 /*instead*/  System::Boolean Add(OCNaroWrappers::OCGeom2d_BoundedCurve^ NewCurve, Standard_Real Tolerance, System::Boolean After) ;


 /*instead*/  OCGeom2d_BSplineCurve^ BSplineCurve() ;

~OCGeom2dConvert_CompCurveToBSplineCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
