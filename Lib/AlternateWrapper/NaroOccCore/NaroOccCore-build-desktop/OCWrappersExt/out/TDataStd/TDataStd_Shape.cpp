// File generated by CPPExt (CPP file)
//

#include "TDataStd_Shape.h"
#include "../Converter.h"
#include "../TDF/TDF_Label.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"
#include "../TDF/TDF_DataSet.h"


using namespace OCNaroWrappers;

OCTDataStd_Shape::OCTDataStd_Shape(Handle(TDataStd_Shape)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_Shape(*nativeHandle);
}

 System::Boolean OCTDataStd_Shape::Find(OCNaroWrappers::OCTDF_Label^ current, OCNaroWrappers::OCTDataStd_Shape^ S)
{
  return OCConverter::StandardBooleanToBoolean(TDataStd_Shape::Find(*((TDF_Label*)current->Handle), *((Handle_TDataStd_Shape*)S->Handle)));
}

OCTDataStd_Shape^ OCTDataStd_Shape::New(OCNaroWrappers::OCTDF_Label^ label)
{
  Handle(TDataStd_Shape) tmp = TDataStd_Shape::New(*((TDF_Label*)label->Handle));
  return gcnew OCTDataStd_Shape(&tmp);
}

OCTDataStd_Shape^ OCTDataStd_Shape::Set(OCNaroWrappers::OCTDF_Label^ label, OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  Handle(TDataStd_Shape) tmp = TDataStd_Shape::Set(*((TDF_Label*)label->Handle), *((TopoDS_Shape*)shape->Handle));
  return gcnew OCTDataStd_Shape(&tmp);
}

OCTopoDS_Shape^ OCTDataStd_Shape::Get(OCNaroWrappers::OCTDF_Label^ label)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = TDataStd_Shape::Get(*((TDF_Label*)label->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCStandard_GUID^ OCTDataStd_Shape::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_Shape::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_Shape::OCTDataStd_Shape() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_Shape(new TDataStd_Shape());
}

OCStandard_GUID^ OCTDataStd_Shape::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_Shape*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_Shape::Restore(OCNaroWrappers::OCTDF_Attribute^ with)
{
  (*((Handle_TDataStd_Shape*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)with->Handle));
}

OCTDF_Attribute^ OCTDataStd_Shape::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_Shape*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_Shape::Paste(OCNaroWrappers::OCTDF_Attribute^ into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_Shape*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 void OCTDataStd_Shape::References(OCNaroWrappers::OCTDF_DataSet^ DS)
{
  (*((Handle_TDataStd_Shape*)nativeHandle))->References(*((Handle_TDF_DataSet*)DS->Handle));
}

 Standard_OStream& OCTDataStd_Shape::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_Shape*)nativeHandle))->Dump(anOS);
}


