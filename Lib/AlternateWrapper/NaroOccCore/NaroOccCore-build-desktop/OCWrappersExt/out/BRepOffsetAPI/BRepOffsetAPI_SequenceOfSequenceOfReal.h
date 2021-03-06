// File generated by CPPExt (MPV)
//
#ifndef _BRepOffsetAPI_SequenceOfSequenceOfReal_OCWrappers_HeaderFile
#define _BRepOffsetAPI_SequenceOfSequenceOfReal_OCWrappers_HeaderFile

// include native header
#include <BRepOffsetAPI_SequenceOfSequenceOfReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCTColStd_SequenceOfReal;
ref class OCBRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal;



public ref class OCBRepOffsetAPI_SequenceOfSequenceOfReal  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCBRepOffsetAPI_SequenceOfSequenceOfReal(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepOffsetAPI_SequenceOfSequenceOfReal(BRepOffsetAPI_SequenceOfSequenceOfReal* nativeHandle);

// Methods PUBLIC


OCBRepOffsetAPI_SequenceOfSequenceOfReal();


 /*instead*/  OCBRepOffsetAPI_SequenceOfSequenceOfReal^ Assign(OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfReal^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColStd_SequenceOfReal^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfReal^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColStd_SequenceOfReal^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfReal^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfReal^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfReal^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfReal^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfReal^ S) ;


 /*instead*/  OCTColStd_SequenceOfReal^ First() ;


 /*instead*/  OCTColStd_SequenceOfReal^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCBRepOffsetAPI_SequenceOfSequenceOfReal^ Sub) ;


 /*instead*/  OCTColStd_SequenceOfReal^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfReal^ I) ;


 /*instead*/  OCTColStd_SequenceOfReal^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCBRepOffsetAPI_SequenceOfSequenceOfReal()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
