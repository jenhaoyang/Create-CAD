// File generated by CPPExt (Transient)
//
#ifndef _TColgp_SequenceNodeOfSequenceOfXYZ_OCWrappers_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfXYZ_OCWrappers_HeaderFile

// include the wrapped class
#include <TColgp_SequenceNodeOfSequenceOfXYZ.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "../gp/gp_XYZ.h"


namespace OCNaroWrappers
{

ref class OCgp_XYZ;
ref class OCTColgp_SequenceOfXYZ;



public ref class OCTColgp_SequenceNodeOfSequenceOfXYZ : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCTColgp_SequenceNodeOfSequenceOfXYZ(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColgp_SequenceNodeOfSequenceOfXYZ(Handle(TColgp_SequenceNodeOfSequenceOfXYZ)* nativeHandle);

// Methods PUBLIC


OCTColgp_SequenceNodeOfSequenceOfXYZ(OCNaroWrappers::OCgp_XYZ^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCgp_XYZ^ Value() ;

~OCTColgp_SequenceNodeOfSequenceOfXYZ()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
