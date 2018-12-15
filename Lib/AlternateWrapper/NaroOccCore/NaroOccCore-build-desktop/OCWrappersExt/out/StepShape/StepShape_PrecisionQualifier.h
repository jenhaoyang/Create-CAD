// File generated by CPPExt (Transient)
//
#ifndef _StepShape_PrecisionQualifier_OCWrappers_HeaderFile
#define _StepShape_PrecisionQualifier_OCWrappers_HeaderFile

// include the wrapped class
#include <StepShape_PrecisionQualifier.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{



//! Added for Dimensional Tolerances <br>
public ref class OCStepShape_PrecisionQualifier : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepShape_PrecisionQualifier(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_PrecisionQualifier(Handle(StepShape_PrecisionQualifier)* nativeHandle);

// Methods PUBLIC


OCStepShape_PrecisionQualifier();


 /*instead*/  void Init(Standard_Integer precision_value) ;


 /*instead*/  Standard_Integer PrecisionValue() ;


 /*instead*/  void SetPrecisionValue(Standard_Integer precision_value) ;

~OCStepShape_PrecisionQualifier()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
