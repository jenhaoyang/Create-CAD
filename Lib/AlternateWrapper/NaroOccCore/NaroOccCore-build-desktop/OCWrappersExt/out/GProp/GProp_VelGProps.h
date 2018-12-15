// File generated by CPPExt (MPV)
//
#ifndef _GProp_VelGProps_OCWrappers_HeaderFile
#define _GProp_VelGProps_OCWrappers_HeaderFile

// include native header
#include <GProp_VelGProps.hxx>
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



//!  Computes the global properties of a geometric solid <br>
//!  (3D closed region of space) <br>
//!  The solid can be elementary(definition in the gp package) <br>
public ref class OCGProp_VelGProps  : public OCGProp_GProps {

protected:
  // dummy constructor;
  OCGProp_VelGProps(OCDummy^) : OCGProp_GProps((OCDummy^)nullptr) {};

public:

// constructor from native
OCGProp_VelGProps(GProp_VelGProps* nativeHandle);

// Methods PUBLIC


OCGProp_VelGProps();


OCGProp_VelGProps(OCNaroWrappers::OCgp_Cylinder^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2, OCNaroWrappers::OCgp_Pnt^ VLocation);


OCGProp_VelGProps(OCNaroWrappers::OCgp_Cone^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2, OCNaroWrappers::OCgp_Pnt^ VLocation);


OCGProp_VelGProps(OCNaroWrappers::OCgp_Sphere^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2, OCNaroWrappers::OCgp_Pnt^ VLocation);


OCGProp_VelGProps(OCNaroWrappers::OCgp_Torus^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2, OCNaroWrappers::OCgp_Pnt^ VLocation);


 /*instead*/  void SetLocation(OCNaroWrappers::OCgp_Pnt^ VLocation) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Cylinder^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Cone^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Sphere^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Torus^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2) ;

~OCGProp_VelGProps()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif