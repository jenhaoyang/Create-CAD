// File generated by CPPExt (Transient)
//
#ifndef _Message_SequenceNodeOfSequenceOfProgressScale_OCWrappers_HeaderFile
#define _Message_SequenceNodeOfSequenceOfProgressScale_OCWrappers_HeaderFile

// include the wrapped class
#include <Message_SequenceNodeOfSequenceOfProgressScale.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "Message_ProgressScale.h"


namespace OCNaroWrappers
{

ref class OCMessage_ProgressScale;
ref class OCMessage_SequenceOfProgressScale;



public ref class OCMessage_SequenceNodeOfSequenceOfProgressScale : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCMessage_SequenceNodeOfSequenceOfProgressScale(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCMessage_SequenceNodeOfSequenceOfProgressScale(Handle(Message_SequenceNodeOfSequenceOfProgressScale)* nativeHandle);

// Methods PUBLIC


OCMessage_SequenceNodeOfSequenceOfProgressScale(OCNaroWrappers::OCMessage_ProgressScale^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCMessage_ProgressScale^ Value() ;

~OCMessage_SequenceNodeOfSequenceOfProgressScale()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
