// File generated by CPPExt (CPP file)
//

#include "BRep_TFace.h"
#include "../Converter.h"
#include "../Geom/Geom_Surface.h"
#include "../Poly/Poly_Triangulation.h"
#include "../TopLoc/TopLoc_Location.h"
#include "../TopoDS/TopoDS_TShape.h"


using namespace OCNaroWrappers;

OCBRep_TFace::OCBRep_TFace(Handle(BRep_TFace)* nativeHandle) : OCTopoDS_TFace((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRep_TFace(*nativeHandle);
}

OCBRep_TFace::OCBRep_TFace() : OCTopoDS_TFace((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRep_TFace(new BRep_TFace());
}

OCGeom_Surface^ OCBRep_TFace::Surface()
{
  Handle(Geom_Surface) tmp = (*((Handle_BRep_TFace*)nativeHandle))->Surface();
  return gcnew OCGeom_Surface(&tmp);
}

OCPoly_Triangulation^ OCBRep_TFace::Triangulation()
{
  Handle(Poly_Triangulation) tmp = (*((Handle_BRep_TFace*)nativeHandle))->Triangulation();
  return gcnew OCPoly_Triangulation(&tmp);
}

OCTopLoc_Location^ OCBRep_TFace::Location()
{
  TopLoc_Location* tmp = new TopLoc_Location();
  *tmp = (*((Handle_BRep_TFace*)nativeHandle))->Location();
  return gcnew OCTopLoc_Location(tmp);
}

 Standard_Real OCBRep_TFace::Tolerance()
{
  return (*((Handle_BRep_TFace*)nativeHandle))->Tolerance();
}

 void OCBRep_TFace::Surface(OCNaroWrappers::OCGeom_Surface^ S)
{
  (*((Handle_BRep_TFace*)nativeHandle))->Surface(*((Handle_Geom_Surface*)S->Handle));
}

 void OCBRep_TFace::Triangulation(OCNaroWrappers::OCPoly_Triangulation^ T)
{
  (*((Handle_BRep_TFace*)nativeHandle))->Triangulation(*((Handle_Poly_Triangulation*)T->Handle));
}

 void OCBRep_TFace::Location(OCNaroWrappers::OCTopLoc_Location^ L)
{
  (*((Handle_BRep_TFace*)nativeHandle))->Location(*((TopLoc_Location*)L->Handle));
}

 void OCBRep_TFace::Tolerance(Standard_Real T)
{
  (*((Handle_BRep_TFace*)nativeHandle))->Tolerance(T);
}

 System::Boolean OCBRep_TFace::NaturalRestriction()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRep_TFace*)nativeHandle))->NaturalRestriction());
}

 void OCBRep_TFace::NaturalRestriction(System::Boolean N)
{
  (*((Handle_BRep_TFace*)nativeHandle))->NaturalRestriction(OCConverter::BooleanToStandardBoolean(N));
}

OCTopoDS_TShape^ OCBRep_TFace::EmptyCopy()
{
  Handle(TopoDS_TShape) tmp = (*((Handle_BRep_TFace*)nativeHandle))->EmptyCopy();
  return gcnew OCTopoDS_TShape(&tmp);
}


