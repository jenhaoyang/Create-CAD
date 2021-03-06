// File generated by CPPExt (Transient)
//
#ifndef _TColgp_HSequenceOfPnt2d_OCWrappers_HeaderFile
#define _TColgp_HSequenceOfPnt2d_OCWrappers_HeaderFile

// include the wrapped class
#include <TColgp_HSequenceOfPnt2d.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColgp_SequenceOfPnt2d.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;
ref class OCTColgp_SequenceOfPnt2d;



public ref class OCTColgp_HSequenceOfPnt2d : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColgp_HSequenceOfPnt2d(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColgp_HSequenceOfPnt2d(Handle(TColgp_HSequenceOfPnt2d)* nativeHandle);

// Methods PUBLIC


OCTColgp_HSequenceOfPnt2d();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCgp_Pnt2d^ anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColgp_HSequenceOfPnt2d^ aSequence) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCgp_Pnt2d^ anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColgp_HSequenceOfPnt2d^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCgp_Pnt2d^ anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTColgp_HSequenceOfPnt2d^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCgp_Pnt2d^ anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTColgp_HSequenceOfPnt2d^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCTColgp_HSequenceOfPnt2d^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, OCNaroWrappers::OCgp_Pnt2d^ anItem) ;


 /*instead*/  OCgp_Pnt2d^ Value(Standard_Integer anIndex) ;


 /*instead*/  OCgp_Pnt2d^ ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCTColgp_SequenceOfPnt2d^ Sequence() ;


 /*instead*/  OCTColgp_SequenceOfPnt2d^ ChangeSequence() ;


 /*instead*/  OCTColgp_HSequenceOfPnt2d^ ShallowCopy() ;

~OCTColgp_HSequenceOfPnt2d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
