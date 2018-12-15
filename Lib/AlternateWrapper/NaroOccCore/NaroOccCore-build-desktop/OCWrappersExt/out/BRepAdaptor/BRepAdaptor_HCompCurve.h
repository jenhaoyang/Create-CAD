// File generated by CPPExt (Transient)
//
#ifndef _BRepAdaptor_HCompCurve_OCWrappers_HeaderFile
#define _BRepAdaptor_HCompCurve_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepAdaptor_HCompCurve.hxx>
#include "../Converter.h"

#include "../Adaptor3d/Adaptor3d_HCurve.h"

#include "BRepAdaptor_CompCurve.h"


namespace OCNaroWrappers
{

ref class OCBRepAdaptor_CompCurve;
ref class OCAdaptor3d_Curve;



public ref class OCBRepAdaptor_HCompCurve : OCAdaptor3d_HCurve {

protected:
  // dummy constructor;
  OCBRepAdaptor_HCompCurve(OCDummy^) : OCAdaptor3d_HCurve((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepAdaptor_HCompCurve(Handle(BRepAdaptor_HCompCurve)* nativeHandle);

// Methods PUBLIC


OCBRepAdaptor_HCompCurve();


OCBRepAdaptor_HCompCurve(OCNaroWrappers::OCBRepAdaptor_CompCurve^ C);


 /*instead*/  void Set(OCNaroWrappers::OCBRepAdaptor_CompCurve^ C) ;


 /*instead*/  OCAdaptor3d_Curve^ Curve() ;


 /*instead*/  OCAdaptor3d_Curve^ GetCurve() ;


 /*instead*/  OCBRepAdaptor_CompCurve^ ChangeCurve() ;

~OCBRepAdaptor_HCompCurve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
