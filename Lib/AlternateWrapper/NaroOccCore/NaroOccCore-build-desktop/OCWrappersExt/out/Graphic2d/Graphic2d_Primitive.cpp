// File generated by CPPExt (CPP file)
//

#include "Graphic2d_Primitive.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HSequenceOfInteger.h"
#include "Graphic2d_Buffer.h"
#include "Graphic2d_Drawer.h"
#include "Graphic2d_GraphicObject.h"
#include "../TColStd/TColStd_MapOfInteger.h"


using namespace OCNaroWrappers;

OCGraphic2d_Primitive::OCGraphic2d_Primitive(Handle(Graphic2d_Primitive)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic2d_Primitive(*nativeHandle);
}

OCGraphic2d_Primitive::OCGraphic2d_Primitive(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject) : OCMMgt_TShared((OCDummy^)nullptr)

{}

 void OCGraphic2d_Primitive::SetColorIndex(Standard_Integer anIndex)
{
  (*((Handle_Graphic2d_Primitive*)nativeHandle))->SetColorIndex(anIndex);
}

 Standard_Integer OCGraphic2d_Primitive::ColorIndex()
{
  return (*((Handle_Graphic2d_Primitive*)nativeHandle))->ColorIndex();
}

 System::Boolean OCGraphic2d_Primitive::SetElementsSelected()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic2d_Primitive*)nativeHandle))->SetElementsSelected());
}

 System::Boolean OCGraphic2d_Primitive::HasSelectedElements()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic2d_Primitive*)nativeHandle))->HasSelectedElements());
}

 void OCGraphic2d_Primitive::ClearSelectedElements()
{
  (*((Handle_Graphic2d_Primitive*)nativeHandle))->ClearSelectedElements();
}

 Standard_Integer OCGraphic2d_Primitive::NumOfElemIndices()
{
  return (*((Handle_Graphic2d_Primitive*)nativeHandle))->NumOfElemIndices();
}

 Standard_Integer OCGraphic2d_Primitive::NumOfVertIndices()
{
  return (*((Handle_Graphic2d_Primitive*)nativeHandle))->NumOfVertIndices();
}

 Standard_Integer OCGraphic2d_Primitive::PickedIndex()
{
  return (*((Handle_Graphic2d_Primitive*)nativeHandle))->PickedIndex();
}

OCTColStd_MapOfInteger^ OCGraphic2d_Primitive::PickedIndices()
{
  TColStd_MapOfInteger* tmp = new TColStd_MapOfInteger(0);
  *tmp = (*((Handle_Graphic2d_Primitive*)nativeHandle))->PickedIndices();
  return gcnew OCTColStd_MapOfInteger(tmp);
}

 void OCGraphic2d_Primitive::Highlight(Standard_Integer anIndex)
{
  (*((Handle_Graphic2d_Primitive*)nativeHandle))->Highlight(anIndex);
}

 void OCGraphic2d_Primitive::Unhighlight()
{
  (*((Handle_Graphic2d_Primitive*)nativeHandle))->Unhighlight();
}

 System::Boolean OCGraphic2d_Primitive::IsHighlighted()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic2d_Primitive*)nativeHandle))->IsHighlighted());
}

OCTColStd_HSequenceOfInteger^ OCGraphic2d_Primitive::HighlightIndices()
{
  Handle(TColStd_HSequenceOfInteger) tmp = (*((Handle_Graphic2d_Primitive*)nativeHandle))->HighlightIndices();
  return gcnew OCTColStd_HSequenceOfInteger(&tmp);
}

 void OCGraphic2d_Primitive::SetDisplayMode(Standard_Integer aMode)
{
  (*((Handle_Graphic2d_Primitive*)nativeHandle))->SetDisplayMode(aMode);
}

 Standard_Integer OCGraphic2d_Primitive::DisplayMode()
{
  return (*((Handle_Graphic2d_Primitive*)nativeHandle))->DisplayMode();
}

 System::Boolean OCGraphic2d_Primitive::MinMax(Standard_ShortReal& Minx, Standard_ShortReal& Maxx, Standard_ShortReal& Miny, Standard_ShortReal& Maxy)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic2d_Primitive*)nativeHandle))->MinMax(Minx, Maxx, Miny, Maxy));
}

 System::Boolean OCGraphic2d_Primitive::IsInMinMax(Standard_ShortReal X, Standard_ShortReal Y, Standard_ShortReal aPrecision)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic2d_Primitive*)nativeHandle))->IsInMinMax(X, Y, aPrecision));
}


