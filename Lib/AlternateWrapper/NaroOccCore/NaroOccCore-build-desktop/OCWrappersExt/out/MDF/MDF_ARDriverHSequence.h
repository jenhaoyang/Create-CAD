// File generated by CPPExt (Transient)
//
#ifndef _MDF_ARDriverHSequence_OCWrappers_HeaderFile
#define _MDF_ARDriverHSequence_OCWrappers_HeaderFile

// include the wrapped class
#include <MDF_ARDriverHSequence.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "MDF_ARDriverSequence.h"


namespace OCNaroWrappers
{

ref class OCMDF_ARDriver;
ref class OCMDF_ARDriverSequence;



public ref class OCMDF_ARDriverHSequence : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMDF_ARDriverHSequence(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMDF_ARDriverHSequence(Handle(MDF_ARDriverHSequence)* nativeHandle);

// Methods PUBLIC


OCMDF_ARDriverHSequence();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCMDF_ARDriver^ anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCMDF_ARDriverHSequence^ aSequence) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMDF_ARDriver^ anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMDF_ARDriverHSequence^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCMDF_ARDriver^ anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCMDF_ARDriverHSequence^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCMDF_ARDriver^ anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCMDF_ARDriverHSequence^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCMDF_ARDriverHSequence^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, OCNaroWrappers::OCMDF_ARDriver^ anItem) ;


 /*instead*/  OCMDF_ARDriver^ Value(Standard_Integer anIndex) ;


 /*instead*/  OCMDF_ARDriver^ ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCMDF_ARDriverSequence^ Sequence() ;


 /*instead*/  OCMDF_ARDriverSequence^ ChangeSequence() ;


 /*instead*/  OCMDF_ARDriverHSequence^ ShallowCopy() ;

~OCMDF_ARDriverHSequence()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
