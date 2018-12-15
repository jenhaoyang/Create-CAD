// File generated by CPPExt (CPP file)
//

#include "XSControl_Utils.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../Standard/Standard_Type.h"
#include "../TColStd/TColStd_HSequenceOfTransient.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../TCollection/TCollection_HExtendedString.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../TColStd/TColStd_HSequenceOfHAsciiString.h"
#include "../TColStd/TColStd_HSequenceOfHExtendedString.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_HSequenceOfShape.h"
#include "../TColStd/TColStd_HSequenceOfInteger.h"


using namespace OCNaroWrappers;

OCXSControl_Utils::OCXSControl_Utils(XSControl_Utils* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCXSControl_Utils::OCXSControl_Utils() 
{
  nativeHandle = new XSControl_Utils();
}

 void OCXSControl_Utils::TraceLine(System::String^ line)
{
  ((XSControl_Utils*)nativeHandle)->TraceLine(OCConverter::StringToStandardCString(line));
}

 void OCXSControl_Utils::TraceLines(OCNaroWrappers::OCStandard_Transient^ lines)
{
  ((XSControl_Utils*)nativeHandle)->TraceLines(*((Handle_Standard_Transient*)lines->Handle));
}

 System::Boolean OCXSControl_Utils::IsKind(OCNaroWrappers::OCStandard_Transient^ item, OCNaroWrappers::OCStandard_Type^ what)
{
  return OCConverter::StandardBooleanToBoolean(((XSControl_Utils*)nativeHandle)->IsKind(*((Handle_Standard_Transient*)item->Handle), *((Handle_Standard_Type*)what->Handle)));
}

 System::String^ OCXSControl_Utils::TypeName(OCNaroWrappers::OCStandard_Transient^ item, System::Boolean nopk)
{
  return OCConverter::StandardCStringToString(((XSControl_Utils*)nativeHandle)->TypeName(*((Handle_Standard_Transient*)item->Handle), OCConverter::BooleanToStandardBoolean(nopk)));
}

OCStandard_Transient^ OCXSControl_Utils::TraValue(OCNaroWrappers::OCStandard_Transient^ list, Standard_Integer num)
{
  Handle(Standard_Transient) tmp = ((XSControl_Utils*)nativeHandle)->TraValue(*((Handle_Standard_Transient*)list->Handle), num);
  return gcnew OCStandard_Transient(&tmp);
}

OCTColStd_HSequenceOfTransient^ OCXSControl_Utils::NewSeqTra()
{
  Handle(TColStd_HSequenceOfTransient) tmp = ((XSControl_Utils*)nativeHandle)->NewSeqTra();
  return gcnew OCTColStd_HSequenceOfTransient(&tmp);
}

 void OCXSControl_Utils::AppendTra(OCNaroWrappers::OCTColStd_HSequenceOfTransient^ seqval, OCNaroWrappers::OCStandard_Transient^ traval)
{
  ((XSControl_Utils*)nativeHandle)->AppendTra(*((Handle_TColStd_HSequenceOfTransient*)seqval->Handle), *((Handle_Standard_Transient*)traval->Handle));
}

 System::String^ OCXSControl_Utils::DateString(Standard_Integer yy, Standard_Integer mm, Standard_Integer dd, Standard_Integer hh, Standard_Integer mn, Standard_Integer ss)
{
  return OCConverter::StandardCStringToString(((XSControl_Utils*)nativeHandle)->DateString(yy, mm, dd, hh, mn, ss));
}

 void OCXSControl_Utils::DateValues(System::String^ text, Standard_Integer& yy, Standard_Integer& mm, Standard_Integer& dd, Standard_Integer& hh, Standard_Integer& mn, Standard_Integer& ss)
{
  ((XSControl_Utils*)nativeHandle)->DateValues(OCConverter::StringToStandardCString(text), yy, mm, dd, hh, mn, ss);
}

 System::String^ OCXSControl_Utils::ToCString(OCNaroWrappers::OCTCollection_HAsciiString^ strval)
{
  return OCConverter::StandardCStringToString(((XSControl_Utils*)nativeHandle)->ToCString(*((Handle_TCollection_HAsciiString*)strval->Handle)));
}

 System::String^ OCXSControl_Utils::ToCString(OCNaroWrappers::OCTCollection_AsciiString^ strval)
{
  return OCConverter::StandardCStringToString(((XSControl_Utils*)nativeHandle)->ToCString(*((TCollection_AsciiString*)strval->Handle)));
}

OCTCollection_HAsciiString^ OCXSControl_Utils::ToHString(System::String^ strcon)
{
  Handle(TCollection_HAsciiString) tmp = ((XSControl_Utils*)nativeHandle)->ToHString(OCConverter::StringToStandardCString(strcon));
  return gcnew OCTCollection_HAsciiString(&tmp);
}

OCTCollection_AsciiString^ OCXSControl_Utils::ToAString(System::String^ strcon)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((XSControl_Utils*)nativeHandle)->ToAString(OCConverter::StringToStandardCString(strcon));
  return gcnew OCTCollection_AsciiString(tmp);
}

 System::String^ OCXSControl_Utils::ToEString(OCNaroWrappers::OCTCollection_HExtendedString^ strval)
{
  return OCConverter::StandardExtStringToString(((XSControl_Utils*)nativeHandle)->ToEString(*((Handle_TCollection_HExtendedString*)strval->Handle)));
}

 System::String^ OCXSControl_Utils::ToEString(OCNaroWrappers::OCTCollection_ExtendedString^ strval)
{
  return OCConverter::StandardExtStringToString(((XSControl_Utils*)nativeHandle)->ToEString(*((TCollection_ExtendedString*)strval->Handle)));
}

OCTCollection_HExtendedString^ OCXSControl_Utils::ToHString(System::String^ strcon)
{
  Handle(TCollection_HExtendedString) tmp = ((XSControl_Utils*)nativeHandle)->ToHString(OCConverter::StringToStandardExtString(strcon));
  return gcnew OCTCollection_HExtendedString(&tmp);
}

OCTCollection_ExtendedString^ OCXSControl_Utils::ToXString(System::String^ strcon)
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((XSControl_Utils*)nativeHandle)->ToXString(OCConverter::StringToStandardExtString(strcon));
  return gcnew OCTCollection_ExtendedString(tmp);
}

 System::String^ OCXSControl_Utils::AsciiToExtended(System::String^ str)
{
  return OCConverter::StandardExtStringToString(((XSControl_Utils*)nativeHandle)->AsciiToExtended(OCConverter::StringToStandardCString(str)));
}

 System::Boolean OCXSControl_Utils::IsAscii(System::String^ str)
{
  return OCConverter::StandardBooleanToBoolean(((XSControl_Utils*)nativeHandle)->IsAscii(OCConverter::StringToStandardExtString(str)));
}

 System::String^ OCXSControl_Utils::ExtendedToAscii(System::String^ str)
{
  return OCConverter::StandardCStringToString(((XSControl_Utils*)nativeHandle)->ExtendedToAscii(OCConverter::StringToStandardExtString(str)));
}

 System::String^ OCXSControl_Utils::CStrValue(OCNaroWrappers::OCStandard_Transient^ list, Standard_Integer num)
{
  return OCConverter::StandardCStringToString(((XSControl_Utils*)nativeHandle)->CStrValue(*((Handle_Standard_Transient*)list->Handle), num));
}

 System::String^ OCXSControl_Utils::EStrValue(OCNaroWrappers::OCStandard_Transient^ list, Standard_Integer num)
{
  return OCConverter::StandardExtStringToString(((XSControl_Utils*)nativeHandle)->EStrValue(*((Handle_Standard_Transient*)list->Handle), num));
}

OCTColStd_HSequenceOfHAsciiString^ OCXSControl_Utils::NewSeqCStr()
{
  Handle(TColStd_HSequenceOfHAsciiString) tmp = ((XSControl_Utils*)nativeHandle)->NewSeqCStr();
  return gcnew OCTColStd_HSequenceOfHAsciiString(&tmp);
}

 void OCXSControl_Utils::AppendCStr(OCNaroWrappers::OCTColStd_HSequenceOfHAsciiString^ seqval, System::String^ strval)
{
  ((XSControl_Utils*)nativeHandle)->AppendCStr(*((Handle_TColStd_HSequenceOfHAsciiString*)seqval->Handle), OCConverter::StringToStandardCString(strval));
}

OCTColStd_HSequenceOfHExtendedString^ OCXSControl_Utils::NewSeqEStr()
{
  Handle(TColStd_HSequenceOfHExtendedString) tmp = ((XSControl_Utils*)nativeHandle)->NewSeqEStr();
  return gcnew OCTColStd_HSequenceOfHExtendedString(&tmp);
}

 void OCXSControl_Utils::AppendEStr(OCNaroWrappers::OCTColStd_HSequenceOfHExtendedString^ seqval, System::String^ strval)
{
  ((XSControl_Utils*)nativeHandle)->AppendEStr(*((Handle_TColStd_HSequenceOfHExtendedString*)seqval->Handle), OCConverter::StringToStandardExtString(strval));
}

 System::Boolean OCXSControl_Utils::WriteShape(OCNaroWrappers::OCTopoDS_Shape^ shape, System::String^ filename)
{
  return OCConverter::StandardBooleanToBoolean(((XSControl_Utils*)nativeHandle)->WriteShape(*((TopoDS_Shape*)shape->Handle), OCConverter::StringToStandardCString(filename)));
}

OCTopoDS_Shape^ OCXSControl_Utils::NewShape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((XSControl_Utils*)nativeHandle)->NewShape();
  return gcnew OCTopoDS_Shape(tmp);
}

 System::Boolean OCXSControl_Utils::ReadShape(OCNaroWrappers::OCTopoDS_Shape^ shape, System::String^ filename)
{
  return OCConverter::StandardBooleanToBoolean(((XSControl_Utils*)nativeHandle)->ReadShape(*((TopoDS_Shape*)shape->Handle), OCConverter::StringToStandardCString(filename)));
}

 System::Boolean OCXSControl_Utils::IsNullShape(OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  return OCConverter::StandardBooleanToBoolean(((XSControl_Utils*)nativeHandle)->IsNullShape(*((TopoDS_Shape*)shape->Handle)));
}

OCTopoDS_Shape^ OCXSControl_Utils::CompoundFromSeq(OCNaroWrappers::OCTopTools_HSequenceOfShape^ seqval)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((XSControl_Utils*)nativeHandle)->CompoundFromSeq(*((Handle_TopTools_HSequenceOfShape*)seqval->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

 OCTopAbs_ShapeEnum OCXSControl_Utils::ShapeType(OCNaroWrappers::OCTopoDS_Shape^ shape, System::Boolean compound)
{
  return (OCTopAbs_ShapeEnum)(((XSControl_Utils*)nativeHandle)->ShapeType(*((TopoDS_Shape*)shape->Handle), OCConverter::BooleanToStandardBoolean(compound)));
}

OCTopoDS_Shape^ OCXSControl_Utils::SortedCompound(OCNaroWrappers::OCTopoDS_Shape^ shape, OCTopAbs_ShapeEnum type, System::Boolean explore, System::Boolean compound)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((XSControl_Utils*)nativeHandle)->SortedCompound(*((TopoDS_Shape*)shape->Handle), (TopAbs_ShapeEnum)type, OCConverter::BooleanToStandardBoolean(explore), OCConverter::BooleanToStandardBoolean(compound));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCXSControl_Utils::ShapeValue(OCNaroWrappers::OCTopTools_HSequenceOfShape^ seqv, Standard_Integer num)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((XSControl_Utils*)nativeHandle)->ShapeValue(*((Handle_TopTools_HSequenceOfShape*)seqv->Handle), num);
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_HSequenceOfShape^ OCXSControl_Utils::NewSeqShape()
{
  Handle(TopTools_HSequenceOfShape) tmp = ((XSControl_Utils*)nativeHandle)->NewSeqShape();
  return gcnew OCTopTools_HSequenceOfShape(&tmp);
}

 void OCXSControl_Utils::AppendShape(OCNaroWrappers::OCTopTools_HSequenceOfShape^ seqv, OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  ((XSControl_Utils*)nativeHandle)->AppendShape(*((Handle_TopTools_HSequenceOfShape*)seqv->Handle), *((TopoDS_Shape*)shape->Handle));
}

OCStandard_Transient^ OCXSControl_Utils::ShapeBinder(OCNaroWrappers::OCTopoDS_Shape^ shape, System::Boolean hs)
{
  Handle(Standard_Transient) tmp = ((XSControl_Utils*)nativeHandle)->ShapeBinder(*((TopoDS_Shape*)shape->Handle), OCConverter::BooleanToStandardBoolean(hs));
  return gcnew OCStandard_Transient(&tmp);
}

OCTopoDS_Shape^ OCXSControl_Utils::BinderShape(OCNaroWrappers::OCStandard_Transient^ tr)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((XSControl_Utils*)nativeHandle)->BinderShape(*((Handle_Standard_Transient*)tr->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCXSControl_Utils::SeqLength(OCNaroWrappers::OCStandard_Transient^ list)
{
  return ((XSControl_Utils*)nativeHandle)->SeqLength(*((Handle_Standard_Transient*)list->Handle));
}

OCStandard_Transient^ OCXSControl_Utils::SeqToArr(OCNaroWrappers::OCStandard_Transient^ seq, Standard_Integer first)
{
  Handle(Standard_Transient) tmp = ((XSControl_Utils*)nativeHandle)->SeqToArr(*((Handle_Standard_Transient*)seq->Handle), first);
  return gcnew OCStandard_Transient(&tmp);
}

OCStandard_Transient^ OCXSControl_Utils::ArrToSeq(OCNaroWrappers::OCStandard_Transient^ arr)
{
  Handle(Standard_Transient) tmp = ((XSControl_Utils*)nativeHandle)->ArrToSeq(*((Handle_Standard_Transient*)arr->Handle));
  return gcnew OCStandard_Transient(&tmp);
}

 Standard_Integer OCXSControl_Utils::SeqIntValue(OCNaroWrappers::OCTColStd_HSequenceOfInteger^ list, Standard_Integer num)
{
  return ((XSControl_Utils*)nativeHandle)->SeqIntValue(*((Handle_TColStd_HSequenceOfInteger*)list->Handle), num);
}

