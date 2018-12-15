// File generated by CPPExt (CPP file)
//

#include "AIS_MaxRadiusDimension.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../gp/gp_Pnt.h"
#include "../PrsMgr/PrsMgr_PresentationManager3d.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../Prs3d/Prs3d_Projector.h"
#include "../PrsMgr/PrsMgr_PresentationManager2d.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../Geom/Geom_Transformation.h"
#include "../SelectMgr/SelectMgr_Selection.h"


using namespace OCNaroWrappers;

OCAIS_MaxRadiusDimension::OCAIS_MaxRadiusDimension(Handle(AIS_MaxRadiusDimension)* nativeHandle) : OCAIS_EllipseRadiusDimension((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_MaxRadiusDimension(*nativeHandle);
}

OCAIS_MaxRadiusDimension::OCAIS_MaxRadiusDimension(OCNaroWrappers::OCTopoDS_Shape^ aShape, Standard_Real aVal, OCNaroWrappers::OCTCollection_ExtendedString^ aText) : OCAIS_EllipseRadiusDimension((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_MaxRadiusDimension(new AIS_MaxRadiusDimension(*((TopoDS_Shape*)aShape->Handle), aVal, *((TCollection_ExtendedString*)aText->Handle)));
}

OCAIS_MaxRadiusDimension::OCAIS_MaxRadiusDimension(OCNaroWrappers::OCTopoDS_Shape^ aShape, Standard_Real aVal, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Pnt^ aPosition, OCDsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize) : OCAIS_EllipseRadiusDimension((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_MaxRadiusDimension(new AIS_MaxRadiusDimension(*((TopoDS_Shape*)aShape->Handle), aVal, *((TCollection_ExtendedString*)aText->Handle), *((gp_Pnt*)aPosition->Handle), (DsgPrs_ArrowSide)aSymbolPrs, anArrowSize));
}

 void OCAIS_MaxRadiusDimension::Compute(OCNaroWrappers::OCPrs3d_Projector^ aProjector, OCNaroWrappers::OCGeom_Transformation^ aTrsf, OCNaroWrappers::OCPrs3d_Presentation^ aPresentation)
{
  (*((Handle_AIS_MaxRadiusDimension*)nativeHandle))->Compute(*((Handle_Prs3d_Projector*)aProjector->Handle), *((Handle_Geom_Transformation*)aTrsf->Handle), *((Handle_Prs3d_Presentation*)aPresentation->Handle));
}


