// File generated by CPPExt (MPV)
//
#ifndef _TDocStd_SequenceOfApplicationDelta_OCWrappers_HeaderFile
#define _TDocStd_SequenceOfApplicationDelta_OCWrappers_HeaderFile

// include native header
#include <TDocStd_SequenceOfApplicationDelta.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCTDocStd_ApplicationDelta;
ref class OCTDocStd_SequenceNodeOfSequenceOfApplicationDelta;



public ref class OCTDocStd_SequenceOfApplicationDelta  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCTDocStd_SequenceOfApplicationDelta(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDocStd_SequenceOfApplicationDelta(TDocStd_SequenceOfApplicationDelta* nativeHandle);

// Methods PUBLIC


OCTDocStd_SequenceOfApplicationDelta();


 /*instead*/  OCTDocStd_SequenceOfApplicationDelta^ Assign(OCNaroWrappers::OCTDocStd_SequenceOfApplicationDelta^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTDocStd_ApplicationDelta^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCTDocStd_SequenceOfApplicationDelta^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTDocStd_ApplicationDelta^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTDocStd_SequenceOfApplicationDelta^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTDocStd_ApplicationDelta^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTDocStd_SequenceOfApplicationDelta^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTDocStd_ApplicationDelta^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTDocStd_SequenceOfApplicationDelta^ S) ;


 /*instead*/  OCTDocStd_ApplicationDelta^ First() ;


 /*instead*/  OCTDocStd_ApplicationDelta^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCTDocStd_SequenceOfApplicationDelta^ Sub) ;


 /*instead*/  OCTDocStd_ApplicationDelta^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTDocStd_ApplicationDelta^ I) ;


 /*instead*/  OCTDocStd_ApplicationDelta^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCTDocStd_SequenceOfApplicationDelta()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif