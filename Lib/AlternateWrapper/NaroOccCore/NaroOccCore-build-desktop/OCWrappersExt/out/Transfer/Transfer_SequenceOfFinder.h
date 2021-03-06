// File generated by CPPExt (MPV)
//
#ifndef _Transfer_SequenceOfFinder_OCWrappers_HeaderFile
#define _Transfer_SequenceOfFinder_OCWrappers_HeaderFile

// include native header
#include <Transfer_SequenceOfFinder.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCTransfer_Finder;
ref class OCTransfer_SequenceNodeOfSequenceOfFinder;



public ref class OCTransfer_SequenceOfFinder  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCTransfer_SequenceOfFinder(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_SequenceOfFinder(Transfer_SequenceOfFinder* nativeHandle);

// Methods PUBLIC


OCTransfer_SequenceOfFinder();


 /*instead*/  OCTransfer_SequenceOfFinder^ Assign(OCNaroWrappers::OCTransfer_SequenceOfFinder^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTransfer_Finder^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCTransfer_SequenceOfFinder^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTransfer_Finder^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTransfer_SequenceOfFinder^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTransfer_Finder^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTransfer_SequenceOfFinder^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTransfer_Finder^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTransfer_SequenceOfFinder^ S) ;


 /*instead*/  OCTransfer_Finder^ First() ;


 /*instead*/  OCTransfer_Finder^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCTransfer_SequenceOfFinder^ Sub) ;


 /*instead*/  OCTransfer_Finder^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTransfer_Finder^ I) ;


 /*instead*/  OCTransfer_Finder^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCTransfer_SequenceOfFinder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
