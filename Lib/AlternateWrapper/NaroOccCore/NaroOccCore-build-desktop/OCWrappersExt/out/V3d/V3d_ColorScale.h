// File generated by CPPExt (Transient)
//
#ifndef _V3d_ColorScale_OCWrappers_HeaderFile
#define _V3d_ColorScale_OCWrappers_HeaderFile

// include the wrapped class
#include <V3d_ColorScale.hxx>
#include "../Converter.h"

#include "../Aspect/Aspect_ColorScale.h"



namespace OCNaroWrappers
{

ref class OCV3d_LayerMgr;
ref class OCQuantity_Color;
ref class OCTCollection_ExtendedString;


//! A colorscale class <br>
public ref class OCV3d_ColorScale : OCAspect_ColorScale {

protected:
  // dummy constructor;
  OCV3d_ColorScale(OCDummy^) : OCAspect_ColorScale((OCDummy^)nullptr) {};

public:

// constructor from native
OCV3d_ColorScale(Handle(V3d_ColorScale)* nativeHandle);

// Methods PUBLIC

//! Returns returns ColorScale from V3d. <br>//! Returns View from V3d. <br>
OCV3d_ColorScale(OCNaroWrappers::OCV3d_LayerMgr^ aMgr);


 /*instead*/  void Display() ;


 /*instead*/  void Erase() ;


 /*instead*/  System::Boolean IsDisplayed() ;


virtual /*instead*/  void PaintRect(Standard_Integer X, Standard_Integer Y, Standard_Integer W, Standard_Integer H, OCNaroWrappers::OCQuantity_Color^ aColor, System::Boolean aFilled) ;


virtual /*instead*/  void PaintText(OCNaroWrappers::OCTCollection_ExtendedString^ aText, Standard_Integer X, Standard_Integer Y, OCNaroWrappers::OCQuantity_Color^ aColor) ;


virtual /*instead*/  Standard_Integer TextWidth(OCNaroWrappers::OCTCollection_ExtendedString^ aText) ;


virtual /*instead*/  Standard_Integer TextHeight(OCNaroWrappers::OCTCollection_ExtendedString^ aText) ;


 /*instead*/  void TextSize(OCNaroWrappers::OCTCollection_ExtendedString^ AText, Standard_Integer AHeight, Standard_Integer& AWidth, Standard_Integer& AnAscent, Standard_Integer& ADescent) ;


 /*instead*/  void DrawScale() ;

~OCV3d_ColorScale()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
