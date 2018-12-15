// File generated by CPPExt (CPP file)
//

#include "BOPTools_StateFiller.h"
#include "../Converter.h"
#include "BOPTools_PaveFiller.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBOPTools_StateFiller::OCBOPTools_StateFiller(BOPTools_StateFiller* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_StateFiller::OCBOPTools_StateFiller(OCNaroWrappers::OCBOPTools_PaveFiller^ aFiller) 
{
  nativeHandle = new BOPTools_StateFiller(*((BOPTools_PaveFiller*)aFiller->Handle));
}

 void OCBOPTools_StateFiller::Do()
{
  ((BOPTools_StateFiller*)nativeHandle)->Do();
}

 System::Boolean OCBOPTools_StateFiller::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_StateFiller*)nativeHandle)->IsDone());
}

 OCBooleanOperations_StateOfShape OCBOPTools_StateFiller::ConvertState(OCTopAbs_State aSt)
{
  return (OCBooleanOperations_StateOfShape)(BOPTools_StateFiller::ConvertState((TopAbs_State)aSt));
}

 OCTopAbs_State OCBOPTools_StateFiller::ConvertState(OCBooleanOperations_StateOfShape aSt)
{
  return (OCTopAbs_State)(BOPTools_StateFiller::ConvertState((BooleanOperations_StateOfShape)aSt));
}

 OCTopAbs_State OCBOPTools_StateFiller::ClassifyEdgeToSolidByOnePoint(OCNaroWrappers::OCTopoDS_Edge^ anEdge, OCNaroWrappers::OCTopoDS_Shape^ aRef)
{
  return (OCTopAbs_State)(((BOPTools_StateFiller*)nativeHandle)->ClassifyEdgeToSolidByOnePoint(*((TopoDS_Edge*)anEdge->Handle), *((TopoDS_Shape*)aRef->Handle)));
}

 OCBooleanOperations_StateOfShape OCBOPTools_StateFiller::ClassifyShapeByRef(OCNaroWrappers::OCTopoDS_Shape^ aShape, OCNaroWrappers::OCTopoDS_Shape^ aRef)
{
  return (OCBooleanOperations_StateOfShape)(((BOPTools_StateFiller*)nativeHandle)->ClassifyShapeByRef(*((TopoDS_Shape*)aShape->Handle), *((TopoDS_Shape*)aRef->Handle)));
}

 OCTopAbs_ShapeEnum OCBOPTools_StateFiller::SubType(OCNaroWrappers::OCTopoDS_Shape^ aShape)
{
  return (OCTopAbs_ShapeEnum)(BOPTools_StateFiller::SubType(*((TopoDS_Shape*)aShape->Handle)));
}


