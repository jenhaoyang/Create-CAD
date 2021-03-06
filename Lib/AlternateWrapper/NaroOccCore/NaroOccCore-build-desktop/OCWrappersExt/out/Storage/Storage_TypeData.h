// File generated by CPPExt (Transient)
//
#ifndef _Storage_TypeData_OCWrappers_HeaderFile
#define _Storage_TypeData_OCWrappers_HeaderFile

// include the wrapped class
#include <Storage_TypeData.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Storage_PType.h"
#include "Storage_Error.h"
#include "../TCollection/TCollection_AsciiString.h"


namespace OCNaroWrappers
{

ref class OCStorage_Schema;
ref class OCTCollection_AsciiString;
ref class OCTColStd_HSequenceOfAsciiString;



public ref class OCStorage_TypeData : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStorage_TypeData(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStorage_TypeData(Handle(Storage_TypeData)* nativeHandle);

// Methods PUBLIC


OCStorage_TypeData();


 /*instead*/  Standard_Integer NumberOfTypes() ;


 /*instead*/  System::Boolean IsType(OCNaroWrappers::OCTCollection_AsciiString^ aName) ;


 /*instead*/  OCTColStd_HSequenceOfAsciiString^ Types() ;


 /*instead*/  OCStorage_Error ErrorStatus() ;


 /*instead*/  OCTCollection_AsciiString^ ErrorStatusExtension() ;


 /*instead*/  void ClearErrorStatus() ;


 /*instead*/  void Clear() ;

~OCStorage_TypeData()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
