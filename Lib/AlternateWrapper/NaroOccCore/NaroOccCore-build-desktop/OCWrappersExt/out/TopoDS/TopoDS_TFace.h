// File generated by CPPExt (Transient)
//
#ifndef _TopoDS_TFace_OCWrappers_HeaderFile
#define _TopoDS_TFace_OCWrappers_HeaderFile

// include the wrapped class
#include <TopoDS_TFace.hxx>
#include "../Converter.h"

#include "TopoDS_TShape.h"

#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_TShape;



public ref class OCTopoDS_TFace : OCTopoDS_TShape {

protected:
  // dummy constructor;
  OCTopoDS_TFace(OCDummy^) : OCTopoDS_TShape((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopoDS_TFace(Handle(TopoDS_TFace)* nativeHandle);

// Methods PUBLIC

//! Creates an empty TFace. <br>
OCTopoDS_TFace();

//! returns FACE. <br>
 /*instead*/  OCTopAbs_ShapeEnum ShapeType() ;

//! Returns an empty TFace. <br>
virtual /*instead*/  OCTopoDS_TShape^ EmptyCopy() ;

~OCTopoDS_TFace()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
