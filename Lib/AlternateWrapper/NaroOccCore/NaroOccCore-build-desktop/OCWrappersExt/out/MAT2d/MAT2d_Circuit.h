// File generated by CPPExt (Transient)
//
#ifndef _MAT2d_Circuit_OCWrappers_HeaderFile
#define _MAT2d_Circuit_OCWrappers_HeaderFile

// include the wrapped class
#include <MAT2d_Circuit.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColGeom2d/TColGeom2d_SequenceOfGeometry.h"
#include "MAT2d_DataMapOfIntegerConnexion.h"
#include "MAT2d_DataMapOfBiIntSequenceOfInteger.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"


namespace OCNaroWrappers
{

ref class OCMAT2d_SequenceOfSequenceOfGeometry;
ref class OCTColStd_SequenceOfBoolean;
ref class OCMAT2d_Connexion;
ref class OCTColGeom2d_SequenceOfGeometry;
ref class OCMAT2d_BiInt;
ref class OCMAT2d_SequenceOfConnexion;
ref class OCMAT2d_MiniPath;
ref class OCGeom2d_Geometry;
ref class OCTColStd_SequenceOfInteger;


//! Constructs a circuit on a set of lines. <br>
//! <br>
//! <br>
public ref class OCMAT2d_Circuit : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMAT2d_Circuit(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT2d_Circuit(Handle(MAT2d_Circuit)* nativeHandle);

// Methods PUBLIC


OCMAT2d_Circuit();


 /*instead*/  void Perform(OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfGeometry^ aFigure, OCNaroWrappers::OCTColStd_SequenceOfBoolean^ IsClosed, Standard_Integer IndRefLine, System::Boolean Trigo) ;

//! Returns the Number of Items . <br>
 /*instead*/  Standard_Integer NumberOfItems() ;

//! Returns the item at position <Index> in <me>. <br>
 /*instead*/  OCGeom2d_Geometry^ Value(Standard_Integer Index) ;

//! Returns the number of items on the line <IndexLine>. <br>
 /*instead*/  Standard_Integer LineLength(Standard_Integer IndexLine) ;

//! Returns the set of index of the items in <me>corresponding <br>
//!          to the curve <IndCurve> on the line <IndLine> from the <br>
//!          initial figure. <br>
//! <br>
 /*instead*/  OCTColStd_SequenceOfInteger^ RefToEqui(Standard_Integer IndLine, Standard_Integer IndCurve) ;

//!  Returns the Connexion on the item <Index> in me. <br>
 /*instead*/  OCMAT2d_Connexion^ Connexion(Standard_Integer Index) ;

//! Returns <True> is there is a connexion on the item <Index> <br>
//!          in <me>. <br>
 /*instead*/  System::Boolean ConnexionOn(Standard_Integer Index) ;

~OCMAT2d_Circuit()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
