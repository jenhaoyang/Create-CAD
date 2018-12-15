// File generated by CPPExt (MPV)
//
#ifndef _IntAna_IntLinTorus_OCWrappers_HeaderFile
#define _IntAna_IntLinTorus_OCWrappers_HeaderFile

// include native header
#include <IntAna_IntLinTorus.hxx>
#include "../Converter.h"


#include "../gp/gp_Pnt.h"


namespace OCNaroWrappers
{

ref class OCgp_Lin;
ref class OCgp_Torus;
ref class OCgp_Pnt;


//! Intersection between a line and a torus. <br>
public ref class OCIntAna_IntLinTorus  {

protected:
  IntAna_IntLinTorus* nativeHandle;
  OCIntAna_IntLinTorus(OCDummy^) {};

public:
  property IntAna_IntLinTorus* Handle
  {
    IntAna_IntLinTorus* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntAna_IntLinTorus(IntAna_IntLinTorus* nativeHandle);

// Methods PUBLIC


OCIntAna_IntLinTorus();

//! Creates the intersection between a line and a torus. <br>
OCIntAna_IntLinTorus(OCNaroWrappers::OCgp_Lin^ L, OCNaroWrappers::OCgp_Torus^ T);

//! Intersects a line and a torus. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCgp_Lin^ L, OCNaroWrappers::OCgp_Torus^ T) ;

//! Returns True if the computation was successful. <br>
//! <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the number of intersection points. <br>
//! <br>
 /*instead*/  Standard_Integer NbPoints() ;

//! Returns the intersection point of range Index. <br>
//! <br>
 /*instead*/  OCgp_Pnt^ Value(Standard_Integer Index) ;

//! Returns the parameter on the line of the intersection <br>
//!          point of range Index. <br>
//! <br>
 /*instead*/  Standard_Real ParamOnLine(Standard_Integer Index) ;

//! Returns the parameters on the torus of the intersection <br>
//!          point of range Index. <br>
//! <br>
 /*instead*/  void ParamOnTorus(Standard_Integer Index, Standard_Real& FI, Standard_Real& THETA) ;

~OCIntAna_IntLinTorus()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif