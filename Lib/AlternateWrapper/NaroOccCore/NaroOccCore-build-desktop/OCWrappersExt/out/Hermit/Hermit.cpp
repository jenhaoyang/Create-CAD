// File generated by CPPExt (CPP file)
//

#include "Hermit.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



OCGeom2d_BSplineCurve^ OCHermit::Solution(OCNaroWrappers::OCGeom_BSplineCurve^ BS, Standard_Real TolPoles, Standard_Real TolKnots)
{
  Handle(Geom2d_BSplineCurve) tmp = Hermit::Solution(*((Handle_Geom_BSplineCurve*)BS->Handle), TolPoles, TolKnots);
  return gcnew OCGeom2d_BSplineCurve(&tmp);
}

OCGeom2d_BSplineCurve^ OCHermit::Solution(OCNaroWrappers::OCGeom2d_BSplineCurve^ BS, Standard_Real TolPoles, Standard_Real TolKnots)
{
  Handle(Geom2d_BSplineCurve) tmp = Hermit::Solution(*((Handle_Geom2d_BSplineCurve*)BS->Handle), TolPoles, TolKnots);
  return gcnew OCGeom2d_BSplineCurve(&tmp);
}

 void OCHermit::Solutionbis(OCNaroWrappers::OCGeom_BSplineCurve^ BS, Standard_Real& Knotmin, Standard_Real& Knotmax, Standard_Real TolPoles, Standard_Real TolKnots)
{
  Hermit::Solutionbis(*((Handle_Geom_BSplineCurve*)BS->Handle), Knotmin, Knotmax, TolPoles, TolKnots);
}


