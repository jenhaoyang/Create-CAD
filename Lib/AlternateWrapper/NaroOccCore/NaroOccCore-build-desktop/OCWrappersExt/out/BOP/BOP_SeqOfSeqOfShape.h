// File generated by CPPExt (MPV)
//
#ifndef _BOP_SeqOfSeqOfShape_OCWrappers_HeaderFile
#define _BOP_SeqOfSeqOfShape_OCWrappers_HeaderFile

// include native header
#include <BOP_SeqOfSeqOfShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCTopTools_SequenceOfShape;
ref class OCBOP_SequenceNodeOfSeqOfSeqOfShape;



public ref class OCBOP_SeqOfSeqOfShape  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCBOP_SeqOfSeqOfShape(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOP_SeqOfSeqOfShape(BOP_SeqOfSeqOfShape* nativeHandle);

// Methods PUBLIC


OCBOP_SeqOfSeqOfShape();


 /*instead*/  OCBOP_SeqOfSeqOfShape^ Assign(OCNaroWrappers::OCBOP_SeqOfSeqOfShape^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopTools_SequenceOfShape^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCBOP_SeqOfSeqOfShape^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopTools_SequenceOfShape^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCBOP_SeqOfSeqOfShape^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTopTools_SequenceOfShape^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBOP_SeqOfSeqOfShape^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTopTools_SequenceOfShape^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBOP_SeqOfSeqOfShape^ S) ;


 /*instead*/  OCTopTools_SequenceOfShape^ First() ;


 /*instead*/  OCTopTools_SequenceOfShape^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCBOP_SeqOfSeqOfShape^ Sub) ;


 /*instead*/  OCTopTools_SequenceOfShape^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTopTools_SequenceOfShape^ I) ;


 /*instead*/  OCTopTools_SequenceOfShape^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCBOP_SeqOfSeqOfShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
