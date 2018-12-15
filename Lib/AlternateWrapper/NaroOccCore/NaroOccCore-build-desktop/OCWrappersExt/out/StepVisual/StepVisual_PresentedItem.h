// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_PresentedItem_OCWrappers_HeaderFile
#define _StepVisual_PresentedItem_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_PresentedItem.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{




public ref class OCStepVisual_PresentedItem : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepVisual_PresentedItem(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_PresentedItem(Handle(StepVisual_PresentedItem)* nativeHandle);

// Methods PUBLIC

~OCStepVisual_PresentedItem()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif