// File generated by CPPExt (CPP file)
//

#include "TNaming_Name.h"
#include "../Converter.h"
#include "TNaming_NamedShape.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TDF/TDF_Label.h"
#include "TNaming_ListOfNamedShape.h"
#include "../TDF/TDF_LabelMap.h"
#include "../TDF/TDF_RelocationTable.h"


using namespace OCNaroWrappers;

OCTNaming_Name::OCTNaming_Name(TNaming_Name* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTNaming_Name::OCTNaming_Name() 
{
  nativeHandle = new TNaming_Name();
}

 void OCTNaming_Name::Type(OCTNaming_NameType aType)
{
  ((TNaming_Name*)nativeHandle)->Type((TNaming_NameType)aType);
}

 void OCTNaming_Name::ShapeType(OCTopAbs_ShapeEnum aType)
{
  ((TNaming_Name*)nativeHandle)->ShapeType((TopAbs_ShapeEnum)aType);
}

 void OCTNaming_Name::Shape(OCNaroWrappers::OCTopoDS_Shape^ theShape)
{
  ((TNaming_Name*)nativeHandle)->Shape(*((TopoDS_Shape*)theShape->Handle));
}

 void OCTNaming_Name::Append(OCNaroWrappers::OCTNaming_NamedShape^ arg)
{
  ((TNaming_Name*)nativeHandle)->Append(*((Handle_TNaming_NamedShape*)arg->Handle));
}

 void OCTNaming_Name::StopNamedShape(OCNaroWrappers::OCTNaming_NamedShape^ arg)
{
  ((TNaming_Name*)nativeHandle)->StopNamedShape(*((Handle_TNaming_NamedShape*)arg->Handle));
}

 void OCTNaming_Name::Index(Standard_Integer I)
{
  ((TNaming_Name*)nativeHandle)->Index(I);
}

 void OCTNaming_Name::ContextLabel(OCNaroWrappers::OCTDF_Label^ theLab)
{
  ((TNaming_Name*)nativeHandle)->ContextLabel(*((TDF_Label*)theLab->Handle));
}

 OCTNaming_NameType OCTNaming_Name::Type()
{
  return (OCTNaming_NameType)(((TNaming_Name*)nativeHandle)->Type());
}

 OCTopAbs_ShapeEnum OCTNaming_Name::ShapeType()
{
  return (OCTopAbs_ShapeEnum)(((TNaming_Name*)nativeHandle)->ShapeType());
}

OCTopoDS_Shape^ OCTNaming_Name::Shape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TNaming_Name*)nativeHandle)->Shape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTNaming_ListOfNamedShape^ OCTNaming_Name::Arguments()
{
  TNaming_ListOfNamedShape* tmp = new TNaming_ListOfNamedShape();
  *tmp = ((TNaming_Name*)nativeHandle)->Arguments();
  return gcnew OCTNaming_ListOfNamedShape(tmp);
}

OCTNaming_NamedShape^ OCTNaming_Name::StopNamedShape()
{
  Handle(TNaming_NamedShape) tmp = ((TNaming_Name*)nativeHandle)->StopNamedShape();
  return gcnew OCTNaming_NamedShape(&tmp);
}

 Standard_Integer OCTNaming_Name::Index()
{
  return ((TNaming_Name*)nativeHandle)->Index();
}

OCTDF_Label^ OCTNaming_Name::ContextLabel()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = ((TNaming_Name*)nativeHandle)->ContextLabel();
  return gcnew OCTDF_Label(tmp);
}

 System::Boolean OCTNaming_Name::Solve(OCNaroWrappers::OCTDF_Label^ aLab, OCNaroWrappers::OCTDF_LabelMap^ Valid)
{
  return OCConverter::StandardBooleanToBoolean(((TNaming_Name*)nativeHandle)->Solve(*((TDF_Label*)aLab->Handle), *((TDF_LabelMap*)Valid->Handle)));
}

 void OCTNaming_Name::Paste(OCNaroWrappers::OCTNaming_Name^ into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  ((TNaming_Name*)nativeHandle)->Paste(*((TNaming_Name*)into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}


