// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_QuasiUniformCurveAndRationalBSplineCurve_OCWrappers_HeaderFile
#define _StepGeom_QuasiUniformCurveAndRationalBSplineCurve_OCWrappers_HeaderFile

// include native header
#include <StepGeom_QuasiUniformCurveAndRationalBSplineCurve.hxx>
#include "../Converter.h"

#include "StepGeom_BSplineCurve.h"

#include "StepGeom_QuasiUniformCurve.h"
#include "StepGeom_RationalBSplineCurve.h"
#include "StepGeom_BSplineCurve.h"
#include "StepGeom_BSplineCurveForm.h"
#include "../StepData/StepData_Logical.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_HArray1OfCartesianPoint;
ref class OCStepGeom_QuasiUniformCurve;
ref class OCStepGeom_RationalBSplineCurve;
ref class OCTColStd_HArray1OfReal;



public ref class OCStepGeom_QuasiUniformCurveAndRationalBSplineCurve  : public OCStepGeom_BSplineCurve {

protected:
  // dummy constructor;
  OCStepGeom_QuasiUniformCurveAndRationalBSplineCurve(OCDummy^) : OCStepGeom_BSplineCurve((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_QuasiUniformCurveAndRationalBSplineCurve(StepGeom_QuasiUniformCurveAndRationalBSplineCurve* nativeHandle);

// Methods PUBLIC

//! Returns a QuasiUniformCurveAndRationalBSplineCurve <br>
OCStepGeom_QuasiUniformCurveAndRationalBSplineCurve();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aDegree, OCNaroWrappers::OCStepGeom_HArray1OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineCurveForm aCurveForm, OCStepData_Logical aClosedCurve, OCStepData_Logical aSelfIntersect) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aDegree, OCNaroWrappers::OCStepGeom_HArray1OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineCurveForm aCurveForm, OCStepData_Logical aClosedCurve, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCStepGeom_QuasiUniformCurve^ aQuasiUniformCurve, OCNaroWrappers::OCStepGeom_RationalBSplineCurve^ aRationalBSplineCurve) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aDegree, OCNaroWrappers::OCStepGeom_HArray1OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineCurveForm aCurveForm, OCStepData_Logical aClosedCurve, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCTColStd_HArray1OfReal^ aWeightsData) ;


 /*instead*/  void SetQuasiUniformCurve(OCNaroWrappers::OCStepGeom_QuasiUniformCurve^ aQuasiUniformCurve) ;


 /*instead*/  OCStepGeom_QuasiUniformCurve^ QuasiUniformCurve() ;


 /*instead*/  void SetRationalBSplineCurve(OCNaroWrappers::OCStepGeom_RationalBSplineCurve^ aRationalBSplineCurve) ;


 /*instead*/  OCStepGeom_RationalBSplineCurve^ RationalBSplineCurve() ;


 /*instead*/  void SetWeightsData(OCNaroWrappers::OCTColStd_HArray1OfReal^ aWeightsData) ;


 /*instead*/  OCTColStd_HArray1OfReal^ WeightsData() ;


 /*instead*/  Standard_Real WeightsDataValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbWeightsData() ;

~OCStepGeom_QuasiUniformCurveAndRationalBSplineCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
