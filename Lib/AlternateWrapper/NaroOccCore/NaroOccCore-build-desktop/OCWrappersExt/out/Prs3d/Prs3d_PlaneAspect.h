// File generated by CPPExt (Transient)
//
#ifndef _Prs3d_PlaneAspect_OCWrappers_HeaderFile
#define _Prs3d_PlaneAspect_OCWrappers_HeaderFile

// include the wrapped class
#include <Prs3d_PlaneAspect.hxx>
#include "../Converter.h"

#include "Prs3d_CompositeAspect.h"



namespace OCNaroWrappers
{

ref class OCPrs3d_LineAspect;


//! A framework to define the display of planes. <br>
public ref class OCPrs3d_PlaneAspect : OCPrs3d_CompositeAspect {

protected:
  // dummy constructor;
  OCPrs3d_PlaneAspect(OCDummy^) : OCPrs3d_CompositeAspect((OCDummy^)nullptr) {};

public:

// constructor from native
OCPrs3d_PlaneAspect(Handle(Prs3d_PlaneAspect)* nativeHandle);

// Methods PUBLIC

//! Constructs an empty framework for the display of planes. <br>
OCPrs3d_PlaneAspect();

//! Returns the attributes of displayed edges involved in the presentation of planes. <br>
 /*instead*/  OCPrs3d_LineAspect^ EdgesAspect() ;

//! Returns the attributes of displayed isoparameters involved in the presentation of planes. <br>
 /*instead*/  OCPrs3d_LineAspect^ IsoAspect() ;

//! Returns the settings for displaying an arrow. <br>
 /*instead*/  OCPrs3d_LineAspect^ ArrowAspect() ;


 /*instead*/  void SetArrowsLength(Quantity_Length L) ;

//! Returns the length of the arrow shaft used in the display of arrows. <br>
 /*instead*/  Quantity_Length ArrowsLength() ;

//! Sets the angle of the arrowhead used in the display of planes. <br>
 /*instead*/  void SetArrowsSize(Quantity_Length L) ;

//! Returns the size of arrows used in the display of planes. <br>
 /*instead*/  Quantity_Length ArrowsSize() ;

//! Sets the angle of the arrowhead used in the display <br>
//! of arrows involved in the presentation of planes. <br>
 /*instead*/  void SetArrowsAngle(Quantity_PlaneAngle ang) ;

//! Returns the angle of the arrowhead used in the <br>
//! display of arrows involved in the presentation of planes. <br>
 /*instead*/  Quantity_PlaneAngle ArrowsAngle() ;

//! Sets the display attributes defined in DisplayCenterArrow to active. <br>
 /*instead*/  void SetDisplayCenterArrow(System::Boolean draw) ;

//! Returns true if the display of center arrows is allowed. <br>
 /*instead*/  System::Boolean DisplayCenterArrow() ;

//! Sets the display attributes defined in DisplayEdgesArrows to active. <br>
 /*instead*/  void SetDisplayEdgesArrows(System::Boolean draw) ;

//! Returns true if the display of edge arrows is allowed. <br>
 /*instead*/  System::Boolean DisplayEdgesArrows() ;


 /*instead*/  void SetDisplayEdges(System::Boolean draw) ;


 /*instead*/  System::Boolean DisplayEdges() ;

//! Sets the display attributes defined in DisplayIso to active. <br>
 /*instead*/  void SetDisplayIso(System::Boolean draw) ;

//! Returns true if the display of isoparameters is allowed. <br>
 /*instead*/  System::Boolean DisplayIso() ;


 /*instead*/  void SetPlaneLength(Quantity_Length LX, Quantity_Length LY) ;

//! Returns the length of the x axis used in the display of planes. <br>
 /*instead*/  Quantity_Length PlaneXLength() ;

//! Returns the length of the y axis used in the display of planes. <br>
 /*instead*/  Quantity_Length PlaneYLength() ;

//! Sets the distance L between isoparameters used in the display of planes. <br>
 /*instead*/  void SetIsoDistance(Quantity_Length L) ;

//! Returns the distance between isoparameters used in the display of planes. <br>
 /*instead*/  Quantity_Length IsoDistance() ;

~OCPrs3d_PlaneAspect()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
