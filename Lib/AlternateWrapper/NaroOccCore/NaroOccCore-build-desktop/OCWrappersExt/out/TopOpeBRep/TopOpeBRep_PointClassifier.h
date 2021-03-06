// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRep_PointClassifier_OCWrappers_HeaderFile
#define _TopOpeBRep_PointClassifier_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRep_PointClassifier.hxx>
#include "../Converter.h"


#include "TopOpeBRep_DataMapOfTopolTool.h"
#include "../TopAbs/TopAbs_State.h"


namespace OCNaroWrappers
{

ref class OCBRepTopAdaptor_TopolTool;
ref class OCBRepAdaptor_HSurface;
ref class OCTopoDS_Face;
ref class OCgp_Pnt2d;



public ref class OCTopOpeBRep_PointClassifier  {

protected:
  TopOpeBRep_PointClassifier* nativeHandle;
  OCTopOpeBRep_PointClassifier(OCDummy^) {};

public:
  property TopOpeBRep_PointClassifier* Handle
  {
    TopOpeBRep_PointClassifier* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRep_PointClassifier(TopOpeBRep_PointClassifier* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_PointClassifier();


 /*instead*/  void Init() ;


 /*instead*/  void Load(OCNaroWrappers::OCTopoDS_Face^ F) ;

//! compute position of point <P> regarding with the face <F>. <br>
 /*instead*/  OCTopAbs_State Classify(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Tol) ;


 /*instead*/  OCTopAbs_State State() ;

~OCTopOpeBRep_PointClassifier()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
