// File generated by CPPExt (CPP file)
//

#include "BRepMesh_MapOfAsciiString.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "BRepMesh_StdMapNodeOfMapOfAsciiString.h"
#include "BRepMesh_MapIteratorOfMapOfAsciiString.h"


using namespace OCNaroWrappers;

OCBRepMesh_MapOfAsciiString::OCBRepMesh_MapOfAsciiString(BRepMesh_MapOfAsciiString* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_MapOfAsciiString::OCBRepMesh_MapOfAsciiString(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BRepMesh_MapOfAsciiString(NbBuckets);
}

OCBRepMesh_MapOfAsciiString^ OCBRepMesh_MapOfAsciiString::Assign(OCNaroWrappers::OCBRepMesh_MapOfAsciiString^ Other)
{
  BRepMesh_MapOfAsciiString* tmp = new BRepMesh_MapOfAsciiString(0);
  *tmp = ((BRepMesh_MapOfAsciiString*)nativeHandle)->Assign(*((BRepMesh_MapOfAsciiString*)Other->Handle));
  return gcnew OCBRepMesh_MapOfAsciiString(tmp);
}

 void OCBRepMesh_MapOfAsciiString::ReSize(Standard_Integer NbBuckets)
{
  ((BRepMesh_MapOfAsciiString*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCBRepMesh_MapOfAsciiString::Add(OCNaroWrappers::OCTCollection_AsciiString^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_MapOfAsciiString*)nativeHandle)->Add(*((TCollection_AsciiString*)aKey->Handle)));
}

 System::Boolean OCBRepMesh_MapOfAsciiString::Contains(OCNaroWrappers::OCTCollection_AsciiString^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_MapOfAsciiString*)nativeHandle)->Contains(*((TCollection_AsciiString*)aKey->Handle)));
}

 System::Boolean OCBRepMesh_MapOfAsciiString::Remove(OCNaroWrappers::OCTCollection_AsciiString^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_MapOfAsciiString*)nativeHandle)->Remove(*((TCollection_AsciiString*)aKey->Handle)));
}


