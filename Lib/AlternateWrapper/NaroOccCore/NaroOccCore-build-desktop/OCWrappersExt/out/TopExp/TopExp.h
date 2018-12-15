// File generated by CPPExt (Package)
//

#ifndef _TopExp_OCWrappers_HeaderFile
#define _TopExp_OCWrappers_HeaderFile

// Include the wrapped header
#include <TopExp.hxx>

#include "TopExp_StackOfIterator.h"
#include "TopExp_Explorer.h"
#include "TopExp_StackNodeOfStackOfIterator.h"
#include "TopExp_StackIteratorOfStackOfIterator.h"


namespace OCNaroWrappers
{
//! This package   provides  basic tools  to   explore the <br>
//!          topological data structures. <br>
//! <br>
//!          * Explorer : A tool to find all sub-shapes of  a given <br>
//!          type. e.g. all faces of a solid. <br>
//! <br>
//!          * Package methods to map sub-shapes of a shape. <br>
//! <br>
//! Level : Public <br>
//!  All methods of all  classes will be public. <br>
public ref class OCTopExp abstract sealed
{

public:
// Methods

//! Stores in the map <M> all  the sub-shapes of <S> <br>
//!          of type <T>. <br>
//! <br>
//!  Warning: The map is not cleared at first. <br>
static /*instead*/  void MapShapes(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum T, OCNaroWrappers::OCTopTools_IndexedMapOfShape^ M) ;

//! Stores in the map <M> all  the sub-shapes of <S>. <br>
static /*instead*/  void MapShapes(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopTools_IndexedMapOfShape^ M) ;

//! Stores in the map <M> all the subshape of <S> of <br>
//!          type <TS>  for each one append  to  the list all <br>
//!          the ancestors of type <TA>.  For example map all <br>
//!          the edges and bind the list of faces. <br>
//!  Warning: The map is not cleared at first. <br>
static /*instead*/  void MapShapesAndAncestors(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum TS, OCTopAbs_ShapeEnum TA, OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeListOfShape^ M) ;

//! Returns the Vertex of orientation FORWARD in E. If <br>
//!          there is none returns a Null Shape. <br>
//!          CumOri = True : taking account the edge orientation <br>
static /*instead*/  OCTopoDS_Vertex^ FirstVertex(OCNaroWrappers::OCTopoDS_Edge^ E, System::Boolean CumOri) ;

//! Returns the Vertex of orientation REVERSED in E. If <br>
//!          there is none returns a Null Shape. <br>
//!          CumOri = True : taking account the edge orientation <br>
static /*instead*/  OCTopoDS_Vertex^ LastVertex(OCNaroWrappers::OCTopoDS_Edge^ E, System::Boolean CumOri) ;

//! Returns in Vfirst, Vlast the  FORWARD and REVERSED <br>
//!          vertices of the edge <E>. May be null shapes. <br>
//!          CumOri = True : taking account the edge orientation <br>
static /*instead*/  void Vertices(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Vertex^ Vfirst, OCNaroWrappers::OCTopoDS_Vertex^ Vlast, System::Boolean CumOri) ;

//! Returns  in  Vfirst,  Vlast   the first   and last <br>
//!          vertices of the open wire <W>. May be null shapes. <br>
//!          if   <W>  is closed Vfirst and Vlast  are a same <br>
//!          vertex on <W>. <br>
//!          if <W> is no manifold. VFirst and VLast are null <br>
//!          shapes. <br>
static /*instead*/  void Vertices(OCNaroWrappers::OCTopoDS_Wire^ W, OCNaroWrappers::OCTopoDS_Vertex^ Vfirst, OCNaroWrappers::OCTopoDS_Vertex^ Vlast) ;

//! Finds   the  vertex <V> common   to  the two edges <br>
//!          <E1,E2>, returns True if this vertex exists. <br>
//! <br>
//!  Warning: <V> has sense only if the value <True> is returned <br>
static /*instead*/  System::Boolean CommonVertex(OCNaroWrappers::OCTopoDS_Edge^ E1, OCNaroWrappers::OCTopoDS_Edge^ E2, OCNaroWrappers::OCTopoDS_Vertex^ V) ;


};

}; // OCNaroWrappers

#endif
