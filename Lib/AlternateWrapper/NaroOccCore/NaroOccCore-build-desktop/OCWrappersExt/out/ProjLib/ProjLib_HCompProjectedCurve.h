// File generated by CPPExt (Transient)
//
#ifndef _ProjLib_HCompProjectedCurve_OCWrappers_HeaderFile
#define _ProjLib_HCompProjectedCurve_OCWrappers_HeaderFile

// include the wrapped class
#include <ProjLib_HCompProjectedCurve.hxx>
#include "../Converter.h"

#include "../Adaptor2d/Adaptor2d_HCurve2d.h"

#include "ProjLib_CompProjectedCurve.h"


namespace OCNaroWrappers
{

ref class OCProjLib_CompProjectedCurve;
ref class OCAdaptor2d_Curve2d;



public ref class OCProjLib_HCompProjectedCurve : OCAdaptor2d_HCurve2d {

protected:
  // dummy constructor;
  OCProjLib_HCompProjectedCurve(OCDummy^) : OCAdaptor2d_HCurve2d((OCDummy^)nullptr) {};

public:

// constructor from native
OCProjLib_HCompProjectedCurve(Handle(ProjLib_HCompProjectedCurve)* nativeHandle);

// Methods PUBLIC


OCProjLib_HCompProjectedCurve();


OCProjLib_HCompProjectedCurve(OCNaroWrappers::OCProjLib_CompProjectedCurve^ C);


 /*instead*/  void Set(OCNaroWrappers::OCProjLib_CompProjectedCurve^ C) ;


 /*instead*/  OCAdaptor2d_Curve2d^ Curve2d() ;


 /*instead*/  OCProjLib_CompProjectedCurve^ ChangeCurve2d() ;

~OCProjLib_HCompProjectedCurve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif