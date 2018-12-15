// File generated by CPPExt (CPP file)
//

#include "GeomTools_Curve2dSet.h"
#include "../Converter.h"
#include "../Message/Message_ProgressIndicator.h"
#include "../Geom2d/Geom2d_Curve.h"


using namespace OCNaroWrappers;

OCGeomTools_Curve2dSet::OCGeomTools_Curve2dSet(GeomTools_Curve2dSet* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGeomTools_Curve2dSet::OCGeomTools_Curve2dSet() 
{
  nativeHandle = new GeomTools_Curve2dSet();
}

 void OCGeomTools_Curve2dSet::Clear()
{
  ((GeomTools_Curve2dSet*)nativeHandle)->Clear();
}

 Standard_Integer OCGeomTools_Curve2dSet::Add(OCNaroWrappers::OCGeom2d_Curve^ C)
{
  return ((GeomTools_Curve2dSet*)nativeHandle)->Add(*((Handle_Geom2d_Curve*)C->Handle));
}

OCGeom2d_Curve^ OCGeomTools_Curve2dSet::Curve2d(Standard_Integer I)
{
  Handle(Geom2d_Curve) tmp = ((GeomTools_Curve2dSet*)nativeHandle)->Curve2d(I);
  return gcnew OCGeom2d_Curve(&tmp);
}

 Standard_Integer OCGeomTools_Curve2dSet::Index(OCNaroWrappers::OCGeom2d_Curve^ C)
{
  return ((GeomTools_Curve2dSet*)nativeHandle)->Index(*((Handle_Geom2d_Curve*)C->Handle));
}

 void OCGeomTools_Curve2dSet::Dump(Standard_OStream& OS)
{
  ((GeomTools_Curve2dSet*)nativeHandle)->Dump(OS);
}

 void OCGeomTools_Curve2dSet::Write(Standard_OStream& OS)
{
  ((GeomTools_Curve2dSet*)nativeHandle)->Write(OS);
}

 void OCGeomTools_Curve2dSet::Read(Standard_IStream& IS)
{
  ((GeomTools_Curve2dSet*)nativeHandle)->Read(IS);
}

 void OCGeomTools_Curve2dSet::PrintCurve2d(OCNaroWrappers::OCGeom2d_Curve^ C, Standard_OStream& OS, System::Boolean compact)
{
  GeomTools_Curve2dSet::PrintCurve2d(*((Handle_Geom2d_Curve*)C->Handle), OS, OCConverter::BooleanToStandardBoolean(compact));
}

 Standard_IStream& OCGeomTools_Curve2dSet::ReadCurve2d(Standard_IStream& IS, OCNaroWrappers::OCGeom2d_Curve^ C)
{
  return GeomTools_Curve2dSet::ReadCurve2d(IS, *((Handle_Geom2d_Curve*)C->Handle));
}

 void OCGeomTools_Curve2dSet::SetProgress(OCNaroWrappers::OCMessage_ProgressIndicator^ PR)
{
  ((GeomTools_Curve2dSet*)nativeHandle)->SetProgress(*((Handle_Message_ProgressIndicator*)PR->Handle));
}

OCMessage_ProgressIndicator^ OCGeomTools_Curve2dSet::GetProgress()
{
  Handle(Message_ProgressIndicator) tmp = ((GeomTools_Curve2dSet*)nativeHandle)->GetProgress();
  return gcnew OCMessage_ProgressIndicator(&tmp);
}


