// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_SequenceNodeOfSequenceOfStructure_OCWrappers_HeaderFile
#define _Graphic3d_SequenceNodeOfSequenceOfStructure_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_SequenceNodeOfSequenceOfStructure.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCGraphic3d_Structure;
ref class OCGraphic3d_SequenceOfStructure;



public ref class OCGraphic3d_SequenceNodeOfSequenceOfStructure : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCGraphic3d_SequenceNodeOfSequenceOfStructure(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_SequenceNodeOfSequenceOfStructure(Handle(Graphic3d_SequenceNodeOfSequenceOfStructure)* nativeHandle);

// Methods PUBLIC


OCGraphic3d_SequenceNodeOfSequenceOfStructure(OCNaroWrappers::OCGraphic3d_Structure^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCGraphic3d_Structure^ Value() ;

~OCGraphic3d_SequenceNodeOfSequenceOfStructure()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
