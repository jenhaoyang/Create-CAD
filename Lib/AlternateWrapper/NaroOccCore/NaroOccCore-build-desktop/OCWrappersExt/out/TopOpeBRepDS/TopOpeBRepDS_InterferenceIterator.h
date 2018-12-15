// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_InterferenceIterator_OCWrappers_HeaderFile
#define _TopOpeBRepDS_InterferenceIterator_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_InterferenceIterator.hxx>
#include "../Converter.h"


#include "TopOpeBRepDS_ListIteratorOfListOfInterference.h"
#include "TopOpeBRepDS_Kind.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_ListOfInterference;
ref class OCTopOpeBRepDS_Interference;
ref class OCTopOpeBRepDS_ListIteratorOfListOfInterference;


//! Iterate  on  interferences  of  a  list,  matching <br>
//!          conditions  on   interferences. <br>
//! Nota   : <br>
//!          inheritance  of   ListIteratorOfListOfInterference  from <br>
//!          TopOpeBRepDS  has  not   been  done   because  of  the <br>
//!          impossibility of naming  the classical  More, Next <br>
//!          methods  which are declared as static in <br>
//!          TCollection_ListIteratorOfList ... . ListIteratorOfList <br>
//!          has benn placed as a field of InterferenceIterator. <br>
public ref class OCTopOpeBRepDS_InterferenceIterator  {

protected:
  TopOpeBRepDS_InterferenceIterator* nativeHandle;
  OCTopOpeBRepDS_InterferenceIterator(OCDummy^) {};

public:
  property TopOpeBRepDS_InterferenceIterator* Handle
  {
    TopOpeBRepDS_InterferenceIterator* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepDS_InterferenceIterator(TopOpeBRepDS_InterferenceIterator* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_InterferenceIterator();

//! Creates an iterator on the Interference of list <L>. <br>
OCTopOpeBRepDS_InterferenceIterator(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ L);

//! re-initialize  interference iteration  process  on <br>
//!          the list of interference <L>. <br>
//!          Conditions are not modified. <br>
 /*instead*/  void Init(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ L) ;

//! define a condition on interference iteration process. <br>
//!          Interference must match the Geometry Kind <ST> <br>
 /*instead*/  void GeometryKind(OCTopOpeBRepDS_Kind GK) ;

//! define a condition on interference iteration process. <br>
//!          Interference must match the Geometry <G> <br>
 /*instead*/  void Geometry(Standard_Integer G) ;

//! define a condition on interference iteration process. <br>
//!          Interference must match the Support Kind <ST> <br>
 /*instead*/  void SupportKind(OCTopOpeBRepDS_Kind ST) ;

//! define a condition on interference iteration process. <br>
//!          Interference must match the Support <S> <br>
 /*instead*/  void Support(Standard_Integer S) ;

//! reach for an interference  matching the conditions <br>
//!          (if  defined). <br>
 /*instead*/  void Match() ;

//! Returns  True if the Interference <I>  matches the <br>
//!          conditions (if defined). <br>
//!          If no conditions defined, returns True. <br>
virtual /*instead*/  System::Boolean MatchInterference(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I) ;

//! Returns True if there is a current Interference in <br>
//!          the iteration. <br>
 /*instead*/  System::Boolean More() ;

//! Move to the next Interference. <br>
 /*instead*/  void Next() ;

//! Returns   the   current   Interference,   matching   the <br>
//!          conditions  (if defined). <br>
 /*instead*/  OCTopOpeBRepDS_Interference^ Value() ;


 /*instead*/  OCTopOpeBRepDS_ListIteratorOfListOfInterference^ ChangeIterator() ;

~OCTopOpeBRepDS_InterferenceIterator()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
