// File generated by CPPExt (MPV)
//
#ifndef _MAT2d_MapBiIntHasher_OCWrappers_HeaderFile
#define _MAT2d_MapBiIntHasher_OCWrappers_HeaderFile

// include native header
#include <MAT2d_MapBiIntHasher.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCMAT2d_BiInt;



public ref class OCMAT2d_MapBiIntHasher  {

protected:
  MAT2d_MapBiIntHasher* nativeHandle;
  OCMAT2d_MapBiIntHasher(OCDummy^) {};

public:
  property MAT2d_MapBiIntHasher* Handle
  {
    MAT2d_MapBiIntHasher* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCMAT2d_MapBiIntHasher(MAT2d_MapBiIntHasher* nativeHandle);

// Methods PUBLIC


static /*instead*/  Standard_Integer HashCode(OCNaroWrappers::OCMAT2d_BiInt^ Key1, Standard_Integer Upper) ;


static /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCMAT2d_BiInt^ Key1, OCNaroWrappers::OCMAT2d_BiInt^ Key2) ;

~OCMAT2d_MapBiIntHasher()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif