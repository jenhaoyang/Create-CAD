// File generated by CPPExt (CPP file)
//

#include "TDataStd_Variable.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Label.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "TDataStd_Real.h"
#include "TDataStd_Expression.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"
#include "../TDF/TDF_DataSet.h"


using namespace OCNaroWrappers;

OCTDataStd_Variable::OCTDataStd_Variable(Handle(TDataStd_Variable)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_Variable(*nativeHandle);
}

OCStandard_GUID^ OCTDataStd_Variable::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_Variable::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_Variable^ OCTDataStd_Variable::Set(OCNaroWrappers::OCTDF_Label^ label)
{
  Handle(TDataStd_Variable) tmp = TDataStd_Variable::Set(*((TDF_Label*)label->Handle));
  return gcnew OCTDataStd_Variable(&tmp);
}

OCTDataStd_Variable::OCTDataStd_Variable() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_Variable(new TDataStd_Variable());
}

 void OCTDataStd_Variable::Name(OCNaroWrappers::OCTCollection_ExtendedString^ string)
{
  (*((Handle_TDataStd_Variable*)nativeHandle))->Name(*((TCollection_ExtendedString*)string->Handle));
}

OCTCollection_ExtendedString^ OCTDataStd_Variable::Name()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_TDataStd_Variable*)nativeHandle))->Name();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCTDataStd_Variable::Set(Standard_Real value, OCTDataStd_RealEnum dimension)
{
  (*((Handle_TDataStd_Variable*)nativeHandle))->Set(value, (TDataStd_RealEnum)dimension);
}

 System::Boolean OCTDataStd_Variable::IsValued()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_Variable*)nativeHandle))->IsValued());
}

 Standard_Real OCTDataStd_Variable::Get()
{
  return (*((Handle_TDataStd_Variable*)nativeHandle))->Get();
}

OCTDataStd_Real^ OCTDataStd_Variable::Real()
{
  Handle(TDataStd_Real) tmp = (*((Handle_TDataStd_Variable*)nativeHandle))->Real();
  return gcnew OCTDataStd_Real(&tmp);
}

 System::Boolean OCTDataStd_Variable::IsAssigned()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_Variable*)nativeHandle))->IsAssigned());
}

OCTDataStd_Expression^ OCTDataStd_Variable::Assign()
{
  Handle(TDataStd_Expression) tmp = (*((Handle_TDataStd_Variable*)nativeHandle))->Assign();
  return gcnew OCTDataStd_Expression(&tmp);
}

 void OCTDataStd_Variable::Desassign()
{
  (*((Handle_TDataStd_Variable*)nativeHandle))->Desassign();
}

OCTDataStd_Expression^ OCTDataStd_Variable::Expression()
{
  Handle(TDataStd_Expression) tmp = (*((Handle_TDataStd_Variable*)nativeHandle))->Expression();
  return gcnew OCTDataStd_Expression(&tmp);
}

 System::Boolean OCTDataStd_Variable::IsCaptured()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_Variable*)nativeHandle))->IsCaptured());
}

 System::Boolean OCTDataStd_Variable::IsConstant()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_Variable*)nativeHandle))->IsConstant());
}

 void OCTDataStd_Variable::Unit(OCNaroWrappers::OCTCollection_AsciiString^ unit)
{
  (*((Handle_TDataStd_Variable*)nativeHandle))->Unit(*((TCollection_AsciiString*)unit->Handle));
}

OCTCollection_AsciiString^ OCTDataStd_Variable::Unit()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_TDataStd_Variable*)nativeHandle))->Unit();
  return gcnew OCTCollection_AsciiString(tmp);
}

 void OCTDataStd_Variable::Constant(System::Boolean status)
{
  (*((Handle_TDataStd_Variable*)nativeHandle))->Constant(OCConverter::BooleanToStandardBoolean(status));
}

OCStandard_GUID^ OCTDataStd_Variable::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_Variable*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_Variable::Restore(OCNaroWrappers::OCTDF_Attribute^ With)
{
  (*((Handle_TDataStd_Variable*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)With->Handle));
}

OCTDF_Attribute^ OCTDataStd_Variable::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_Variable*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_Variable::Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_Variable*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)Into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 void OCTDataStd_Variable::References(OCNaroWrappers::OCTDF_DataSet^ DS)
{
  (*((Handle_TDataStd_Variable*)nativeHandle))->References(*((Handle_TDF_DataSet*)DS->Handle));
}

 Standard_OStream& OCTDataStd_Variable::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_Variable*)nativeHandle))->Dump(anOS);
}


