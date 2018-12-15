// File generated by CPPExt (CPP file)
//

#include "Select3D_SensitiveTriangulation.h"
#include "../Converter.h"
#include "../Poly/Poly_Triangulation.h"
#include "../TColStd/TColStd_HArray1OfInteger.h"
#include "../SelectBasics/SelectBasics_EntityOwner.h"
#include "../TopLoc/TopLoc_Location.h"
#include "../gp/gp_Pnt.h"
#include "Select3D_Projector.h"
#include "../SelectBasics/SelectBasics_ListOfBox2d.h"
#include "Select3D_SensitiveEntity.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../Bnd/Bnd_Box2d.h"
#include "../gp/gp_Lin.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_XY.h"


using namespace OCNaroWrappers;

OCSelect3D_SensitiveTriangulation::OCSelect3D_SensitiveTriangulation(Handle(Select3D_SensitiveTriangulation)* nativeHandle) : OCSelect3D_SensitiveEntity((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Select3D_SensitiveTriangulation(*nativeHandle);
}

OCSelect3D_SensitiveTriangulation::OCSelect3D_SensitiveTriangulation(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCPoly_Triangulation^ aTriangulation, OCNaroWrappers::OCTopLoc_Location^ aLoc, System::Boolean InteriorFlag) : OCSelect3D_SensitiveEntity((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Select3D_SensitiveTriangulation(new Select3D_SensitiveTriangulation(*((Handle_SelectBasics_EntityOwner*)OwnerId->Handle), *((Handle_Poly_Triangulation*)aTriangulation->Handle), *((TopLoc_Location*)aLoc->Handle), OCConverter::BooleanToStandardBoolean(InteriorFlag)));
}

OCSelect3D_SensitiveTriangulation::OCSelect3D_SensitiveTriangulation(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCPoly_Triangulation^ aTriangulation, OCNaroWrappers::OCTopLoc_Location^ aLoc, OCNaroWrappers::OCTColStd_HArray1OfInteger^ thefreeedges, OCNaroWrappers::OCgp_Pnt^ theCDG, System::Boolean InteriorFlag) : OCSelect3D_SensitiveEntity((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Select3D_SensitiveTriangulation(new Select3D_SensitiveTriangulation(*((Handle_SelectBasics_EntityOwner*)OwnerId->Handle), *((Handle_Poly_Triangulation*)aTriangulation->Handle), *((TopLoc_Location*)aLoc->Handle), *((Handle_TColStd_HArray1OfInteger*)thefreeedges->Handle), *((gp_Pnt*)theCDG->Handle), OCConverter::BooleanToStandardBoolean(InteriorFlag)));
}

 void OCSelect3D_SensitiveTriangulation::Project(OCNaroWrappers::OCSelect3D_Projector^ aProjector)
{
  (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->Project(*((Handle_Select3D_Projector*)aProjector->Handle));
}

 void OCSelect3D_SensitiveTriangulation::Areas(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ boxes)
{
  (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->Areas(*((SelectBasics_ListOfBox2d*)boxes->Handle));
}

OCSelect3D_SensitiveEntity^ OCSelect3D_SensitiveTriangulation::GetConnected(OCNaroWrappers::OCTopLoc_Location^ aLocation)
{
  Handle(Select3D_SensitiveEntity) tmp = (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->GetConnected(*((TopLoc_Location*)aLocation->Handle));
  return gcnew OCSelect3D_SensitiveEntity(&tmp);
}

 System::Boolean OCSelect3D_SensitiveTriangulation::Matches(Standard_Real X, Standard_Real Y, Standard_Real aTol, Standard_Real& DMin)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->Matches(X, Y, aTol, DMin));
}

 System::Boolean OCSelect3D_SensitiveTriangulation::Matches(Standard_Real XMin, Standard_Real YMin, Standard_Real XMax, Standard_Real YMax, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->Matches(XMin, YMin, XMax, YMax, aTol));
}

 System::Boolean OCSelect3D_SensitiveTriangulation::Matches(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Polyline, OCNaroWrappers::OCBnd_Box2d^ aBox, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->Matches(*((TColgp_Array1OfPnt2d*)Polyline->Handle), *((Bnd_Box2d*)aBox->Handle), aTol));
}

 Standard_Real OCSelect3D_SensitiveTriangulation::ComputeDepth(OCNaroWrappers::OCgp_Lin^ EyeLine)
{
  return (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->ComputeDepth(*((gp_Lin*)EyeLine->Handle));
}

 Standard_Integer OCSelect3D_SensitiveTriangulation::DetectedTriangle()
{
  return (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->DetectedTriangle();
}

OCPoly_Triangulation^ OCSelect3D_SensitiveTriangulation::Triangulation()
{
  Handle(Poly_Triangulation) tmp = (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->Triangulation();
  return gcnew OCPoly_Triangulation(&tmp);
}

OCgp_Pnt^ OCSelect3D_SensitiveTriangulation::CDG3D()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->CDG3D();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Pnt2d^ OCSelect3D_SensitiveTriangulation::CDG2D()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->CDG2D();
  return gcnew OCgp_Pnt2d(tmp);
}

 Standard_Integer OCSelect3D_SensitiveTriangulation::Status(OCNaroWrappers::OCgp_XY^ p0, OCNaroWrappers::OCgp_XY^ p1, OCNaroWrappers::OCgp_XY^ p2, OCNaroWrappers::OCgp_XY^ aPoint, Standard_Real aTol, Standard_Real& Dmin)
{
  return (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->Status(*((gp_XY*)p0->Handle), *((gp_XY*)p1->Handle), *((gp_XY*)p2->Handle), *((gp_XY*)aPoint->Handle), aTol, Dmin);
}

 System::Boolean OCSelect3D_SensitiveTriangulation::HasInitLocation()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->HasInitLocation());
}

OCTopLoc_Location^ OCSelect3D_SensitiveTriangulation::GetInitLocation()
{
  TopLoc_Location* tmp = new TopLoc_Location();
  *tmp = (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->GetInitLocation();
  return gcnew OCTopLoc_Location(tmp);
}

 void OCSelect3D_SensitiveTriangulation::ResetLocation()
{
  (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->ResetLocation();
}

 void OCSelect3D_SensitiveTriangulation::SetLocation(OCNaroWrappers::OCTopLoc_Location^ aLoc)
{
  (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->SetLocation(*((TopLoc_Location*)aLoc->Handle));
}

 void OCSelect3D_SensitiveTriangulation::Dump(Standard_OStream& S, System::Boolean FullDump)
{
  (*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->Dump(S, OCConverter::BooleanToStandardBoolean(FullDump));
}

 System::Boolean OCSelect3D_SensitiveTriangulation::DetectedTriangle(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, OCNaroWrappers::OCgp_Pnt^ P3)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->DetectedTriangle(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle), *((gp_Pnt*)P3->Handle)));
}

 System::Boolean OCSelect3D_SensitiveTriangulation::DetectedTriangle2d(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2, OCNaroWrappers::OCgp_Pnt2d^ P3)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveTriangulation*)nativeHandle))->DetectedTriangle2d(*((gp_Pnt2d*)P1->Handle), *((gp_Pnt2d*)P2->Handle), *((gp_Pnt2d*)P3->Handle)));
}


