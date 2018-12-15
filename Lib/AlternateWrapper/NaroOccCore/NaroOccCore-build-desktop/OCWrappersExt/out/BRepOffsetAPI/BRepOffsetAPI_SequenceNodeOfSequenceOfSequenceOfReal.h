// File generated by CPPExt (Transient)
//
#ifndef _BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal_OCWrappers_HeaderFile
#define _BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "../TColStd/TColStd_SequenceOfReal.h"


namespace OCNaroWrappers
{

ref class OCTColStd_SequenceOfReal;
ref class OCBRepOffsetAPI_SequenceOfSequenceOfReal;



public ref class OCBRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCBRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal(Handle(BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal)* nativeHandle);

// Methods PUBLIC


OCBRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal(OCNaroWrappers::OCTColStd_SequenceOfReal^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCTColStd_SequenceOfReal^ Value() ;

~OCBRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
