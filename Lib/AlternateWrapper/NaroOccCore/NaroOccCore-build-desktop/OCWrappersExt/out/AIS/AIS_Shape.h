// File generated by CPPExt (Transient)
//
#ifndef _AIS_Shape_OCWrappers_HeaderFile
#define _AIS_Shape_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS_Shape.hxx>
#include "../Converter.h"

#include "AIS_InteractiveObject.h"

#include "../TopoDS/TopoDS_Shape.h"
#include "../Bnd/Bnd_Box.h"
#include "AIS_KindOfInteractive.h"
#include "../Quantity/Quantity_NameOfColor.h"
#include "../Graphic3d/Graphic3d_NameOfMaterial.h"
#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCPrsMgr_PresentationManager3d;
ref class OCPrs3d_Presentation;
ref class OCPrsMgr_PresentationManager2d;
ref class OCGraphic2d_GraphicObject;
ref class OCPrs3d_Projector;
ref class OCGeom_Transformation;
ref class OCSelectMgr_Selection;
ref class OCQuantity_Color;
ref class OCGraphic3d_MaterialAspect;
ref class OCBnd_Box;
ref class OCPrs3d_Drawer;


//! A framework to manage presentation and selection of shapes. <br>
//! AIS_Shape is the interactive object which is used the <br>
//! most by   applications. There are standard functions <br>
//! available which allow you to prepare selection <br>
//! operations on the constituent elements of shapes - <br>
//! vertices, edges, faces etc - in an open local context. <br>
//! The selection modes specific to "Shape" type objects <br>
//! are referred to as Standard Activation Mode. These <br>
//! modes are only taken into account in open local <br>
//! context and only act on Interactive Objects which <br>
//! have redefined the virtual method <br>
//! AcceptShapeDecomposition so that it returns true. <br>
//! Several advanced functions are also available. These <br>
//! include functions to manage deviation angle and <br>
//! deviation coefficient - both HLR and non-HLR - of <br>
//! an inheriting shape class. These services allow you to <br>
//! select one type of shape interactive object for higher <br>
//! precision drawing. When you do this, the <br>
//! AIS_Drawer::IsOwn... functions corresponding to the <br>
//! above deviation angle and coefficient functions return <br>
//! true indicating that there is a local setting available <br>
//! for the specific object. <br>
public ref class OCAIS_Shape : OCAIS_InteractiveObject {

protected:
  // dummy constructor;
  OCAIS_Shape(OCDummy^) : OCAIS_InteractiveObject((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_Shape(Handle(AIS_Shape)* nativeHandle);

// Methods PUBLIC

//! Initializes construction of the shape shap from wires, <br>
//! edges and vertices. <br>
OCAIS_Shape(OCNaroWrappers::OCTopoDS_Shape^ shap);

//! Returns index 0. This value refers to SHAPE from TopAbs_ShapeEnum <br>
virtual /*instead*/  Standard_Integer Signature() override;

//! Returns Object as the type of Interactive Object. <br>
virtual /*instead*/  OCAIS_KindOfInteractive Type() override;

//! Returns true if the Interactive Object accepts shape decomposition. <br>
virtual /*instead*/  System::Boolean AcceptShapeDecomposition() override;

//! Constructs an instance of the shape object ashape. <br>
 /*instead*/  void Set(OCNaroWrappers::OCTopoDS_Shape^ ashap) ;

//! Returns this shape object. <br>
 /*instead*/  OCTopoDS_Shape^ Shape() ;

//! Sets a local value for deviation coefficient for this specific shape. <br>
 /*instead*/  System::Boolean SetOwnDeviationCoefficient() ;

//! Sets a local value for HLR deviation coefficient for this specific shape. <br>
 /*instead*/  System::Boolean SetOwnHLRDeviationCoefficient() ;

//! Sets a local value for deviation angle for this specific shape. <br>
 /*instead*/  System::Boolean SetOwnDeviationAngle() ;

//! Sets a local value for HLR deviation angle for this specific shape. <br>
 /*instead*/  System::Boolean SetOwnHLRDeviationAngle() ;

//! Sets a local value for deviation coefficient for this specific shape. <br>
 /*instead*/  void SetOwnDeviationCoefficient(Standard_Real aCoefficient) ;

//! sets myOwnHLRDeviationCoefficient field in AIS_Drawer & <br>
//!          recomputes presentation <br>
 /*instead*/  void SetOwnHLRDeviationCoefficient(Standard_Real aCoefficient) ;

//! this compute a new angle and Deviation from the value anAngle <br>
//!   and set the values stored in myDrawer with these that become local to the shape <br>
 /*instead*/  void SetAngleAndDeviation(Standard_Real anAngle) ;

//! gives back the angle initial value put by the User. <br>
 /*instead*/  Standard_Real UserAngle() ;

//! sets myOwnDeviationAngle field in AIS_Drawer & recomputes presentation <br>
 /*instead*/  void SetOwnDeviationAngle(Standard_Real anAngle) ;

//! this compute a new Angle and Deviation from the value anAngle for HLR <br>
//!   and set the values stored in myDrawer for with these that become local to the shape <br>
 /*instead*/  void SetHLRAngleAndDeviation(Standard_Real anAngle) ;

//! sets myOwnHLRDeviationAngle field in AIS_Drawer & recomputes presentation <br>
 /*instead*/  void SetOwnHLRDeviationAngle(Standard_Real anAngle) ;

//!   Returns true and the values of the deviation <br>
//! coefficient aCoefficient and the previous deviation <br>
//! coefficient aPreviousCoefficient. If these values are <br>
//! not already set, false is returned. <br>
 /*instead*/  System::Boolean OwnDeviationCoefficient(Standard_Real& aCoefficient, Standard_Real& aPreviousCoefficient) ;

//!  Returns   true and the values of the HLR deviation <br>
//! coefficient aCoefficient and the previous HLR <br>
//! deviation coefficient aPreviousCoefficient. If these <br>
//! values are not already set, false is returned. <br>
 /*instead*/  System::Boolean OwnHLRDeviationCoefficient(Standard_Real& aCoefficient, Standard_Real& aPreviousCoefficient) ;

//! Returns true and the values of the deviation angle <br>
//! anAngle and the previous deviation angle aPreviousAngle. <br>
//! If these values are not already set, false is returned. <br>
 /*instead*/  System::Boolean OwnDeviationAngle(Standard_Real& anAngle, Standard_Real& aPreviousAngle) ;

//! Returns true and the values   of the HLR deviation <br>
//! angle anAngle and of the previous HLR deviation <br>
//! angle aPreviousAngle. If these values are not <br>
//! already set, false is returned. <br>
 /*instead*/  System::Boolean OwnHLRDeviationAngle(Standard_Real& anAngle, Standard_Real& aPreviousAngle) ;

//! Sets the color aColor in the reconstructed <br>
//! compound shape. Acts via the Drawer methods below on the appearance of: <br>
//! -   free boundaries: <br>
//!   AIS_Drawer_FreeBoundaryAspect, <br>
//! -   isos: AIS_Drawer_UIsoAspect, <br>
//!   AIS_Drawer_VIsoAspect, <br>
//! -   shared boundaries: <br>
//!   AIS_Drawer_UnFreeBoundaryAspect, <br>
//! -   shading: AIS_Drawer_ShadingAspect, <br>
//! -   visible line color in hidden line mode: <br>
//!   AIS_Drawer_SeenLineAspect <br>
//! -   hidden line color in hidden line mode: <br>
//!   AIS_Drawer_HiddenLineAspect. <br>
virtual /*instead*/  void SetColor(OCQuantity_NameOfColor aColor) override;


virtual /*instead*/  void SetColor(OCNaroWrappers::OCQuantity_Color^ aColor) override;

//! Removes settings for color in the reconstructed compound shape. <br>
virtual /*instead*/  void UnsetColor() override;

//! Sets the value aValue for line width in the reconstructed compound shape. <br>
virtual /*instead*/  void SetWidth(Standard_Real aValue) override;

//! Removes the setting for line width in the reconstructed compound shape. <br>
virtual /*instead*/  void UnsetWidth() override;


virtual /*instead*/  void SetMaterial(OCGraphic3d_NameOfMaterial aName) override;

//! Allows you to provide settings for the material aName <br>
//! in the reconstructed compound shape. <br>
virtual /*instead*/  void SetMaterial(OCNaroWrappers::OCGraphic3d_MaterialAspect^ aName) override;

//! Removes settings for material in the reconstructed compound shape. <br>
virtual /*instead*/  void UnsetMaterial() override;

//! Sets the value aValue for transparency in the reconstructed compound shape. <br>
virtual /*instead*/  void SetTransparency(Standard_Real aValue) override;

//! Removes the setting for transparency in the reconstructed compound shape. <br>
virtual /*instead*/  void UnsetTransparency() override;

//! Constructs a bounding box with which to reconstruct <br>
//! compound topological shapes for presentation. <br>
virtual /*instead*/  OCBnd_Box^ BoundingBox() ;

//! Returns the NameOfColor attributes of the shape accordingly to <br>
//!  the current facing model; <br>
virtual /*instead*/  OCQuantity_NameOfColor Color() override;

//! Returns the Color attributes of the shape accordingly to <br>
//!  the current facing model; <br>
virtual /*instead*/  void Color(OCNaroWrappers::OCQuantity_Color^ aColor) override;

//! Returns the NameOfMaterial attributes of the shape accordingly to <br>
//!  the current facing model; <br>
virtual /*instead*/  OCGraphic3d_NameOfMaterial Material() override;

//! Returns the transparency attributes of the shape accordingly to <br>
//!  the current facing model; <br>
virtual /*instead*/  Standard_Real Transparency() override;

//! Activates the same TopAbs shape enumerations as <br>
//! those used by SelectionMode assigning a type to the mode aDecompositionMode. <br>
static /*instead*/  OCTopAbs_ShapeEnum SelectionType(Standard_Integer aDecompositionMode) ;

//! Establishes an equivalence between a mode and the <br>
//! type, aShapeType,   of selection. The correspondences are as follows: <br>
//! -   mode 0 - Shape <br>
//! -   mode 1 - Vertex <br>
//! -   mode 2 - Edge <br>
//! -   mode 3 - Wire <br>
//! -   mode 4 - Face <br>
//! -   mode 5 - Shell <br>
//! -   mode 6 - Solid <br>
//! -   mode 7 - Compsolid <br>
//! -   mode 8 - Compound <br>
static /*instead*/  Standard_Integer SelectionMode(OCTopAbs_ShapeEnum aShapeType) ;


static /*instead*/  Standard_Real GetDeflection(OCNaroWrappers::OCTopoDS_Shape^ aShape, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer) ;

~OCAIS_Shape()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
