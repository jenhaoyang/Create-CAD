// File generated by CPPExt (Transient)
//
#ifndef _ChFiDS_HData_OCWrappers_HeaderFile
#define _ChFiDS_HData_OCWrappers_HeaderFile

// include the wrapped class
#include <ChFiDS_HData.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "ChFiDS_SequenceOfSurfData.h"


namespace OCNaroWrappers
{

ref class OCChFiDS_SurfData;
ref class OCChFiDS_SequenceOfSurfData;



public ref class OCChFiDS_HData : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCChFiDS_HData(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCChFiDS_HData(Handle(ChFiDS_HData)* nativeHandle);

// Methods PUBLIC


OCChFiDS_HData();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCChFiDS_SurfData^ anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCChFiDS_HData^ aSequence) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCChFiDS_SurfData^ anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCChFiDS_HData^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCChFiDS_SurfData^ anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCChFiDS_HData^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCChFiDS_SurfData^ anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCChFiDS_HData^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCChFiDS_HData^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, OCNaroWrappers::OCChFiDS_SurfData^ anItem) ;


 /*instead*/  OCChFiDS_SurfData^ Value(Standard_Integer anIndex) ;


 /*instead*/  OCChFiDS_SurfData^ ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCChFiDS_SequenceOfSurfData^ Sequence() ;


 /*instead*/  OCChFiDS_SequenceOfSurfData^ ChangeSequence() ;


 /*instead*/  OCChFiDS_HData^ ShallowCopy() ;

~OCChFiDS_HData()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif