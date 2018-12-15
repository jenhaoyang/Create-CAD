// File generated by CPPExt (MPV)
//
#ifndef _Image_PixelRowOfDIndexedImage_OCWrappers_HeaderFile
#define _Image_PixelRowOfDIndexedImage_OCWrappers_HeaderFile

// include native header
#include <Image_PixelRowOfDIndexedImage.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCAspect_IndexPixel;



public ref class OCImage_PixelRowOfDIndexedImage  {

protected:
  Image_PixelRowOfDIndexedImage* nativeHandle;
  OCImage_PixelRowOfDIndexedImage(OCDummy^) {};

public:
  property Image_PixelRowOfDIndexedImage* Handle
  {
    Image_PixelRowOfDIndexedImage* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCImage_PixelRowOfDIndexedImage(Image_PixelRowOfDIndexedImage* nativeHandle);

// Methods PUBLIC


OCImage_PixelRowOfDIndexedImage(Standard_Integer Low, Standard_Integer Up);


OCImage_PixelRowOfDIndexedImage(OCNaroWrappers::OCAspect_IndexPixel^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCAspect_IndexPixel^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCImage_PixelRowOfDIndexedImage^ Assign(OCNaroWrappers::OCImage_PixelRowOfDIndexedImage^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCAspect_IndexPixel^ Value) ;


 /*instead*/  OCAspect_IndexPixel^ Value(Standard_Integer Index) ;


 /*instead*/  OCAspect_IndexPixel^ ChangeValue(Standard_Integer Index) ;

~OCImage_PixelRowOfDIndexedImage()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
