// File generated by CPPExt (Transient)
//
#ifndef _TopLoc_Datum3D_OCWrappers_HeaderFile
#define _TopLoc_Datum3D_OCWrappers_HeaderFile

// include the wrapped class
#include <TopLoc_Datum3D.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../gp/gp_Trsf.h"


namespace OCNaroWrappers
{

ref class OCgp_Trsf;


//! Describes a coordinate transformation, i.e. a change <br>
//! to an elementary 3D coordinate system, or position in 3D space. <br>
//! A Datum3D is always described relative to the default datum. <br>
//! The default datum is described relative to itself: its <br>
//! origin is (0,0,0), and its axes are (1,0,0) (0,1,0) (0,0,1). <br>
public ref class OCTopLoc_Datum3D : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTopLoc_Datum3D(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopLoc_Datum3D(Handle(TopLoc_Datum3D)* nativeHandle);

// Methods PUBLIC

//! Constructs a default Datum3D. <br>
OCTopLoc_Datum3D();

//! Constructs a Datum3D form a Trsf from gp. An error is <br>
//!          raised if the Trsf is not a rigid transformation. <br>
OCTopLoc_Datum3D(OCNaroWrappers::OCgp_Trsf^ T);

//! Returns a gp_Trsf which, when applied to this datum, <br>
//! produces the default datum. <br>
 /*instead*/  OCgp_Trsf^ Transformation() ;


//! Writes the contents of this Datum3D to the stream S. <br>
 /*instead*/  void ShallowDump(Standard_OStream& S) ;

~OCTopLoc_Datum3D()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
