// File generated by CPPExt (Transient)
//
#ifndef _WNT_PixMap_OCWrappers_HeaderFile
#define _WNT_PixMap_OCWrappers_HeaderFile

// include the wrapped class
#include <WNT_PixMap.hxx>
#include "../Converter.h"

#include "../Aspect/Aspect_PixMap.h"



namespace OCNaroWrappers
{

ref class OCAspect_Window;


//! This class defines a windows bitmap <br>
public ref class OCWNT_PixMap : OCAspect_PixMap {

protected:
  // dummy constructor;
  OCWNT_PixMap(OCDummy^) : OCAspect_PixMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCWNT_PixMap(Handle(WNT_PixMap)* nativeHandle);

// Methods PUBLIC

//!  Warning! When <aDepth> is NULL , the pixmap is created <br>
//! with the SAME depth than the window <aWindow> <br>
OCWNT_PixMap(OCNaroWrappers::OCAspect_Window^ aWindow, Standard_Integer aWidth, Standard_Integer anHeight, Standard_Integer aCDepth);

//! Dumps the Bitmap to an XWD,GIF or BMP file with <br>
//! an optional gamma correction value according to the graphic system <br>
//!  and returns TRUE if the dump occurs normaly. <br>
//!  Category: Methods to modify the class definition <br>
//!  Trigger: Raises if Bitmap is not defined properly <br>
virtual /*instead*/  System::Boolean Dump(System::String^ aFilename, Standard_Real aGammaValue) ;

//! Returns the ID of the just created bitmap <br>
virtual /*instead*/  System::IntPtr PixmapID() ;

~OCWNT_PixMap()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
