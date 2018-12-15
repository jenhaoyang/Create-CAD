// File generated by CPPExt (MPV)
//
#ifndef _IntTools_SurfaceRangeSampleMapHasher_OCWrappers_HeaderFile
#define _IntTools_SurfaceRangeSampleMapHasher_OCWrappers_HeaderFile

// include native header
#include <IntTools_SurfaceRangeSampleMapHasher.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCIntTools_SurfaceRangeSample;



public ref class OCIntTools_SurfaceRangeSampleMapHasher  {

protected:
  IntTools_SurfaceRangeSampleMapHasher* nativeHandle;
  OCIntTools_SurfaceRangeSampleMapHasher(OCDummy^) {};

public:
  property IntTools_SurfaceRangeSampleMapHasher* Handle
  {
    IntTools_SurfaceRangeSampleMapHasher* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntTools_SurfaceRangeSampleMapHasher(IntTools_SurfaceRangeSampleMapHasher* nativeHandle);

// Methods PUBLIC

//! Returns a HasCode value  for  the  Key <K>  in the <br>
//!          range 0..Upper. <br>
static /*instead*/  Standard_Integer HashCode(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ K, Standard_Integer Upper) ;

//! Returns True  when the two  keys are the same. Two <br>
//!          same  keys  must   have  the  same  hashcode,  the <br>
//!          contrary is not necessary. <br>
//! <br>
static /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ S1, OCNaroWrappers::OCIntTools_SurfaceRangeSample^ S2) ;

~OCIntTools_SurfaceRangeSampleMapHasher()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
