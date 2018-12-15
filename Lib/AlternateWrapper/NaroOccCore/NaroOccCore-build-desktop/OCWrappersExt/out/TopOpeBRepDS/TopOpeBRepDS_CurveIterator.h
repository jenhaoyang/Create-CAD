// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_CurveIterator_OCWrappers_HeaderFile
#define _TopOpeBRepDS_CurveIterator_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_CurveIterator.hxx>
#include "../Converter.h"

#include "TopOpeBRepDS_InterferenceIterator.h"

#include "TopOpeBRepDS_InterferenceIterator.h"
#include "../TopAbs/TopAbs_Orientation.h"
#include "../TopAbs/TopAbs_State.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_ListOfInterference;
ref class OCTopOpeBRepDS_Interference;
ref class OCGeom2d_Curve;



public ref class OCTopOpeBRepDS_CurveIterator  : public OCTopOpeBRepDS_InterferenceIterator {

protected:
  // dummy constructor;
  OCTopOpeBRepDS_CurveIterator(OCDummy^) : OCTopOpeBRepDS_InterferenceIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepDS_CurveIterator(TopOpeBRepDS_CurveIterator* nativeHandle);

// Methods PUBLIC

//! Creates an  iterator on the  curves on surface <br>
//!          described by the interferences in <L>. <br>
OCTopOpeBRepDS_CurveIterator(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ L);

//! Returns  True if the Interference <I>  has a <br>
//!          GeometryType() TopOpeBRepDS_CURVE <br>
//!          returns False else. <br>
virtual /*instead*/  System::Boolean MatchInterference(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I) override;

//! Index of the curve in the data structure. <br>
 /*instead*/  Standard_Integer Current() ;


 /*instead*/  OCTopAbs_Orientation Orientation(OCTopAbs_State S) ;


 /*instead*/  OCGeom2d_Curve^ PCurve() ;

~OCTopOpeBRepDS_CurveIterator()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
