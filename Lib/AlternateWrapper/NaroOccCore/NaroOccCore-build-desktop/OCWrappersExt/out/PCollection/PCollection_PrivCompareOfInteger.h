// File generated by CPPExt (MPV)
//
#ifndef _PCollection_PrivCompareOfInteger_OCWrappers_HeaderFile
#define _PCollection_PrivCompareOfInteger_OCWrappers_HeaderFile

// include native header
#include <PCollection_PrivCompareOfInteger.hxx>
#include "../Converter.h"


#include "../Standard/Standard_Storable.h"


namespace OCNaroWrappers
{




public ref class OCPCollection_PrivCompareOfInteger  {

protected:
  PCollection_PrivCompareOfInteger* nativeHandle;
  OCPCollection_PrivCompareOfInteger(OCDummy^) {};

public:
  property PCollection_PrivCompareOfInteger* Handle
  {
    PCollection_PrivCompareOfInteger* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCPCollection_PrivCompareOfInteger(PCollection_PrivCompareOfInteger* nativeHandle);

// Methods PUBLIC


virtual /*instead*/  System::Boolean IsLower(Standard_Integer Left, Standard_Integer Right) ;


virtual /*instead*/  System::Boolean IsGreater(Standard_Integer Left, Standard_Integer Right) ;


 /*instead*/  System::Boolean IsEqual(Standard_Integer Left, Standard_Integer Right) ;

~OCPCollection_PrivCompareOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
