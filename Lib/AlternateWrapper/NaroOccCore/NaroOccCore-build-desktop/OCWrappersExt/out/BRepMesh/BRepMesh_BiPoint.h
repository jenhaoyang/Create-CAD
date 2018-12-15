// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_BiPoint_OCWrappers_HeaderFile
#define _BRepMesh_BiPoint_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_BiPoint.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCBRepMesh_BiPoint  {

protected:
  BRepMesh_BiPoint* nativeHandle;
  OCBRepMesh_BiPoint(OCDummy^) {};

public:
  property BRepMesh_BiPoint* Handle
  {
    BRepMesh_BiPoint* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepMesh_BiPoint(BRepMesh_BiPoint* nativeHandle);

// Methods PUBLIC


OCBRepMesh_BiPoint();


OCBRepMesh_BiPoint(Standard_Real X1, Standard_Real Y1, Standard_Real X2, Standard_Real Y2);


 /*instead*/  Standard_Address Indices() ;


 /*instead*/  Standard_Address Coordinates() ;

~OCBRepMesh_BiPoint()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
