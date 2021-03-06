// File generated by CPPExt (CPP file)
//

#include "IntTools_BeanFaceIntersector.h"
#include "../Converter.h"
#include "../Geom/Geom_Surface.h"
#include "IntTools_Context.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../BRepAdaptor/BRepAdaptor_Curve.h"
#include "../BRepAdaptor/BRepAdaptor_Surface.h"
#include "IntTools_SequenceOfRanges.h"
#include "IntTools_CurveRangeSample.h"
#include "../Bnd/Bnd_Box.h"
#include "IntTools_SurfaceRangeSample.h"
#include "IntTools_CurveRangeLocalizeData.h"
#include "IntTools_SurfaceRangeLocalizeData.h"
#include "IntTools_ListOfCurveRangeSample.h"
#include "IntTools_ListOfSurfaceRangeSample.h"


using namespace OCNaroWrappers;

OCIntTools_BeanFaceIntersector::OCIntTools_BeanFaceIntersector(IntTools_BeanFaceIntersector* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntTools_BeanFaceIntersector::OCIntTools_BeanFaceIntersector() 
{
  nativeHandle = new IntTools_BeanFaceIntersector();
}

OCIntTools_BeanFaceIntersector::OCIntTools_BeanFaceIntersector(OCNaroWrappers::OCTopoDS_Edge^ theEdge, OCNaroWrappers::OCTopoDS_Face^ theFace) 
{
  nativeHandle = new IntTools_BeanFaceIntersector(*((TopoDS_Edge*)theEdge->Handle), *((TopoDS_Face*)theFace->Handle));
}

OCIntTools_BeanFaceIntersector::OCIntTools_BeanFaceIntersector(OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve, OCNaroWrappers::OCBRepAdaptor_Surface^ theSurface, Standard_Real theBeanTolerance, Standard_Real theFaceTolerance) 
{
  nativeHandle = new IntTools_BeanFaceIntersector(*((BRepAdaptor_Curve*)theCurve->Handle), *((BRepAdaptor_Surface*)theSurface->Handle), theBeanTolerance, theFaceTolerance);
}

OCIntTools_BeanFaceIntersector::OCIntTools_BeanFaceIntersector(OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve, OCNaroWrappers::OCBRepAdaptor_Surface^ theSurface, Standard_Real theFirstParOnCurve, Standard_Real theLastParOnCurve, Standard_Real theUMinParameter, Standard_Real theUMaxParameter, Standard_Real theVMinParameter, Standard_Real theVMaxParameter, Standard_Real theBeanTolerance, Standard_Real theFaceTolerance) 
{
  nativeHandle = new IntTools_BeanFaceIntersector(*((BRepAdaptor_Curve*)theCurve->Handle), *((BRepAdaptor_Surface*)theSurface->Handle), theFirstParOnCurve, theLastParOnCurve, theUMinParameter, theUMaxParameter, theVMinParameter, theVMaxParameter, theBeanTolerance, theFaceTolerance);
}

 void OCIntTools_BeanFaceIntersector::Init(OCNaroWrappers::OCTopoDS_Edge^ theEdge, OCNaroWrappers::OCTopoDS_Face^ theFace)
{
  ((IntTools_BeanFaceIntersector*)nativeHandle)->Init(*((TopoDS_Edge*)theEdge->Handle), *((TopoDS_Face*)theFace->Handle));
}

 void OCIntTools_BeanFaceIntersector::Init(OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve, OCNaroWrappers::OCBRepAdaptor_Surface^ theSurface, Standard_Real theBeanTolerance, Standard_Real theFaceTolerance)
{
  ((IntTools_BeanFaceIntersector*)nativeHandle)->Init(*((BRepAdaptor_Curve*)theCurve->Handle), *((BRepAdaptor_Surface*)theSurface->Handle), theBeanTolerance, theFaceTolerance);
}

 void OCIntTools_BeanFaceIntersector::Init(OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve, OCNaroWrappers::OCBRepAdaptor_Surface^ theSurface, Standard_Real theFirstParOnCurve, Standard_Real theLastParOnCurve, Standard_Real theUMinParameter, Standard_Real theUMaxParameter, Standard_Real theVMinParameter, Standard_Real theVMaxParameter, Standard_Real theBeanTolerance, Standard_Real theFaceTolerance)
{
  ((IntTools_BeanFaceIntersector*)nativeHandle)->Init(*((BRepAdaptor_Curve*)theCurve->Handle), *((BRepAdaptor_Surface*)theSurface->Handle), theFirstParOnCurve, theLastParOnCurve, theUMinParameter, theUMaxParameter, theVMinParameter, theVMaxParameter, theBeanTolerance, theFaceTolerance);
}

 void OCIntTools_BeanFaceIntersector::SetContext(OCNaroWrappers::OCIntTools_Context^ theContext)
{
  ((IntTools_BeanFaceIntersector*)nativeHandle)->SetContext(*((Handle_IntTools_Context*)theContext->Handle));
}

OCIntTools_Context^ OCIntTools_BeanFaceIntersector::Context()
{
  Handle(IntTools_Context) tmp = ((IntTools_BeanFaceIntersector*)nativeHandle)->Context();
  return gcnew OCIntTools_Context(&tmp);
}

 void OCIntTools_BeanFaceIntersector::SetBeanParameters(Standard_Real theFirstParOnCurve, Standard_Real theLastParOnCurve)
{
  ((IntTools_BeanFaceIntersector*)nativeHandle)->SetBeanParameters(theFirstParOnCurve, theLastParOnCurve);
}

 void OCIntTools_BeanFaceIntersector::SetSurfaceParameters(Standard_Real theUMinParameter, Standard_Real theUMaxParameter, Standard_Real theVMinParameter, Standard_Real theVMaxParameter)
{
  ((IntTools_BeanFaceIntersector*)nativeHandle)->SetSurfaceParameters(theUMinParameter, theUMaxParameter, theVMinParameter, theVMaxParameter);
}

 void OCIntTools_BeanFaceIntersector::Perform()
{
  ((IntTools_BeanFaceIntersector*)nativeHandle)->Perform();
}

 System::Boolean OCIntTools_BeanFaceIntersector::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntTools_BeanFaceIntersector*)nativeHandle)->IsDone());
}

OCIntTools_SequenceOfRanges^ OCIntTools_BeanFaceIntersector::Result()
{
  IntTools_SequenceOfRanges* tmp = new IntTools_SequenceOfRanges();
  *tmp = ((IntTools_BeanFaceIntersector*)nativeHandle)->Result();
  return gcnew OCIntTools_SequenceOfRanges(tmp);
}

 void OCIntTools_BeanFaceIntersector::Result(OCNaroWrappers::OCIntTools_SequenceOfRanges^ theResults)
{
  ((IntTools_BeanFaceIntersector*)nativeHandle)->Result(*((IntTools_SequenceOfRanges*)theResults->Handle));
}


