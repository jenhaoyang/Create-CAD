// File generated by CPPExt (MPV)
//
#ifndef _BRepSweep_Revol_OCWrappers_HeaderFile
#define _BRepSweep_Revol_OCWrappers_HeaderFile

// include native header
#include <BRepSweep_Revol.hxx>
#include "../Converter.h"


#include "BRepSweep_Rotation.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCgp_Ax1;
ref class OCSweep_NumShape;
ref class OCTopLoc_Location;


//! Provides natural constructors to build BRepSweep <br>
//!          rotated swept Primitives. <br>
public ref class OCBRepSweep_Revol  {

protected:
  BRepSweep_Revol* nativeHandle;
  OCBRepSweep_Revol(OCDummy^) {};

public:
  property BRepSweep_Revol* Handle
  {
    BRepSweep_Revol* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepSweep_Revol(BRepSweep_Revol* nativeHandle);

// Methods PUBLIC

//! Builds the Revol of meridian S axis A  and angle D. If <br>
//!          C is true S is copied. <br>
OCBRepSweep_Revol(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Ax1^ A, Quantity_PlaneAngle D, System::Boolean C);

//! Builds the Revol of meridian S  axis A and angle 2*Pi. <br>
//!          If C is true S is copied. <br>
OCBRepSweep_Revol(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Ax1^ A, System::Boolean C);

//! Returns the TopoDS Shape attached to the Revol. <br>
 /*instead*/  OCTopoDS_Shape^ Shape() ;

//! Returns    the  TopoDS  Shape   generated  with  aGenS <br>
//!          (subShape  of the generating shape). <br>
 /*instead*/  OCTopoDS_Shape^ Shape(OCNaroWrappers::OCTopoDS_Shape^ aGenS) ;

//! Returns the first shape of the revol  (coinciding with <br>
//!          the generating shape). <br>
 /*instead*/  OCTopoDS_Shape^ FirstShape() ;

//! Returns the first shape of the revol  (coinciding with <br>
//!          the generating shape). <br>
 /*instead*/  OCTopoDS_Shape^ FirstShape(OCNaroWrappers::OCTopoDS_Shape^ aGenS) ;

//! Returns the TopoDS Shape of the top of the prism. <br>
 /*instead*/  OCTopoDS_Shape^ LastShape() ;

//! Returns the  TopoDS  Shape of the top  of  the  prism. <br>
//!          generated  with  aGenS  (subShape  of  the  generating <br>
//!          shape). <br>
 /*instead*/  OCTopoDS_Shape^ LastShape(OCNaroWrappers::OCTopoDS_Shape^ aGenS) ;

//! returns the axis <br>
 /*instead*/  OCgp_Ax1^ Axe() ;

//! returns the angle. <br>
 /*instead*/  Quantity_PlaneAngle Angle() ;

~OCBRepSweep_Revol()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
