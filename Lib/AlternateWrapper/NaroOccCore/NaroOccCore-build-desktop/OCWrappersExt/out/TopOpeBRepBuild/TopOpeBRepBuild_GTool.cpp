// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_GTool.h"
#include "../Converter.h"
#include "TopOpeBRepBuild_GTopo.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_GTool::OCTopOpeBRepBuild_GTool(TopOpeBRepBuild_GTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepBuild_GTopo^ OCTopOpeBRepBuild_GTool::GFusUnsh(OCTopAbs_ShapeEnum s1, OCTopAbs_ShapeEnum s2)
{
  TopOpeBRepBuild_GTopo* tmp = new TopOpeBRepBuild_GTopo();
  *tmp = TopOpeBRepBuild_GTool::GFusUnsh((TopAbs_ShapeEnum)s1, (TopAbs_ShapeEnum)s2);
  return gcnew OCTopOpeBRepBuild_GTopo(tmp);
}

OCTopOpeBRepBuild_GTopo^ OCTopOpeBRepBuild_GTool::GFusSame(OCTopAbs_ShapeEnum s1, OCTopAbs_ShapeEnum s2)
{
  TopOpeBRepBuild_GTopo* tmp = new TopOpeBRepBuild_GTopo();
  *tmp = TopOpeBRepBuild_GTool::GFusSame((TopAbs_ShapeEnum)s1, (TopAbs_ShapeEnum)s2);
  return gcnew OCTopOpeBRepBuild_GTopo(tmp);
}

OCTopOpeBRepBuild_GTopo^ OCTopOpeBRepBuild_GTool::GFusDiff(OCTopAbs_ShapeEnum s1, OCTopAbs_ShapeEnum s2)
{
  TopOpeBRepBuild_GTopo* tmp = new TopOpeBRepBuild_GTopo();
  *tmp = TopOpeBRepBuild_GTool::GFusDiff((TopAbs_ShapeEnum)s1, (TopAbs_ShapeEnum)s2);
  return gcnew OCTopOpeBRepBuild_GTopo(tmp);
}

OCTopOpeBRepBuild_GTopo^ OCTopOpeBRepBuild_GTool::GCutUnsh(OCTopAbs_ShapeEnum s1, OCTopAbs_ShapeEnum s2)
{
  TopOpeBRepBuild_GTopo* tmp = new TopOpeBRepBuild_GTopo();
  *tmp = TopOpeBRepBuild_GTool::GCutUnsh((TopAbs_ShapeEnum)s1, (TopAbs_ShapeEnum)s2);
  return gcnew OCTopOpeBRepBuild_GTopo(tmp);
}

OCTopOpeBRepBuild_GTopo^ OCTopOpeBRepBuild_GTool::GCutSame(OCTopAbs_ShapeEnum s1, OCTopAbs_ShapeEnum s2)
{
  TopOpeBRepBuild_GTopo* tmp = new TopOpeBRepBuild_GTopo();
  *tmp = TopOpeBRepBuild_GTool::GCutSame((TopAbs_ShapeEnum)s1, (TopAbs_ShapeEnum)s2);
  return gcnew OCTopOpeBRepBuild_GTopo(tmp);
}

OCTopOpeBRepBuild_GTopo^ OCTopOpeBRepBuild_GTool::GCutDiff(OCTopAbs_ShapeEnum s1, OCTopAbs_ShapeEnum s2)
{
  TopOpeBRepBuild_GTopo* tmp = new TopOpeBRepBuild_GTopo();
  *tmp = TopOpeBRepBuild_GTool::GCutDiff((TopAbs_ShapeEnum)s1, (TopAbs_ShapeEnum)s2);
  return gcnew OCTopOpeBRepBuild_GTopo(tmp);
}

OCTopOpeBRepBuild_GTopo^ OCTopOpeBRepBuild_GTool::GComUnsh(OCTopAbs_ShapeEnum s1, OCTopAbs_ShapeEnum s2)
{
  TopOpeBRepBuild_GTopo* tmp = new TopOpeBRepBuild_GTopo();
  *tmp = TopOpeBRepBuild_GTool::GComUnsh((TopAbs_ShapeEnum)s1, (TopAbs_ShapeEnum)s2);
  return gcnew OCTopOpeBRepBuild_GTopo(tmp);
}

OCTopOpeBRepBuild_GTopo^ OCTopOpeBRepBuild_GTool::GComSame(OCTopAbs_ShapeEnum s1, OCTopAbs_ShapeEnum s2)
{
  TopOpeBRepBuild_GTopo* tmp = new TopOpeBRepBuild_GTopo();
  *tmp = TopOpeBRepBuild_GTool::GComSame((TopAbs_ShapeEnum)s1, (TopAbs_ShapeEnum)s2);
  return gcnew OCTopOpeBRepBuild_GTopo(tmp);
}

OCTopOpeBRepBuild_GTopo^ OCTopOpeBRepBuild_GTool::GComDiff(OCTopAbs_ShapeEnum s1, OCTopAbs_ShapeEnum s2)
{
  TopOpeBRepBuild_GTopo* tmp = new TopOpeBRepBuild_GTopo();
  *tmp = TopOpeBRepBuild_GTool::GComDiff((TopAbs_ShapeEnum)s1, (TopAbs_ShapeEnum)s2);
  return gcnew OCTopOpeBRepBuild_GTopo(tmp);
}

 void OCTopOpeBRepBuild_GTool::Dump(Standard_OStream& OS)
{
  TopOpeBRepBuild_GTool::Dump(OS);
}


