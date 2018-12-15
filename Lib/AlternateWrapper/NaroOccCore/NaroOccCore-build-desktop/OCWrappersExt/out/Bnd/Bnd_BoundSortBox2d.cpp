// File generated by CPPExt (CPP file)
//

#include "Bnd_BoundSortBox2d.h"
#include "../Converter.h"
#include "Bnd_HArray1OfBox2d.h"
#include "../TColStd/TColStd_HArray1OfListOfInteger.h"
#include "Bnd_Box2d.h"
#include "../TColStd/TColStd_ListOfInteger.h"


using namespace OCNaroWrappers;

OCBnd_BoundSortBox2d::OCBnd_BoundSortBox2d(Bnd_BoundSortBox2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBnd_BoundSortBox2d::OCBnd_BoundSortBox2d() 
{
  nativeHandle = new Bnd_BoundSortBox2d();
}

 void OCBnd_BoundSortBox2d::Initialize(OCNaroWrappers::OCBnd_Box2d^ CompleteBox, OCNaroWrappers::OCBnd_HArray1OfBox2d^ SetOfBox)
{
  ((Bnd_BoundSortBox2d*)nativeHandle)->Initialize(*((Bnd_Box2d*)CompleteBox->Handle), *((Handle_Bnd_HArray1OfBox2d*)SetOfBox->Handle));
}

 void OCBnd_BoundSortBox2d::Initialize(OCNaroWrappers::OCBnd_HArray1OfBox2d^ SetOfBox)
{
  ((Bnd_BoundSortBox2d*)nativeHandle)->Initialize(*((Handle_Bnd_HArray1OfBox2d*)SetOfBox->Handle));
}

 void OCBnd_BoundSortBox2d::Initialize(OCNaroWrappers::OCBnd_Box2d^ CompleteBox, Standard_Integer nbComponents)
{
  ((Bnd_BoundSortBox2d*)nativeHandle)->Initialize(*((Bnd_Box2d*)CompleteBox->Handle), nbComponents);
}

 void OCBnd_BoundSortBox2d::Add(OCNaroWrappers::OCBnd_Box2d^ theBox, Standard_Integer boxIndex)
{
  ((Bnd_BoundSortBox2d*)nativeHandle)->Add(*((Bnd_Box2d*)theBox->Handle), boxIndex);
}

OCTColStd_ListOfInteger^ OCBnd_BoundSortBox2d::Compare(OCNaroWrappers::OCBnd_Box2d^ theBox)
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = ((Bnd_BoundSortBox2d*)nativeHandle)->Compare(*((Bnd_Box2d*)theBox->Handle));
  return gcnew OCTColStd_ListOfInteger(tmp);
}

 void OCBnd_BoundSortBox2d::Dump()
{
  ((Bnd_BoundSortBox2d*)nativeHandle)->Dump();
}


