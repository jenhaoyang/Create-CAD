// File generated by CPPExt (CPP file)
//

#include "TNaming_NamedShape.h"
#include "../Converter.h"
#include "TNaming_Builder.h"
#include "TNaming_Iterator.h"
#include "TNaming_NewShapeIterator.h"
#include "TNaming_OldShapeIterator.h"
#include "../Standard/Standard_GUID.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_DeltaOnModification.h"
#include "../TDF/TDF_DeltaOnRemoval.h"
#include "../TDF/TDF_RelocationTable.h"
#include "../TDF/TDF_DataSet.h"
#include "../TDF/TDF_AttributeDelta.h"


using namespace OCNaroWrappers;

OCTNaming_NamedShape::OCTNaming_NamedShape(Handle(TNaming_NamedShape)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TNaming_NamedShape(*nativeHandle);
}

OCStandard_GUID^ OCTNaming_NamedShape::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TNaming_NamedShape::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTNaming_NamedShape::OCTNaming_NamedShape() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TNaming_NamedShape(new TNaming_NamedShape());
}

 System::Boolean OCTNaming_NamedShape::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TNaming_NamedShape*)nativeHandle))->IsEmpty());
}

OCTopoDS_Shape^ OCTNaming_NamedShape::Get()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TNaming_NamedShape*)nativeHandle))->Get();
  return gcnew OCTopoDS_Shape(tmp);
}

 OCTNaming_Evolution OCTNaming_NamedShape::Evolution()
{
  return (OCTNaming_Evolution)((*((Handle_TNaming_NamedShape*)nativeHandle))->Evolution());
}

 Standard_Integer OCTNaming_NamedShape::Version()
{
  return (*((Handle_TNaming_NamedShape*)nativeHandle))->Version();
}

 void OCTNaming_NamedShape::SetVersion(Standard_Integer version)
{
  (*((Handle_TNaming_NamedShape*)nativeHandle))->SetVersion(version);
}

OCStandard_GUID^ OCTNaming_NamedShape::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TNaming_NamedShape*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDF_Attribute^ OCTNaming_NamedShape::BackupCopy()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TNaming_NamedShape*)nativeHandle))->BackupCopy();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTNaming_NamedShape::Restore(OCNaroWrappers::OCTDF_Attribute^ anAttribute)
{
  (*((Handle_TNaming_NamedShape*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)anAttribute->Handle));
}

OCTDF_DeltaOnModification^ OCTNaming_NamedShape::DeltaOnModification(OCNaroWrappers::OCTDF_Attribute^ anOldAttribute)
{
  Handle(TDF_DeltaOnModification) tmp = (*((Handle_TNaming_NamedShape*)nativeHandle))->DeltaOnModification(*((Handle_TDF_Attribute*)anOldAttribute->Handle));
  return gcnew OCTDF_DeltaOnModification(&tmp);
}

 void OCTNaming_NamedShape::DeltaOnModification(OCNaroWrappers::OCTDF_DeltaOnModification^ aDelta)
{
  (*((Handle_TNaming_NamedShape*)nativeHandle))->DeltaOnModification(*((Handle_TDF_DeltaOnModification*)aDelta->Handle));
}

OCTDF_DeltaOnRemoval^ OCTNaming_NamedShape::DeltaOnRemoval()
{
  Handle(TDF_DeltaOnRemoval) tmp = (*((Handle_TNaming_NamedShape*)nativeHandle))->DeltaOnRemoval();
  return gcnew OCTDF_DeltaOnRemoval(&tmp);
}

OCTDF_Attribute^ OCTNaming_NamedShape::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TNaming_NamedShape*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTNaming_NamedShape::Paste(OCNaroWrappers::OCTDF_Attribute^ intoAttribute, OCNaroWrappers::OCTDF_RelocationTable^ aRelocTationable)
{
  (*((Handle_TNaming_NamedShape*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)intoAttribute->Handle), *((Handle_TDF_RelocationTable*)aRelocTationable->Handle));
}

 void OCTNaming_NamedShape::References(OCNaroWrappers::OCTDF_DataSet^ aDataSet)
{
  (*((Handle_TNaming_NamedShape*)nativeHandle))->References(*((Handle_TDF_DataSet*)aDataSet->Handle));
}

 void OCTNaming_NamedShape::BeforeRemoval()
{
  (*((Handle_TNaming_NamedShape*)nativeHandle))->BeforeRemoval();
}

 System::Boolean OCTNaming_NamedShape::BeforeUndo(OCNaroWrappers::OCTDF_AttributeDelta^ anAttDelta, System::Boolean forceIt)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TNaming_NamedShape*)nativeHandle))->BeforeUndo(*((Handle_TDF_AttributeDelta*)anAttDelta->Handle), OCConverter::BooleanToStandardBoolean(forceIt)));
}

 System::Boolean OCTNaming_NamedShape::AfterUndo(OCNaroWrappers::OCTDF_AttributeDelta^ anAttDelta, System::Boolean forceIt)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TNaming_NamedShape*)nativeHandle))->AfterUndo(*((Handle_TDF_AttributeDelta*)anAttDelta->Handle), OCConverter::BooleanToStandardBoolean(forceIt)));
}

 Standard_OStream& OCTNaming_NamedShape::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TNaming_NamedShape*)nativeHandle))->Dump(anOS);
}


