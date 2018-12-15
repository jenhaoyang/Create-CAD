// File generated by CPPExt (MPV)
//
#ifndef _Extrema_ExtPElC2d_OCWrappers_HeaderFile
#define _Extrema_ExtPElC2d_OCWrappers_HeaderFile

// include native header
#include <Extrema_ExtPElC2d.hxx>
#include "../Converter.h"


#include "Extrema_POnCurv2d.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;
ref class OCgp_Lin2d;
ref class OCgp_Circ2d;
ref class OCgp_Elips2d;
ref class OCgp_Hypr2d;
ref class OCgp_Parab2d;
ref class OCExtrema_POnCurv2d;


//! It calculates all the distances between a point <br>
//!          and an elementary curve. <br>
//!          These distances can be minimum or maximum. <br>
public ref class OCExtrema_ExtPElC2d  {

protected:
  Extrema_ExtPElC2d* nativeHandle;
  OCExtrema_ExtPElC2d(OCDummy^) {};

public:
  property Extrema_ExtPElC2d* Handle
  {
    Extrema_ExtPElC2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCExtrema_ExtPElC2d(Extrema_ExtPElC2d* nativeHandle);

// Methods PUBLIC


OCExtrema_ExtPElC2d();

//! Calculates the extremum distance between the <br>
//!          point P and the segment [Uinf,Usup] of the line L. <br>
OCExtrema_ExtPElC2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Lin2d^ C, Standard_Real Tol, Standard_Real Uinf, Standard_Real Usup);


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Lin2d^ L, Standard_Real Tol, Standard_Real Uinf, Standard_Real Usup) ;

//! Calculates the 2 extremum distances between the <br>
//!          point P and the segment [Uinf,Usup] of the circle C. <br>
//!          Tol is used to determine <br>
//!          if P is on the axis of the circle or <br>
//!          if an extremum is on an endpoint of the segment. <br>
//!          If P is on the axis of the circle, <br>
//!          there are infinite solution then IsDone(me)=False. <br>
//!          The conditions on the Uinf and Usup are: <br>
//!            0. <= Uinf <= 2.*PI and Usup > Uinf. <br>
//!          If Usup > Uinf + 2.*PI, then only the solutions in <br>
//!          the range [Uinf,Uinf+2.*PI[ are computed. <br>
OCExtrema_ExtPElC2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Circ2d^ C, Standard_Real Tol, Standard_Real Uinf, Standard_Real Usup);


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Circ2d^ C, Standard_Real Tol, Standard_Real Uinf, Standard_Real Usup) ;

//! Calculates the 4 extremum distances between the <br>
//!          point P and the segment [Uinf,Usup] of the elipse C. <br>
//!          Tol is used to determine <br>
//!          if the point is on the axis of the elipse and <br>
//!          if the major radius is equal to the minor radius or <br>
//!          if an extremum is on an endpoint of the segment. <br>
//!          If P is on the axis of the elipse, <br>
//!          there are infinite solution then IsDone(me)=False. <br>
//!          The conditions on the Uinf and Usup are: <br>
//!            0. <= Uinf <= 2.*PI and Usup > Uinf. <br>
//!          If Usup > Uinf + 2.*PI, then only the solutions in <br>
//!          the range [Uinf,Uinf+2.*PI[ are computed. <br>
OCExtrema_ExtPElC2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Elips2d^ C, Standard_Real Tol, Standard_Real Uinf, Standard_Real Usup);


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Elips2d^ C, Standard_Real Tol, Standard_Real Uinf, Standard_Real Usup) ;

//! Calculates the extremum distances between the <br>
//!          point P and the segment [Uinf,Usup] of the hyperbola <br>
//!          C. <br>
//!          Tol is used to determine if two solutions u and v <br>
//!          are identical; the condition is: <br>
//!          dist(C(u),C(v)) < Tol. <br>
OCExtrema_ExtPElC2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Hypr2d^ C, Standard_Real Tol, Standard_Real Uinf, Standard_Real Usup);


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Hypr2d^ C, Standard_Real Tol, Standard_Real Uinf, Standard_Real Usup) ;

//! Calculates the 4 extremum distances between the <br>
//!          point P and the segment [Uinf,Usup] of the parabola <br>
//!          C. <br>
//!          Tol is used to determine if two solutions u and v <br>
//!          are identical; the condition is: <br>
//!          dist(C(u),C(v)) < Tol. <br>
OCExtrema_ExtPElC2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Parab2d^ C, Standard_Real Tol, Standard_Real Uinf, Standard_Real Usup);


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Parab2d^ C, Standard_Real Tol, Standard_Real Uinf, Standard_Real Usup) ;

//! True if the distances are found. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the number of extremum distances. <br>
 /*instead*/  Standard_Integer NbExt() ;

//! Returns the value of the Nth extremum square distance. <br>
 /*instead*/  Standard_Real SquareDistance(Standard_Integer N) ;

//! Returns True if the Nth extremum distance is a <br>
//!          minimum. <br>
 /*instead*/  System::Boolean IsMin(Standard_Integer N) ;

//! Returns the point of the Nth extremum distance. <br>
 /*instead*/  OCExtrema_POnCurv2d^ Point(Standard_Integer N) ;

~OCExtrema_ExtPElC2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
