// File generated by CPPExt (MPV)
//
#ifndef _TColStd_StackIteratorOfStackOfTransient_OCWrappers_HeaderFile
#define _TColStd_StackIteratorOfStackOfTransient_OCWrappers_HeaderFile

// include native header
#include <TColStd_StackIteratorOfStackOfTransient.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTColStd_StackOfTransient;
ref class OCTColStd_StackNodeOfStackOfTransient;



public ref class OCTColStd_StackIteratorOfStackOfTransient  {

protected:
  TColStd_StackIteratorOfStackOfTransient* nativeHandle;
  OCTColStd_StackIteratorOfStackOfTransient(OCDummy^) {};

public:
  property TColStd_StackIteratorOfStackOfTransient* Handle
  {
    TColStd_StackIteratorOfStackOfTransient* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColStd_StackIteratorOfStackOfTransient(TColStd_StackIteratorOfStackOfTransient* nativeHandle);

// Methods PUBLIC


OCTColStd_StackIteratorOfStackOfTransient();


OCTColStd_StackIteratorOfStackOfTransient(OCNaroWrappers::OCTColStd_StackOfTransient^ S);


 /*instead*/  void Initialize(OCNaroWrappers::OCTColStd_StackOfTransient^ S) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCStandard_Transient^ Value() ;

~OCTColStd_StackIteratorOfStackOfTransient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
