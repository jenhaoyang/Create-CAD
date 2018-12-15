// File generated by CPPExt (MPV)
//
#ifndef _Visual3d_ViewOrientation_OCWrappers_HeaderFile
#define _Visual3d_ViewOrientation_OCWrappers_HeaderFile

// include native header
#include <Visual3d_ViewOrientation.hxx>
#include "../Converter.h"


#include "../Graphic3d/Graphic3d_Vertex.h"
#include "../Graphic3d/Graphic3d_Vector.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray2OfReal;
ref class OCVisual3d_View;
ref class OCGraphic3d_Vertex;
ref class OCGraphic3d_Vector;


//! This class allows the definition of the manner in <br>
//!	    which an observer looks at the visualised scene. <br>
//!	    It defines a coordinate system called VRC <br>
//!	    (View Reference Coordinates) with 3 axes U,V,N <br>
//! Summary of 3D View Orientation              -- <br>
//!                                             -- <br>
//! The view orientation transformation defines -- <br>
//! the relationship  between World Coordinates -- <br>
//! (WC) and  View Reference  Coordinates (VRC) -- <br>
//!                                             -- <br>
//! To define a view orientation transformation -- <br>
//! you must define :                           -- <br>
//!                                             -- <br>
//!	The View Reference Point (VRP)         -- <br>
//!	The View Plane Normal (VPN)            -- <br>
//!	The View Up Vector (VUP).              -- <br>
//! <br>
//! Optionally, it is possible to specify anisotropic <br>
//! (axial) scale factors. This allows to scale the scene <br>
//! using individual scale values along each coordinate axis. <br>
public ref class OCVisual3d_ViewOrientation  {

protected:
  Visual3d_ViewOrientation* nativeHandle;
  OCVisual3d_ViewOrientation(OCDummy^) {};

public:
  property Visual3d_ViewOrientation* Handle
  {
    Visual3d_ViewOrientation* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCVisual3d_ViewOrientation(Visual3d_ViewOrientation* nativeHandle);

// Methods PUBLIC

//! Creates a VRC coordinate system. <br>
//!	    VRP		: Origin of the VRC coordinate system. <br>
//!			  (default value : 0.0, 0.0, 0.0) <br>
//!	    VPN		: Vector normal to the plane of visualisation. <br>
//!			  (default value : 0.0, 0.0, 1.0) <br>
//!	    VUP 	: Vector for which the projection in the plane <br>
//!			  of visualisation defines the axis V of a VRC <br>
//!			  coordinate system. <br>
//!			  (default value : 0.0, 1.0, 0.0) <br>
OCVisual3d_ViewOrientation();

//! Creates a VRC coordinate system. <br>
//!	    VRP		: Origin of the VRC coordinate system. <br>
//!	    VPN		: Vector normal to the plane of visualisation. <br>
//!	    VUP 	: Vector for which the projection in the plane <br>
//!			  of visualisation defines the axis V of a VRC <br>
//!			  coordinate system. <br>
//!			  This vector can be likened to the <br>
//!			  vertical of the observer. <br>
//!  Warning: Raises ViewOrientationDefinitionError <br>
//!	    if <VPN> is null. <br>
//!	    if <VUP> is null. <br>
//!	    if <VPN> and <VUP> are parallel. <br>
OCVisual3d_ViewOrientation(OCNaroWrappers::OCGraphic3d_Vertex^ VRP, OCNaroWrappers::OCGraphic3d_Vector^ VPN, OCNaroWrappers::OCGraphic3d_Vector^ VUP);

//! Creates a VRC coordinate system. <br>
//!	    VRP		: Origin of VRC coordinate system. <br>
//!	    VPN		: Normal vector to the plane of visualisation. <br>
//!	    Twist 	: Angle in radians of the V axis in the VRC <br>
//!			  coordinate system with the projection in <br>
//!			  the plane of visualisation of the Zm axis <br>
//!			  in the model space. <br>
//!  Warning: Raises ViewOrientationDefinitionError if <VPN> is null. <br>
OCVisual3d_ViewOrientation(OCNaroWrappers::OCGraphic3d_Vertex^ VRP, OCNaroWrappers::OCGraphic3d_Vector^ VPN, Standard_Real Twist);

//! Creates a VRC coordinate system. <br>
//!	    VRP		: Origin of the VRC coordinate system. <br>
//!	    Azim 	: Angle in radians of the plane of visualisation <br>
//!			  with the XmYm plane of the model space. <br>
//!	    Inc 	: Angle in radians of the plane of visualisation <br>
//!			  with the YmZm plane of the model space. <br>
//!	    Twist 	: Angle in radians of the V axis in the VRC <br>
//!			  coordinate system with the projection in <br>
//!			  the plane of visualisation of the Zm axis <br>
//!			  in the model space. <br>
//!  Warning: Raises ViewOrientationDefinitionError <br>
OCVisual3d_ViewOrientation(OCNaroWrappers::OCGraphic3d_Vertex^ VRP, Standard_Real Azim, Standard_Real Inc, Standard_Real Twist);

//! Modifies the plane of visualisation <br>
//!	    defined by a normal vector. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewOrientationDefinitionError if <VPN> is null. <br>
 /*instead*/  void SetViewReferencePlane(OCNaroWrappers::OCGraphic3d_Vector^ VPN) ;

//! Modifies the origin of the VRC coordinate system <br>
 /*instead*/  void SetViewReferencePoint(OCNaroWrappers::OCGraphic3d_Vertex^ VRP) ;

//! Modifies the vertical of the observer. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises ViewOrientationDefinitionError if <VUP> is null. <br>
 /*instead*/  void SetViewReferenceUp(OCNaroWrappers::OCGraphic3d_Vector^ VUP) ;

//! Sets axial scale factors of the view <br>
 /*instead*/  void SetAxialScale(Standard_Real Sx, Standard_Real Sy, Standard_Real Sz) ;

//! Sets custom MODELVIEW matrix for the OpenGl context <br>
 /*instead*/  void SetCustomModelViewMatrix(OCNaroWrappers::OCTColStd_HArray2OfReal^ Mat) ;

//! Returns the angle in radians of the V axis in the VRC <br>
//!	    coordinate system with the projection in the plane of <br>
//!	    visualisation of the Zm axis in the model space. <br>
 /*instead*/  Standard_Real Twist() ;

//! Returns the normal to the plane of projection. <br>
 /*instead*/  OCGraphic3d_Vector^ ViewReferencePlane() ;

//! Returns origin of the VRC coordinate system. <br>
 /*instead*/  OCGraphic3d_Vertex^ ViewReferencePoint() ;

//! Returns the vertical of the observer. <br>
 /*instead*/  OCGraphic3d_Vector^ ViewReferenceUp() ;

//! Returns current values of the axial scale factors. <br>
 /*instead*/  void AxialScale(Standard_Real& Sx, Standard_Real& Sy, Standard_Real& Sz) ;

//! Returns whether the custom MODELVIEW matrix is used. <br>
 /*instead*/  System::Boolean IsCustomMatrix() ;

~OCVisual3d_ViewOrientation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
