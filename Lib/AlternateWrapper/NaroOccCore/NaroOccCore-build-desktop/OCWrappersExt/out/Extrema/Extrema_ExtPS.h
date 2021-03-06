// File generated by CPPExt (MPV)
//
#ifndef _Extrema_ExtPS_OCWrappers_HeaderFile
#define _Extrema_ExtPS_OCWrappers_HeaderFile

// include native header
#include <Extrema_ExtPS.hxx>
#include "../Converter.h"


#include "Extrema_ExtPElS.h"
#include "Extrema_GenExtPS.h"
#include "Extrema_SequenceOfPOnSurf.h"
#include "../gp/gp_Pnt.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../GeomAbs/GeomAbs_SurfaceType.h"
#include "Extrema_ExtFlag.h"
#include "Extrema_ExtAlgo.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt;
ref class OCAdaptor3d_Surface;
ref class OCExtrema_POnSurf;


//! It calculates all the extremum distances <br>
//!          between a point and a surface. <br>
//!          These distances can be minimum or maximum. <br>
public ref class OCExtrema_ExtPS  {

protected:
  Extrema_ExtPS* nativeHandle;
  OCExtrema_ExtPS(OCDummy^) {};

public:
  property Extrema_ExtPS* Handle
  {
    Extrema_ExtPS* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCExtrema_ExtPS(Extrema_ExtPS* nativeHandle);

// Methods PUBLIC


OCExtrema_ExtPS();

//! It calculates all the distances. <br>
//!          NbU and NbV are used to locate the close points <br>
//!          to find the zeros. They must be great enough <br>
//!          such that if there is N extrema, there will <br>
//!          be N extrema between P and the grid. <br>
//!          TolU et TolV are used to determine the conditions <br>
//!          to stop the iterations; at the iteration number n: <br>
//!           (Un - Un-1) < TolU and (Vn - Vn-1) < TolV . <br>
OCExtrema_ExtPS(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Surface^ S, Standard_Real TolU, Standard_Real TolV, OCExtrema_ExtFlag F, OCExtrema_ExtAlgo A);

//! It calculates all the distances. <br>
//!          NbU and NbV are used to locate the close points <br>
//!          to find the zeros. They must be great enough <br>
//!          such that if there is N extrema, there will <br>
//!          be N extrema between P and the grid. <br>
//!          TolU et TolV are used to determine the conditions <br>
//!          to stop the iterations; at the iteration number n: <br>
//!           (Un - Un-1) < TolU and (Vn - Vn-1) < TolV . <br>
OCExtrema_ExtPS(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Surface^ S, Standard_Real Uinf, Standard_Real Usup, Standard_Real Vinf, Standard_Real Vsup, Standard_Real TolU, Standard_Real TolV, OCExtrema_ExtFlag F, OCExtrema_ExtAlgo A);

//! Initializes the fields of the algorithm. <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor3d_Surface^ S, Standard_Real Uinf, Standard_Real Usup, Standard_Real Vinf, Standard_Real Vsup, Standard_Real TolU, Standard_Real TolV) ;

//! Computes the distances. <br>
//!          An exception is raised if the fieds have not been <br>
//!          initialized. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCgp_Pnt^ P) ;

//! Returns True if the distances are found. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the number of extremum distances. <br>
 /*instead*/  Standard_Integer NbExt() ;

//! Returns the value of the Nth resulting square distance. <br>
 /*instead*/  Standard_Real SquareDistance(Standard_Integer N) ;

//! Returns the point of the Nth resulting distance. <br>
 /*instead*/  OCExtrema_POnSurf^ Point(Standard_Integer N) ;

//! if the surface is a trimmed surface, <br>
//!          dUfVf is a square distance between <P> and the point <br>
//!          of parameter FirstUParameter and FirstVParameter <PUfVf>. <br>
//!          dUfVl is a square distance between <P> and the point <br>
//!          of parameter FirstUParameter and LastVParameter <PUfVl>. <br>
//!          dUlVf is a square distance between <P> and the point <br>
//!          of parameter LastUParameter and FirstVParameter <PUlVf>. <br>
//!          dUlVl is a square distance between <P> and the point <br>
//!          of parameter LastUParameter and LastVParameter <PUlVl>. <br>
 /*instead*/  void TrimmedSquareDistances(Standard_Real& dUfVf, Standard_Real& dUfVl, Standard_Real& dUlVf, Standard_Real& dUlVl, OCNaroWrappers::OCgp_Pnt^ PUfVf, OCNaroWrappers::OCgp_Pnt^ PUfVl, OCNaroWrappers::OCgp_Pnt^ PUlVf, OCNaroWrappers::OCgp_Pnt^ PUlVl) ;


 /*instead*/  void SetFlag(OCExtrema_ExtFlag F) ;


 /*instead*/  void SetAlgo(OCExtrema_ExtAlgo A) ;

~OCExtrema_ExtPS()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
