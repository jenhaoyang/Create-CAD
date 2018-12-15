// File generated by CPPExt (MPV)
//
#ifndef _StepShape_ReversibleTopologyItem_OCWrappers_HeaderFile
#define _StepShape_ReversibleTopologyItem_OCWrappers_HeaderFile

// include native header
#include <StepShape_ReversibleTopologyItem.hxx>
#include "../Converter.h"

#include "../StepData/StepData_SelectType.h"

#include "../StepData/StepData_SelectType.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCStepShape_Edge;
ref class OCStepShape_Path;
ref class OCStepShape_Face;
ref class OCStepShape_FaceBound;
ref class OCStepShape_ClosedShell;
ref class OCStepShape_OpenShell;



public ref class OCStepShape_ReversibleTopologyItem  : public OCStepData_SelectType {

protected:
  // dummy constructor;
  OCStepShape_ReversibleTopologyItem(OCDummy^) : OCStepData_SelectType((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_ReversibleTopologyItem(StepShape_ReversibleTopologyItem* nativeHandle);

// Methods PUBLIC

//! Returns a ReversibleTopologyItem SelectType <br>
OCStepShape_ReversibleTopologyItem();

//! Recognizes a ReversibleTopologyItem Kind Entity that is : <br>
//!        1 -> Edge <br>
//!        2 -> Path <br>
//!        3 -> Face <br>
//!        4 -> FaceBound <br>
//!        5 -> ClosedShell <br>
//!        6 -> OpenShell <br>
//!        0 else <br>
 /*instead*/  Standard_Integer CaseNum(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! returns Value as a Edge (Null if another type) <br>
 /*instead*/  OCStepShape_Edge^ Edge() ;

//! returns Value as a Path (Null if another type) <br>
 /*instead*/  OCStepShape_Path^ Path() ;

//! returns Value as a Face (Null if another type) <br>
 /*instead*/  OCStepShape_Face^ Face() ;

//! returns Value as a FaceBound (Null if another type) <br>
 /*instead*/  OCStepShape_FaceBound^ FaceBound() ;

//! returns Value as a ClosedShell (Null if another type) <br>
 /*instead*/  OCStepShape_ClosedShell^ ClosedShell() ;

//! returns Value as a OpenShell (Null if another type) <br>
 /*instead*/  OCStepShape_OpenShell^ OpenShell() ;

~OCStepShape_ReversibleTopologyItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
