// File generated by CPPExt (CPP file)
//

#include "Graphic2d_Array1OfVertex.h"
#include "../Converter.h"
#include "Graphic2d_Vertex.h"


using namespace OCNaroWrappers;

OCGraphic2d_Array1OfVertex::OCGraphic2d_Array1OfVertex(Graphic2d_Array1OfVertex* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGraphic2d_Array1OfVertex::OCGraphic2d_Array1OfVertex(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Graphic2d_Array1OfVertex(Low, Up);
}

OCGraphic2d_Array1OfVertex::OCGraphic2d_Array1OfVertex(OCNaroWrappers::OCGraphic2d_Vertex^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Graphic2d_Array1OfVertex(*((Graphic2d_Vertex*)Item->Handle), Low, Up);
}

 void OCGraphic2d_Array1OfVertex::Init(OCNaroWrappers::OCGraphic2d_Vertex^ V)
{
  ((Graphic2d_Array1OfVertex*)nativeHandle)->Init(*((Graphic2d_Vertex*)V->Handle));
}

 System::Boolean OCGraphic2d_Array1OfVertex::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((Graphic2d_Array1OfVertex*)nativeHandle)->IsAllocated());
}

OCGraphic2d_Array1OfVertex^ OCGraphic2d_Array1OfVertex::Assign(OCNaroWrappers::OCGraphic2d_Array1OfVertex^ Other)
{
  Graphic2d_Array1OfVertex* tmp = new Graphic2d_Array1OfVertex(0, 0);
  *tmp = ((Graphic2d_Array1OfVertex*)nativeHandle)->Assign(*((Graphic2d_Array1OfVertex*)Other->Handle));
  return gcnew OCGraphic2d_Array1OfVertex(tmp);
}

 Standard_Integer OCGraphic2d_Array1OfVertex::Length()
{
  return ((Graphic2d_Array1OfVertex*)nativeHandle)->Length();
}

 Standard_Integer OCGraphic2d_Array1OfVertex::Lower()
{
  return ((Graphic2d_Array1OfVertex*)nativeHandle)->Lower();
}

 Standard_Integer OCGraphic2d_Array1OfVertex::Upper()
{
  return ((Graphic2d_Array1OfVertex*)nativeHandle)->Upper();
}

 void OCGraphic2d_Array1OfVertex::SetValue(Standard_Integer Index, OCNaroWrappers::OCGraphic2d_Vertex^ Value)
{
  ((Graphic2d_Array1OfVertex*)nativeHandle)->SetValue(Index, *((Graphic2d_Vertex*)Value->Handle));
}

OCGraphic2d_Vertex^ OCGraphic2d_Array1OfVertex::Value(Standard_Integer Index)
{
  Graphic2d_Vertex* tmp = new Graphic2d_Vertex();
  *tmp = ((Graphic2d_Array1OfVertex*)nativeHandle)->Value(Index);
  return gcnew OCGraphic2d_Vertex(tmp);
}

OCGraphic2d_Vertex^ OCGraphic2d_Array1OfVertex::ChangeValue(Standard_Integer Index)
{
  Graphic2d_Vertex* tmp = new Graphic2d_Vertex();
  *tmp = ((Graphic2d_Array1OfVertex*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGraphic2d_Vertex(tmp);
}


