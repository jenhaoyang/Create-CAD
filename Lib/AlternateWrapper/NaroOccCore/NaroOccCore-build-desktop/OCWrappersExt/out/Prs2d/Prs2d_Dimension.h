// File generated by CPPExt (Transient)
//
#ifndef _Prs2d_Dimension_OCWrappers_HeaderFile
#define _Prs2d_Dimension_OCWrappers_HeaderFile

// include the wrapped class
#include <Prs2d_Dimension.hxx>
#include "../Converter.h"

#include "../Graphic2d/Graphic2d_Line.h"

#include "../TCollection/TCollection_ExtendedString.h"
#include "../TShort/TShort_Array1OfShortReal.h"
#include "Prs2d_TypeOfArrow.h"
#include "Prs2d_ArrowSide.h"


namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;
ref class OCTCollection_ExtendedString;
ref class OCTColgp_HArray1OfPnt2d;


//! Groups all dimensions <br>
public ref class OCPrs2d_Dimension : OCGraphic2d_Line {

protected:
  // dummy constructor;
  OCPrs2d_Dimension(OCDummy^) : OCGraphic2d_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCPrs2d_Dimension(Handle(Prs2d_Dimension)* nativeHandle);

// Methods PUBLIC

//! creates a dimension <br>
OCPrs2d_Dimension(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGO, OCNaroWrappers::OCTCollection_ExtendedString^ aText, Standard_Real aTxtScale, Standard_Real anArrAngle, Standard_Real anArrLength, OCPrs2d_TypeOfArrow anArrType, OCPrs2d_ArrowSide anArrow, System::Boolean IsRevArrow);

//! Sets the text to this dimension <br>
 /*instead*/  void SetText(OCNaroWrappers::OCTCollection_ExtendedString^ aText) ;

//! Sets the scale of text to this dimension <br>
 /*instead*/  void SetTextScale(Standard_Real aTS) ;

//! Sets the index of the font of this text to this dimension <br>
 /*instead*/  void SetTextFont(Standard_Integer aTF) ;

//! Sets the index of the font of the symbol to this dimension <br>
 /*instead*/  void SetFontOfSymb(Standard_Integer aFS) ;

//! Sets the type of arrows to this dimension <br>
 /*instead*/  void SetArrowType(OCPrs2d_TypeOfArrow anArrT) ;

//! Sets the number of arrows to this dimension <br>
 /*instead*/  void SetArrowSides(OCPrs2d_ArrowSide anArrS) ;

//! Sets the flag for drawing additional symbol <br>
 /*instead*/  void DrawSymbol(System::Boolean isDraw) ;

//! Sets the ASCII code of the symbol <br>
 /*instead*/  void SetSymbolCode(Standard_Integer aCode) ;

//! Sets the CalcTxtPos(Standard_True) <br>
//!                   myAbsX=Xp <br>
//! 	                 myAbsY=Yp <br>
 /*instead*/  void SetTextAbsPos(Standard_Real Xp, Standard_Real Yp) ;

//! Sets the CalcTxtPos(Standard_True) <br>
//!                   myAbsAngle=Ap <br>
 /*instead*/  void SetTextAbsAngle(Standard_Real Ap) ;

//! Sets the CalcTxtPos(Standard_False) <br>
//!	                 myAbsX=Xp <br>
//! 	                 myAbsY=Yp <br>
 /*instead*/  void SetTextRelPos(Standard_Real Xp, Standard_Real Yp) ;

//! Sets the CalcTxtPos(Standard_False) <br>
//!	                 myAbsAngle=Ap <br>
 /*instead*/  void SetTextRelAngle(Standard_Real Ap) ;

//! Returns text of this dimension <br>
 /*instead*/  OCTCollection_ExtendedString^ Text() ;

//! Returns X - coordinat of text in absolute axis <br>
//! add by enk Wed Dec 11 10:34 2002 <br>
 /*instead*/  Standard_Real TextAbsX() ;

//! Returns Y - coordinat of text in absolute axis <br>
//! add by enk Wed Dec 11 10:34 2002 <br>
 /*instead*/  Standard_Real TextAbsY() ;

//! Returns angle of text in absolute axis <br>
//! add by enk Wed Dec 11 10:34 2002 <br>
 /*instead*/  Standard_Real TextAbsAngle() ;

//! Returns the horizontal position of text <br>
 /*instead*/  Standard_Real TextRelH() ;

//! Returns the vertical position of text <br>
 /*instead*/  Standard_Real TextRelV() ;

//! Returns the angle of text <br>
 /*instead*/  Standard_Real TextRelAngle() ;

//! Returns the scale of text of this dimension <br>
 /*instead*/  Standard_Real TextScale() ;

//! Returns the index of the font of this text of this dimension <br>
 /*instead*/  Standard_Integer TextFont() ;

//! Returns the index of the font of the symbol of this dimension <br>
 /*instead*/  Standard_Integer FontOfSymb() ;

//! Indicates the type of arrows of this dimension <br>
 /*instead*/  OCPrs2d_TypeOfArrow ArrowType() ;

//! Indicates the number of arrows of this dimension <br>
 /*instead*/  OCPrs2d_ArrowSide ArrowSides() ;

//! Indicates the angle of arrow of this dimension <br>
 /*instead*/  Standard_Real ArrowAngle() ;

//! Indicates the length of arrow of this dimension <br>
 /*instead*/  Standard_Real ArrowLength() ;

//! Return true if arrows are reversed, false - in otherwise <br>
 /*instead*/  System::Boolean ArrowIsReversed() ;

//! Return true if symbol is drawn, false - in otherwise <br>
 /*instead*/  System::Boolean IsDrawSymbol() ;

//! Return ASCII code of the symbol <br>
 /*instead*/  Standard_Integer SymbolCode() ;


 /*instead*/  OCTColgp_HArray1OfPnt2d^ ArrayOfFirstArrowPnt() ;


 /*instead*/  OCTColgp_HArray1OfPnt2d^ ArrayOfSecondArrowPnt() ;

~OCPrs2d_Dimension()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
