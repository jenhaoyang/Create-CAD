// File generated by CPPExt (MPV)
//
#ifndef _BRepLProp_CLProps_OCWrappers_HeaderFile
#define _BRepLProp_CLProps_OCWrappers_HeaderFile

// include native header
#include <BRepLProp_CLProps.hxx>
#include "../Converter.h"


#include "../BRepAdaptor/BRepAdaptor_Curve.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Dir.h"
#include "../LProp/LProp_Status.h"


namespace OCNaroWrappers
{

ref class OCBRepAdaptor_Curve;
ref class OCgp_Vec;
ref class OCgp_Pnt;
ref class OCgp_Dir;
ref class OCBRepLProp_CurveTool;



public ref class OCBRepLProp_CLProps  {

protected:
  BRepLProp_CLProps* nativeHandle;
  OCBRepLProp_CLProps(OCDummy^) {};

public:
  property BRepLProp_CLProps* Handle
  {
    BRepLProp_CLProps* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepLProp_CLProps(BRepLProp_CLProps* nativeHandle);

// Methods PUBLIC


OCBRepLProp_CLProps(OCNaroWrappers::OCBRepAdaptor_Curve^ C, Standard_Integer N, Standard_Real Resolution);


OCBRepLProp_CLProps(OCNaroWrappers::OCBRepAdaptor_Curve^ C, Standard_Real U, Standard_Integer N, Standard_Real Resolution);


OCBRepLProp_CLProps(Standard_Integer N, Standard_Real Resolution);


 /*instead*/  void SetParameter(Standard_Real U) ;


 /*instead*/  void SetCurve(OCNaroWrappers::OCBRepAdaptor_Curve^ C) ;


 /*instead*/  OCgp_Pnt^ Value() ;


 /*instead*/  OCgp_Vec^ D1() ;


 /*instead*/  OCgp_Vec^ D2() ;


 /*instead*/  OCgp_Vec^ D3() ;


 /*instead*/  System::Boolean IsTangentDefined() ;


 /*instead*/  void Tangent(OCNaroWrappers::OCgp_Dir^ D) ;


 /*instead*/  Standard_Real Curvature() ;


 /*instead*/  void Normal(OCNaroWrappers::OCgp_Dir^ N) ;


 /*instead*/  void CentreOfCurvature(OCNaroWrappers::OCgp_Pnt^ P) ;

~OCBRepLProp_CLProps()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
