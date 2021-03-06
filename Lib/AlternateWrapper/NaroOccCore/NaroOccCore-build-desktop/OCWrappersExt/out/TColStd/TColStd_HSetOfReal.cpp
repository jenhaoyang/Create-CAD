// File generated by CPPExt (CPP file)
//

#include "TColStd_HSetOfReal.h"
#include "../Converter.h"
#include "TColStd_SetOfReal.h"


using namespace OCNaroWrappers;

OCTColStd_HSetOfReal::OCTColStd_HSetOfReal(Handle(TColStd_HSetOfReal)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_HSetOfReal(*nativeHandle);
}

OCTColStd_HSetOfReal::OCTColStd_HSetOfReal() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_HSetOfReal(new TColStd_HSetOfReal());
}

 Standard_Integer OCTColStd_HSetOfReal::Extent()
{
  return (*((Handle_TColStd_HSetOfReal*)nativeHandle))->Extent();
}

 System::Boolean OCTColStd_HSetOfReal::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColStd_HSetOfReal*)nativeHandle))->IsEmpty());
}

 void OCTColStd_HSetOfReal::Clear()
{
  (*((Handle_TColStd_HSetOfReal*)nativeHandle))->Clear();
}

 System::Boolean OCTColStd_HSetOfReal::Add(Standard_Real T)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColStd_HSetOfReal*)nativeHandle))->Add(T));
}

 System::Boolean OCTColStd_HSetOfReal::Remove(Standard_Real T)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColStd_HSetOfReal*)nativeHandle))->Remove(T));
}

OCTColStd_HSetOfReal^ OCTColStd_HSetOfReal::Union(OCNaroWrappers::OCTColStd_HSetOfReal^ B)
{
  Handle(TColStd_HSetOfReal) tmp = (*((Handle_TColStd_HSetOfReal*)nativeHandle))->Union(*((Handle_TColStd_HSetOfReal*)B->Handle));
  return gcnew OCTColStd_HSetOfReal(&tmp);
}

OCTColStd_HSetOfReal^ OCTColStd_HSetOfReal::Intersection(OCNaroWrappers::OCTColStd_HSetOfReal^ B)
{
  Handle(TColStd_HSetOfReal) tmp = (*((Handle_TColStd_HSetOfReal*)nativeHandle))->Intersection(*((Handle_TColStd_HSetOfReal*)B->Handle));
  return gcnew OCTColStd_HSetOfReal(&tmp);
}

OCTColStd_HSetOfReal^ OCTColStd_HSetOfReal::Difference(OCNaroWrappers::OCTColStd_HSetOfReal^ B)
{
  Handle(TColStd_HSetOfReal) tmp = (*((Handle_TColStd_HSetOfReal*)nativeHandle))->Difference(*((Handle_TColStd_HSetOfReal*)B->Handle));
  return gcnew OCTColStd_HSetOfReal(&tmp);
}

 System::Boolean OCTColStd_HSetOfReal::Contains(Standard_Real T)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColStd_HSetOfReal*)nativeHandle))->Contains(T));
}

 System::Boolean OCTColStd_HSetOfReal::IsASubset(OCNaroWrappers::OCTColStd_HSetOfReal^ S)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColStd_HSetOfReal*)nativeHandle))->IsASubset(*((Handle_TColStd_HSetOfReal*)S->Handle)));
}

 System::Boolean OCTColStd_HSetOfReal::IsAProperSubset(OCNaroWrappers::OCTColStd_HSetOfReal^ S)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColStd_HSetOfReal*)nativeHandle))->IsAProperSubset(*((Handle_TColStd_HSetOfReal*)S->Handle)));
}

OCTColStd_HSetOfReal^ OCTColStd_HSetOfReal::ShallowCopy()
{
  Handle(TColStd_HSetOfReal) tmp = (*((Handle_TColStd_HSetOfReal*)nativeHandle))->ShallowCopy();
  return gcnew OCTColStd_HSetOfReal(&tmp);
}

OCTColStd_SetOfReal^ OCTColStd_HSetOfReal::Set()
{
  TColStd_SetOfReal* tmp = new TColStd_SetOfReal();
  *tmp = (*((Handle_TColStd_HSetOfReal*)nativeHandle))->Set();
  return gcnew OCTColStd_SetOfReal(tmp);
}

OCTColStd_SetOfReal^ OCTColStd_HSetOfReal::ChangeSet()
{
  TColStd_SetOfReal* tmp = new TColStd_SetOfReal();
  *tmp = (*((Handle_TColStd_HSetOfReal*)nativeHandle))->ChangeSet();
  return gcnew OCTColStd_SetOfReal(tmp);
}


