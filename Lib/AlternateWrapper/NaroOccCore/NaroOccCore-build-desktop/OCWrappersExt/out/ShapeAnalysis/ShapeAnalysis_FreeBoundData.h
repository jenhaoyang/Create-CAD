// File generated by CPPExt (Transient)
//
#ifndef _ShapeAnalysis_FreeBoundData_OCWrappers_HeaderFile
#define _ShapeAnalysis_FreeBoundData_OCWrappers_HeaderFile

// include the wrapped class
#include <ShapeAnalysis_FreeBoundData.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TopoDS/TopoDS_Wire.h"
#include "../TopTools/TopTools_DataMapOfShapeReal.h"


namespace OCNaroWrappers
{

ref class OCTopTools_HSequenceOfShape;
ref class OCTopoDS_Wire;


//! This class is intended to represent free bound and to store <br>
//!          its properties. <br>
public ref class OCShapeAnalysis_FreeBoundData : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCShapeAnalysis_FreeBoundData(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCShapeAnalysis_FreeBoundData(Handle(ShapeAnalysis_FreeBoundData)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCShapeAnalysis_FreeBoundData();

//! Creates object with contour given in the form of TopoDS_Wire <br>
OCShapeAnalysis_FreeBoundData(OCNaroWrappers::OCTopoDS_Wire^ freebound);

//! Clears all properties of the contour. <br>
//!          Contour bound itself is not cleared. <br>
 /*instead*/  void Clear() ;

//! Sets contour <br>
 /*instead*/  void SetFreeBound(OCNaroWrappers::OCTopoDS_Wire^ freebound) ;

//! Sets area of the contour <br>
 /*instead*/  void SetArea(Standard_Real area) ;

//! Sets perimeter of the contour <br>
 /*instead*/  void SetPerimeter(Standard_Real perimeter) ;

//! Sets ratio of average length to average width of the contour <br>
 /*instead*/  void SetRatio(Standard_Real ratio) ;

//! Sets average width of the contour <br>
 /*instead*/  void SetWidth(Standard_Real width) ;

//! Adds notch on the contour with its maximum width <br>
 /*instead*/  void AddNotch(OCNaroWrappers::OCTopoDS_Wire^ notch, Standard_Real width) ;

//! Returns contour <br>
 /*instead*/  OCTopoDS_Wire^ FreeBound() ;

//! Returns area of the contour <br>
 /*instead*/  Standard_Real Area() ;

//! Returns perimeter of the contour <br>
 /*instead*/  Standard_Real Perimeter() ;

//! Returns ratio of average length to average width of the contour <br>
 /*instead*/  Standard_Real Ratio() ;

//! Returns average width of the contour <br>
 /*instead*/  Standard_Real Width() ;

//! Returns number of notches on the contour <br>
 /*instead*/  Standard_Integer NbNotches() ;

//! Returns sequence of notches on the contour <br>
 /*instead*/  OCTopTools_HSequenceOfShape^ Notches() ;

//! Returns notch on the contour <br>
 /*instead*/  OCTopoDS_Wire^ Notch(Standard_Integer index) ;

//! Returns maximum width of notch specified by its rank number <br>
//!          on the contour <br>
 /*instead*/  Standard_Real NotchWidth(Standard_Integer index) ;

//! Returns maximum width of notch specified as TopoDS_Wire <br>
//!          on the contour <br>
 /*instead*/  Standard_Real NotchWidth(OCNaroWrappers::OCTopoDS_Wire^ notch) ;

~OCShapeAnalysis_FreeBoundData()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
