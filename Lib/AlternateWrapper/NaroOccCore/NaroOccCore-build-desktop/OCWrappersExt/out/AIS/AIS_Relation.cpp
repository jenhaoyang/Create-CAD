// File generated by CPPExt (CPP file)
//

#include "AIS_Relation.h"
#include "../Converter.h"
#include "../Geom/Geom_Plane.h"
#include "../Geom/Geom_Surface.h"
#include "../Quantity/Quantity_Color.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../gp/gp_Pnt.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../Geom/Geom_Curve.h"
#include "../TopoDS/TopoDS_Vertex.h"


using namespace OCNaroWrappers;

OCAIS_Relation::OCAIS_Relation(Handle(AIS_Relation)* nativeHandle) : OCAIS_InteractiveObject((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_Relation(*nativeHandle);
}

OCAIS_Relation::OCAIS_Relation(OCPrsMgr_TypeOfPresentation3d aTypeOfPresentation3d) : OCAIS_InteractiveObject((OCDummy^)nullptr)

{}

 void OCAIS_Relation::SetColor(OCQuantity_NameOfColor aColor)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetColor((Quantity_NameOfColor)aColor);
}

 void OCAIS_Relation::SetColor(OCNaroWrappers::OCQuantity_Color^ aColor)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetColor(*((Quantity_Color*)aColor->Handle));
}

 void OCAIS_Relation::UnsetColor()
{
  (*((Handle_AIS_Relation*)nativeHandle))->UnsetColor();
}

 OCAIS_KindOfInteractive OCAIS_Relation::Type()
{
  return (OCAIS_KindOfInteractive)((*((Handle_AIS_Relation*)nativeHandle))->Type());
}

 OCAIS_KindOfDimension OCAIS_Relation::KindOfDimension()
{
  return (OCAIS_KindOfDimension)((*((Handle_AIS_Relation*)nativeHandle))->KindOfDimension());
}

 System::Boolean OCAIS_Relation::IsMovable()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_Relation*)nativeHandle))->IsMovable());
}

OCTopoDS_Shape^ OCAIS_Relation::FirstShape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_AIS_Relation*)nativeHandle))->FirstShape();
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCAIS_Relation::SetFirstShape(OCNaroWrappers::OCTopoDS_Shape^ aFShape)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetFirstShape(*((TopoDS_Shape*)aFShape->Handle));
}

OCTopoDS_Shape^ OCAIS_Relation::SecondShape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_AIS_Relation*)nativeHandle))->SecondShape();
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCAIS_Relation::SetSecondShape(OCNaroWrappers::OCTopoDS_Shape^ aSShape)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetSecondShape(*((TopoDS_Shape*)aSShape->Handle));
}

 void OCAIS_Relation::SetBndBox(Standard_Real Xmin, Standard_Real Ymin, Standard_Real Zmin, Standard_Real Xmax, Standard_Real Ymax, Standard_Real Zmax)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetBndBox(Xmin, Ymin, Zmin, Xmax, Ymax, Zmax);
}

 void OCAIS_Relation::UnsetBndBox()
{
  (*((Handle_AIS_Relation*)nativeHandle))->UnsetBndBox();
}

OCGeom_Plane^ OCAIS_Relation::Plane()
{
  Handle(Geom_Plane) tmp = (*((Handle_AIS_Relation*)nativeHandle))->Plane();
  return gcnew OCGeom_Plane(&tmp);
}

 void OCAIS_Relation::SetPlane(OCNaroWrappers::OCGeom_Plane^ aPlane)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetPlane(*((Handle_Geom_Plane*)aPlane->Handle));
}

 Standard_Real OCAIS_Relation::Value()
{
  return (*((Handle_AIS_Relation*)nativeHandle))->Value();
}

 void OCAIS_Relation::SetValue(Standard_Real aVal)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetValue(aVal);
}

OCgp_Pnt^ OCAIS_Relation::Position()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_AIS_Relation*)nativeHandle))->Position();
  return gcnew OCgp_Pnt(tmp);
}

 void OCAIS_Relation::SetPosition(OCNaroWrappers::OCgp_Pnt^ aPosition)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetPosition(*((gp_Pnt*)aPosition->Handle));
}

OCTCollection_ExtendedString^ OCAIS_Relation::Text()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_AIS_Relation*)nativeHandle))->Text();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCAIS_Relation::SetText(OCNaroWrappers::OCTCollection_ExtendedString^ aText)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetText(*((TCollection_ExtendedString*)aText->Handle));
}

 Standard_Real OCAIS_Relation::ArrowSize()
{
  return (*((Handle_AIS_Relation*)nativeHandle))->ArrowSize();
}

 void OCAIS_Relation::SetArrowSize(Standard_Real anArrowSize)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetArrowSize(anArrowSize);
}

 OCDsgPrs_ArrowSide OCAIS_Relation::SymbolPrs()
{
  return (OCDsgPrs_ArrowSide)((*((Handle_AIS_Relation*)nativeHandle))->SymbolPrs());
}

 void OCAIS_Relation::SetSymbolPrs(OCDsgPrs_ArrowSide aSymbolPrs)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetSymbolPrs((DsgPrs_ArrowSide)aSymbolPrs);
}

 void OCAIS_Relation::SetExtShape(Standard_Integer aIndex)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetExtShape(aIndex);
}

 Standard_Integer OCAIS_Relation::ExtShape()
{
  return (*((Handle_AIS_Relation*)nativeHandle))->ExtShape();
}

 System::Boolean OCAIS_Relation::AcceptDisplayMode(Standard_Integer aMode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_Relation*)nativeHandle))->AcceptDisplayMode(aMode));
}

 void OCAIS_Relation::SetAutomaticPosition(System::Boolean aStatus)
{
  (*((Handle_AIS_Relation*)nativeHandle))->SetAutomaticPosition(OCConverter::BooleanToStandardBoolean(aStatus));
}

 System::Boolean OCAIS_Relation::AutomaticPosition()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_Relation*)nativeHandle))->AutomaticPosition());
}


