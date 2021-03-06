// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_Texture2Dmanual_OCWrappers_HeaderFile
#define _Graphic3d_Texture2Dmanual_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_Texture2Dmanual.hxx>
#include "../Converter.h"

#include "Graphic3d_Texture2D.h"

#include "Graphic3d_NameOfTexture2D.h"


namespace OCNaroWrappers
{

ref class OCGraphic3d_StructureManager;


//! This class defined a manual texture 2D <br>
//! facets MUST define texture coordinate <br>
//! if you want to see somethings on. <br>
public ref class OCGraphic3d_Texture2Dmanual : OCGraphic3d_Texture2D {

protected:
  // dummy constructor;
  OCGraphic3d_Texture2Dmanual(OCDummy^) : OCGraphic3d_Texture2D((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_Texture2Dmanual(Handle(Graphic3d_Texture2Dmanual)* nativeHandle);

// Methods PUBLIC

//! Creates a texture from a file <br>
OCGraphic3d_Texture2Dmanual(OCNaroWrappers::OCGraphic3d_StructureManager^ SM, System::String^ FileName);

//! Creates a texture from a predefined texture name set. <br>
OCGraphic3d_Texture2Dmanual(OCNaroWrappers::OCGraphic3d_StructureManager^ SM, OCGraphic3d_NameOfTexture2D NOT);

~OCGraphic3d_Texture2Dmanual()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
