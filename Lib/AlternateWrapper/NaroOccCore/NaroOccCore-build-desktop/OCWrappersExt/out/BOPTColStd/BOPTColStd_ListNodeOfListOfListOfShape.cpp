// File generated by CPPExt (CPP file)
//

#include "BOPTColStd_ListNodeOfListOfListOfShape.h"
#include "../Converter.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "BOPTColStd_ListOfListOfShape.h"
#include "BOPTColStd_ListIteratorOfListOfListOfShape.h"


using namespace OCNaroWrappers;

OCBOPTColStd_ListNodeOfListOfListOfShape::OCBOPTColStd_ListNodeOfListOfListOfShape(Handle(BOPTColStd_ListNodeOfListOfListOfShape)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOPTColStd_ListNodeOfListOfListOfShape(*nativeHandle);
}

OCBOPTColStd_ListNodeOfListOfListOfShape::OCBOPTColStd_ListNodeOfListOfListOfShape(OCNaroWrappers::OCTopTools_ListOfShape^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOPTColStd_ListNodeOfListOfListOfShape(new BOPTColStd_ListNodeOfListOfListOfShape(*((TopTools_ListOfShape*)I->Handle), n));
}

OCTopTools_ListOfShape^ OCBOPTColStd_ListNodeOfListOfListOfShape::Value()
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = (*((Handle_BOPTColStd_ListNodeOfListOfListOfShape*)nativeHandle))->Value();
  return gcnew OCTopTools_ListOfShape(tmp);
}


