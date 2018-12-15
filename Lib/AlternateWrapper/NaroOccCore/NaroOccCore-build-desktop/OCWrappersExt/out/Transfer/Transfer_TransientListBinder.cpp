// File generated by CPPExt (CPP file)
//

#include "Transfer_TransientListBinder.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HSequenceOfTransient.h"
#include "../Standard/Standard_Type.h"
#include "../Standard/Standard_Transient.h"


using namespace OCNaroWrappers;

OCTransfer_TransientListBinder::OCTransfer_TransientListBinder(Handle(Transfer_TransientListBinder)* nativeHandle) : OCTransfer_Binder((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Transfer_TransientListBinder(*nativeHandle);
}

OCTransfer_TransientListBinder::OCTransfer_TransientListBinder() : OCTransfer_Binder((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Transfer_TransientListBinder(new Transfer_TransientListBinder());
}

OCTransfer_TransientListBinder::OCTransfer_TransientListBinder(OCNaroWrappers::OCTColStd_HSequenceOfTransient^ list) : OCTransfer_Binder((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Transfer_TransientListBinder(new Transfer_TransientListBinder(*((Handle_TColStd_HSequenceOfTransient*)list->Handle)));
}

 System::Boolean OCTransfer_TransientListBinder::IsMultiple()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Transfer_TransientListBinder*)nativeHandle))->IsMultiple());
}

OCStandard_Type^ OCTransfer_TransientListBinder::ResultType()
{
  Handle(Standard_Type) tmp = (*((Handle_Transfer_TransientListBinder*)nativeHandle))->ResultType();
  return gcnew OCStandard_Type(&tmp);
}

 System::String^ OCTransfer_TransientListBinder::ResultTypeName()
{
  return OCConverter::StandardCStringToString((*((Handle_Transfer_TransientListBinder*)nativeHandle))->ResultTypeName());
}

 void OCTransfer_TransientListBinder::AddResult(OCNaroWrappers::OCStandard_Transient^ res)
{
  (*((Handle_Transfer_TransientListBinder*)nativeHandle))->AddResult(*((Handle_Standard_Transient*)res->Handle));
}

OCTColStd_HSequenceOfTransient^ OCTransfer_TransientListBinder::Result()
{
  Handle(TColStd_HSequenceOfTransient) tmp = (*((Handle_Transfer_TransientListBinder*)nativeHandle))->Result();
  return gcnew OCTColStd_HSequenceOfTransient(&tmp);
}

 void OCTransfer_TransientListBinder::SetResult(Standard_Integer num, OCNaroWrappers::OCStandard_Transient^ res)
{
  (*((Handle_Transfer_TransientListBinder*)nativeHandle))->SetResult(num, *((Handle_Standard_Transient*)res->Handle));
}

 Standard_Integer OCTransfer_TransientListBinder::NbTransients()
{
  return (*((Handle_Transfer_TransientListBinder*)nativeHandle))->NbTransients();
}

OCStandard_Transient^ OCTransfer_TransientListBinder::Transient(Standard_Integer num)
{
  Handle(Standard_Transient) tmp = (*((Handle_Transfer_TransientListBinder*)nativeHandle))->Transient(num);
  return gcnew OCStandard_Transient(&tmp);
}


