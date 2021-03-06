// File generated by CPPExt (MPV)
//
#ifndef _IntCurve_PConic_OCWrappers_HeaderFile
#define _IntCurve_PConic_OCWrappers_HeaderFile

// include native header
#include <IntCurve_PConic.hxx>
#include "../Converter.h"


#include "../gp/gp_Ax22d.h"
#include "../GeomAbs/GeomAbs_CurveType.h"


namespace OCNaroWrappers
{

ref class OCgp_Elips2d;
ref class OCgp_Circ2d;
ref class OCgp_Parab2d;
ref class OCgp_Hypr2d;
ref class OCgp_Lin2d;
ref class OCgp_Ax22d;


//! This class represents a conic from gp as a <br>
//!          parametric curve ( in order to be used by the <br>
//!          class PConicTool from IntCurve). <br>
public ref class OCIntCurve_PConic  {

protected:
  IntCurve_PConic* nativeHandle;
  OCIntCurve_PConic(OCDummy^) {};

public:
  property IntCurve_PConic* Handle
  {
    IntCurve_PConic* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntCurve_PConic(IntCurve_PConic* nativeHandle);

// Methods PUBLIC


OCIntCurve_PConic(OCNaroWrappers::OCIntCurve_PConic^ PC);


OCIntCurve_PConic(OCNaroWrappers::OCgp_Elips2d^ E);


OCIntCurve_PConic(OCNaroWrappers::OCgp_Circ2d^ C);


OCIntCurve_PConic(OCNaroWrappers::OCgp_Parab2d^ P);


OCIntCurve_PConic(OCNaroWrappers::OCgp_Hypr2d^ H);


OCIntCurve_PConic(OCNaroWrappers::OCgp_Lin2d^ L);

//! EpsX is a internal tolerance used in math <br>
//!          algorithms, usually about 1e-10 <br>
//!          (See FunctionAllRoots for more details) <br>
 /*instead*/  void SetEpsX(Standard_Real EpsDist) ;

//! Accuracy is the number of samples used to <br>
//!          approximate the parametric curve on its domain. <br>
 /*instead*/  void SetAccuracy(Standard_Integer Nb) ;


 /*instead*/  Standard_Integer Accuracy() ;


 /*instead*/  Standard_Real EpsX() ;

//! The Conics are manipulated as objects which only <br>
//!          depend on three parameters : Axis and two Real from Standards. <br>
//!          Type Curve is used to select the correct Conic. <br>
 /*instead*/  OCGeomAbs_CurveType TypeCurve() ;


 /*instead*/  OCgp_Ax22d^ Axis2() ;


 /*instead*/  Standard_Real Param1() ;


 /*instead*/  Standard_Real Param2() ;

~OCIntCurve_PConic()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
