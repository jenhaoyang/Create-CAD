// File generated by CPPExt (MPV)
//
#ifndef _Graphic3d_VertexNC_OCWrappers_HeaderFile
#define _Graphic3d_VertexNC_OCWrappers_HeaderFile

// include native header
#include <Graphic3d_VertexNC.hxx>
#include "../Converter.h"

#include "Graphic3d_VertexN.h"

#include "../Quantity/Quantity_Color.h"
#include "Graphic3d_VertexN.h"


namespace OCNaroWrappers
{

ref class OCQuantity_Color;
ref class OCGraphic3d_Vertex;
ref class OCGraphic3d_Vector;


//! This class allows the creation of a vertex with <br>
//!	    a colour and a 3D normal. <br>
public ref class OCGraphic3d_VertexNC  : public OCGraphic3d_VertexN {

protected:
  // dummy constructor;
  OCGraphic3d_VertexNC(OCDummy^) : OCGraphic3d_VertexN((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_VertexNC(Graphic3d_VertexNC* nativeHandle);

// Methods PUBLIC

//! Creates a point with coordinates 0.0, 0.0, 0.0 <br>
//!	    for which the normal is 0.0, 0.0, 1.0 and <br>
//!	    the colour is Quantity_NOC_WHITE. <br>
OCGraphic3d_VertexNC();

//! Creates a point with coordinates <AX>, <AY>, <AZ> <br>
//!	    for which the normal is <ANX>, <ANY>, <ANZ> and <br>
//!	    the colour is <AColor>. <br>
//!	    If <FlagNormalise> is True the normal is already normalised <br>
//!	    Else the normal is not normalised, the graphic do it. <br>
OCGraphic3d_VertexNC(Standard_Real AX, Standard_Real AY, Standard_Real AZ, Standard_Real ANX, Standard_Real ANY, Standard_Real ANZ, OCNaroWrappers::OCQuantity_Color^ AColor, System::Boolean FlagNormalise);

//! Creates a point in <APoint> for which the normal <br>
//!	    is <AVector> and the colour is <AColor>. <br>
//!	    If <FlagNormalise> is True the normal is already normalised <br>
//!	    Else the normal is not normalised, the graphic do it. <br>
OCGraphic3d_VertexNC(OCNaroWrappers::OCGraphic3d_Vertex^ APoint, OCNaroWrappers::OCGraphic3d_Vector^ AVector, OCNaroWrappers::OCQuantity_Color^ AColor, System::Boolean FlagNormalise);

//! Modifies the colour of the point <me>. <br>
 /*instead*/  void SetColor(OCNaroWrappers::OCQuantity_Color^ ColorNew) ;

//! Returns the colour of the point <me>. <br>
 /*instead*/  OCQuantity_Color^ Color() ;

~OCGraphic3d_VertexNC()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
