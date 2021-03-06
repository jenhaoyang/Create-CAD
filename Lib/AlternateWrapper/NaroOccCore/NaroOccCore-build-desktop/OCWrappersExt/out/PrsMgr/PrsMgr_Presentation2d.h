// File generated by CPPExt (Transient)
//
#ifndef _PrsMgr_Presentation2d_OCWrappers_HeaderFile
#define _PrsMgr_Presentation2d_OCWrappers_HeaderFile

// include the wrapped class
#include <PrsMgr_Presentation2d.hxx>
#include "../Converter.h"

#include "PrsMgr_Presentation.h"

#include "PrsMgr_KindOfPrs.h"


namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;
ref class OCPrsMgr_PresentationManager2d;
ref class OCPrsMgr_PresentableObject;


//! A framework to manage 2D displays, graphic entities <br>
//! and their updates. Plotters, Highlights, Minima <br>
//! maxima, immediate display. <br>
public ref class OCPrsMgr_Presentation2d : OCPrsMgr_Presentation {

protected:
  // dummy constructor;
  OCPrsMgr_Presentation2d(OCDummy^) : OCPrsMgr_Presentation((OCDummy^)nullptr) {};

public:

// constructor from native
OCPrsMgr_Presentation2d(Handle(PrsMgr_Presentation2d)* nativeHandle);

// Methods PUBLIC


virtual /*instead*/  OCPrsMgr_KindOfPrs KindOfPresentation() ;

//! removes the whole content of the presentation. <br>
virtual /*instead*/  void Clear() ;

//! Specifies an Offset applied to the original color <br>
//!	    index of all primitives in the graphic object <me>. <br>
//!  Warning: To reset the real color of the primitives <br>
//!	    you have to call this method with <anOffset> = 0. <br>
 /*instead*/  void SetOffset(Standard_Integer anOffset) ;

//! Returns the Offset applied to the original color <br>
//!	    index of all primitives in the graphic object <me>. <br>
 /*instead*/  Standard_Integer Offset() ;


 /*instead*/  OCGraphic2d_GraphicObject^ Presentation() ;

~OCPrsMgr_Presentation2d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
