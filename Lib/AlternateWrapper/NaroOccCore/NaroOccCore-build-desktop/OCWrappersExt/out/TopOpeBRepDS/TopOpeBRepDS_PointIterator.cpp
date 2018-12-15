// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_PointIterator.h"
#include "../Converter.h"
#include "TopOpeBRepDS_ListOfInterference.h"
#include "TopOpeBRepDS_Interference.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_PointIterator::OCTopOpeBRepDS_PointIterator(TopOpeBRepDS_PointIterator* nativeHandle) : OCTopOpeBRepDS_InterferenceIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_PointIterator::OCTopOpeBRepDS_PointIterator(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ L) : OCTopOpeBRepDS_InterferenceIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_PointIterator(*((TopOpeBRepDS_ListOfInterference*)L->Handle));
}

 System::Boolean OCTopOpeBRepDS_PointIterator::MatchInterference(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_PointIterator*)nativeHandle)->MatchInterference(*((Handle_TopOpeBRepDS_Interference*)I->Handle)));
}

 Standard_Integer OCTopOpeBRepDS_PointIterator::Current()
{
  return ((TopOpeBRepDS_PointIterator*)nativeHandle)->Current();
}

 OCTopAbs_Orientation OCTopOpeBRepDS_PointIterator::Orientation(OCTopAbs_State S)
{
  return (OCTopAbs_Orientation)(((TopOpeBRepDS_PointIterator*)nativeHandle)->Orientation((TopAbs_State)S));
}

 Standard_Real OCTopOpeBRepDS_PointIterator::Parameter()
{
  return ((TopOpeBRepDS_PointIterator*)nativeHandle)->Parameter();
}

 System::Boolean OCTopOpeBRepDS_PointIterator::IsVertex()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_PointIterator*)nativeHandle)->IsVertex());
}

 System::Boolean OCTopOpeBRepDS_PointIterator::IsPoint()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_PointIterator*)nativeHandle)->IsPoint());
}

 System::Boolean OCTopOpeBRepDS_PointIterator::DiffOriented()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_PointIterator*)nativeHandle)->DiffOriented());
}

 System::Boolean OCTopOpeBRepDS_PointIterator::SameOriented()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_PointIterator*)nativeHandle)->SameOriented());
}

 Standard_Integer OCTopOpeBRepDS_PointIterator::Support()
{
  return ((TopOpeBRepDS_PointIterator*)nativeHandle)->Support();
}


