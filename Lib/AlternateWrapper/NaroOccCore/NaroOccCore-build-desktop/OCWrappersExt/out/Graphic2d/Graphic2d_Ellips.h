// File generated by CPPExt (Transient)
//
#ifndef _Graphic2d_Ellips_OCWrappers_HeaderFile
#define _Graphic2d_Ellips_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic2d_Ellips.hxx>
#include "../Converter.h"

#include "Graphic2d_Line.h"



namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;
ref class OCGraphic2d_Drawer;


//! The primitive Ellips <br>
public ref class OCGraphic2d_Ellips : OCGraphic2d_Line {

protected:
  // dummy constructor;
  OCGraphic2d_Ellips(OCDummy^) : OCGraphic2d_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic2d_Ellips(Handle(Graphic2d_Ellips)* nativeHandle);

// Methods PUBLIC

//! Creates an ellipse. <br>
//!	    The center is <X>, <Y>. <br>
//!	    Angles are measured counterclockwise with 0 radian <br>
//!	    at 3 o'clock. <br>
OCGraphic2d_Ellips(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, Quantity_Length X, Quantity_Length Y, Quantity_Length MajorRadius, Quantity_Length MinorRadius, Quantity_PlaneAngle anAngle);

//! returns the coordinates of center of the ellipse <br>
 /*instead*/  void Center(Quantity_Length& X, Quantity_Length& Y) ;

//! returns the radius of the ellipse <br>
 /*instead*/  Quantity_Length MajorRadius() ;

//! returns the radius of the ellipse <br>
 /*instead*/  Quantity_Length MinorRadius() ;

//! returns the angle of the ellipse <br>
 /*instead*/  Quantity_PlaneAngle Angle() ;


virtual /*instead*/  void Save(Aspect_FStream& aFStream) ;


static /*instead*/  void Retrieve(Aspect_IFStream& anIFStream, OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject) ;

~OCGraphic2d_Ellips()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
