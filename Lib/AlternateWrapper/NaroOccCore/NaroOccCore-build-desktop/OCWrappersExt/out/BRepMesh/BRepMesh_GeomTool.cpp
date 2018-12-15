// File generated by CPPExt (CPP file)
//

#include "BRepMesh_GeomTool.h"
#include "../Converter.h"
#include "../BRepAdaptor/BRepAdaptor_Curve.h"
#include "../BRepAdaptor/BRepAdaptor_HSurface.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Dir.h"


using namespace OCNaroWrappers;

OCBRepMesh_GeomTool::OCBRepMesh_GeomTool(BRepMesh_GeomTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_GeomTool::OCBRepMesh_GeomTool(OCNaroWrappers::OCBRepAdaptor_Curve^ C, Standard_Real Ufirst, Standard_Real Ulast, Standard_Real AngDefl, Standard_Real Deflection, Standard_Integer nbpointsmin) 
{
  nativeHandle = new BRepMesh_GeomTool(*((BRepAdaptor_Curve*)C->Handle), Ufirst, Ulast, AngDefl, Deflection, nbpointsmin);
}

OCBRepMesh_GeomTool::OCBRepMesh_GeomTool(OCNaroWrappers::OCBRepAdaptor_HSurface^ S, Standard_Real ParamIso, OCGeomAbs_IsoType Type, Standard_Real Ufirst, Standard_Real Ulast, Standard_Real AngDefl, Standard_Real Deflection, Standard_Integer nbpointsmin) 
{
  nativeHandle = new BRepMesh_GeomTool(*((Handle_BRepAdaptor_HSurface*)S->Handle), ParamIso, (GeomAbs_IsoType)Type, Ufirst, Ulast, AngDefl, Deflection, nbpointsmin);
}

 Standard_Integer OCBRepMesh_GeomTool::AddPoint(OCNaroWrappers::OCgp_Pnt^ thePnt, Standard_Real theParam, System::Boolean theIsReplace)
{
  return ((BRepMesh_GeomTool*)nativeHandle)->AddPoint(*((gp_Pnt*)thePnt->Handle), theParam, OCConverter::BooleanToStandardBoolean(theIsReplace));
}

 Standard_Integer OCBRepMesh_GeomTool::NbPoints()
{
  return ((BRepMesh_GeomTool*)nativeHandle)->NbPoints();
}

 void OCBRepMesh_GeomTool::Value(Standard_Real IsoParam, Standard_Integer Index, Standard_Real& W, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Pnt2d^ UV)
{
  ((BRepMesh_GeomTool*)nativeHandle)->Value(IsoParam, Index, W, *((gp_Pnt*)P->Handle), *((gp_Pnt2d*)UV->Handle));
}

 void OCBRepMesh_GeomTool::Value(OCNaroWrappers::OCBRepAdaptor_Curve^ C, OCNaroWrappers::OCBRepAdaptor_HSurface^ S, Standard_Integer Index, Standard_Real& W, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Pnt2d^ UV)
{
  ((BRepMesh_GeomTool*)nativeHandle)->Value(*((BRepAdaptor_Curve*)C->Handle), *((Handle_BRepAdaptor_HSurface*)S->Handle), Index, W, *((gp_Pnt*)P->Handle), *((gp_Pnt2d*)UV->Handle));
}

 void OCBRepMesh_GeomTool::D0(OCNaroWrappers::OCBRepAdaptor_HSurface^ F, Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P)
{
  BRepMesh_GeomTool::D0(*((Handle_BRepAdaptor_HSurface*)F->Handle), U, V, *((gp_Pnt*)P->Handle));
}

 System::Boolean OCBRepMesh_GeomTool::Normal(OCNaroWrappers::OCBRepAdaptor_HSurface^ F, Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Dir^ Nor)
{
  return OCConverter::StandardBooleanToBoolean(BRepMesh_GeomTool::Normal(*((Handle_BRepAdaptor_HSurface*)F->Handle), U, V, *((gp_Pnt*)P->Handle), *((gp_Dir*)Nor->Handle)));
}


