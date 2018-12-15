// File generated by CPPExt (CPP file)
//

#include "TNaming_Tool.h"
#include "../Converter.h"
#include "TNaming_Localizer.h"
#include "TNaming_NamedShape.h"
#include "TNaming_OldShapeIterator.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TDF/TDF_LabelMap.h"
#include "../TDF/TDF_Label.h"
#include "TNaming_MapOfNamedShape.h"
#include "../TDF/TDF_LabelList.h"
#include "TNaming_UsedShapes.h"
#include "../TopTools/TopTools_MapOfShape.h"


using namespace OCNaroWrappers;

OCTNaming_Tool::OCTNaming_Tool(TNaming_Tool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopoDS_Shape^ OCTNaming_Tool::CurrentShape(OCNaroWrappers::OCTNaming_NamedShape^ NS)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = TNaming_Tool::CurrentShape(*((Handle_TNaming_NamedShape*)NS->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTNaming_Tool::CurrentShape(OCNaroWrappers::OCTNaming_NamedShape^ NS, OCNaroWrappers::OCTDF_LabelMap^ Updated)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = TNaming_Tool::CurrentShape(*((Handle_TNaming_NamedShape*)NS->Handle), *((TDF_LabelMap*)Updated->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTNaming_NamedShape^ OCTNaming_Tool::CurrentNamedShape(OCNaroWrappers::OCTNaming_NamedShape^ NS, OCNaroWrappers::OCTDF_LabelMap^ Updated)
{
  Handle(TNaming_NamedShape) tmp = TNaming_Tool::CurrentNamedShape(*((Handle_TNaming_NamedShape*)NS->Handle), *((TDF_LabelMap*)Updated->Handle));
  return gcnew OCTNaming_NamedShape(&tmp);
}

OCTNaming_NamedShape^ OCTNaming_Tool::CurrentNamedShape(OCNaroWrappers::OCTNaming_NamedShape^ NS)
{
  Handle(TNaming_NamedShape) tmp = TNaming_Tool::CurrentNamedShape(*((Handle_TNaming_NamedShape*)NS->Handle));
  return gcnew OCTNaming_NamedShape(&tmp);
}

OCTNaming_NamedShape^ OCTNaming_Tool::NamedShape(OCNaroWrappers::OCTopoDS_Shape^ aShape, OCNaroWrappers::OCTDF_Label^ anAcces)
{
  Handle(TNaming_NamedShape) tmp = TNaming_Tool::NamedShape(*((TopoDS_Shape*)aShape->Handle), *((TDF_Label*)anAcces->Handle));
  return gcnew OCTNaming_NamedShape(&tmp);
}

OCTopoDS_Shape^ OCTNaming_Tool::GetShape(OCNaroWrappers::OCTNaming_NamedShape^ NS)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = TNaming_Tool::GetShape(*((Handle_TNaming_NamedShape*)NS->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTNaming_Tool::OriginalShape(OCNaroWrappers::OCTNaming_NamedShape^ NS)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = TNaming_Tool::OriginalShape(*((Handle_TNaming_NamedShape*)NS->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTNaming_Tool::GeneratedShape(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTNaming_NamedShape^ Generation)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = TNaming_Tool::GeneratedShape(*((TopoDS_Shape*)S->Handle), *((Handle_TNaming_NamedShape*)Generation->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCTNaming_Tool::Collect(OCNaroWrappers::OCTNaming_NamedShape^ NS, OCNaroWrappers::OCTNaming_MapOfNamedShape^ Labels, System::Boolean OnlyModif)
{
  TNaming_Tool::Collect(*((Handle_TNaming_NamedShape*)NS->Handle), *((TNaming_MapOfNamedShape*)Labels->Handle), OCConverter::BooleanToStandardBoolean(OnlyModif));
}

 System::Boolean OCTNaming_Tool::HasLabel(OCNaroWrappers::OCTDF_Label^ access, OCNaroWrappers::OCTopoDS_Shape^ aShape)
{
  return OCConverter::StandardBooleanToBoolean(TNaming_Tool::HasLabel(*((TDF_Label*)access->Handle), *((TopoDS_Shape*)aShape->Handle)));
}

OCTDF_Label^ OCTNaming_Tool::Label(OCNaroWrappers::OCTDF_Label^ access, OCNaroWrappers::OCTopoDS_Shape^ aShape, Standard_Integer& TransDef)
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = TNaming_Tool::Label(*((TDF_Label*)access->Handle), *((TopoDS_Shape*)aShape->Handle), TransDef);
  return gcnew OCTDF_Label(tmp);
}

OCTopoDS_Shape^ OCTNaming_Tool::InitialShape(OCNaroWrappers::OCTopoDS_Shape^ aShape, OCNaroWrappers::OCTDF_Label^ anAcces, OCNaroWrappers::OCTDF_LabelList^ Labels)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = TNaming_Tool::InitialShape(*((TopoDS_Shape*)aShape->Handle), *((TDF_Label*)anAcces->Handle), *((TDF_LabelList*)Labels->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCTNaming_Tool::ValidUntil(OCNaroWrappers::OCTDF_Label^ access, OCNaroWrappers::OCTopoDS_Shape^ S)
{
  return TNaming_Tool::ValidUntil(*((TDF_Label*)access->Handle), *((TopoDS_Shape*)S->Handle));
}

 void OCTNaming_Tool::FindShape(OCNaroWrappers::OCTDF_LabelMap^ Valid, OCNaroWrappers::OCTDF_LabelMap^ Forbiden, OCNaroWrappers::OCTNaming_NamedShape^ Arg, OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TNaming_Tool::FindShape(*((TDF_LabelMap*)Valid->Handle), *((TDF_LabelMap*)Forbiden->Handle), *((Handle_TNaming_NamedShape*)Arg->Handle), *((TopoDS_Shape*)S->Handle));
}

