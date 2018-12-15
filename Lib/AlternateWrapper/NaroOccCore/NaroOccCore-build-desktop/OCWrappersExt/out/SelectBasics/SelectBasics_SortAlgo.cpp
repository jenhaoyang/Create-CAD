// File generated by CPPExt (CPP file)
//

#include "SelectBasics_SortAlgo.h"
#include "../Converter.h"
#include "../Bnd/Bnd_Box2d.h"
#include "../Bnd/Bnd_HArray1OfBox2d.h"


using namespace OCNaroWrappers;

OCSelectBasics_SortAlgo::OCSelectBasics_SortAlgo(SelectBasics_SortAlgo* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCSelectBasics_SortAlgo::OCSelectBasics_SortAlgo() 
{
  nativeHandle = new SelectBasics_SortAlgo();
}

OCSelectBasics_SortAlgo::OCSelectBasics_SortAlgo(OCNaroWrappers::OCBnd_Box2d^ ClippingRectangle, Standard_Real sizeOfSensitiveArea, OCNaroWrappers::OCBnd_HArray1OfBox2d^ theRectangles) 
{
  nativeHandle = new SelectBasics_SortAlgo(*((Bnd_Box2d*)ClippingRectangle->Handle), sizeOfSensitiveArea, *((Handle_Bnd_HArray1OfBox2d*)theRectangles->Handle));
}

 void OCSelectBasics_SortAlgo::Initialize(OCNaroWrappers::OCBnd_Box2d^ ClippingRectangle, Standard_Real sizeOfSensitiveArea, OCNaroWrappers::OCBnd_HArray1OfBox2d^ theRectangles)
{
  ((SelectBasics_SortAlgo*)nativeHandle)->Initialize(*((Bnd_Box2d*)ClippingRectangle->Handle), sizeOfSensitiveArea, *((Handle_Bnd_HArray1OfBox2d*)theRectangles->Handle));
}

 void OCSelectBasics_SortAlgo::InitSelect(Standard_Real x, Standard_Real y)
{
  ((SelectBasics_SortAlgo*)nativeHandle)->InitSelect(x, y);
}

 void OCSelectBasics_SortAlgo::InitSelect(OCNaroWrappers::OCBnd_Box2d^ rect)
{
  ((SelectBasics_SortAlgo*)nativeHandle)->InitSelect(*((Bnd_Box2d*)rect->Handle));
}

 System::Boolean OCSelectBasics_SortAlgo::More()
{
  return OCConverter::StandardBooleanToBoolean(((SelectBasics_SortAlgo*)nativeHandle)->More());
}

 void OCSelectBasics_SortAlgo::Next()
{
  ((SelectBasics_SortAlgo*)nativeHandle)->Next();
}

 Standard_Integer OCSelectBasics_SortAlgo::Value()
{
  return ((SelectBasics_SortAlgo*)nativeHandle)->Value();
}


