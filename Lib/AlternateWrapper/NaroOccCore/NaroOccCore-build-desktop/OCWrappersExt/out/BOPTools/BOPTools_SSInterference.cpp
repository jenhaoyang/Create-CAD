// File generated by CPPExt (CPP file)
//

#include "BOPTools_SSInterference.h"
#include "../Converter.h"
#include "../IntTools/IntTools_SequenceOfCurves.h"
#include "../IntTools/IntTools_SequenceOfPntOn2Faces.h"
#include "BOPTools_PaveBlock.h"
#include "BOPTools_ListOfPaveBlock.h"
#include "BOPTools_PaveSet.h"
#include "BOPTools_SequenceOfCurves.h"
#include "BOPTools_IndexedDataMapOfIntegerState.h"
#include "../TColStd/TColStd_ListOfInteger.h"


using namespace OCNaroWrappers;

OCBOPTools_SSInterference::OCBOPTools_SSInterference(BOPTools_SSInterference* nativeHandle) : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_SSInterference::OCBOPTools_SSInterference() : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_SSInterference();
}

OCBOPTools_SSInterference::OCBOPTools_SSInterference(Standard_Integer anIndex1, Standard_Integer anIndex2, Standard_Real aTolR3D, Standard_Real aTolR2D, OCNaroWrappers::OCIntTools_SequenceOfCurves^ aCurves, OCNaroWrappers::OCIntTools_SequenceOfPntOn2Faces^ aPnts) : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_SSInterference(anIndex1, anIndex2, aTolR3D, aTolR2D, *((IntTools_SequenceOfCurves*)aCurves->Handle), *((IntTools_SequenceOfPntOn2Faces*)aPnts->Handle));
}

 void OCBOPTools_SSInterference::AppendBlock(OCNaroWrappers::OCBOPTools_PaveBlock^ aPB)
{
  ((BOPTools_SSInterference*)nativeHandle)->AppendBlock(*((BOPTools_PaveBlock*)aPB->Handle));
}

OCBOPTools_ListOfPaveBlock^ OCBOPTools_SSInterference::PaveBlocks()
{
  BOPTools_ListOfPaveBlock* tmp = new BOPTools_ListOfPaveBlock();
  *tmp = ((BOPTools_SSInterference*)nativeHandle)->PaveBlocks();
  return gcnew OCBOPTools_ListOfPaveBlock(tmp);
}

OCBOPTools_PaveSet^ OCBOPTools_SSInterference::NewPaveSet()
{
  BOPTools_PaveSet* tmp = new BOPTools_PaveSet();
  *tmp = ((BOPTools_SSInterference*)nativeHandle)->NewPaveSet();
  return gcnew OCBOPTools_PaveSet(tmp);
}

 Standard_Real OCBOPTools_SSInterference::TolR3D()
{
  return ((BOPTools_SSInterference*)nativeHandle)->TolR3D();
}

 Standard_Real OCBOPTools_SSInterference::TolR2D()
{
  return ((BOPTools_SSInterference*)nativeHandle)->TolR2D();
}

OCBOPTools_SequenceOfCurves^ OCBOPTools_SSInterference::Curves()
{
  BOPTools_SequenceOfCurves* tmp = new BOPTools_SequenceOfCurves();
  *tmp = ((BOPTools_SSInterference*)nativeHandle)->Curves();
  return gcnew OCBOPTools_SequenceOfCurves(tmp);
}

 void OCBOPTools_SSInterference::SetTangentFacesFlag(System::Boolean aFlag)
{
  ((BOPTools_SSInterference*)nativeHandle)->SetTangentFacesFlag(OCConverter::BooleanToStandardBoolean(aFlag));
}

 System::Boolean OCBOPTools_SSInterference::IsTangentFaces()
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_SSInterference*)nativeHandle)->IsTangentFaces());
}

 void OCBOPTools_SSInterference::SetSenseFlag(Standard_Integer aFlag)
{
  ((BOPTools_SSInterference*)nativeHandle)->SetSenseFlag(aFlag);
}

 Standard_Integer OCBOPTools_SSInterference::SenseFlag()
{
  return ((BOPTools_SSInterference*)nativeHandle)->SenseFlag();
}

 void OCBOPTools_SSInterference::SetStatesMap(OCNaroWrappers::OCBOPTools_IndexedDataMapOfIntegerState^ aStatesMap)
{
  ((BOPTools_SSInterference*)nativeHandle)->SetStatesMap(*((BOPTools_IndexedDataMapOfIntegerState*)aStatesMap->Handle));
}

OCBOPTools_IndexedDataMapOfIntegerState^ OCBOPTools_SSInterference::StatesMap()
{
  BOPTools_IndexedDataMapOfIntegerState* tmp = new BOPTools_IndexedDataMapOfIntegerState(0);
  *tmp = ((BOPTools_SSInterference*)nativeHandle)->StatesMap();
  return gcnew OCBOPTools_IndexedDataMapOfIntegerState(tmp);
}

 void OCBOPTools_SSInterference::SetAlonePnts(OCNaroWrappers::OCIntTools_SequenceOfPntOn2Faces^ aPnts)
{
  ((BOPTools_SSInterference*)nativeHandle)->SetAlonePnts(*((IntTools_SequenceOfPntOn2Faces*)aPnts->Handle));
}

OCIntTools_SequenceOfPntOn2Faces^ OCBOPTools_SSInterference::AlonePnts()
{
  IntTools_SequenceOfPntOn2Faces* tmp = new IntTools_SequenceOfPntOn2Faces();
  *tmp = ((BOPTools_SSInterference*)nativeHandle)->AlonePnts();
  return gcnew OCIntTools_SequenceOfPntOn2Faces(tmp);
}

OCTColStd_ListOfInteger^ OCBOPTools_SSInterference::AloneVertices()
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = ((BOPTools_SSInterference*)nativeHandle)->AloneVertices();
  return gcnew OCTColStd_ListOfInteger(tmp);
}

 void OCBOPTools_SSInterference::SetSharedEdges(OCNaroWrappers::OCTColStd_ListOfInteger^ aLS)
{
  ((BOPTools_SSInterference*)nativeHandle)->SetSharedEdges(*((TColStd_ListOfInteger*)aLS->Handle));
}

OCTColStd_ListOfInteger^ OCBOPTools_SSInterference::SharedEdges()
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = ((BOPTools_SSInterference*)nativeHandle)->SharedEdges();
  return gcnew OCTColStd_ListOfInteger(tmp);
}


