// File generated by CPPExt (Transient)
//
#ifndef _BRepMesh_HArray1OfVertexOfDelaun_OCWrappers_HeaderFile
#define _BRepMesh_HArray1OfVertexOfDelaun_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepMesh_HArray1OfVertexOfDelaun.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "BRepMesh_Array1OfVertexOfDelaun.h"


namespace OCNaroWrappers
{

ref class OCBRepMesh_Vertex;
ref class OCBRepMesh_Array1OfVertexOfDelaun;



public ref class OCBRepMesh_HArray1OfVertexOfDelaun : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCBRepMesh_HArray1OfVertexOfDelaun(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_HArray1OfVertexOfDelaun(Handle(BRepMesh_HArray1OfVertexOfDelaun)* nativeHandle);

// Methods PUBLIC


OCBRepMesh_HArray1OfVertexOfDelaun(Standard_Integer Low, Standard_Integer Up);


OCBRepMesh_HArray1OfVertexOfDelaun(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCBRepMesh_Vertex^ V);


 /*instead*/  void Init(OCNaroWrappers::OCBRepMesh_Vertex^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCBRepMesh_Vertex^ Value) ;


 /*instead*/  OCBRepMesh_Vertex^ Value(Standard_Integer Index) ;


 /*instead*/  OCBRepMesh_Vertex^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCBRepMesh_Array1OfVertexOfDelaun^ Array1() ;


 /*instead*/  OCBRepMesh_Array1OfVertexOfDelaun^ ChangeArray1() ;

~OCBRepMesh_HArray1OfVertexOfDelaun()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
