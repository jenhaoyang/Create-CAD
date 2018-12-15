// File generated by CPPExt (MPV)
//
#ifndef _Graphic3d_Strips_OCWrappers_HeaderFile
#define _Graphic3d_Strips_OCWrappers_HeaderFile

// include native header
#include <Graphic3d_Strips.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_Array1OfInteger;
ref class OCTColStd_SequenceOfInteger;



public ref class OCGraphic3d_Strips  {

protected:
  Graphic3d_Strips* nativeHandle;
  OCGraphic3d_Strips(OCDummy^) {};

public:
  property Graphic3d_Strips* Handle
  {
    Graphic3d_Strips* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGraphic3d_Strips(Graphic3d_Strips* nativeHandle);

// Methods PUBLIC


static /*instead*/  void STRIPT_INIT(Standard_Integer NBVERTICES, OCNaroWrappers::OCTColStd_Array1OfInteger^ TABTRIANGLES) ;


static /*instead*/  void STRIPT_GET_STRIP(Standard_Integer& NBTRIANGLES, Standard_Integer& V1, Standard_Integer& V2) ;


static /*instead*/  void STRIPT_GET_VERTEX(Standard_Integer& VERTEX, Standard_Integer& TRIANGLE) ;


static /*instead*/  void STRIPQ_INIT(Standard_Integer NBVERTICES, Standard_Integer NBQUADRANG, OCNaroWrappers::OCTColStd_SequenceOfInteger^ TABQUADRANGLES) ;


static /*instead*/  void STRIPQ_GET_STRIP(Standard_Integer& NBQUAD, Standard_Integer& V1, Standard_Integer& V2) ;


static /*instead*/  void STRIPQ_GET_NEXT(Standard_Integer& VERTEX1, Standard_Integer& VERTEX2, Standard_Integer& QUADRANGLE) ;

~OCGraphic3d_Strips()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif