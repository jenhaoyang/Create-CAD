// File generated by CPPExt (CPP file)
//

#include "BRepFill_EdgeOnSurfLaw.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Wire.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBRepFill_EdgeOnSurfLaw::OCBRepFill_EdgeOnSurfLaw(Handle(BRepFill_EdgeOnSurfLaw)* nativeHandle) : OCBRepFill_LocationLaw((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepFill_EdgeOnSurfLaw(*nativeHandle);
}

OCBRepFill_EdgeOnSurfLaw::OCBRepFill_EdgeOnSurfLaw(OCNaroWrappers::OCTopoDS_Wire^ Path, OCNaroWrappers::OCTopoDS_Shape^ Surf) : OCBRepFill_LocationLaw((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepFill_EdgeOnSurfLaw(new BRepFill_EdgeOnSurfLaw(*((TopoDS_Wire*)Path->Handle), *((TopoDS_Shape*)Surf->Handle)));
}

 System::Boolean OCBRepFill_EdgeOnSurfLaw::HasResult()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepFill_EdgeOnSurfLaw*)nativeHandle))->HasResult());
}


