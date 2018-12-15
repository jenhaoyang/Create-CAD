// File generated by CPPExt (MPV)
//
#ifndef _Graphic3d_Array2OfVertexC_OCWrappers_HeaderFile
#define _Graphic3d_Array2OfVertexC_OCWrappers_HeaderFile

// include native header
#include <Graphic3d_Array2OfVertexC.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCGraphic3d_VertexC;



public ref class OCGraphic3d_Array2OfVertexC  {

protected:
  Graphic3d_Array2OfVertexC* nativeHandle;
  OCGraphic3d_Array2OfVertexC(OCDummy^) {};

public:
  property Graphic3d_Array2OfVertexC* Handle
  {
    Graphic3d_Array2OfVertexC* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGraphic3d_Array2OfVertexC(Graphic3d_Array2OfVertexC* nativeHandle);

// Methods PUBLIC


OCGraphic3d_Array2OfVertexC(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCGraphic3d_Array2OfVertexC(OCNaroWrappers::OCGraphic3d_VertexC^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


 /*instead*/  void Init(OCNaroWrappers::OCGraphic3d_VertexC^ V) ;


 /*instead*/  OCGraphic3d_Array2OfVertexC^ Assign(OCNaroWrappers::OCGraphic3d_Array2OfVertexC^ Other) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCGraphic3d_VertexC^ Value) ;


 /*instead*/  OCGraphic3d_VertexC^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCGraphic3d_VertexC^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;

~OCGraphic3d_Array2OfVertexC()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
