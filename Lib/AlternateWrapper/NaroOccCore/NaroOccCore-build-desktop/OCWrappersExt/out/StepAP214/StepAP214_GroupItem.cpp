// File generated by CPPExt (CPP file)
//

#include "StepAP214_GroupItem.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../StepGeom/StepGeom_GeometricRepresentationItem.h"


using namespace OCNaroWrappers;

OCStepAP214_GroupItem::OCStepAP214_GroupItem(StepAP214_GroupItem* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_GroupItem::OCStepAP214_GroupItem() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepAP214_GroupItem();
}

 Standard_Integer OCStepAP214_GroupItem::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepAP214_GroupItem*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepGeom_GeometricRepresentationItem^ OCStepAP214_GroupItem::GeometricRepresentationItem()
{
  StepGeom_GeometricRepresentationItem* tmp = new StepGeom_GeometricRepresentationItem();
  *tmp = ((StepAP214_GroupItem*)nativeHandle)->GeometricRepresentationItem();
  return gcnew OCStepGeom_GeometricRepresentationItem(tmp);
}


