// File generated by CPPExt (MPV)
//
#ifndef _BRepAlgo_SequenceOfSequenceOfInteger_OCWrappers_HeaderFile
#define _BRepAlgo_SequenceOfSequenceOfInteger_OCWrappers_HeaderFile

// include native header
#include <BRepAlgo_SequenceOfSequenceOfInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCTColStd_SequenceOfInteger;
ref class OCBRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger;



public ref class OCBRepAlgo_SequenceOfSequenceOfInteger  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCBRepAlgo_SequenceOfSequenceOfInteger(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepAlgo_SequenceOfSequenceOfInteger(BRepAlgo_SequenceOfSequenceOfInteger* nativeHandle);

// Methods PUBLIC


OCBRepAlgo_SequenceOfSequenceOfInteger();


 /*instead*/  OCBRepAlgo_SequenceOfSequenceOfInteger^ Assign(OCNaroWrappers::OCBRepAlgo_SequenceOfSequenceOfInteger^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColStd_SequenceOfInteger^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCBRepAlgo_SequenceOfSequenceOfInteger^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColStd_SequenceOfInteger^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCBRepAlgo_SequenceOfSequenceOfInteger^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfInteger^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBRepAlgo_SequenceOfSequenceOfInteger^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfInteger^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBRepAlgo_SequenceOfSequenceOfInteger^ S) ;


 /*instead*/  OCTColStd_SequenceOfInteger^ First() ;


 /*instead*/  OCTColStd_SequenceOfInteger^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCBRepAlgo_SequenceOfSequenceOfInteger^ Sub) ;


 /*instead*/  OCTColStd_SequenceOfInteger^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfInteger^ I) ;


 /*instead*/  OCTColStd_SequenceOfInteger^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCBRepAlgo_SequenceOfSequenceOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
