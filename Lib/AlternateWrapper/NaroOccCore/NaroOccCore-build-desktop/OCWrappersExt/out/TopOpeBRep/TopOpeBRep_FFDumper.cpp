// File generated by CPPExt (CPP file)
//

#include "TopOpeBRep_FFDumper.h"
#include "../Converter.h"
#include "TopOpeBRep_LineInter.h"
#include "TopOpeBRep_VPointInter.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCTopOpeBRep_FFDumper::OCTopOpeBRep_FFDumper(Handle(TopOpeBRep_FFDumper)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRep_FFDumper(*nativeHandle);
}

OCTopOpeBRep_FFDumper::OCTopOpeBRep_FFDumper(TopOpeBRep_PFacesFiller PFF) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRep_FFDumper(new TopOpeBRep_FFDumper(PFF));
}

 void OCTopOpeBRep_FFDumper::Init(TopOpeBRep_PFacesFiller PFF)
{
  (*((Handle_TopOpeBRep_FFDumper*)nativeHandle))->Init(PFF);
}

 void OCTopOpeBRep_FFDumper::DumpLine(Standard_Integer I)
{
  (*((Handle_TopOpeBRep_FFDumper*)nativeHandle))->DumpLine(I);
}

 void OCTopOpeBRep_FFDumper::DumpLine(OCNaroWrappers::OCTopOpeBRep_LineInter^ L)
{
  (*((Handle_TopOpeBRep_FFDumper*)nativeHandle))->DumpLine(*((TopOpeBRep_LineInter*)L->Handle));
}

 void OCTopOpeBRep_FFDumper::DumpVP(OCNaroWrappers::OCTopOpeBRep_VPointInter^ VP)
{
  (*((Handle_TopOpeBRep_FFDumper*)nativeHandle))->DumpVP(*((TopOpeBRep_VPointInter*)VP->Handle));
}

 void OCTopOpeBRep_FFDumper::DumpVP(OCNaroWrappers::OCTopOpeBRep_VPointInter^ VP, Standard_Integer ISI)
{
  (*((Handle_TopOpeBRep_FFDumper*)nativeHandle))->DumpVP(*((TopOpeBRep_VPointInter*)VP->Handle), ISI);
}

 Standard_Integer OCTopOpeBRep_FFDumper::ExploreIndex(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Integer ISI)
{
  return (*((Handle_TopOpeBRep_FFDumper*)nativeHandle))->ExploreIndex(*((TopoDS_Shape*)S->Handle), ISI);
}

 void OCTopOpeBRep_FFDumper::DumpDSP(OCNaroWrappers::OCTopOpeBRep_VPointInter^ VP, OCTopOpeBRepDS_Kind GK, Standard_Integer G, System::Boolean newinDS)
{
  (*((Handle_TopOpeBRep_FFDumper*)nativeHandle))->DumpDSP(*((TopOpeBRep_VPointInter*)VP->Handle), (TopOpeBRepDS_Kind)GK, G, OCConverter::BooleanToStandardBoolean(newinDS));
}

 TopOpeBRep_PFacesFiller OCTopOpeBRep_FFDumper::PFacesFillerDummy()
{
  return (*((Handle_TopOpeBRep_FFDumper*)nativeHandle))->PFacesFillerDummy();
}


