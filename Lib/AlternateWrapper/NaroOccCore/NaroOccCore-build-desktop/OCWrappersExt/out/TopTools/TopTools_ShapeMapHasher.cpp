// File generated by CPPExt (CPP file)
//

#include "TopTools_ShapeMapHasher.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCTopTools_ShapeMapHasher::OCTopTools_ShapeMapHasher(TopTools_ShapeMapHasher* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 Standard_Integer OCTopTools_ShapeMapHasher::HashCode(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Integer Upper)
{
  return TopTools_ShapeMapHasher::HashCode(*((TopoDS_Shape*)S->Handle), Upper);
}

 System::Boolean OCTopTools_ShapeMapHasher::IsEqual(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2)
{
  return OCConverter::StandardBooleanToBoolean(TopTools_ShapeMapHasher::IsEqual(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle)));
}


