// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_TheSOnBounds_OCWrappers_HeaderFile
#define _IntPatch_TheSOnBounds_OCWrappers_HeaderFile

// include native header
#include <IntPatch_TheSOnBounds.hxx>
#include "../Converter.h"


#include "IntPatch_SequenceOfSegmentOfTheSOnBounds.h"
#include "IntPatch_SequenceOfPathPointOfTheSOnBounds.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HVertex;
ref class OCAdaptor2d_HCurve2d;
ref class OCIntPatch_HCurve2dTool;
ref class OCIntPatch_HInterTool;
ref class OCAdaptor3d_TopolTool;
ref class OCIntPatch_ArcFunction;
ref class OCIntPatch_ThePathPointOfTheSOnBounds;
ref class OCIntPatch_SequenceOfPathPointOfTheSOnBounds;
ref class OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds;
ref class OCIntPatch_TheSegmentOfTheSOnBounds;
ref class OCIntPatch_SequenceOfSegmentOfTheSOnBounds;
ref class OCIntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds;



public ref class OCIntPatch_TheSOnBounds  {

protected:
  IntPatch_TheSOnBounds* nativeHandle;
  OCIntPatch_TheSOnBounds(OCDummy^) {};

public:
  property IntPatch_TheSOnBounds* Handle
  {
    IntPatch_TheSOnBounds* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_TheSOnBounds(IntPatch_TheSOnBounds* nativeHandle);

// Methods PUBLIC


OCIntPatch_TheSOnBounds();


 /*instead*/  void Perform(OCNaroWrappers::OCIntPatch_ArcFunction^ F, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain, Standard_Real TolBoundary, Standard_Real TolTangency) ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  System::Boolean AllArcSolution() ;


 /*instead*/  Standard_Integer NbPoints() ;


 /*instead*/  OCIntPatch_ThePathPointOfTheSOnBounds^ Point(Standard_Integer Index) ;


 /*instead*/  Standard_Integer NbSegments() ;


 /*instead*/  OCIntPatch_TheSegmentOfTheSOnBounds^ Segment(Standard_Integer Index) ;

~OCIntPatch_TheSOnBounds()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
