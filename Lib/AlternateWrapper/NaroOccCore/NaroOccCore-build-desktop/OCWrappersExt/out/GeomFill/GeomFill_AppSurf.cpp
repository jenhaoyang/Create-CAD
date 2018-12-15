// File generated by CPPExt (CPP file)
//

#include "GeomFill_AppSurf.h"
#include "../Converter.h"
#include "../TColgp/TColgp_HArray2OfPnt.h"
#include "../TColStd/TColStd_HArray2OfReal.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../TColStd/TColStd_HArray1OfInteger.h"
#include "GeomFill_SectionGenerator.h"
#include "GeomFill_Line.h"
#include "../TColgp/TColgp_Array2OfPnt.h"
#include "../TColStd/TColStd_Array2OfReal.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../TColStd/TColStd_Array1OfInteger.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"


using namespace OCNaroWrappers;

OCGeomFill_AppSurf::OCGeomFill_AppSurf(GeomFill_AppSurf* nativeHandle) : OCAppBlend_Approx((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGeomFill_AppSurf::OCGeomFill_AppSurf() : OCAppBlend_Approx((OCDummy^)nullptr)

{
  nativeHandle = new GeomFill_AppSurf();
}

OCGeomFill_AppSurf::OCGeomFill_AppSurf(Standard_Integer Degmin, Standard_Integer Degmax, Standard_Real Tol3d, Standard_Real Tol2d, Standard_Integer NbIt, System::Boolean KnownParameters) : OCAppBlend_Approx((OCDummy^)nullptr)

{
  nativeHandle = new GeomFill_AppSurf(Degmin, Degmax, Tol3d, Tol2d, NbIt, OCConverter::BooleanToStandardBoolean(KnownParameters));
}

 void OCGeomFill_AppSurf::Init(Standard_Integer Degmin, Standard_Integer Degmax, Standard_Real Tol3d, Standard_Real Tol2d, Standard_Integer NbIt, System::Boolean KnownParameters)
{
  ((GeomFill_AppSurf*)nativeHandle)->Init(Degmin, Degmax, Tol3d, Tol2d, NbIt, OCConverter::BooleanToStandardBoolean(KnownParameters));
}

 void OCGeomFill_AppSurf::SetParType(OCApprox_ParametrizationType ParType)
{
  ((GeomFill_AppSurf*)nativeHandle)->SetParType((Approx_ParametrizationType)ParType);
}

 void OCGeomFill_AppSurf::SetContinuity(OCGeomAbs_Shape C)
{
  ((GeomFill_AppSurf*)nativeHandle)->SetContinuity((GeomAbs_Shape)C);
}

 void OCGeomFill_AppSurf::SetCriteriumWeight(Standard_Real W1, Standard_Real W2, Standard_Real W3)
{
  ((GeomFill_AppSurf*)nativeHandle)->SetCriteriumWeight(W1, W2, W3);
}

 OCApprox_ParametrizationType OCGeomFill_AppSurf::ParType()
{
  return (OCApprox_ParametrizationType)(((GeomFill_AppSurf*)nativeHandle)->ParType());
}

 OCGeomAbs_Shape OCGeomFill_AppSurf::Continuity()
{
  return (OCGeomAbs_Shape)(((GeomFill_AppSurf*)nativeHandle)->Continuity());
}

 void OCGeomFill_AppSurf::CriteriumWeight(Standard_Real& W1, Standard_Real& W2, Standard_Real& W3)
{
  ((GeomFill_AppSurf*)nativeHandle)->CriteriumWeight(W1, W2, W3);
}

 void OCGeomFill_AppSurf::Perform(OCNaroWrappers::OCGeomFill_Line^ Lin, OCNaroWrappers::OCGeomFill_SectionGenerator^ SecGen, System::Boolean SpApprox)
{
  ((GeomFill_AppSurf*)nativeHandle)->Perform(*((Handle_GeomFill_Line*)Lin->Handle), *((GeomFill_SectionGenerator*)SecGen->Handle), OCConverter::BooleanToStandardBoolean(SpApprox));
}

 void OCGeomFill_AppSurf::PerformSmoothing(OCNaroWrappers::OCGeomFill_Line^ Lin, OCNaroWrappers::OCGeomFill_SectionGenerator^ SecGen)
{
  ((GeomFill_AppSurf*)nativeHandle)->PerformSmoothing(*((Handle_GeomFill_Line*)Lin->Handle), *((GeomFill_SectionGenerator*)SecGen->Handle));
}

 void OCGeomFill_AppSurf::Perform(OCNaroWrappers::OCGeomFill_Line^ Lin, OCNaroWrappers::OCGeomFill_SectionGenerator^ SecGen, Standard_Integer NbMaxP)
{
  ((GeomFill_AppSurf*)nativeHandle)->Perform(*((Handle_GeomFill_Line*)Lin->Handle), *((GeomFill_SectionGenerator*)SecGen->Handle), NbMaxP);
}

 System::Boolean OCGeomFill_AppSurf::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((GeomFill_AppSurf*)nativeHandle)->IsDone());
}

 void OCGeomFill_AppSurf::SurfShape(Standard_Integer& UDegree, Standard_Integer& VDegree, Standard_Integer& NbUPoles, Standard_Integer& NbVPoles, Standard_Integer& NbUKnots, Standard_Integer& NbVKnots)
{
  ((GeomFill_AppSurf*)nativeHandle)->SurfShape(UDegree, VDegree, NbUPoles, NbVPoles, NbUKnots, NbVKnots);
}

 void OCGeomFill_AppSurf::Surface(OCNaroWrappers::OCTColgp_Array2OfPnt^ TPoles, OCNaroWrappers::OCTColStd_Array2OfReal^ TWeights, OCNaroWrappers::OCTColStd_Array1OfReal^ TUKnots, OCNaroWrappers::OCTColStd_Array1OfReal^ TVKnots, OCNaroWrappers::OCTColStd_Array1OfInteger^ TUMults, OCNaroWrappers::OCTColStd_Array1OfInteger^ TVMults)
{
  ((GeomFill_AppSurf*)nativeHandle)->Surface(*((TColgp_Array2OfPnt*)TPoles->Handle), *((TColStd_Array2OfReal*)TWeights->Handle), *((TColStd_Array1OfReal*)TUKnots->Handle), *((TColStd_Array1OfReal*)TVKnots->Handle), *((TColStd_Array1OfInteger*)TUMults->Handle), *((TColStd_Array1OfInteger*)TVMults->Handle));
}

 Standard_Integer OCGeomFill_AppSurf::UDegree()
{
  return ((GeomFill_AppSurf*)nativeHandle)->UDegree();
}

 Standard_Integer OCGeomFill_AppSurf::VDegree()
{
  return ((GeomFill_AppSurf*)nativeHandle)->VDegree();
}

OCTColgp_Array2OfPnt^ OCGeomFill_AppSurf::SurfPoles()
{
  TColgp_Array2OfPnt* tmp = new TColgp_Array2OfPnt(0, 0, 0, 0);
  *tmp = ((GeomFill_AppSurf*)nativeHandle)->SurfPoles();
  return gcnew OCTColgp_Array2OfPnt(tmp);
}

OCTColStd_Array2OfReal^ OCGeomFill_AppSurf::SurfWeights()
{
  TColStd_Array2OfReal* tmp = new TColStd_Array2OfReal(0, 0, 0, 0);
  *tmp = ((GeomFill_AppSurf*)nativeHandle)->SurfWeights();
  return gcnew OCTColStd_Array2OfReal(tmp);
}

OCTColStd_Array1OfReal^ OCGeomFill_AppSurf::SurfUKnots()
{
  TColStd_Array1OfReal* tmp = new TColStd_Array1OfReal(0, 0);
  *tmp = ((GeomFill_AppSurf*)nativeHandle)->SurfUKnots();
  return gcnew OCTColStd_Array1OfReal(tmp);
}

OCTColStd_Array1OfReal^ OCGeomFill_AppSurf::SurfVKnots()
{
  TColStd_Array1OfReal* tmp = new TColStd_Array1OfReal(0, 0);
  *tmp = ((GeomFill_AppSurf*)nativeHandle)->SurfVKnots();
  return gcnew OCTColStd_Array1OfReal(tmp);
}

OCTColStd_Array1OfInteger^ OCGeomFill_AppSurf::SurfUMults()
{
  TColStd_Array1OfInteger* tmp = new TColStd_Array1OfInteger(0, 0);
  *tmp = ((GeomFill_AppSurf*)nativeHandle)->SurfUMults();
  return gcnew OCTColStd_Array1OfInteger(tmp);
}

OCTColStd_Array1OfInteger^ OCGeomFill_AppSurf::SurfVMults()
{
  TColStd_Array1OfInteger* tmp = new TColStd_Array1OfInteger(0, 0);
  *tmp = ((GeomFill_AppSurf*)nativeHandle)->SurfVMults();
  return gcnew OCTColStd_Array1OfInteger(tmp);
}

 Standard_Integer OCGeomFill_AppSurf::NbCurves2d()
{
  return ((GeomFill_AppSurf*)nativeHandle)->NbCurves2d();
}

 void OCGeomFill_AppSurf::Curves2dShape(Standard_Integer& Degree, Standard_Integer& NbPoles, Standard_Integer& NbKnots)
{
  ((GeomFill_AppSurf*)nativeHandle)->Curves2dShape(Degree, NbPoles, NbKnots);
}

 void OCGeomFill_AppSurf::Curve2d(Standard_Integer Index, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ TPoles, OCNaroWrappers::OCTColStd_Array1OfReal^ TKnots, OCNaroWrappers::OCTColStd_Array1OfInteger^ TMults)
{
  ((GeomFill_AppSurf*)nativeHandle)->Curve2d(Index, *((TColgp_Array1OfPnt2d*)TPoles->Handle), *((TColStd_Array1OfReal*)TKnots->Handle), *((TColStd_Array1OfInteger*)TMults->Handle));
}

 Standard_Integer OCGeomFill_AppSurf::Curves2dDegree()
{
  return ((GeomFill_AppSurf*)nativeHandle)->Curves2dDegree();
}

OCTColgp_Array1OfPnt2d^ OCGeomFill_AppSurf::Curve2dPoles(Standard_Integer Index)
{
  TColgp_Array1OfPnt2d* tmp = new TColgp_Array1OfPnt2d(0, 0);
  *tmp = ((GeomFill_AppSurf*)nativeHandle)->Curve2dPoles(Index);
  return gcnew OCTColgp_Array1OfPnt2d(tmp);
}

OCTColStd_Array1OfReal^ OCGeomFill_AppSurf::Curves2dKnots()
{
  TColStd_Array1OfReal* tmp = new TColStd_Array1OfReal(0, 0);
  *tmp = ((GeomFill_AppSurf*)nativeHandle)->Curves2dKnots();
  return gcnew OCTColStd_Array1OfReal(tmp);
}

OCTColStd_Array1OfInteger^ OCGeomFill_AppSurf::Curves2dMults()
{
  TColStd_Array1OfInteger* tmp = new TColStd_Array1OfInteger(0, 0);
  *tmp = ((GeomFill_AppSurf*)nativeHandle)->Curves2dMults();
  return gcnew OCTColStd_Array1OfInteger(tmp);
}

 void OCGeomFill_AppSurf::TolReached(Standard_Real& Tol3d, Standard_Real& Tol2d)
{
  ((GeomFill_AppSurf*)nativeHandle)->TolReached(Tol3d, Tol2d);
}

 Standard_Real OCGeomFill_AppSurf::TolCurveOnSurf(Standard_Integer Index)
{
  return ((GeomFill_AppSurf*)nativeHandle)->TolCurveOnSurf(Index);
}


