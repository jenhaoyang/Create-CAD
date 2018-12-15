// File generated by CPPExt (CPP file)
//

#include "ShapeAnalysis_Geom.h"
#include "../Converter.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "../gp/gp_Pln.h"
#include "../TColStd/TColStd_HArray2OfReal.h"
#include "../gp/gp_Trsf.h"


using namespace OCNaroWrappers;

OCShapeAnalysis_Geom::OCShapeAnalysis_Geom(ShapeAnalysis_Geom* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 System::Boolean OCShapeAnalysis_Geom::NearestPlane(OCNaroWrappers::OCTColgp_Array1OfPnt^ Pnts, OCNaroWrappers::OCgp_Pln^ aPln, Standard_Real& Dmax)
{
  return OCConverter::StandardBooleanToBoolean(ShapeAnalysis_Geom::NearestPlane(*((TColgp_Array1OfPnt*)Pnts->Handle), *((gp_Pln*)aPln->Handle), Dmax));
}

 System::Boolean OCShapeAnalysis_Geom::PositionTrsf(OCNaroWrappers::OCTColStd_HArray2OfReal^ coefs, OCNaroWrappers::OCgp_Trsf^ trsf, Standard_Real unit, Standard_Real prec)
{
  return OCConverter::StandardBooleanToBoolean(ShapeAnalysis_Geom::PositionTrsf(*((Handle_TColStd_HArray2OfReal*)coefs->Handle), *((gp_Trsf*)trsf->Handle), unit, prec));
}


