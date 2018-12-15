// File generated by CPPExt (Transient)
//
#ifndef _MAT_Node_OCWrappers_HeaderFile
#define _MAT_Node_OCWrappers_HeaderFile

// include the wrapped class
#include <MAT_Node.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCMAT_Arc;
ref class OCMAT_SequenceOfArc;
ref class OCMAT_SequenceOfBasicElt;



public ref class OCMAT_Node : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMAT_Node(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT_Node(Handle(MAT_Node)* nativeHandle);

// Methods PUBLIC


OCMAT_Node(Standard_Integer GeomIndex, OCNaroWrappers::OCMAT_Arc^ LinkedArc, Standard_Real Distance);

//! Returns the index associated of the geometric <br>
//!            representation of <me>. <br>
 /*instead*/  Standard_Integer GeomIndex() ;

//! Returns the index associated of the node <br>
 /*instead*/  Standard_Integer Index() ;

//! Returns in <S> the Arcs linked to <me>. <br>
 /*instead*/  void LinkedArcs(OCNaroWrappers::OCMAT_SequenceOfArc^ S) ;

//! Returns  in <S> the BasicElts equidistant <br>
//!          to <me>. <br>
 /*instead*/  void NearElts(OCNaroWrappers::OCMAT_SequenceOfBasicElt^ S) ;


 /*instead*/  Standard_Real Distance() ;

//!Returns True if <me> is a pending Node. <br>
//!          (ie : the number of Arc Linked = 1) <br>
 /*instead*/  System::Boolean PendingNode() ;

//! Returns True if <me> belongs to the figure. <br>
 /*instead*/  System::Boolean OnBasicElt() ;

//! Returns True if the distance of <me> is Infinite <br>
 /*instead*/  System::Boolean Infinite() ;

//! Set the index associated of the node <br>
 /*instead*/  void SetIndex(Standard_Integer anIndex) ;


 /*instead*/  void SetLinkedArc(OCNaroWrappers::OCMAT_Arc^ anArc) ;

~OCMAT_Node()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
