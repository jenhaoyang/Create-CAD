// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_ListIteratorOfListOfCheckResults_OCWrappers_HeaderFile
#define _BOPTools_ListIteratorOfListOfCheckResults_OCWrappers_HeaderFile

// include native header
#include <BOPTools_ListIteratorOfListOfCheckResults.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOPTools_ListOfCheckResults;
ref class OCBOPTools_CheckResult;
ref class OCBOPTools_ListNodeOfListOfCheckResults;



public ref class OCBOPTools_ListIteratorOfListOfCheckResults  {

protected:
  BOPTools_ListIteratorOfListOfCheckResults* nativeHandle;
  OCBOPTools_ListIteratorOfListOfCheckResults(OCDummy^) {};

public:
  property BOPTools_ListIteratorOfListOfCheckResults* Handle
  {
    BOPTools_ListIteratorOfListOfCheckResults* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_ListIteratorOfListOfCheckResults(BOPTools_ListIteratorOfListOfCheckResults* nativeHandle);

// Methods PUBLIC


OCBOPTools_ListIteratorOfListOfCheckResults();


OCBOPTools_ListIteratorOfListOfCheckResults(OCNaroWrappers::OCBOPTools_ListOfCheckResults^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCBOPTools_ListOfCheckResults^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCBOPTools_CheckResult^ Value() ;

~OCBOPTools_ListIteratorOfListOfCheckResults()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
