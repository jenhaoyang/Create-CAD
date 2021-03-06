// File generated by CPPExt (Transient)
//
#ifndef _BRepBlend_SequenceNodeOfSequenceOfLine_OCWrappers_HeaderFile
#define _BRepBlend_SequenceNodeOfSequenceOfLine_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepBlend_SequenceNodeOfSequenceOfLine.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCBRepBlend_Line;
ref class OCBRepBlend_SequenceOfLine;



public ref class OCBRepBlend_SequenceNodeOfSequenceOfLine : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCBRepBlend_SequenceNodeOfSequenceOfLine(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepBlend_SequenceNodeOfSequenceOfLine(Handle(BRepBlend_SequenceNodeOfSequenceOfLine)* nativeHandle);

// Methods PUBLIC


OCBRepBlend_SequenceNodeOfSequenceOfLine(OCNaroWrappers::OCBRepBlend_Line^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCBRepBlend_Line^ Value() ;

~OCBRepBlend_SequenceNodeOfSequenceOfLine()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
