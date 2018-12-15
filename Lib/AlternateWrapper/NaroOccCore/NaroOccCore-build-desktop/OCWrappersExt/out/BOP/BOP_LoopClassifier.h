// File generated by CPPExt (MPV)
//
#ifndef _BOP_LoopClassifier_OCWrappers_HeaderFile
#define _BOP_LoopClassifier_OCWrappers_HeaderFile

// include native header
#include <BOP_LoopClassifier.hxx>
#include "../Converter.h"


#include "../TopAbs/TopAbs_State.h"


namespace OCNaroWrappers
{

ref class OCBOP_Loop;



//!  Root class to classify Loops in order to build Areas <br>
public ref class OCBOP_LoopClassifier  {

protected:
  BOP_LoopClassifier* nativeHandle;
  OCBOP_LoopClassifier(OCDummy^) {};

public:
  property BOP_LoopClassifier* Handle
  {
    BOP_LoopClassifier* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOP_LoopClassifier(BOP_LoopClassifier* nativeHandle);

// Methods PUBLIC


//! Destructor; <br>
virtual /*instead*/  void Delete() ;

~OCBOP_LoopClassifier()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif