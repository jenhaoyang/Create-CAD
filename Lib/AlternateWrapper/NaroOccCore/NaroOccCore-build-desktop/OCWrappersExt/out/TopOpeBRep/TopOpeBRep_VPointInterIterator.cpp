// File generated by CPPExt (CPP file)
//

#include "TopOpeBRep_VPointInterIterator.h"
#include "../Converter.h"
#include "TopOpeBRep_LineInter.h"
#include "TopOpeBRep_VPointInter.h"


using namespace OCNaroWrappers;

OCTopOpeBRep_VPointInterIterator::OCTopOpeBRep_VPointInterIterator(TopOpeBRep_VPointInterIterator* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRep_VPointInterIterator::OCTopOpeBRep_VPointInterIterator() 
{
  nativeHandle = new TopOpeBRep_VPointInterIterator();
}

OCTopOpeBRep_VPointInterIterator::OCTopOpeBRep_VPointInterIterator(OCNaroWrappers::OCTopOpeBRep_LineInter^ LI) 
{
  nativeHandle = new TopOpeBRep_VPointInterIterator(*((TopOpeBRep_LineInter*)LI->Handle));
}

 void OCTopOpeBRep_VPointInterIterator::Init(OCNaroWrappers::OCTopOpeBRep_LineInter^ LI, System::Boolean checkkeep)
{
  ((TopOpeBRep_VPointInterIterator*)nativeHandle)->Init(*((TopOpeBRep_LineInter*)LI->Handle), OCConverter::BooleanToStandardBoolean(checkkeep));
}

 void OCTopOpeBRep_VPointInterIterator::Init()
{
  ((TopOpeBRep_VPointInterIterator*)nativeHandle)->Init();
}

 System::Boolean OCTopOpeBRep_VPointInterIterator::More()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRep_VPointInterIterator*)nativeHandle)->More());
}

 void OCTopOpeBRep_VPointInterIterator::Next()
{
  ((TopOpeBRep_VPointInterIterator*)nativeHandle)->Next();
}

OCTopOpeBRep_VPointInter^ OCTopOpeBRep_VPointInterIterator::CurrentVP()
{
  TopOpeBRep_VPointInter* tmp = new TopOpeBRep_VPointInter();
  *tmp = ((TopOpeBRep_VPointInterIterator*)nativeHandle)->CurrentVP();
  return gcnew OCTopOpeBRep_VPointInter(tmp);
}

 Standard_Integer OCTopOpeBRep_VPointInterIterator::CurrentVPIndex()
{
  return ((TopOpeBRep_VPointInterIterator*)nativeHandle)->CurrentVPIndex();
}

OCTopOpeBRep_VPointInter^ OCTopOpeBRep_VPointInterIterator::ChangeCurrentVP()
{
  TopOpeBRep_VPointInter* tmp = new TopOpeBRep_VPointInter();
  *tmp = ((TopOpeBRep_VPointInterIterator*)nativeHandle)->ChangeCurrentVP();
  return gcnew OCTopOpeBRep_VPointInter(tmp);
}

 TopOpeBRep_PLineInter OCTopOpeBRep_VPointInterIterator::PLineInterDummy()
{
  return ((TopOpeBRep_VPointInterIterator*)nativeHandle)->PLineInterDummy();
}


