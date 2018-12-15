// File generated by CPPExt (Transient)
//
#ifndef _Image_PseudoColorImage_OCWrappers_HeaderFile
#define _Image_PseudoColorImage_OCWrappers_HeaderFile

// include the wrapped class
#include <Image_PseudoColorImage.hxx>
#include "../Converter.h"

#include "Image_DIndexedImage.h"

#include "Image_TypeOfImage.h"


namespace OCNaroWrappers
{

ref class OCAspect_ColorMap;
ref class OCAspect_IndexPixel;
ref class OCQuantity_Color;
ref class OCQuantity_HArray1OfColor;
ref class OCQuantity_Array1OfColor;
ref class OCImage_LookupTable;
ref class OCImage_Image;


//! A PseudoColorImage is a DIndexedImage associated with a <br>
//!	     ColorMap . The ColoMap is set at Creation time and then <br>
//!	     never be changed. Each Pixel in the Image ,as a IndexPixel <br>
//!	     from Aspect, match a ColoMap Entry with the same value. <br>
public ref class OCImage_PseudoColorImage : OCImage_DIndexedImage {

protected:
  // dummy constructor;
  OCImage_PseudoColorImage(OCDummy^) : OCImage_DIndexedImage((OCDummy^)nullptr) {};

public:

// constructor from native
OCImage_PseudoColorImage(Handle(Image_PseudoColorImage)* nativeHandle);

// Methods PUBLIC

//! Creates a PseudoColorImage object. <br>
//!	       The default Background Pixel is set to 0 . <br>
//!	       All the Image is initialised with Background Pixel <br>
OCImage_PseudoColorImage(Standard_Integer x, Standard_Integer y, Standard_Integer dx, Standard_Integer dy, OCNaroWrappers::OCAspect_ColorMap^ aColorMap);

//! Creates a PseudoColorImage object and set the <br>
//!	       Background Pixel. <br>
//!	       All the Image is initialised with Background Pixel <br>
OCImage_PseudoColorImage(Standard_Integer x, Standard_Integer y, Standard_Integer dx, Standard_Integer dy, OCNaroWrappers::OCAspect_ColorMap^ aColorMap, OCNaroWrappers::OCAspect_IndexPixel^ BackPixel);

//! Returns the Image Type. <br>
 /*instead*/  OCImage_TypeOfImage Type() ;

//! returns the Image ColorMap . <br>
 /*instead*/  OCAspect_ColorMap^ ColorMap() ;

//! Returns the Pixel Color . <br>
 /*instead*/  OCQuantity_Color^ PixelColor(Standard_Integer X, Standard_Integer Y) ;

//! Return the PixelRow Color in a HArray1 of Color. <br>
virtual /*instead*/  OCQuantity_HArray1OfColor^ RowColor(Standard_Integer Y) override;

//! Stores the PixelRow Color in a Array1 . <br>
virtual /*instead*/  void RowColor(Standard_Integer Y, OCNaroWrappers::OCQuantity_Array1OfColor^ aArray1) override;

//! Creates a new Image with continuous Pixel and a continuous <br>
//!              ColorMap whith only used Image color starting from <br>
//!		BasePixel . <br>
 /*instead*/  OCImage_PseudoColorImage^ Squeeze(OCNaroWrappers::OCAspect_IndexPixel^ BasePixel) ;

//! Creates a LookupTable that can be used to create a <br>
//!	    new Image with continuous Pixel and a continuous <br>
//!	    ColorMap with only used Image color starting <br>
//!	    from BasePixel . <br>
 /*instead*/  void SqueezedLookupTable(OCNaroWrappers::OCAspect_IndexPixel^ BasePixel, OCNaroWrappers::OCImage_LookupTable^ aLookup) ;

//! Pass a PseudoColorImage through a lookupTable <br>
 /*instead*/  void Lookup(OCNaroWrappers::OCImage_LookupTable^ aLookup) ;

//! Find the maximum and minimum Pixel Value of an Image. <br>
 /*instead*/  void Extrema(OCNaroWrappers::OCAspect_IndexPixel^ Min, OCNaroWrappers::OCAspect_IndexPixel^ Max) ;

//! This method changes the value of any Pixel beetwen the <br>
//!	    range (Min->Max) to the Pixel Map value. All Pixel values <br>
//!	    outside the range are passed through without changed . <br>
 /*instead*/  void Threshold(OCNaroWrappers::OCAspect_IndexPixel^ Min, OCNaroWrappers::OCAspect_IndexPixel^ Max, OCNaroWrappers::OCAspect_IndexPixel^ Map) ;

//! Map the Image Pixel Value from one range to another range. <br>
//!	     This method perform the mapping by multiplying each <br>
//!	     Pixel Value by Scale and then adding Offset to the result. <br>
 /*instead*/  void Rescale(Standard_Real Scale, Standard_Real Offset) ;

//! Duplicate a Image. <br>
 /*instead*/  OCImage_Image^ Dup() ;

~OCImage_PseudoColorImage()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
