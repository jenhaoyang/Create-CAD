// File generated by CPPExt (MPV)
//
#ifndef _TopTools_ShapeMapHasher_OCWrappers_HeaderFile
#define _TopTools_ShapeMapHasher_OCWrappers_HeaderFile

// include native header
#include <TopTools_ShapeMapHasher.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;


//! Hash tool, used for generating maps of shapes in topology. <br>
public ref class OCTopTools_ShapeMapHasher  {

protected:
  TopTools_ShapeMapHasher* nativeHandle;
  OCTopTools_ShapeMapHasher(OCDummy^) {};

public:
  property TopTools_ShapeMapHasher* Handle
  {
    TopTools_ShapeMapHasher* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopTools_ShapeMapHasher(TopTools_ShapeMapHasher* nativeHandle);

// Methods PUBLIC

//! Returns a HasCode value  for  the  Key <K>  in the <br>
//!          range 0..Upper. <br>
static /*instead*/  Standard_Integer HashCode(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Integer Upper) ;

//! Returns True  when the two  keys are the same. Two <br>
//!          same  keys  must   have  the  same  hashcode,  the <br>
//!          contrary is not necessary. <br>
//! <br>
static /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2) ;

~OCTopTools_ShapeMapHasher()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
