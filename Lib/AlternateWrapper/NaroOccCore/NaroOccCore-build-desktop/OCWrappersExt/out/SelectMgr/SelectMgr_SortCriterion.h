// File generated by CPPExt (MPV)
//
#ifndef _SelectMgr_SortCriterion_OCWrappers_HeaderFile
#define _SelectMgr_SortCriterion_OCWrappers_HeaderFile

// include native header
#include <SelectMgr_SortCriterion.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{



//! This class provides data and criterion for sorting candidate <br>
//!          entities in the process of interactive selection by mouse click <br>
public ref class OCSelectMgr_SortCriterion  {

protected:
  SelectMgr_SortCriterion* nativeHandle;
  OCSelectMgr_SortCriterion(OCDummy^) {};

public:
  property SelectMgr_SortCriterion* Handle
  {
    SelectMgr_SortCriterion* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCSelectMgr_SortCriterion(SelectMgr_SortCriterion* nativeHandle);

// Methods PUBLIC


OCSelectMgr_SortCriterion();

//! Defines parameters of selection criterion: <br>
//! - Priority: selection priority <br>
//! - Depth: distance from the view plane to the entity <br>
//! - MinDist: distance from the clicked point to the entity on the view plane <br>
//! - Tol: tolerance used for selecting candidates <br>
//! - PreferClosest: specify whether closest object is preferred even if <br>
//!                  if has less priority <br>
OCSelectMgr_SortCriterion(Standard_Integer thePriority, Standard_Real theDepth, Standard_Real theMinDist, Standard_Real theTol, System::Boolean PreferClosest);


 /*instead*/  void SetPriority(Standard_Integer P) ;


 /*instead*/  void SetDepth(Standard_Real D) ;


 /*instead*/  void SetMinDist(Standard_Real D) ;


 /*instead*/  void SetTol(Standard_Real T) ;


 /*instead*/  Standard_Integer Priority() ;


 /*instead*/  Standard_Real Depth() ;


 /*instead*/  Standard_Real MinDist() ;


 /*instead*/  Standard_Real Tol() ;


 /*instead*/  System::Boolean IsGreater(OCNaroWrappers::OCSelectMgr_SortCriterion^ anOtherCriterion) ;


 /*instead*/  System::Boolean IsLower(OCNaroWrappers::OCSelectMgr_SortCriterion^ anOtherCriterion) ;

~OCSelectMgr_SortCriterion()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
