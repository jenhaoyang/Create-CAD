// File generated by CPPExt (MPV)
//
#ifndef _BRepClass3d_SolidClassifier_OCWrappers_HeaderFile
#define _BRepClass3d_SolidClassifier_OCWrappers_HeaderFile

// include native header
#include <BRepClass3d_SolidClassifier.hxx>
#include "../Converter.h"

#include "BRepClass3d_SClassifier.h"

#include "BRepClass3d_SolidExplorer.h"
#include "BRepClass3d_SClassifier.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCgp_Pnt;


//! Provides an algorithm to classify a point in a solid. <br>
public ref class OCBRepClass3d_SolidClassifier  : public OCBRepClass3d_SClassifier {

protected:
  // dummy constructor;
  OCBRepClass3d_SolidClassifier(OCDummy^) : OCBRepClass3d_SClassifier((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepClass3d_SolidClassifier(BRepClass3d_SolidClassifier* nativeHandle);

// Methods PUBLIC

//! empty constructor <br>
OCBRepClass3d_SolidClassifier();


 /*instead*/  void Load(OCNaroWrappers::OCTopoDS_Shape^ S) ;

//! Constructor from a Shape. <br>
OCBRepClass3d_SolidClassifier(OCNaroWrappers::OCTopoDS_Shape^ S);

//! Constructor to classify the point P with the <br>
//!          tolerance Tol on the solid S. <br>
OCBRepClass3d_SolidClassifier(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol);

//! Classify the point P with the <br>
//!          tolerance Tol on the solid S. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol) ;

//! Classify an infinite point with the <br>
//!          tolerance Tol on the solid S. <br>
//!          Useful for compute the orientation of a solid. <br>
 /*instead*/  void PerformInfinitePoint(Standard_Real Tol) ;

~OCBRepClass3d_SolidClassifier()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
