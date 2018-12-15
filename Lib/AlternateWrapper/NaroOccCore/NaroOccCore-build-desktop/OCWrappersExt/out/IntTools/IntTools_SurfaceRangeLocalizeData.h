// File generated by CPPExt (MPV)
//
#ifndef _IntTools_SurfaceRangeLocalizeData_OCWrappers_HeaderFile
#define _IntTools_SurfaceRangeLocalizeData_OCWrappers_HeaderFile

// include native header
#include <IntTools_SurfaceRangeLocalizeData.hxx>
#include "../Converter.h"


#include "IntTools_MapOfSurfaceSample.h"
#include "IntTools_DataMapOfSurfaceSampleBox.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfReal;
ref class OCTColgp_HArray2OfPnt;
ref class OCIntTools_SurfaceRangeSample;
ref class OCBnd_Box;
ref class OCIntTools_ListOfSurfaceRangeSample;
ref class OCgp_Pnt;



public ref class OCIntTools_SurfaceRangeLocalizeData  {

protected:
  IntTools_SurfaceRangeLocalizeData* nativeHandle;
  OCIntTools_SurfaceRangeLocalizeData(OCDummy^) {};

public:
  property IntTools_SurfaceRangeLocalizeData* Handle
  {
    IntTools_SurfaceRangeLocalizeData* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntTools_SurfaceRangeLocalizeData(IntTools_SurfaceRangeLocalizeData* nativeHandle);

// Methods PUBLIC


OCIntTools_SurfaceRangeLocalizeData();


OCIntTools_SurfaceRangeLocalizeData(Standard_Integer theNbSampleU, Standard_Integer theNbSampleV, Standard_Real theMinRangeU, Standard_Real theMinRangeV);


OCIntTools_SurfaceRangeLocalizeData(OCNaroWrappers::OCIntTools_SurfaceRangeLocalizeData^ Other);


 /*instead*/  OCIntTools_SurfaceRangeLocalizeData^ Assign(OCNaroWrappers::OCIntTools_SurfaceRangeLocalizeData^ Other) ;


 /*instead*/  Standard_Integer GetNbSampleU() ;


 /*instead*/  Standard_Integer GetNbSampleV() ;


 /*instead*/  Standard_Real GetMinRangeU() ;


 /*instead*/  Standard_Real GetMinRangeV() ;


 /*instead*/  void AddOutRange(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ theRange) ;


 /*instead*/  void AddBox(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ theRange, OCNaroWrappers::OCBnd_Box^ theBox) ;


 /*instead*/  System::Boolean FindBox(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ theRange, OCNaroWrappers::OCBnd_Box^ theBox) ;


 /*instead*/  System::Boolean IsRangeOut(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ theRange) ;


 /*instead*/  void ListRangeOut(OCNaroWrappers::OCIntTools_ListOfSurfaceRangeSample^ theList) ;


 /*instead*/  void RemoveRangeOutAll() ;

//! Set the grid deflection. <br>
 /*instead*/  void SetGridDeflection(Standard_Real theDeflection) ;

//! Query the grid deflection. <br>
 /*instead*/  Standard_Real GetGridDeflection() ;

//! Set the range U of the grid of points. <br>
 /*instead*/  void SetRangeUGrid(Standard_Integer theNbUGrid) ;

//! Query the range U of the grid of points. <br>
 /*instead*/  Standard_Integer GetRangeUGrid() ;

//! Set the U parameter of the grid points at that index. <br>
 /*instead*/  void SetUParam(Standard_Integer theIndex, Standard_Real theUParam) ;

//! Query the U parameter of the grid points at that index. <br>
 /*instead*/  Standard_Real GetUParam(Standard_Integer theIndex) ;

//! Set the range V of the grid of points. <br>
 /*instead*/  void SetRangeVGrid(Standard_Integer theNbVGrid) ;

//! Query the range V of the grid of points. <br>
 /*instead*/  Standard_Integer GetRangeVGrid() ;

//! Set the V parameter of the grid points at that index. <br>
 /*instead*/  void SetVParam(Standard_Integer theIndex, Standard_Real theVParam) ;

//! Query the V parameter of the grid points at that index. <br>
 /*instead*/  Standard_Real GetVParam(Standard_Integer theIndex) ;

//! Set the grid point. <br>
 /*instead*/  void SetGridPoint(Standard_Integer theUIndex, Standard_Integer theVIndex, OCNaroWrappers::OCgp_Pnt^ thePoint) ;

//! Set the grid point. <br>
 /*instead*/  OCgp_Pnt^ GetGridPoint(Standard_Integer theUIndex, Standard_Integer theVIndex) ;

//! Sets the frame area. Used to work with grid points. <br>
 /*instead*/  void SetFrame(Standard_Real theUMin, Standard_Real theUMax, Standard_Real theVMin, Standard_Real theVMax) ;

//! Returns the number of grid points on U direction in frame. <br>
 /*instead*/  Standard_Integer GetNBUPointsInFrame() ;

//! Returns the number of grid points on V direction in frame. <br>
 /*instead*/  Standard_Integer GetNBVPointsInFrame() ;

//! Returns the grid point in frame. <br>
 /*instead*/  OCgp_Pnt^ GetPointInFrame(Standard_Integer theUIndex, Standard_Integer theVIndex) ;

//! Query the U parameter of the grid points <br>
//!          at that index in frame. <br>
 /*instead*/  Standard_Real GetUParamInFrame(Standard_Integer theIndex) ;

//! Query the V parameter of the grid points <br>
//!          at that index in frame. <br>
 /*instead*/  Standard_Real GetVParamInFrame(Standard_Integer theIndex) ;

//! Clears the grid of points. <br>
 /*instead*/  void ClearGrid() ;

~OCIntTools_SurfaceRangeLocalizeData()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
