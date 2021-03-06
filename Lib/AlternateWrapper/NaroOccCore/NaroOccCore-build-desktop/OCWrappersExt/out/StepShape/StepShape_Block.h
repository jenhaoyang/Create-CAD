// File generated by CPPExt (MPV)
//
#ifndef _StepShape_Block_OCWrappers_HeaderFile
#define _StepShape_Block_OCWrappers_HeaderFile

// include native header
#include <StepShape_Block.hxx>
#include "../Converter.h"

#include "../StepGeom/StepGeom_GeometricRepresentationItem.h"

#include "../StepGeom/StepGeom_Axis2Placement3d.h"
#include "../StepGeom/StepGeom_GeometricRepresentationItem.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_Axis2Placement3d;



public ref class OCStepShape_Block  : public OCStepGeom_GeometricRepresentationItem {

protected:
  // dummy constructor;
  OCStepShape_Block(OCDummy^) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_Block(StepShape_Block* nativeHandle);

// Methods PUBLIC

//! Returns a Block <br>
OCStepShape_Block();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition, Standard_Real aX, Standard_Real aY, Standard_Real aZ) ;


 /*instead*/  void SetPosition(OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition) ;


 /*instead*/  OCStepGeom_Axis2Placement3d^ Position() ;


 /*instead*/  void SetX(Standard_Real aX) ;


 /*instead*/  Standard_Real X() ;


 /*instead*/  void SetY(Standard_Real aY) ;


 /*instead*/  Standard_Real Y() ;


 /*instead*/  void SetZ(Standard_Real aZ) ;


 /*instead*/  Standard_Real Z() ;

~OCStepShape_Block()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
