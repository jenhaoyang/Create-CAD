// File generated by CPPExt (MPV)
//
#ifndef _BRepFill_EdgeFaceAndOrder_OCWrappers_HeaderFile
#define _BRepFill_EdgeFaceAndOrder_OCWrappers_HeaderFile

// include native header
#include <BRepFill_EdgeFaceAndOrder.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCBRepFill_Filling;
ref class OCTopoDS_Edge;
ref class OCTopoDS_Face;



public ref class OCBRepFill_EdgeFaceAndOrder  {

protected:
  BRepFill_EdgeFaceAndOrder* nativeHandle;
  OCBRepFill_EdgeFaceAndOrder(OCDummy^) {};

public:
  property BRepFill_EdgeFaceAndOrder* Handle
  {
    BRepFill_EdgeFaceAndOrder* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepFill_EdgeFaceAndOrder(BRepFill_EdgeFaceAndOrder* nativeHandle);

// Methods PUBLIC


OCBRepFill_EdgeFaceAndOrder();


OCBRepFill_EdgeFaceAndOrder(OCNaroWrappers::OCTopoDS_Edge^ anEdge, OCNaroWrappers::OCTopoDS_Face^ aFace, OCGeomAbs_Shape anOrder);

~OCBRepFill_EdgeFaceAndOrder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
