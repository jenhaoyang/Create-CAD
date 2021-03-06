// File generated by CPPExt (MPV)
//
#ifndef _IntRes2d_Domain_OCWrappers_HeaderFile
#define _IntRes2d_Domain_OCWrappers_HeaderFile

// include native header
#include <IntRes2d_Domain.hxx>
#include "../Converter.h"


#include "../gp/gp_Pnt2d.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;


//! Definition of the domain of parameter on a 2d-curve. <br>
//!          Most of the time, a domain is defined by two extremities. <br>
//!          An extremity is made of : <br>
//!           - a point in 2d-space (Pnt2d from gp), <br>
//!           - a parameter on the curve, <br>
//!           - a tolerance in the 2d-space. <br>
//!          Sometimes, it can be made of 0 or 1 point ( for an infinite <br>
//!          or semi-infinite line for example). <br>
//! <br>
//!          For Intersection algorithms, Ellipses and Circles <br>
//!          Domains must be closed. <br>
//!          So, SetEquivalentParameters(.,.) method must be called <br>
//!          after initializing the first and the last bounds. <br>
public ref class OCIntRes2d_Domain  {

protected:
  IntRes2d_Domain* nativeHandle;
  OCIntRes2d_Domain(OCDummy^) {};

public:
  property IntRes2d_Domain* Handle
  {
    IntRes2d_Domain* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntRes2d_Domain(IntRes2d_Domain* nativeHandle);

// Methods PUBLIC

//! Creates an infinite Domain (HasFirstPoint = False <br>
//!          and HasLastPoint = False). <br>
OCIntRes2d_Domain();

//! Creates a bounded Domain. <br>
OCIntRes2d_Domain(OCNaroWrappers::OCgp_Pnt2d^ Pnt1, Standard_Real Par1, Standard_Real Tol1, OCNaroWrappers::OCgp_Pnt2d^ Pnt2, Standard_Real Par2, Standard_Real Tol2);

//! Creates a semi-infinite Domain. If First is set to <br>
//!          True, the given point is the first point of the domain, <br>
//!          otherwise it is the last point. <br>
OCIntRes2d_Domain(OCNaroWrappers::OCgp_Pnt2d^ Pnt, Standard_Real Par, Standard_Real Tol, System::Boolean First);

//! Sets the values for a bounded domain. <br>
 /*instead*/  void SetValues(OCNaroWrappers::OCgp_Pnt2d^ Pnt1, Standard_Real Par1, Standard_Real Tol1, OCNaroWrappers::OCgp_Pnt2d^ Pnt2, Standard_Real Par2, Standard_Real Tol2) ;

//! Sets the values for an infinite domain. <br>
 /*instead*/  void SetValues() ;

//! Sets the values for a semi-infinite domain. <br>
 /*instead*/  void SetValues(OCNaroWrappers::OCgp_Pnt2d^ Pnt, Standard_Real Par, Standard_Real Tol, System::Boolean First) ;

//! Defines a closed domain. <br>
 /*instead*/  void SetEquivalentParameters(Standard_Real zero, Standard_Real period) ;

//! Returns True if the domain has a first point, i-e <br>
//!          a point defining the lowest admitted parameter on the <br>
//!          curve. <br>
 /*instead*/  System::Boolean HasFirstPoint() ;

//! Returns the parameter of the first point of the domain <br>
//!          The exception DomainError is raised if HasFirstPoint <br>
//!          returns False. <br>
 /*instead*/  Standard_Real FirstParameter() ;

//! Returns the first point of the domain. <br>
//!          The exception DomainError is raised if HasFirstPoint <br>
//!          returns False. <br>
 /*instead*/  OCgp_Pnt2d^ FirstPoint() ;

//! Returns the tolerance of the first (left) bound. <br>
//!          The exception DomainError is raised if HasFirstPoint <br>
//!          returns False. <br>
 /*instead*/  Standard_Real FirstTolerance() ;

//! Returns True if the domain has a last point, i-e <br>
//!          a point defining the highest admitted parameter on the <br>
//!          curve. <br>
 /*instead*/  System::Boolean HasLastPoint() ;

//! Returns the parameter of the last point of the domain. <br>
//!          The exception DomainError is raised if HasLastPoint <br>
//!          returns False. <br>
 /*instead*/  Standard_Real LastParameter() ;

//! Returns the last point of the domain. <br>
//!          The exception DomainError is raised if HasLastPoint <br>
//!          returns False. <br>
 /*instead*/  OCgp_Pnt2d^ LastPoint() ;

//! Returns the tolerance of the last (right) bound. <br>
//!          The exception DomainError is raised if HasLastPoint <br>
//!          returns False. <br>
 /*instead*/  Standard_Real LastTolerance() ;

//! Returns True if the domain is closed. <br>
 /*instead*/  System::Boolean IsClosed() ;

//! Returns Equivalent parameters if the domain is closed. <br>
//!          Otherwise, the exception DomainError is raised. <br>
 /*instead*/  void EquivalentParameters(Standard_Real& zero, Standard_Real& zeroplusperiod) ;

~OCIntRes2d_Domain()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
