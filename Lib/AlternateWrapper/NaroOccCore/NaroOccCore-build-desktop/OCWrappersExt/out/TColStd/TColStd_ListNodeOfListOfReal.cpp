// File generated by CPPExt (CPP file)
//

#include "TColStd_ListNodeOfListOfReal.h"
#include "../Converter.h"
#include "TColStd_ListOfReal.h"
#include "TColStd_ListIteratorOfListOfReal.h"


using namespace OCNaroWrappers;

OCTColStd_ListNodeOfListOfReal::OCTColStd_ListNodeOfListOfReal(Handle(TColStd_ListNodeOfListOfReal)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_ListNodeOfListOfReal(*nativeHandle);
}

OCTColStd_ListNodeOfListOfReal::OCTColStd_ListNodeOfListOfReal(Standard_Real I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_ListNodeOfListOfReal(new TColStd_ListNodeOfListOfReal(I, n));
}

 Standard_Real OCTColStd_ListNodeOfListOfReal::Value()
{
  return (*((Handle_TColStd_ListNodeOfListOfReal*)nativeHandle))->Value();
}


