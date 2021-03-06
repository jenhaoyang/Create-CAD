// File generated by CPPExt (Transient)
//
#ifndef _AIS2D_GlobalStatus_OCWrappers_HeaderFile
#define _AIS2D_GlobalStatus_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS2D_GlobalStatus.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "AIS2D_DisplayStatus.h"
#include "../TColStd/TColStd_ListOfInteger.h"
#include "../Quantity/Quantity_NameOfColor.h"


namespace OCNaroWrappers
{



//! Stores  information  about objects in graphic context: <br>
//!          - Status Of Display : in the main viewer <br>
//!                                in the  collector <br>
//!                                fully Erased <br>
//!          - Displayed Modes <br>
//!          - Active Selection Modes <br>
//!          - is the Interactive Object Current ? <br>
//!          - Layer Index <br>
public ref class OCAIS2D_GlobalStatus : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCAIS2D_GlobalStatus(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS2D_GlobalStatus(Handle(AIS2D_GlobalStatus)* nativeHandle);

// Methods PUBLIC

//! Initialize GlobalStatus the default properties <br>
OCAIS2D_GlobalStatus();

//! Initialize GlobalStatus the concrete properties <br>
OCAIS2D_GlobalStatus(OCAIS2D_DisplayStatus aStat, Standard_Integer aDMode, Standard_Integer aSMode, System::Boolean isHighlight, OCQuantity_NameOfColor aHighlCol, Standard_Integer aLayerIndex);

//! Sets the graphic status <aStat> <br>
 /*instead*/  void SetGraphicStatus(OCAIS2D_DisplayStatus aStat) ;

//! Adds the display mode <aMode> to the list of display modes <br>
 /*instead*/  void AddDisplayMode(Standard_Integer aMode) ;

//! Removes the display mode <aMode> from the list of display modes <br>
 /*instead*/  void RemoveDisplayMode(Standard_Integer aMode) ;

//! Returns True if the list of display modes <br>
//!          contains the display mode <aMode> <br>
 /*instead*/  System::Boolean IsDModeIn(Standard_Integer aMode) ;

//! Adds the selection mode <aMode> to the list of selection modes <br>
 /*instead*/  void AddSelectionMode(Standard_Integer aMode) ;

//! Removes the selection mode <aMode> from the list of selection modes <br>
 /*instead*/  void RemoveSelectionMode(Standard_Integer aMode) ;

//! Removes all selection modes from the list of selection modes <br>
 /*instead*/  void ClearSelectionModes() ;

//! Returns True if the list of selection modes <br>
//!          contains the selection mode <aMode> <br>
 /*instead*/  System::Boolean IsSModeIn(Standard_Integer aMode) ;

//! Sets the layer index <anIndex> <br>
 /*instead*/  void SetLayerIndex(Standard_Integer anIndex) ;

//! Sets the highlight status <br>
 /*instead*/  void SetHighlightStatus(System::Boolean aStat) ;

//! Sets the color of highight <br>
 /*instead*/  void SetHighlightColor(OCQuantity_NameOfColor aHiCol) ;

//! Return True if SubIntensity is on <br>
 /*instead*/  System::Boolean IsSubIntensityOn() ;

//! Sets the SubIntensity <br>
 /*instead*/  void SubIntensityOn() ;

//! Unsets the SubIntensity <br>
 /*instead*/  void SubIntensityOff() ;

//! Indicates the display status <br>
 /*instead*/  OCAIS2D_DisplayStatus GraphicStatus() ;

//! keeps the information of displayed modes in the <br>
//!          main viewer. <br>
//!          (The convention is that the object is displayed <br>
//!          with the mode 0 in the collector...) <br>
 /*instead*/  AIS2D_PToListOfInt DisplayedModes() ;

//! keeps the active selection modes of the object <br>
//!          in the main viewer. <br>
//!          (The convention is that the active selection mode <br>
//!          for an object in the collector is the mode 0). <br>
 /*instead*/  AIS2D_PToListOfInt SelectionModes() ;

//! Returns True if highlight is on <br>
 /*instead*/  System::Boolean IsHighlight() ;

//! Returns the color of highlight <br>
 /*instead*/  OCQuantity_NameOfColor HighlightColor() ;

~OCAIS2D_GlobalStatus()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
