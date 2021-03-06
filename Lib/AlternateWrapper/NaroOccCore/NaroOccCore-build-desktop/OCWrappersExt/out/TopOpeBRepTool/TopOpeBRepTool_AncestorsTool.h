// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepTool_AncestorsTool_OCWrappers_HeaderFile
#define _TopOpeBRepTool_AncestorsTool_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepTool_AncestorsTool.hxx>
#include "../Converter.h"


#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_IndexedDataMapOfShapeListOfShape;


//! Describes the ancestors tool needed by <br>
//!          the class DSFiller from TopOpeInter. <br>
//! <br>
//! This class has been created because it is not possible <br>
//! to instantiate the argument TheAncestorsTool (of <br>
//! DSFiller from TopOpeInter) with a  package (TopExp) <br>
//! giving services as package methods. <br>
public ref class OCTopOpeBRepTool_AncestorsTool  {

protected:
  TopOpeBRepTool_AncestorsTool* nativeHandle;
  OCTopOpeBRepTool_AncestorsTool(OCDummy^) {};

public:
  property TopOpeBRepTool_AncestorsTool* Handle
  {
    TopOpeBRepTool_AncestorsTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepTool_AncestorsTool(TopOpeBRepTool_AncestorsTool* nativeHandle);

// Methods PUBLIC

//! same as package method TopExp::MapShapeListOfShapes() <br>
static /*instead*/  void MakeAncestors(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum TS, OCTopAbs_ShapeEnum TA, OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeListOfShape^ M) ;

~OCTopOpeBRepTool_AncestorsTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
