// File generated by CPPExt (CPP file)
//

#include "BRepFill_OffsetAncestors.h"
#include "../Converter.h"
#include "BRepFill_OffsetWire.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBRepFill_OffsetAncestors::OCBRepFill_OffsetAncestors(BRepFill_OffsetAncestors* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepFill_OffsetAncestors::OCBRepFill_OffsetAncestors() 
{
  nativeHandle = new BRepFill_OffsetAncestors();
}

OCBRepFill_OffsetAncestors::OCBRepFill_OffsetAncestors(OCNaroWrappers::OCBRepFill_OffsetWire^ Paral) 
{
  nativeHandle = new BRepFill_OffsetAncestors(*((BRepFill_OffsetWire*)Paral->Handle));
}

 void OCBRepFill_OffsetAncestors::Perform(OCNaroWrappers::OCBRepFill_OffsetWire^ Paral)
{
  ((BRepFill_OffsetAncestors*)nativeHandle)->Perform(*((BRepFill_OffsetWire*)Paral->Handle));
}

 System::Boolean OCBRepFill_OffsetAncestors::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((BRepFill_OffsetAncestors*)nativeHandle)->IsDone());
}

 System::Boolean OCBRepFill_OffsetAncestors::HasAncestor(OCNaroWrappers::OCTopoDS_Edge^ S1)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFill_OffsetAncestors*)nativeHandle)->HasAncestor(*((TopoDS_Edge*)S1->Handle)));
}

OCTopoDS_Shape^ OCBRepFill_OffsetAncestors::Ancestor(OCNaroWrappers::OCTopoDS_Edge^ S1)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepFill_OffsetAncestors*)nativeHandle)->Ancestor(*((TopoDS_Edge*)S1->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}


