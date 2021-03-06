// File generated by CPPExt (MPV)
//
#ifndef _BRepClass3d_Intersector3d_OCWrappers_HeaderFile
#define _BRepClass3d_Intersector3d_OCWrappers_HeaderFile

// include native header
#include <BRepClass3d_Intersector3d.hxx>
#include "../Converter.h"


#include "../gp/gp_Pnt.h"
#include "../IntCurveSurface/IntCurveSurface_TransitionOnCurve.h"
#include "../TopAbs/TopAbs_State.h"
#include "../TopoDS/TopoDS_Face.h"


namespace OCNaroWrappers
{

ref class OCgp_Lin;
ref class OCTopoDS_Face;
ref class OCgp_Pnt;



public ref class OCBRepClass3d_Intersector3d  {

protected:
  BRepClass3d_Intersector3d* nativeHandle;
  OCBRepClass3d_Intersector3d(OCDummy^) {};

public:
  property BRepClass3d_Intersector3d* Handle
  {
    BRepClass3d_Intersector3d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepClass3d_Intersector3d(BRepClass3d_Intersector3d* nativeHandle);

// Methods PUBLIC

//! Empty constructor. <br>
OCBRepClass3d_Intersector3d();

//! Perform the intersection between the <br>
//!          segment L(0) ... L(Prm) and the Shape <Sh>. <br>
//! <br>
//!          Only the point with the smallest parameter on the <br>
//!          line is returned. <br>
//! <br>
//!          The Tolerance <Tol> is used to determine if the <br>
//!          first point of the segment is near the face. In <br>
//!          that case, the parameter of the intersection point <br>
//!          on the line can be a negative value (greater than -Tol). <br>
 /*instead*/  void Perform(OCNaroWrappers::OCgp_Lin^ L, Standard_Real Prm, Standard_Real Tol, OCNaroWrappers::OCTopoDS_Face^ F) ;

//! True is returned when the intersection have been computed. <br>
 /*instead*/  System::Boolean IsDone() ;

//! True is returned if a point has been found. <br>
 /*instead*/  System::Boolean HasAPoint() ;

//! Returns the U parameter of the intersection point <br>
//!          on the surface. <br>
 /*instead*/  Standard_Real UParameter() ;

//! Returns the V parameter of the intersection point <br>
//!          on the surface. <br>
 /*instead*/  Standard_Real VParameter() ;

//! Returns the parameter of the intersection point <br>
//!          on the line. <br>
 /*instead*/  Standard_Real WParameter() ;

//! Returns the geometric point of the intersection <br>
//!          between the line and the surface. <br>
 /*instead*/  OCgp_Pnt^ Pnt() ;

//! Returns the transition of the line on the surface. <br>
 /*instead*/  OCIntCurveSurface_TransitionOnCurve Transition() ;

//! Returns the state of the point on the face. <br>
//!          The values can be either TopAbs_IN <br>
//!             ( the point is in the face) <br>
//!           or TopAbs_ON <br>
//!             ( the point is on a boudary of the face). <br>
 /*instead*/  OCTopAbs_State State() ;

//! Returns the significant face used to determine <br>
//!          the intersection. <br>
//! <br>
 /*instead*/  OCTopoDS_Face^ Face() ;

~OCBRepClass3d_Intersector3d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
