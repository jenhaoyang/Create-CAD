// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_WNTGraphicDevice_OCWrappers_HeaderFile
#define _Graphic3d_WNTGraphicDevice_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_WNTGraphicDevice.hxx>
#include "../Converter.h"

#include "../WNT/WNT_GraphicDevice.h"

#include "../OSD/OSD_SharedLibrary.h"


namespace OCNaroWrappers
{

ref class OCGraphic3d_GraphicDriver;
ref class OCAspect_GraphicDriver;


//! This class initializes a Windows NT Graphic Device. <br>
public ref class OCGraphic3d_WNTGraphicDevice : OCWNT_GraphicDevice {

protected:
  // dummy constructor;
  OCGraphic3d_WNTGraphicDevice(OCDummy^) : OCWNT_GraphicDevice((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_WNTGraphicDevice(Handle(Graphic3d_WNTGraphicDevice)* nativeHandle);

// Methods PUBLIC

//! Creates a class instance and provide initialization <br>
//!	    of the graphic library. <br>
//!  Warning: Raises if something wrong. <br>
OCGraphic3d_WNTGraphicDevice();

//! Creates a class instance and provide initialization <br>
//!	    of the graphic library defined by "graphicLib". <br>
//!  Warning: Raises if something wrong. <br>
OCGraphic3d_WNTGraphicDevice(System::String^ graphicLib);

//! Returns the GraphicDriver. <br>
virtual /*instead*/  OCAspect_GraphicDriver^ GraphicDriver() override;

~OCGraphic3d_WNTGraphicDevice()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
