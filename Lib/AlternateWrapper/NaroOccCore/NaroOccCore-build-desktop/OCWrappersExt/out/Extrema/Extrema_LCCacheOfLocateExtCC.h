// File generated by CPPExt (Transient)
//
#ifndef _Extrema_LCCacheOfLocateExtCC_OCWrappers_HeaderFile
#define _Extrema_LCCacheOfLocateExtCC_OCWrappers_HeaderFile

// include the wrapped class
#include <Extrema_LCCacheOfLocateExtCC.hxx>
#include "../Converter.h"

#include "../Standard/Standard_Transient.h"



namespace OCNaroWrappers
{

ref class OCTColgp_HArray1OfPnt;
ref class OCAdaptor3d_Curve;
ref class OCgp_Pnt;



public ref class OCExtrema_LCCacheOfLocateExtCC : OCStandard_Transient {

protected:
  // dummy constructor;
  OCExtrema_LCCacheOfLocateExtCC(OCDummy^) : OCStandard_Transient((OCDummy^)nullptr) {};

public:

// constructor from native
OCExtrema_LCCacheOfLocateExtCC(Handle(Extrema_LCCacheOfLocateExtCC)* nativeHandle);

// Methods PUBLIC


OCExtrema_LCCacheOfLocateExtCC();


OCExtrema_LCCacheOfLocateExtCC(OCNaroWrappers::OCAdaptor3d_Curve^ theC, Standard_Real theUFirst, Standard_Real theULast, Standard_Integer theNbSamples, System::Boolean theToCalculate);


 /*instead*/  void SetCurve(OCNaroWrappers::OCAdaptor3d_Curve^ theC, Standard_Integer theNbSamples, System::Boolean theToCalculate) ;


 /*instead*/  void SetCurve(OCNaroWrappers::OCAdaptor3d_Curve^ theC, Standard_Real theUFirst, Standard_Real theULast, Standard_Integer theNbSamples, System::Boolean theToCalculate) ;


 /*instead*/  void SetRange(Standard_Real Uinf, Standard_Real Usup, System::Boolean theToCalculate) ;


 /*instead*/  void CalculatePoints() ;


 /*instead*/  System::Boolean IsValid() ;


 /*instead*/  OCTColgp_HArray1OfPnt^ Points() ;


 /*instead*/  Standard_Address CurvePtr() ;


 /*instead*/  Standard_Integer NbSamples() ;


 /*instead*/  Standard_Real FirstParameter() ;


 /*instead*/  Standard_Real LastParameter() ;


 /*instead*/  Standard_Real TrimFirstParameter() ;


 /*instead*/  Standard_Real TrimLastParameter() ;

~OCExtrema_LCCacheOfLocateExtCC()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
