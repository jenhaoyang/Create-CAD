// File generated by CPPExt (Transient)
//
#ifndef _Graphic2d_GraphicObject_OCWrappers_HeaderFile
#define _Graphic2d_GraphicObject_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic2d_GraphicObject.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColStd/TColStd_IndexedMapOfTransient.h"
#include "../gp/gp_GTrsf2d.h"
#include "Graphic2d_DisplayStatus.h"
#include "Graphic2d_TypeOfComposition.h"
#include "Graphic2d_PickMode.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HSequenceOfInteger;
ref class OCGraphic2d_Primitive;
ref class OCGraphic2d_View;
ref class OCGraphic2d_TransientManager;
ref class OCgp_GTrsf2d;
ref class OCGraphic2d_Drawer;


//! Creates a 2D graphic object in a view. <br>
//!	    A graphic object is a primitives manager. <br>
public ref class OCGraphic2d_GraphicObject : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCGraphic2d_GraphicObject(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic2d_GraphicObject(Handle(Graphic2d_GraphicObject)* nativeHandle);

// Methods PUBLIC

//! Creates an unattached graphic object, <br>
//!   	    the attachment will be realized more later <br>
//!	    using the method SetView(). <br>
OCGraphic2d_GraphicObject();

//! Creates a graphic object in the view <aView>. <br>
//!	    A graphic object manages a sequence of primitives. <br>
//!	    By default a graphic object is : <br>
//!	    - empty. <br>
//!	    - plottable. <br>
//!	    - drawable. <br>
//!	    - pickable. <br>
//!	    - not displayed. <br>
//!	    - not highlighted. <br>
//!	    - a relative drawing priority of 0 <br>
OCGraphic2d_GraphicObject(OCNaroWrappers::OCGraphic2d_View^ aView);

//! Attach the graphic object to this view <br>
 /*instead*/  void SetView(OCNaroWrappers::OCGraphic2d_View^ aView) ;

//! Sets the transformation <aTrsf> applied to <br>
//!	    the primitives according to the composition type. <br>
 /*instead*/  void SetTransform(OCNaroWrappers::OCgp_GTrsf2d^ aTrsf, OCGraphic2d_TypeOfComposition aType) ;

//! Returns the transformation applied to <br>
//!	    the primitives. <br>
 /*instead*/  OCgp_GTrsf2d^ Transform() ;

//! Returns Standard_True if the associated <br>
//!	    transformation is not the Identity. <br>
 /*instead*/  System::Boolean IsTransformed() ;

//! Modifies the layer of the graphic object <me>. <br>
 /*instead*/  void SetLayer(Standard_Integer aLayer) ;

//! Returns the layer of the graphic object <me>. <br>
 /*instead*/  Standard_Integer Layer() ;

//! Modifies the drawing priority of the graphic object <me>. <br>
//!	    <aPriority> of 0 is the lowest priority. <br>
//!	    <aPriority> of MaxPriority() is the highest priority. <br>
 /*instead*/  void SetPriority(Standard_Integer aPriority) ;

//! Returns the drawing priority of the graphic object <br>
 /*instead*/  Standard_Integer Priority() ;

//! Returns the max usable relative priority of the <br>
//!         "standard" graphic object. <br>
virtual /*instead*/  Standard_Integer MaxPriority() ;

//! Allows the drawing of graphic object <me> on a plotter. <br>
 /*instead*/  void EnablePlot() ;

//! Forbids the drawing of graphic object <me> on a plotter. <br>
 /*instead*/  void DisablePlot() ;

//! Returns Standard_True if the graphic object <me> <br>
//!	    is plottable, Standard_False if not. <br>
 /*instead*/  System::Boolean IsPlottable() ;

//! Allows the drawing of graphic object <me>. <br>
 /*instead*/  void EnableDraw() ;

//! Forbids the drawing of graphic object <me>. <br>
 /*instead*/  void DisableDraw() ;

//! Returns Standard_True if the graphic object <me> <br>
//!	    is drawable, Standard_False if not. <br>
 /*instead*/  System::Boolean IsDrawable() ;

//! Returns Standard_True if the primitive <aPrimitive> <br>
//!	    is in the graphic object <me>, Standard_False if not. <br>
 /*instead*/  System::Boolean IsIn(OCNaroWrappers::OCGraphic2d_Primitive^ aPrimitive) ;

//! Removes the primitive <aPrimitive> from <me>. <br>
 /*instead*/  void RemovePrimitive(OCNaroWrappers::OCGraphic2d_Primitive^ aPrimitive) ;

//! Removes all the primitives from <me>. <br>
 /*instead*/  void RemovePrimitives() ;

//! Removes <me> from the associated view. <br>
//!	    If <me> was displayed or highlighted, <me> <br>
//!	    is removed from the display list of the associated view. <br>
 /*instead*/  void Remove() ;

//! Allows the picking on the graphic object <me>. <br>
 /*instead*/  void EnablePick() ;

//! Forbids the picking on the graphic object <me>. <br>
 /*instead*/  void DisablePick() ;

//! Returns Standard_True if the graphic object <me> <br>
//!	    is pickable, Standard_False if not. <br>
 /*instead*/  System::Boolean IsPickable() ;

//! Allows the drawing of the graphic object <me>. <br>
 /*instead*/  void Display() ;

//! Forbids the drawing of the graphic object <me>. <br>
 /*instead*/  void Erase() ;

//! Returns Standard_True if the graphic object <me> <br>
//!	    is displayed, Standard_False if not. <br>
 /*instead*/  System::Boolean IsDisplayed() ;

//! Highlights the graphic object <me> with the <br>
//!	    override color of the view. <br>
 /*instead*/  void Highlight() ;

//! Highlights the graphic object <me> with the <br>
//!	    specified color. <br>
 /*instead*/  void Highlight(Standard_Integer aColorIndex) ;

//! Suppress the highlight the graphic object <me>. <br>
 /*instead*/  void Unhighlight() ;

//! Returns Standard_True if the graphic object <me> <br>
//!	    is highlighted, Standard_False if not. <br>
 /*instead*/  System::Boolean IsHighlighted() ;

//! Specifies an offset applied to the original color <br>
//!	index when drawing a primitives, those already created <br>
//!	and the future one. <br>
//!  Warning: To reset the real color of the primitives when drawing <br>
//!	then you have to call this method with <anOffSet> = 0. <br>
 /*instead*/  void SetOffSet(Standard_Integer anOffSet) ;

//! Returns the offset applied to the original color <br>
//!	    index of all primitives in the graphic object <me>. <br>
 /*instead*/  Standard_Integer OffSet() ;

//! Returns the current overridel color apply to <br>
//!	   this graphic object. <br>
 /*instead*/  Standard_Integer OverrideColor() ;

//! Sets the current overridel color apply to <br>
//!	   this graphic object. <br>
 /*instead*/  void SetOverrideColor(Standard_Integer indColor) ;

//! Returns the number of primitive of the graphic object. <br>
 /*instead*/  Standard_Integer Length() ;

//! Returns the primitive of rank <aRank> <br>
 /*instead*/  OCGraphic2d_Primitive^ Primitive(Standard_Integer aRank) ;

//! Returns the min max values of <me>. <br>
//!  Warning: All markers are ignored. <br>
//!  Warning: If <me> is empty or not displayed or <br>
//!	    contains markers and nothing else <br>
//!	    returns FALSE and <br>
//!	    Minx = Miny = RealFirst () <br>
//!	    Maxx = Maxy = RealLast () <br>
virtual /*instead*/  System::Boolean MinMax(Quantity_Length& Minx, Quantity_Length& Maxx, Quantity_Length& Miny, Quantity_Length& Maxy) ;

//! Returns the min max values of all markers in <me>. <br>
//!  Warning: If <me> is empty or not displayed or without markers <br>
//!	    returns FALSE and <br>
//!	    Minx = Miny = RealFirst () <br>
//!	    Maxx = Maxy = RealLast () <br>
virtual /*instead*/  System::Boolean MarkerMinMax(Quantity_Length& Minx, Quantity_Length& Maxx, Quantity_Length& Miny, Quantity_Length& Maxy) ;

//! Returns the last picked primitive index in this. <br>
//!  Warning: This is available only if the Pick() method has <br>
//!	   returned Standard_True. <br>
 /*instead*/  Standard_Integer PickedIndex() ;

//! Returns the sequence of picked primitives. <br>
 /*instead*/  OCTColStd_HSequenceOfInteger^ PickList() ;

~OCGraphic2d_GraphicObject()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
