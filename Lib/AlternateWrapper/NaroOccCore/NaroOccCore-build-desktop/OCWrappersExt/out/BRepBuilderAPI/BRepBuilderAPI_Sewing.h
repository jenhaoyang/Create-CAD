// File generated by CPPExt (Transient)
//
#ifndef _BRepBuilderAPI_Sewing_OCWrappers_HeaderFile
#define _BRepBuilderAPI_Sewing_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepBuilderAPI_Sewing.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TopTools/TopTools_IndexedDataMapOfShapeShape.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_IndexedMapOfShape.h"
#include "../TopTools/TopTools_IndexedDataMapOfShapeListOfShape.h"
#include "../TopTools/TopTools_DataMapOfShapeShape.h"
#include "../TopTools/TopTools_DataMapOfShapeListOfShape.h"
#include "../TopTools/TopTools_MapOfShape.h"


namespace OCNaroWrappers
{

ref class OCBRepTools_ReShape;
ref class OCTopoDS_Shape;
ref class OCMessage_ProgressIndicator;
ref class OCTopoDS_Edge;
ref class OCTopTools_ListOfShape;
ref class OCTopoDS_Face;
ref class OCTopTools_SequenceOfShape;
ref class OCTColStd_IndexedMapOfInteger;
ref class OCTColStd_SequenceOfInteger;
ref class OCGeom_Surface;
ref class OCTopLoc_Location;
ref class OCTopTools_MapOfShape;
ref class OCTColStd_Array1OfBoolean;
ref class OCTColStd_Array1OfReal;
ref class OCGeom2d_Curve;
ref class OCTColgp_Array1OfPnt;
ref class OCGeom_Curve;
ref class OCTopTools_IndexedMapOfShape;
ref class OCTColStd_SequenceOfReal;


//! Provides methods to <br>
//! <br>
//!          - identify possible contigous boundaries (for control <br>
//!            afterwards) <br>
//! <br>
//!          - assemble contigous shapes into one shape. <br>
//!            Only manifold shapes will be found. Sewing will not <br>
//!            be done in case of multiple edges. <br>
//! <br>
//!          For sewing, use this function as following: <br>
//!            - create an empty object <br>
//!                - default tolerance 1.E-06 <br>
//!                - with face analysis on <br>
//!                - with sewing operation on <br>
//!                - set the cutting option as you need (default True) <br>
//!            - define a tolerance <br>
//!            - add shapes to be sewed -> Add <br>
//!            - compute -> Perfom <br>
//!            - output the resulted shapes <br>
//!            - output free edges if necessary <br>
//!            - output multiple edges if necessary <br>
//!            - output the problems if any <br>
public ref class OCBRepBuilderAPI_Sewing : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCBRepBuilderAPI_Sewing(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepBuilderAPI_Sewing(Handle(BRepBuilderAPI_Sewing)* nativeHandle);

// Methods PUBLIC

//! Creates an object with <br>
//!          tolerance of connexity <br>
//!          option for sewing (if false only control) <br>
//!          option for analysis of degenerated shapes <br>
//!          option for cutting of free edges. <br>
//!          option for non manifold processing <br>
OCBRepBuilderAPI_Sewing(Standard_Real tolerance, System::Boolean option1, System::Boolean option2, System::Boolean option3, System::Boolean option4);

//! initialize the parameters if necessary <br>
 /*instead*/  void Init(Standard_Real tolerance, System::Boolean option1, System::Boolean option2, System::Boolean option3, System::Boolean option4) ;

//! Loades the context shape. <br>
 /*instead*/  void Load(OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Defines the shapes to be sewed or controlled <br>
 /*instead*/  void Add(OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Computing <br>
//!          thePI - progress indicator of algorithm <br>
 /*instead*/  void Perform(OCNaroWrappers::OCMessage_ProgressIndicator^ thePI) ;

//! Gives the sewed shape <br>
//!          a null shape if nothing constructed <br>
//!          may be a face, a shell, a solid or a compound <br>
 /*instead*/  OCTopoDS_Shape^ SewedShape() ;

//! Gives the number of free edges (edge shared by one face) <br>
 /*instead*/  Standard_Integer NbFreeEdges() ;

//! Gives each free edge <br>
 /*instead*/  OCTopoDS_Edge^ FreeEdge(Standard_Integer index) ;

//! Gives the number of multiple edges <br>
//!          (edge shared by more than two faces) <br>
 /*instead*/  Standard_Integer NbMultipleEdges() ;

//! Gives each multiple edge <br>
 /*instead*/  OCTopoDS_Edge^ MultipleEdge(Standard_Integer index) ;

//! Gives the number of contigous edges (edge shared by two faces) <br>
 /*instead*/  Standard_Integer NbContigousEdges() ;

//! Gives each contigous edge <br>
 /*instead*/  OCTopoDS_Edge^ ContigousEdge(Standard_Integer index) ;

//! Gives the sections (edge) belonging to a contigous edge <br>
 /*instead*/  OCTopTools_ListOfShape^ ContigousEdgeCouple(Standard_Integer index) ;

//! Indicates if a section is bound (before use SectionToBoundary) <br>
 /*instead*/  System::Boolean IsSectionBound(OCNaroWrappers::OCTopoDS_Edge^ section) ;

//! Gives the original edge (free boundary) which becomes the <br>
//!          the section. Remember that sections constitute  common edges. <br>
//!          This imformation is important for control because with <br>
//!          original edge we can find the surface to which the section <br>
//!          is attached. <br>
 /*instead*/  OCTopoDS_Edge^ SectionToBoundary(OCNaroWrappers::OCTopoDS_Edge^ section) ;

//! Gives the number of degenerated shapes <br>
 /*instead*/  Standard_Integer NbDegeneratedShapes() ;

//! Gives each degenerated shape <br>
 /*instead*/  OCTopoDS_Shape^ DegeneratedShape(Standard_Integer index) ;

//! Indicates if a input shape is degenerated <br>
 /*instead*/  System::Boolean IsDegenerated(OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Indicates if a input shape has been modified <br>
 /*instead*/  System::Boolean IsModified(OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Gives a modifieded shape <br>
 /*instead*/  OCTopoDS_Shape^ Modified(OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Indicates if a input subshape has been modified <br>
 /*instead*/  System::Boolean IsModifiedSubShape(OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Gives a modifieded subshape <br>
 /*instead*/  OCTopoDS_Shape^ ModifiedSubShape(OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! print the informations <br>
 /*instead*/  void Dump() ;

//! Gives the number of deleted faces (faces smallest than tolerance) <br>
 /*instead*/  Standard_Integer NbDeletedFaces() ;

//! Gives each deleted face <br>
 /*instead*/  OCTopoDS_Face^ DeletedFace(Standard_Integer index) ;

//! Gives a modified shape <br>
 /*instead*/  OCTopoDS_Face^ WhichFace(OCNaroWrappers::OCTopoDS_Edge^ theEdg, Standard_Integer index) ;

//! Gets same parameter mode. <br>
 /*instead*/  System::Boolean SameParameterMode() ;

//! Sets same parameter mode. <br>
 /*instead*/  void SetSameParameterMode(System::Boolean SameParameterMode) ;

//! Gives set tolerance. <br>
 /*instead*/  Standard_Real Tolerance() ;

//! Sets tolerance <br>
 /*instead*/  void SetTolerance(Standard_Real theToler) ;

//! Gives set min tolerance. <br>
 /*instead*/  Standard_Real MinTolerance() ;

//! Sets min tolerance <br>
 /*instead*/  void SetMinTolerance(Standard_Real theMinToler) ;

//! Gives set max tolerance <br>
 /*instead*/  Standard_Real MaxTolerance() ;

//! Sets max tolerance. <br>
 /*instead*/  void SetMaxTolerance(Standard_Real theMaxToler) ;

//! Returns mode for sewing faces By default - true. <br>
 /*instead*/  System::Boolean FaceMode() ;

//! Sets mode for sewing faces By default - true. <br>
 /*instead*/  void SetFaceMode(System::Boolean theFaceMode) ;

//! Returns mode for sewing floating edges By default - false. <br>
 /*instead*/  System::Boolean FloatingEdgesMode() ;

//! Sets mode for sewing floating edges By default - false. <br>//! Returns mode for cutting floating edges By default - false. <br>//! Sets mode for cutting floating edges By default - false. <br>
 /*instead*/  void SetFloatingEdgesMode(System::Boolean theFloatingEdgesMode) ;

//! Returns mode for accounting of local tolerances <br>
//!          of edges and vertices during of merging. <br>
 /*instead*/  System::Boolean LocalTolerancesMode() ;

//! Sets mode for accounting of local tolerances <br>
//!          of edges and vertices during of merging <br>
//!          in this case WorkTolerance = myTolerance + tolEdge1+ tolEdg2; <br>
 /*instead*/  void SetLocalTolerancesMode(System::Boolean theLocalTolerancesMode) ;

//! Sets mode for non-manifold sewing. <br>
 /*instead*/  void SetNonManifoldMode(System::Boolean theNonManifoldMode) ;

//! Gets mode for non-manifold sewing. <br>
 /*instead*/  System::Boolean NonManifoldMode() ;

~OCBRepBuilderAPI_Sewing()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
