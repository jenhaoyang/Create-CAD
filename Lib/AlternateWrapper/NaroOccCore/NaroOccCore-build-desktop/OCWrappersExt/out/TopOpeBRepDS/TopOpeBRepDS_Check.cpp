// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_Check.h"
#include "../Converter.h"
#include "TopOpeBRepDS_HDataStructure.h"
#include "TopOpeBRepDS_ListOfInterference.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "TopOpeBRepDS_DataMapOfCheckStatus.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_Check::OCTopOpeBRepDS_Check(Handle(TopOpeBRepDS_Check)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepDS_Check(*nativeHandle);
}

OCTopOpeBRepDS_Check::OCTopOpeBRepDS_Check() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepDS_Check(new TopOpeBRepDS_Check());
}

OCTopOpeBRepDS_Check::OCTopOpeBRepDS_Check(OCNaroWrappers::OCTopOpeBRepDS_HDataStructure^ HDS) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepDS_Check(new TopOpeBRepDS_Check(*((Handle_TopOpeBRepDS_HDataStructure*)HDS->Handle)));
}

 System::Boolean OCTopOpeBRepDS_Check::ChkIntg()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepDS_Check*)nativeHandle))->ChkIntg());
}

 System::Boolean OCTopOpeBRepDS_Check::ChkIntgInterf(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ LI)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepDS_Check*)nativeHandle))->ChkIntgInterf(*((TopOpeBRepDS_ListOfInterference*)LI->Handle)));
}

 System::Boolean OCTopOpeBRepDS_Check::CheckDS(Standard_Integer i, OCTopOpeBRepDS_Kind K)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepDS_Check*)nativeHandle))->CheckDS(i, (TopOpeBRepDS_Kind)K));
}

 System::Boolean OCTopOpeBRepDS_Check::ChkIntgSamDom()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepDS_Check*)nativeHandle))->ChkIntgSamDom());
}

 System::Boolean OCTopOpeBRepDS_Check::CheckShapes(OCNaroWrappers::OCTopTools_ListOfShape^ LS)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepDS_Check*)nativeHandle))->CheckShapes(*((TopTools_ListOfShape*)LS->Handle)));
}

 System::Boolean OCTopOpeBRepDS_Check::OneVertexOnPnt()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepDS_Check*)nativeHandle))->OneVertexOnPnt());
}

OCTopOpeBRepDS_HDataStructure^ OCTopOpeBRepDS_Check::HDS()
{
  Handle(TopOpeBRepDS_HDataStructure) tmp = (*((Handle_TopOpeBRepDS_Check*)nativeHandle))->HDS();
  return gcnew OCTopOpeBRepDS_HDataStructure(&tmp);
}

OCTopOpeBRepDS_HDataStructure^ OCTopOpeBRepDS_Check::ChangeHDS()
{
  Handle(TopOpeBRepDS_HDataStructure) tmp = (*((Handle_TopOpeBRepDS_Check*)nativeHandle))->ChangeHDS();
  return gcnew OCTopOpeBRepDS_HDataStructure(&tmp);
}

 Standard_OStream& OCTopOpeBRepDS_Check::PrintIntg(Standard_OStream& S)
{
  return (*((Handle_TopOpeBRepDS_Check*)nativeHandle))->PrintIntg(S);
}

 Standard_OStream& OCTopOpeBRepDS_Check::Print(OCTopOpeBRepDS_CheckStatus stat, Standard_OStream& S)
{
  return (*((Handle_TopOpeBRepDS_Check*)nativeHandle))->Print((TopOpeBRepDS_CheckStatus)stat, S);
}

 Standard_OStream& OCTopOpeBRepDS_Check::PrintShape(OCTopAbs_ShapeEnum SE, Standard_OStream& S)
{
  return (*((Handle_TopOpeBRepDS_Check*)nativeHandle))->PrintShape((TopAbs_ShapeEnum)SE, S);
}

 Standard_OStream& OCTopOpeBRepDS_Check::PrintShape(Standard_Integer index, Standard_OStream& S)
{
  return (*((Handle_TopOpeBRepDS_Check*)nativeHandle))->PrintShape(index, S);
}


