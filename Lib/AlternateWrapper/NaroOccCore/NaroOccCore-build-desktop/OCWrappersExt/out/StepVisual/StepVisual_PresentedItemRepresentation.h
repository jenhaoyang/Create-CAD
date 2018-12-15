// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_PresentedItemRepresentation_OCWrappers_HeaderFile
#define _StepVisual_PresentedItemRepresentation_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_PresentedItemRepresentation.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepVisual_PresentationRepresentationSelect.h"


namespace OCNaroWrappers
{

ref class OCStepVisual_PresentedItem;
ref class OCStepVisual_PresentationRepresentationSelect;


//! Added from StepVisual Rev2 to Rev4 <br>
public ref class OCStepVisual_PresentedItemRepresentation : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepVisual_PresentedItemRepresentation(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_PresentedItemRepresentation(Handle(StepVisual_PresentedItemRepresentation)* nativeHandle);

// Methods PUBLIC


OCStepVisual_PresentedItemRepresentation();


 /*instead*/  void Init(OCNaroWrappers::OCStepVisual_PresentationRepresentationSelect^ aPresentation, OCNaroWrappers::OCStepVisual_PresentedItem^ aItem) ;


 /*instead*/  void SetPresentation(OCNaroWrappers::OCStepVisual_PresentationRepresentationSelect^ aPresentation) ;


 /*instead*/  OCStepVisual_PresentationRepresentationSelect^ Presentation() ;


 /*instead*/  void SetItem(OCNaroWrappers::OCStepVisual_PresentedItem^ aItem) ;


 /*instead*/  OCStepVisual_PresentedItem^ Item() ;

~OCStepVisual_PresentedItemRepresentation()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
