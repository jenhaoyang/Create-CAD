// File generated by CPPExt (MPV)
//
#ifndef _GCE2d_Root_OCWrappers_HeaderFile
#define _GCE2d_Root_OCWrappers_HeaderFile

// include native header
#include <GCE2d_Root.hxx>
#include "../Converter.h"


#include "../gce/gce_ErrorType.h"


namespace OCNaroWrappers
{



//! This class implements the common services for <br>
//!           all classes of gce which report error. <br>
public ref class OCGCE2d_Root  {

protected:
  GCE2d_Root* nativeHandle;
  OCGCE2d_Root(OCDummy^) {};

public:
  property GCE2d_Root* Handle
  {
    GCE2d_Root* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGCE2d_Root(GCE2d_Root* nativeHandle);

// Methods PUBLIC

//! Returns true if the construction is successful. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the status of the construction <br>
//! -   gce_Done, if the construction is successful, or <br>
//! -   another value of the gce_ErrorType enumeration <br>
//!   indicating why the construction failed. <br>
 /*instead*/  OCgce_ErrorType Status() ;

~OCGCE2d_Root()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
