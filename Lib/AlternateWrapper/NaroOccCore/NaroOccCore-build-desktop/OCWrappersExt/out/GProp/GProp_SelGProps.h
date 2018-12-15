// File generated by CPPExt (MPV)
//
#ifndef _GProp_SelGProps_OCWrappers_HeaderFile
#define _GProp_SelGProps_OCWrappers_HeaderFile

// include native header
#include <GProp_SelGProps.hxx>
#include "../Converter.h"

#include "GProp_GProps.h"

#include "GProp_GProps.h"


namespace OCNaroWrappers
{

ref class OCgp_Cylinder;
ref class OCgp_Pnt;
ref class OCgp_Cone;
ref class OCgp_Sphere;
ref class OCgp_Torus;



//!          Computes the global properties of an elementary <br>
//!          surface (surface of the gp package) <br>
public ref class OCGProp_SelGProps  : public OCGProp_GProps {

protected:
  // dummy constructor;
  OCGProp_SelGProps(OCDummy^) : OCGProp_GProps((OCDummy^)nullptr) {};

public:

// constructor from native
OCGProp_SelGProps(GProp_SelGProps* nativeHandle);

// Methods PUBLIC


OCGProp_SelGProps();


OCGProp_SelGProps(OCNaroWrappers::OCgp_Cylinder^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2, OCNaroWrappers::OCgp_Pnt^ SLocation);


OCGProp_SelGProps(OCNaroWrappers::OCgp_Cone^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2, OCNaroWrappers::OCgp_Pnt^ SLocation);


OCGProp_SelGProps(OCNaroWrappers::OCgp_Sphere^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2, OCNaroWrappers::OCgp_Pnt^ SLocation);


OCGProp_SelGProps(OCNaroWrappers::OCgp_Torus^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2, OCNaroWrappers::OCgp_Pnt^ SLocation);


 /*instead*/  void SetLocation(OCNaroWrappers::OCgp_Pnt^ SLocation) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Cylinder^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Cone^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Sphere^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Torus^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2) ;

~OCGProp_SelGProps()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
