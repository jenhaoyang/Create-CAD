// File generated by CPPExt (CPP file)
//

#include "IFSelect_Editor.h"
#include "../Converter.h"
#include "../Dico/Dico_DictionaryOfInteger.h"
#include "../Interface/Interface_TypedValue.h"
#include "../Message/Message_Messenger.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "IFSelect_EditForm.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "IFSelect_ListEditor.h"
#include "../TColStd/TColStd_HSequenceOfHAsciiString.h"
#include "../Standard/Standard_Transient.h"
#include "../Interface/Interface_InterfaceModel.h"


using namespace OCNaroWrappers;

OCIFSelect_Editor::OCIFSelect_Editor(Handle(IFSelect_Editor)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_Editor(*nativeHandle);
}

OCIFSelect_Editor::OCIFSelect_Editor(Standard_Integer nbval) : OCMMgt_TShared((OCDummy^)nullptr)

{}

 void OCIFSelect_Editor::SetValue(Standard_Integer num, OCNaroWrappers::OCInterface_TypedValue^ typval, System::String^ shortname, OCIFSelect_EditValue accessmode)
{
  (*((Handle_IFSelect_Editor*)nativeHandle))->SetValue(num, *((Handle_Interface_TypedValue*)typval->Handle), OCConverter::StringToStandardCString(shortname), (IFSelect_EditValue)accessmode);
}

 void OCIFSelect_Editor::SetList(Standard_Integer num, Standard_Integer max)
{
  (*((Handle_IFSelect_Editor*)nativeHandle))->SetList(num, max);
}

 Standard_Integer OCIFSelect_Editor::NbValues()
{
  return (*((Handle_IFSelect_Editor*)nativeHandle))->NbValues();
}

OCInterface_TypedValue^ OCIFSelect_Editor::TypedValue(Standard_Integer num)
{
  Handle(Interface_TypedValue) tmp = (*((Handle_IFSelect_Editor*)nativeHandle))->TypedValue(num);
  return gcnew OCInterface_TypedValue(&tmp);
}

 System::Boolean OCIFSelect_Editor::IsList(Standard_Integer num)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_Editor*)nativeHandle))->IsList(num));
}

 Standard_Integer OCIFSelect_Editor::MaxList(Standard_Integer num)
{
  return (*((Handle_IFSelect_Editor*)nativeHandle))->MaxList(num);
}

 System::String^ OCIFSelect_Editor::Name(Standard_Integer num, System::Boolean isshort)
{
  return OCConverter::StandardCStringToString((*((Handle_IFSelect_Editor*)nativeHandle))->Name(num, OCConverter::BooleanToStandardBoolean(isshort)));
}

 OCIFSelect_EditValue OCIFSelect_Editor::EditMode(Standard_Integer num)
{
  return (OCIFSelect_EditValue)((*((Handle_IFSelect_Editor*)nativeHandle))->EditMode(num));
}

 Standard_Integer OCIFSelect_Editor::NameNumber(System::String^ name)
{
  return (*((Handle_IFSelect_Editor*)nativeHandle))->NameNumber(OCConverter::StringToStandardCString(name));
}

 void OCIFSelect_Editor::PrintNames(OCNaroWrappers::OCMessage_Messenger^ S)
{
  (*((Handle_IFSelect_Editor*)nativeHandle))->PrintNames(*((Handle_Message_Messenger*)S->Handle));
}

 void OCIFSelect_Editor::PrintDefs(OCNaroWrappers::OCMessage_Messenger^ S, System::Boolean labels)
{
  (*((Handle_IFSelect_Editor*)nativeHandle))->PrintDefs(*((Handle_Message_Messenger*)S->Handle), OCConverter::BooleanToStandardBoolean(labels));
}

 Standard_Integer OCIFSelect_Editor::MaxNameLength(Standard_Integer what)
{
  return (*((Handle_IFSelect_Editor*)nativeHandle))->MaxNameLength(what);
}

OCIFSelect_EditForm^ OCIFSelect_Editor::Form(System::Boolean readonly, System::Boolean undoable)
{
  Handle(IFSelect_EditForm) tmp = (*((Handle_IFSelect_Editor*)nativeHandle))->Form(OCConverter::BooleanToStandardBoolean(readonly), OCConverter::BooleanToStandardBoolean(undoable));
  return gcnew OCIFSelect_EditForm(&tmp);
}

OCIFSelect_ListEditor^ OCIFSelect_Editor::ListEditor(Standard_Integer num)
{
  Handle(IFSelect_ListEditor) tmp = (*((Handle_IFSelect_Editor*)nativeHandle))->ListEditor(num);
  return gcnew OCIFSelect_ListEditor(&tmp);
}

OCTColStd_HSequenceOfHAsciiString^ OCIFSelect_Editor::ListValue(OCNaroWrappers::OCIFSelect_EditForm^ form, Standard_Integer num)
{
  Handle(TColStd_HSequenceOfHAsciiString) tmp = (*((Handle_IFSelect_Editor*)nativeHandle))->ListValue(*((Handle_IFSelect_EditForm*)form->Handle), num);
  return gcnew OCTColStd_HSequenceOfHAsciiString(&tmp);
}

 System::Boolean OCIFSelect_Editor::Update(OCNaroWrappers::OCIFSelect_EditForm^ form, Standard_Integer num, OCNaroWrappers::OCTCollection_HAsciiString^ newval, System::Boolean enforce)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_Editor*)nativeHandle))->Update(*((Handle_IFSelect_EditForm*)form->Handle), num, *((Handle_TCollection_HAsciiString*)newval->Handle), OCConverter::BooleanToStandardBoolean(enforce)));
}

 System::Boolean OCIFSelect_Editor::UpdateList(OCNaroWrappers::OCIFSelect_EditForm^ form, Standard_Integer num, OCNaroWrappers::OCTColStd_HSequenceOfHAsciiString^ newlist, System::Boolean enforce)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_Editor*)nativeHandle))->UpdateList(*((Handle_IFSelect_EditForm*)form->Handle), num, *((Handle_TColStd_HSequenceOfHAsciiString*)newlist->Handle), OCConverter::BooleanToStandardBoolean(enforce)));
}


