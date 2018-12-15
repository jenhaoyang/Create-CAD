// File generated by CPPExt (Transient)
//
#ifndef _IntPatch_GLine_OCWrappers_HeaderFile
#define _IntPatch_GLine_OCWrappers_HeaderFile

// include the wrapped class
#include <IntPatch_GLine.hxx>
#include "../Converter.h"

#include "IntPatch_Line.h"

#include "../gp/gp_Ax2.h"
#include "IntPatch_SequenceOfPoint.h"
#include "../IntSurf/IntSurf_TypeTrans.h"
#include "../IntSurf/IntSurf_Situation.h"
#include "../gp/gp_Lin.h"
#include "../gp/gp_Circ.h"
#include "../gp/gp_Elips.h"
#include "../gp/gp_Parab.h"
#include "../gp/gp_Hypr.h"


namespace OCNaroWrappers
{

ref class OCgp_Lin;
ref class OCgp_Circ;
ref class OCgp_Elips;
ref class OCgp_Parab;
ref class OCgp_Hypr;
ref class OCIntPatch_Point;


//! Implementation of an intersection line represented <br>
//!          by a conic. <br>
public ref class OCIntPatch_GLine : OCIntPatch_Line {

protected:
  // dummy constructor;
  OCIntPatch_GLine(OCDummy^) : OCIntPatch_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_GLine(Handle(IntPatch_GLine)* nativeHandle);

// Methods PUBLIC

//! Creates a Line as intersection line <br>
//!          when the transitions are In or Out. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Lin^ L, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);

//! Creates a Line as intersection line <br>
//!          when the transitions are Touch. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Lin^ L, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);

//! Creates a Line as intersection line <br>
//!          when the transitions are Undecided. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Lin^ L, System::Boolean Tang);

//! Creates a circle as intersection line <br>
//!          when the transitions are In or Out. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Circ^ C, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);

//! Creates a circle as intersection line <br>
//!          when the transitions are Touch. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Circ^ C, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);

//! Creates a circle as intersection line <br>
//!          when the transitions are Undecided. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Circ^ C, System::Boolean Tang);

//! Creates an ellipse as intersection line <br>
//!          when the transitions are In or Out. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Elips^ E, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);

//! Creates an ellispe as intersection line <br>
//!          when the transitions are Touch. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Elips^ E, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);

//! Creates an ellipse as intersection line <br>
//!          when the transitions are Undecided. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Elips^ E, System::Boolean Tang);

//! Creates a parabola as intersection line <br>
//!          when the transitions are In or Out. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Parab^ P, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);

//! Creates a parabola as intersection line <br>
//!          when the transitions are Touch. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Parab^ P, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);

//! Creates a parabola as intersection line <br>
//!          when the transitions are Undecided. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Parab^ P, System::Boolean Tang);

//! Creates an hyperbola as intersection line <br>
//!          when the transitions are In or Out. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Hypr^ H, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);

//! Creates an hyperbola as intersection line <br>
//!          when the transitions are Touch. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Hypr^ H, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);

//! Creates an hyperbola as  intersection line <br>
//!          when the transitions are Undecided. <br>
OCIntPatch_GLine(OCNaroWrappers::OCgp_Hypr^ H, System::Boolean Tang);

//! To add a vertex in the list. <br>
 /*instead*/  void AddVertex(OCNaroWrappers::OCIntPatch_Point^ Pnt) ;

//! To replace the element of range Index in the list <br>
//!          of points. <br>
 /*instead*/  void Replace(Standard_Integer Index, OCNaroWrappers::OCIntPatch_Point^ Pnt) ;


 /*instead*/  void SetFirstPoint(Standard_Integer IndFirst) ;


 /*instead*/  void SetLastPoint(Standard_Integer IndLast) ;

//! Returns the Lin from gp corresponding to the intersection <br>
//!          when ArcType returns IntPatch_Line. <br>
 /*instead*/  OCgp_Lin^ Line() ;

//! Returns the Circ from gp corrsponding to the intersection <br>
//!          when ArcType returns IntPatch_Circle. <br>
 /*instead*/  OCgp_Circ^ Circle() ;

//! Returns the Elips from gp corrsponding to the intersection <br>
//!          when ArcType returns IntPatch_Ellipse. <br>
 /*instead*/  OCgp_Elips^ Ellipse() ;

//! Returns the Parab from gp corrsponding to the intersection <br>
//!          when ArcType returns IntPatch_Parabola. <br>
 /*instead*/  OCgp_Parab^ Parabola() ;

//! Returns the Hypr from gp corrsponding to the intersection <br>
//!          when ArcType returns IntPatch_Hyperbola. <br>
 /*instead*/  OCgp_Hypr^ Hyperbola() ;

//! Returns True if the line has a known First point. <br>
//!          This point is given by the method FirstPoint(). <br>
 /*instead*/  System::Boolean HasFirstPoint() ;

//! Returns True if the line has a known Last point. <br>
//!          This point is given by the method LastPoint(). <br>
 /*instead*/  System::Boolean HasLastPoint() ;

//! Returns the IntPoint corresponding to the FirstPoint. <br>
//!          An exception is raised when HasFirstPoint returns False. <br>
 /*instead*/  OCIntPatch_Point^ FirstPoint() ;

//! Returns the IntPoint corresponding to the LastPoint. <br>
//!          An exception is raised when HasLastPoint returns False. <br>
 /*instead*/  OCIntPatch_Point^ LastPoint() ;


 /*instead*/  Standard_Integer NbVertex() ;

//! Returns the vertex of range Index on the line. <br>
 /*instead*/  OCIntPatch_Point^ Vertex(Standard_Integer Index) ;

//! Set the parameters of all the vertex on the line. <br>
//!          if a vertex is already in the line, <br>
//!             its parameter is modified <br>
//!          else a new point in the line is inserted. <br>
 /*instead*/  void ComputeVertexParameters(Standard_Real Tol) ;

~OCIntPatch_GLine()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
