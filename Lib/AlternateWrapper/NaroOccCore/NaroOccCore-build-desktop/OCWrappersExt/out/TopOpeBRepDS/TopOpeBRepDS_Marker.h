// File generated by CPPExt (Transient)
//
#ifndef _TopOpeBRepDS_Marker_OCWrappers_HeaderFile
#define _TopOpeBRepDS_Marker_OCWrappers_HeaderFile

// include the wrapped class
#include <TopOpeBRepDS_Marker.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfBoolean;



public ref class OCTopOpeBRepDS_Marker : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTopOpeBRepDS_Marker(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepDS_Marker(Handle(TopOpeBRepDS_Marker)* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_Marker();


 /*instead*/  void Reset() ;


 /*instead*/  void Set(Standard_Integer i, System::Boolean b) ;


 /*instead*/  void Set(System::Boolean b, Standard_Integer n, Standard_Address a) ;


 /*instead*/  System::Boolean GetI(Standard_Integer i) ;


 /*instead*/  void Allocate(Standard_Integer n) ;

~OCTopOpeBRepDS_Marker()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
