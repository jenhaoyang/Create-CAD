// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_Array2OfSurfacePatch_OCWrappers_HeaderFile
#define _StepGeom_Array2OfSurfacePatch_OCWrappers_HeaderFile

// include native header
#include <StepGeom_Array2OfSurfacePatch.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepGeom_SurfacePatch;



public ref class OCStepGeom_Array2OfSurfacePatch  {

protected:
  StepGeom_Array2OfSurfacePatch* nativeHandle;
  OCStepGeom_Array2OfSurfacePatch(OCDummy^) {};

public:
  property StepGeom_Array2OfSurfacePatch* Handle
  {
    StepGeom_Array2OfSurfacePatch* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepGeom_Array2OfSurfacePatch(StepGeom_Array2OfSurfacePatch* nativeHandle);

// Methods PUBLIC


OCStepGeom_Array2OfSurfacePatch(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCStepGeom_Array2OfSurfacePatch(OCNaroWrappers::OCStepGeom_SurfacePatch^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


 /*instead*/  void Init(OCNaroWrappers::OCStepGeom_SurfacePatch^ V) ;


 /*instead*/  OCStepGeom_Array2OfSurfacePatch^ Assign(OCNaroWrappers::OCStepGeom_Array2OfSurfacePatch^ Other) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCStepGeom_SurfacePatch^ Value) ;


 /*instead*/  OCStepGeom_SurfacePatch^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCStepGeom_SurfacePatch^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;

~OCStepGeom_Array2OfSurfacePatch()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
