// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_CertificationAssignment_OCWrappers_HeaderFile
#define _StepBasic_CertificationAssignment_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_CertificationAssignment.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCStepBasic_Certification;


//! Representation of STEP entity CertificationAssignment <br>
public ref class OCStepBasic_CertificationAssignment : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_CertificationAssignment(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_CertificationAssignment(Handle(StepBasic_CertificationAssignment)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepBasic_CertificationAssignment();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Certification^ aAssignedCertification) ;

//! Returns field AssignedCertification <br>
 /*instead*/  OCStepBasic_Certification^ AssignedCertification() ;

//! Set field AssignedCertification <br>
 /*instead*/  void SetAssignedCertification(OCNaroWrappers::OCStepBasic_Certification^ AssignedCertification) ;

~OCStepBasic_CertificationAssignment()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
