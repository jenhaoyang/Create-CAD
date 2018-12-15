// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_EIR_OCWrappers_HeaderFile
#define _TopOpeBRepDS_EIR_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_EIR.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_HDataStructure;


//!  EdgeInterferenceReducer <br>
public ref class OCTopOpeBRepDS_EIR  {

protected:
  TopOpeBRepDS_EIR* nativeHandle;
  OCTopOpeBRepDS_EIR(OCDummy^) {};

public:
  property TopOpeBRepDS_EIR* Handle
  {
    TopOpeBRepDS_EIR* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepDS_EIR(TopOpeBRepDS_EIR* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_EIR(OCNaroWrappers::OCTopOpeBRepDS_HDataStructure^ HDS);


 /*instead*/  void ProcessEdgeInterferences() ;


 /*instead*/  void ProcessEdgeInterferences(Standard_Integer I) ;

~OCTopOpeBRepDS_EIR()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
