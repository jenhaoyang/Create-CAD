// File generated by CPPExt (CPP file)
//

#include "BRepGProp_Domain.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopoDS/TopoDS_Edge.h"


using namespace OCNaroWrappers;

OCBRepGProp_Domain::OCBRepGProp_Domain(BRepGProp_Domain* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepGProp_Domain::OCBRepGProp_Domain() 
{
  nativeHandle = new BRepGProp_Domain();
}

OCBRepGProp_Domain::OCBRepGProp_Domain(OCNaroWrappers::OCTopoDS_Face^ F) 
{
  nativeHandle = new BRepGProp_Domain(*((TopoDS_Face*)F->Handle));
}

 void OCBRepGProp_Domain::Init(OCNaroWrappers::OCTopoDS_Face^ F)
{
  ((BRepGProp_Domain*)nativeHandle)->Init(*((TopoDS_Face*)F->Handle));
}

 System::Boolean OCBRepGProp_Domain::More()
{
  return OCConverter::StandardBooleanToBoolean(((BRepGProp_Domain*)nativeHandle)->More());
}

 void OCBRepGProp_Domain::Init()
{
  ((BRepGProp_Domain*)nativeHandle)->Init();
}

OCTopoDS_Edge^ OCBRepGProp_Domain::Value()
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = ((BRepGProp_Domain*)nativeHandle)->Value();
  return gcnew OCTopoDS_Edge(tmp);
}

 void OCBRepGProp_Domain::Next()
{
  ((BRepGProp_Domain*)nativeHandle)->Next();
}


