// File generated by CPPExt (MPV)
//
#ifndef _Extrema_ELPCOfLocateExtPC_OCWrappers_HeaderFile
#define _Extrema_ELPCOfLocateExtPC_OCWrappers_HeaderFile

// include native header
#include <Extrema_ELPCOfLocateExtPC.hxx>
#include "../Converter.h"


#include "../gp/gp_Pnt.h"
#include "Extrema_ExtPElC.h"
#include "Extrema_SequenceOfPOnCurv.h"
#include "Extrema_EPCOfELPCOfLocateExtPC.h"
#include "../GeomAbs/GeomAbs_CurveType.h"
#include "../TColStd/TColStd_SequenceOfBoolean.h"
#include "../TColStd/TColStd_SequenceOfReal.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_Curve;
ref class OCExtrema_CurveTool;
ref class OCExtrema_ExtPElC;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCExtrema_POnCurv;
ref class OCExtrema_SequenceOfPOnCurv;
ref class OCExtrema_EPCOfELPCOfLocateExtPC;
ref class OCExtrema_PCFOfEPCOfELPCOfLocateExtPC;



public ref class OCExtrema_ELPCOfLocateExtPC  {

protected:
  Extrema_ELPCOfLocateExtPC* nativeHandle;
  OCExtrema_ELPCOfLocateExtPC(OCDummy^) {};

public:
  property Extrema_ELPCOfLocateExtPC* Handle
  {
    Extrema_ELPCOfLocateExtPC* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCExtrema_ELPCOfLocateExtPC(Extrema_ELPCOfLocateExtPC* nativeHandle);

// Methods PUBLIC


OCExtrema_ELPCOfLocateExtPC();


OCExtrema_ELPCOfLocateExtPC(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Uinf, Standard_Real Usup, Standard_Real TolF);


OCExtrema_ELPCOfLocateExtPC(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real TolF);


 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Uinf, Standard_Real Usup, Standard_Real TolF) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Pnt^ P) ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  Standard_Real SquareDistance(Standard_Integer N) ;


 /*instead*/  Standard_Integer NbExt() ;


 /*instead*/  System::Boolean IsMin(Standard_Integer N) ;


 /*instead*/  OCExtrema_POnCurv^ Point(Standard_Integer N) ;


 /*instead*/  void TrimmedSquareDistances(Standard_Real& dist1, Standard_Real& dist2, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) ;

~OCExtrema_ELPCOfLocateExtPC()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
