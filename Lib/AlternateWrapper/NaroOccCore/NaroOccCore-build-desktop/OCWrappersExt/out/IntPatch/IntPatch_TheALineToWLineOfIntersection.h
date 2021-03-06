// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_TheALineToWLineOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_TheALineToWLineOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_TheALineToWLineOfIntersection.hxx>
#include "../Converter.h"


#include "../IntSurf/IntSurf_Quadric.h"


namespace OCNaroWrappers
{

ref class OCIntPatch_ThePointOfIntersection;
ref class OCIntPatch_TheWLineOfIntersection;
ref class OCIntPatch_TheALineOfIntersection;
ref class OCIntSurf_Quadric;



public ref class OCIntPatch_TheALineToWLineOfIntersection  {

protected:
  IntPatch_TheALineToWLineOfIntersection* nativeHandle;
  OCIntPatch_TheALineToWLineOfIntersection(OCDummy^) {};

public:
  property IntPatch_TheALineToWLineOfIntersection* Handle
  {
    IntPatch_TheALineToWLineOfIntersection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_TheALineToWLineOfIntersection(IntPatch_TheALineToWLineOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_TheALineToWLineOfIntersection(OCNaroWrappers::OCIntSurf_Quadric^ Quad1, OCNaroWrappers::OCIntSurf_Quadric^ Quad2);


OCIntPatch_TheALineToWLineOfIntersection(OCNaroWrappers::OCIntSurf_Quadric^ Quad1, OCNaroWrappers::OCIntSurf_Quadric^ Quad2, Standard_Real Deflection, Standard_Real PasMaxUV, Standard_Integer NbMaxPoints);


 /*instead*/  void SetTolParam(Standard_Real aT) ;


 /*instead*/  Standard_Real TolParam() ;


 /*instead*/  void SetTolOpenDomain(Standard_Real aT) ;


 /*instead*/  Standard_Real TolOpenDomain() ;


 /*instead*/  void SetTolTransition(Standard_Real aT) ;


 /*instead*/  Standard_Real TolTransition() ;


 /*instead*/  void SetTol3D(Standard_Real aT) ;


 /*instead*/  Standard_Real Tol3D() ;


 /*instead*/  void SetConstantParameter() ;


 /*instead*/  void SetUniformAbscissa() ;


 /*instead*/  void SetUniformDeflection() ;


 /*instead*/  OCIntPatch_TheWLineOfIntersection^ MakeWLine(OCNaroWrappers::OCIntPatch_TheALineOfIntersection^ aline) ;


 /*instead*/  OCIntPatch_TheWLineOfIntersection^ MakeWLine(OCNaroWrappers::OCIntPatch_TheALineOfIntersection^ aline, Standard_Real paraminf, Standard_Real paramsup) ;

~OCIntPatch_TheALineToWLineOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
