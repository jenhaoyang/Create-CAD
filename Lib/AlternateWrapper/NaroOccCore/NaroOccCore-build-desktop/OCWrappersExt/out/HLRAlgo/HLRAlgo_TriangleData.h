// File generated by CPPExt (MPV)
//
#ifndef _HLRAlgo_TriangleData_OCWrappers_HeaderFile
#define _HLRAlgo_TriangleData_OCWrappers_HeaderFile

// include native header
#include <HLRAlgo_TriangleData.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCHLRAlgo_TriangleData  {

protected:
  HLRAlgo_TriangleData* nativeHandle;
  OCHLRAlgo_TriangleData(OCDummy^) {};

public:
  property HLRAlgo_TriangleData* Handle
  {
    HLRAlgo_TriangleData* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCHLRAlgo_TriangleData(HLRAlgo_TriangleData* nativeHandle);

// Methods PUBLIC


OCHLRAlgo_TriangleData();


 /*instead*/  Standard_Address Indices() ;

~OCHLRAlgo_TriangleData()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
