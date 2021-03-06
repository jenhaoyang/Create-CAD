// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_DSFiller_OCWrappers_HeaderFile
#define _BOPTools_DSFiller_OCWrappers_HeaderFile

// include native header
#include <BOPTools_DSFiller.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Shape.h"
#include "../TColStd/TColStd_DataMapOfIntegerListOfInteger.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTColStd_SetOfInteger;
ref class OCBOPTools_SSIntersectionAttribute;
ref class OCBooleanOperations_ShapesDataStructure;
ref class OCBOPTools_InterferencePool;
ref class OCBOPTools_PavePool;
ref class OCBOPTools_CommonBlockPool;
ref class OCBOPTools_SplitShapesPool;
ref class OCBOPTools_PaveFiller;
ref class OCTColStd_DataMapOfIntegerListOfInteger;



//!  class that provides <br>
//!  1. creation of the data structure (DS) <br>
//!  2. creation of the interferences' pool <br>
//!  3. invokation of PaveFiller->Perform() to fill the DS <br>
public ref class OCBOPTools_DSFiller  {

protected:
  BOPTools_DSFiller* nativeHandle;
  OCBOPTools_DSFiller(OCDummy^) {};

public:
  property BOPTools_DSFiller* Handle
  {
    BOPTools_DSFiller* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_DSFiller(BOPTools_DSFiller* nativeHandle);

// Methods PUBLIC


//! Empty constructor <br>
OCBOPTools_DSFiller();


//! Modifier <br>
//! Sets the arguments of boolean operation <br>
 /*instead*/  void SetShapes(OCNaroWrappers::OCTopoDS_Shape^ aS1, OCNaroWrappers::OCTopoDS_Shape^ aS2) ;


//! Selector <br>
 /*instead*/  OCTopoDS_Shape^ Shape1() ;


//! Selector <br>
 /*instead*/  OCTopoDS_Shape^ Shape2() ;


//! Performs the filling of the DS <br>
//! <br>
 /*instead*/  void Perform() ;


 /*instead*/  void InitFillersAndPools() ;


 /*instead*/  void PartialPerform(OCNaroWrappers::OCTColStd_SetOfInteger^ anObjSubSet, OCNaroWrappers::OCTColStd_SetOfInteger^ aToolSubSet) ;


 /*instead*/  void ToCompletePerform() ;


//! Performs the filling of the DS <br>
 /*instead*/  void Perform(OCNaroWrappers::OCBOPTools_SSIntersectionAttribute^ theSectionAttribute) ;


//! Selector <br>
 /*instead*/  OCBooleanOperations_ShapesDataStructure^ DS() ;


//! Selector <br>
 /*instead*/  OCBOPTools_InterferencePool^ InterfPool() ;


//! Selector <br>
 /*instead*/  OCBOPTools_PavePool^ PavePool() ;


//! Selector <br>
 /*instead*/  OCBOPTools_CommonBlockPool^ CommonBlockPool() ;


//! Selector <br>
 /*instead*/  OCBOPTools_SplitShapesPool^ SplitShapesPool() ;


//! Selector <br>
 /*instead*/  OCBOPTools_PaveFiller^ PaveFiller() ;


//! Returns TRUE if new DS and the interferences' pool has been created <br>
 /*instead*/  System::Boolean IsNewFiller() ;


//! Modifier <br>
 /*instead*/  void SetNewFiller(System::Boolean aFlag) ;


//! Selector <br>
 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  OCTColStd_DataMapOfIntegerListOfInteger^ SplitFacePool() ;


 /*instead*/  OCTColStd_DataMapOfIntegerListOfInteger^ ChangeSplitFacePool() ;

//! Finds sub-shapes of theShape having equal type <br>
//!          and store them in theShapeResult. <br>
//!          Returns the following status codes: <br>
//!          0 - OK <br>
//!          1 - Error: theShape is a COMPSOLID <br>
//!          2 - Error: theShape is not a COMPOUND <br>
//!          3 - Error: theShape contains shapes of COMPSOLID type <br>
//!          4 - Error: Subshape of theShape have unkown type <br>
//!          5 - Error: theShape contains shapes of different type <br>
static /*instead*/  Standard_Integer TreatCompound(OCNaroWrappers::OCTopoDS_Shape^ theShape, OCNaroWrappers::OCTopoDS_Shape^ theShapeResult) ;

~OCBOPTools_DSFiller()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
