// File generated by CPPExt (Transient)
//
#ifndef _StepShape_BoxDomain_OCWrappers_HeaderFile
#define _StepShape_BoxDomain_OCWrappers_HeaderFile

// include the wrapped class
#include <StepShape_BoxDomain.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../StepGeom/StepGeom_CartesianPoint.h"


namespace OCNaroWrappers
{

ref class OCStepGeom_CartesianPoint;



public ref class OCStepShape_BoxDomain : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepShape_BoxDomain(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_BoxDomain(Handle(StepShape_BoxDomain)* nativeHandle);

// Methods PUBLIC

//! Returns a BoxDomain <br>
OCStepShape_BoxDomain();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepGeom_CartesianPoint^ aCorner, Standard_Real aXlength, Standard_Real aYlength, Standard_Real aZlength) ;


 /*instead*/  void SetCorner(OCNaroWrappers::OCStepGeom_CartesianPoint^ aCorner) ;


 /*instead*/  OCStepGeom_CartesianPoint^ Corner() ;


 /*instead*/  void SetXlength(Standard_Real aXlength) ;


 /*instead*/  Standard_Real Xlength() ;


 /*instead*/  void SetYlength(Standard_Real aYlength) ;


 /*instead*/  Standard_Real Ylength() ;


 /*instead*/  void SetZlength(Standard_Real aZlength) ;


 /*instead*/  Standard_Real Zlength() ;

~OCStepShape_BoxDomain()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
