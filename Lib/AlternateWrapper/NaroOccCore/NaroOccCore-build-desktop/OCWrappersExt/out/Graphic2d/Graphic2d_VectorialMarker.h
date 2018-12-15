// File generated by CPPExt (Transient)
//
#ifndef _Graphic2d_VectorialMarker_OCWrappers_HeaderFile
#define _Graphic2d_VectorialMarker_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic2d_VectorialMarker.hxx>
#include "../Converter.h"

#include "Graphic2d_Line.h"



namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;


//! Groups all the primitives which behaves like <br>
//!	    geometrical marker. <br>
//!	    for example : EllipsMarker, CircleMarker ... <br>
//!	    A marker is a primitive which retains its original <br>
//!	    on-screen size no matter how the view is zoomed. <br>
//!	    For example, markers are used as symbols of dimension. <br>
//!	    Every marker takes a reference point as an argument in <br>
//!	    its constructor. CircleMarker and EllipsMarker take <br>
//!	    another point as the center and PolylineMarker takes the <br>
//!	    first point of its list as its origin. <br>
//!	    The coordinates of the centre or origin point are offsets <br>
//!	    with respect to the reference point. <br>
public ref class OCGraphic2d_VectorialMarker : OCGraphic2d_Line {

protected:
  // dummy constructor;
  OCGraphic2d_VectorialMarker(OCDummy^) : OCGraphic2d_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic2d_VectorialMarker(Handle(Graphic2d_VectorialMarker)* nativeHandle);

// Methods PUBLIC

//! Creates a marker at <aXPosition>, <aYPosition> <br>
OCGraphic2d_VectorialMarker(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, Quantity_Length aXPosition, Quantity_Length aYPosition);

//! Modifies the marker position. <br>
//!  Warning: If the associated GraphicObject is transformed <br>
//!	    the position will be transformed. <br>
 /*instead*/  void SetPosition(Quantity_Length aXPosition, Quantity_Length aYPosition) ;

//! Returns the x position of the marker <br>
//!  Warning: If the associated GraphicObject is transformed <br>
//!	    the returned position is the transformed position. <br>
 /*instead*/  Quantity_Length XPosition() ;

//! Returns the y position of the marker <br>
//!  Warning: If the associated GraphicObject is transformed <br>
//!	    the returned position is the transformed position. <br>
 /*instead*/  Quantity_Length YPosition() ;

~OCGraphic2d_VectorialMarker()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
