// File generated by CPPExt (MPV)
//
#ifndef _TNaming_Localizer_OCWrappers_HeaderFile
#define _TNaming_Localizer_OCWrappers_HeaderFile

// include native header
#include <TNaming_Localizer.hxx>
#include "../Converter.h"


#include "../TopTools/TopTools_ListOfShape.h"
#include "TNaming_ListOfMapOfShape.h"
#include "TNaming_ListOfIndexedDataMapOfShapeListOfShape.h"
#include "../TopAbs/TopAbs_ShapeEnum.h"
#include "TNaming_Evolution.h"


namespace OCNaroWrappers
{

ref class OCTNaming_UsedShapes;
ref class OCTopTools_MapOfShape;
ref class OCTopoDS_Shape;
ref class OCTopTools_IndexedDataMapOfShapeListOfShape;
ref class OCTDF_Label;
ref class OCTopTools_ListOfShape;
ref class OCTNaming_ListOfNamedShape;
ref class OCTNaming_NamedShape;
ref class OCTNaming_MapOfNamedShape;



public ref class OCTNaming_Localizer  {

protected:
  TNaming_Localizer* nativeHandle;
  OCTNaming_Localizer(OCDummy^) {};

public:
  property TNaming_Localizer* Handle
  {
    TNaming_Localizer* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTNaming_Localizer(TNaming_Localizer* nativeHandle);

// Methods PUBLIC


OCTNaming_Localizer();


 /*instead*/  void Init(OCNaroWrappers::OCTNaming_UsedShapes^ US, Standard_Integer CurTrans) ;


 /*instead*/  OCTopTools_MapOfShape^ SubShapes(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum Type) ;


 /*instead*/  OCTopTools_IndexedDataMapOfShapeListOfShape^ Ancestors(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum Type) ;


 /*instead*/  void FindFeaturesInAncestors(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopoDS_Shape^ In, OCNaroWrappers::OCTopTools_MapOfShape^ AncInFeatures) ;


 /*instead*/  void GoBack(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTDF_Label^ Lab, OCTNaming_Evolution Evol, OCNaroWrappers::OCTopTools_ListOfShape^ OldS, OCNaroWrappers::OCTNaming_ListOfNamedShape^ OldLab) ;


 /*instead*/  void Backward(OCNaroWrappers::OCTNaming_NamedShape^ NS, OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTNaming_MapOfNamedShape^ Primitives, OCNaroWrappers::OCTopTools_MapOfShape^ ValidShapes) ;


 /*instead*/  void FindNeighbourg(OCNaroWrappers::OCTopoDS_Shape^ Cont, OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopTools_MapOfShape^ Neighbourg) ;


static /*instead*/  System::Boolean IsNew(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTNaming_NamedShape^ NS) ;


static /*instead*/  void FindGenerator(OCNaroWrappers::OCTNaming_NamedShape^ NS, OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopTools_ListOfShape^ theListOfGenerators) ;

//! Finds context of the shape <S>. <br>
static /*instead*/  void FindShapeContext(OCNaroWrappers::OCTNaming_NamedShape^ NS, OCNaroWrappers::OCTopoDS_Shape^ theS, OCNaroWrappers::OCTopoDS_Shape^ theSC) ;

~OCTNaming_Localizer()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
