// File generated by CPPExt (MPV)
//
#ifndef _Graphic3d_VertexC_OCWrappers_HeaderFile
#define _Graphic3d_VertexC_OCWrappers_HeaderFile

// include native header
#include <Graphic3d_VertexC.hxx>
#include "../Converter.h"

#include "Graphic3d_Vertex.h"

#include "../Quantity/Quantity_Color.h"
#include "Graphic3d_Vertex.h"


namespace OCNaroWrappers
{

ref class OCQuantity_Color;
ref class OCGraphic3d_Vertex;


//! This class allows the creation and update of a point <br>
//!	    with a colour value. <br>//! Returns the color of this point. <br>
public ref class OCGraphic3d_VertexC  : public OCGraphic3d_Vertex {

protected:
  // dummy constructor;
  OCGraphic3d_VertexC(OCDummy^) : OCGraphic3d_Vertex((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_VertexC(Graphic3d_VertexC* nativeHandle);

// Methods PUBLIC

//! Constructs an empty point <br>
OCGraphic3d_VertexC();

//! Creates a point with coordinates <AX>, <AY>, <AZ> and <br>
//!	    with colour <AColor>. <br>
OCGraphic3d_VertexC(Standard_Real AX, Standard_Real AY, Standard_Real AZ, OCNaroWrappers::OCQuantity_Color^ AColor);

//! Creates a point situated in <APoint> and <br>
//!	    for which the colour is <AColor>. <br>
OCGraphic3d_VertexC(OCNaroWrappers::OCGraphic3d_Vertex^ APoint, OCNaroWrappers::OCQuantity_Color^ AColor);

//! Modifies the colour of the point <me>. <br>
 /*instead*/  void SetColor(OCNaroWrappers::OCQuantity_Color^ ColorNew) ;

//! Returns the colour of the point <me>. <br>
 /*instead*/  OCQuantity_Color^ Color() ;

~OCGraphic3d_VertexC()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
