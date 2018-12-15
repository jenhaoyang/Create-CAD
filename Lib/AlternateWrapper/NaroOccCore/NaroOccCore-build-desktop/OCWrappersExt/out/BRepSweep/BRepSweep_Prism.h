// File generated by CPPExt (MPV)
//
#ifndef _BRepSweep_Prism_OCWrappers_HeaderFile
#define _BRepSweep_Prism_OCWrappers_HeaderFile

// include native header
#include <BRepSweep_Prism.hxx>
#include "../Converter.h"


#include "BRepSweep_Translation.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCgp_Vec;
ref class OCgp_Dir;
ref class OCSweep_NumShape;
ref class OCTopLoc_Location;


//! Provides natural constructors to build BRepSweep <br>
//!          translated swept Primitives. <br>
public ref class OCBRepSweep_Prism  {

protected:
  BRepSweep_Prism* nativeHandle;
  OCBRepSweep_Prism(OCDummy^) {};

public:
  property BRepSweep_Prism* Handle
  {
    BRepSweep_Prism* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepSweep_Prism(BRepSweep_Prism* nativeHandle);

// Methods PUBLIC

//! Builds the prism of base S and vector V. If C is true, <br>
//!          S is copied. If Canonize is true then generated surfaces <br>
//!          are attempted to be canonized in simple types <br>
OCBRepSweep_Prism(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Vec^ V, System::Boolean Copy, System::Boolean Canonize);

//! Builds a semi-infinite or an infinite prism of base S. <br>
//!          If Copy is true S is copied.  If Inf is true the prism <br>
//!          is infinite, if Inf is false the  prism is infinite in <br>
//!          the direction D. If Canonize is true then generated surfaces <br>
//!          are attempted to be canonized in simple types <br>
OCBRepSweep_Prism(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Dir^ D, System::Boolean Inf, System::Boolean Copy, System::Boolean Canonize);

//! Returns the TopoDS Shape attached to the prism. <br>
 /*instead*/  OCTopoDS_Shape^ Shape() ;

//! Returns    the  TopoDS  Shape   generated  with  aGenS <br>
//!          (subShape  of the generating shape). <br>
 /*instead*/  OCTopoDS_Shape^ Shape(OCNaroWrappers::OCTopoDS_Shape^ aGenS) ;

//! Returns the  TopoDS  Shape of the bottom of the prism. <br>
 /*instead*/  OCTopoDS_Shape^ FirstShape() ;

//! Returns the TopoDS Shape of the bottom  of the  prism. <br>
//!          generated  with  aGenS  (subShape  of  the  generating <br>
//!          shape). <br>
 /*instead*/  OCTopoDS_Shape^ FirstShape(OCNaroWrappers::OCTopoDS_Shape^ aGenS) ;

//! Returns the TopoDS Shape of the top of the prism. <br>
 /*instead*/  OCTopoDS_Shape^ LastShape() ;

//! Returns the  TopoDS  Shape of the top  of  the  prism. <br>
//!          generated  with  aGenS  (subShape  of  the  generating <br>
//!          shape). <br>
 /*instead*/  OCTopoDS_Shape^ LastShape(OCNaroWrappers::OCTopoDS_Shape^ aGenS) ;

//! Returns the Vector of the Prism,  if it is an infinite <br>
//!          prism the Vec is unitar. <br>
 /*instead*/  OCgp_Vec^ Vec() ;

~OCBRepSweep_Prism()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif