// File generated by CPPExt (Package)
//

#ifndef _TopOpeBRepTool_OCWrappers_HeaderFile
#define _TopOpeBRepTool_OCWrappers_HeaderFile

// Include the wrapped header
#include <TopOpeBRepTool.hxx>

#include "TopOpeBRepTool_GeomTool.h"
#include "TopOpeBRepTool_AncestorsTool.h"
#include "TopOpeBRepTool_C2DF.h"
#include "TopOpeBRepTool_ListOfC2DF.h"
#include "TopOpeBRepTool_DataMapOfOrientedShapeC2DF.h"
#include "TopOpeBRepTool_DataMapOfShapeListOfC2DF.h"
#include "TopOpeBRepTool_IndexedDataMapOfSolidClassifier.h"
#include "TopOpeBRepTool_SolidClassifier.h"
#include "TopOpeBRepTool_CurveTool.h"
#include "TopOpeBRepTool_IndexedDataMapOfShapeBox2d.h"
#include "TopOpeBRepTool_IndexedDataMapOfShapeBox.h"
#include "TopOpeBRepTool_HBoxTool.h"
#include "TopOpeBRepTool_BoxSort.h"
#include "TopOpeBRepTool_ShapeExplorer.h"
#include "TopOpeBRepTool_ShapeTool.h"
#include "TopOpeBRepTool_ShapeClassifier.h"
#include "TopOpeBRepTool_connexity.h"
#include "TopOpeBRepTool_IndexedDataMapOfShapeconnexity.h"
#include "TopOpeBRepTool_face.h"
#include "TopOpeBRepTool_DataMapOfShapeface.h"
#include "TopOpeBRepTool_CLASSI.h"
#include "TopOpeBRepTool_TOOL.h"
#include "TopOpeBRepTool_CORRISO.h"
#include "TopOpeBRepTool_REGUW.h"
#include "TopOpeBRepTool_REGUS.h"
#include "TopOpeBRepTool_makeTransition.h"
#include "TopOpeBRepTool_mkTondgE.h"
#include "TopOpeBRepTool_PurgeInternalEdges.h"
#include "TopOpeBRepTool_FuseEdges.h"
#include "TopOpeBRepTool_ListNodeOfListOfC2DF.h"
#include "TopOpeBRepTool_ListIteratorOfListOfC2DF.h"
#include "TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF.h"
#include "TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF.h"
#include "TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF.h"
#include "TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF.h"
#include "TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier.h"
#include "TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox2d.h"
#include "TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox.h"
#include "TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity.h"
#include "TopOpeBRepTool_DataMapNodeOfDataMapOfShapeface.h"
#include "TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeface.h"


namespace OCNaroWrappers
{
//! This package provides services used by the TopOpeBRep <br>
//!          package performing topological operations on the BRep <br>
//!          data structure. <br>
//! <br>
public ref class OCTopOpeBRepTool abstract sealed
{

public:
// Methods

//! In case face <FF> is built on UV-non-connexed  wires <br>
//!          (with the two closing edges  FORWARD and REVERSED, in <br>
//!          spite of one only), we find out the faulty edge, add <br>
//!          the faulty shapes (edge,wire,face) to <MshNOK>. <br>
//!          <FF> is a face descendant of <F>. <br>
//!          <MWisOld>(wire) = 1 if wire is wire of <F> <br>
//!                            0    wire results from <F>'s wire splitted. <br>
//!          returns false if purge fails <br>
static /*instead*/  System::Boolean PurgeClosingEdges(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCTopoDS_Face^ FF, OCNaroWrappers::OCTopTools_DataMapOfShapeInteger^ MWisOld, OCNaroWrappers::OCTopTools_IndexedMapOfOrientedShape^ MshNOK) ;


static /*instead*/  System::Boolean PurgeClosingEdges(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCTopTools_ListOfShape^ LOF, OCNaroWrappers::OCTopTools_DataMapOfShapeInteger^ MWisOld, OCNaroWrappers::OCTopTools_IndexedMapOfOrientedShape^ MshNOK) ;


static /*instead*/  System::Boolean CorrectONUVISO(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCTopoDS_Face^ Fsp) ;

//! Builds up the correct list of faces <LOFF> from <LOF>, using <br>
//!          faulty shapes from map <MshNOK>. <br>
//!          <LOF> is the list of <F>'s descendant faces. <br>
//!          returns false if building fails <br>
static /*instead*/  System::Boolean MakeFaces(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCTopTools_ListOfShape^ LOF, OCNaroWrappers::OCTopTools_IndexedMapOfOrientedShape^ MshNOK, OCNaroWrappers::OCTopTools_ListOfShape^ LOFF) ;

//! Returns <False>  if  the  face is  valid (the UV <br>
//!          representation  of  the  face is   a set   of  pcurves <br>
//!          connexed by points with   connexity 2). <br>
//!          Else,  splits <aFace> in order to return a list of valid <br>
//!          faces. <br>
static /*instead*/  System::Boolean Regularize(OCNaroWrappers::OCTopoDS_Face^ aFace, OCNaroWrappers::OCTopTools_ListOfShape^ aListOfFaces, OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ ESplits) ;

//! Returns <False>  if  the  face is  valid (the UV <br>
//!          representation  of  the  face is   a set   of  pcurves <br>
//!          connexed by points with   connexity 2). <br>
//!          Else,  splits wires of the face, these are boundaries of the <br>
//!          new faces to build up; <OldWiresNewWires> describes (wire, <br>
//!          splits of wire); <ESplits> describes (edge, edge's splits) <br>
static /*instead*/  System::Boolean RegularizeWires(OCNaroWrappers::OCTopoDS_Face^ aFace, OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ OldWiresNewWires, OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ ESplits) ;

//!  Classify wire's splits of map <OldWiresnewWires> in order to <br>
//!           compute <aListOfFaces>, the splits of <aFace>. <br>
static /*instead*/  System::Boolean RegularizeFace(OCNaroWrappers::OCTopoDS_Face^ aFace, OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ OldWiresnewWires, OCNaroWrappers::OCTopTools_ListOfShape^ aListOfFaces) ;

//! Returns <False> if the shell is valid (the solid is a set <br>
//!          of faces connexed by edges with connexity 2). <br>
//!          Else, splits faces of the shell; <OldFacesnewFaces> describes <br>
//!          (face, splits of face). <br>
static /*instead*/  System::Boolean RegularizeShells(OCNaroWrappers::OCTopoDS_Solid^ aSolid, OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ OldSheNewShe, OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ FSplits) ;

//! Prints <OCT> as string on stream <S>; returns <S>. <br>
static /*instead*/  Standard_OStream& Print(OCTopOpeBRepTool_OutCurveType OCT, Standard_OStream& S) ;


};

}; // OCNaroWrappers

#endif
