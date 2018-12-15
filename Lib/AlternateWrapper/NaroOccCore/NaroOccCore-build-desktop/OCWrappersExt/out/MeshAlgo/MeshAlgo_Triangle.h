// File generated by CPPExt (MPV)
//
#ifndef _MeshAlgo_Triangle_OCWrappers_HeaderFile
#define _MeshAlgo_Triangle_OCWrappers_HeaderFile

// include native header
#include <MeshAlgo_Triangle.hxx>
#include "../Converter.h"


#include "../MeshDS/MeshDS_DegreeOfFreedom.h"


namespace OCNaroWrappers
{



//! Describes the   data structure of  a  Triangle for <br>
//!          Deleaunay triangulation. <br>
public ref class OCMeshAlgo_Triangle  {

protected:
  MeshAlgo_Triangle* nativeHandle;
  OCMeshAlgo_Triangle(OCDummy^) {};

public:
  property MeshAlgo_Triangle* Handle
  {
    MeshAlgo_Triangle* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCMeshAlgo_Triangle(MeshAlgo_Triangle* nativeHandle);

// Methods PUBLIC


OCMeshAlgo_Triangle(Standard_Integer e1, Standard_Integer e2, Standard_Integer e3, System::Boolean o1, System::Boolean o2, System::Boolean o3, OCMeshDS_DegreeOfFreedom canMove, Standard_Integer domain);


 /*instead*/  void Edges(Standard_Integer& e1, Standard_Integer& e2, Standard_Integer& e3, System::Boolean& o1, System::Boolean& o2, System::Boolean& o3) ;


 /*instead*/  OCMeshDS_DegreeOfFreedom Movability() ;


 /*instead*/  void SetMovability(OCMeshDS_DegreeOfFreedom canMove) ;

//! For maping the Triangles. <br>
//!          Same Triangle -> Same HashCode <br>
//!          Different Triangles -> Not IsEqual but can have same HashCode <br>
 /*instead*/  Standard_Integer Domain() ;


 /*instead*/  Standard_Integer HashCode(Standard_Integer Upper) ;


 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCMeshAlgo_Triangle^ Other) ;

~OCMeshAlgo_Triangle()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
