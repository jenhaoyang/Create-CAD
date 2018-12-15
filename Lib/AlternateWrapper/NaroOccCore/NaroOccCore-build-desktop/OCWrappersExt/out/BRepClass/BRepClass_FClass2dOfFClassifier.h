// File generated by CPPExt (MPV)
//
#ifndef _BRepClass_FClass2dOfFClassifier_OCWrappers_HeaderFile
#define _BRepClass_FClass2dOfFClassifier_OCWrappers_HeaderFile

// include native header
#include <BRepClass_FClass2dOfFClassifier.hxx>
#include "../Converter.h"


#include "../gp/gp_Lin2d.h"
#include "../TopTrans/TopTrans_CurveTransition.h"
#include "BRepClass_Intersector.h"
#include "../TopAbs/TopAbs_State.h"
#include "../TopAbs/TopAbs_Orientation.h"


namespace OCNaroWrappers
{

ref class OCBRepClass_Edge;
ref class OCBRepClass_Intersector;
ref class OCgp_Lin2d;



public ref class OCBRepClass_FClass2dOfFClassifier  {

protected:
  BRepClass_FClass2dOfFClassifier* nativeHandle;
  OCBRepClass_FClass2dOfFClassifier(OCDummy^) {};

public:
  property BRepClass_FClass2dOfFClassifier* Handle
  {
    BRepClass_FClass2dOfFClassifier* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepClass_FClass2dOfFClassifier(BRepClass_FClass2dOfFClassifier* nativeHandle);

// Methods PUBLIC


OCBRepClass_FClass2dOfFClassifier();


 /*instead*/  void Reset(OCNaroWrappers::OCgp_Lin2d^ L, Standard_Real P, Standard_Real Tol) ;


 /*instead*/  void Compare(OCNaroWrappers::OCBRepClass_Edge^ E, OCTopAbs_Orientation Or) ;


 /*instead*/  Standard_Real Parameter() ;


 /*instead*/  OCBRepClass_Intersector^ Intersector() ;


 /*instead*/  Standard_Integer ClosestIntersection() ;


 /*instead*/  OCTopAbs_State State() ;


 /*instead*/  System::Boolean IsHeadOrEnd() ;

~OCBRepClass_FClass2dOfFClassifier()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
