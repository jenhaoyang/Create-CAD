// File generated by CPPExt (Transient)
//
#ifndef _TopTools_HSequenceOfShape_OCWrappers_HeaderFile
#define _TopTools_HSequenceOfShape_OCWrappers_HeaderFile

// include the wrapped class
#include <TopTools_HSequenceOfShape.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TopTools_SequenceOfShape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_SequenceOfShape;



public ref class OCTopTools_HSequenceOfShape : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTopTools_HSequenceOfShape(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopTools_HSequenceOfShape(Handle(TopTools_HSequenceOfShape)* nativeHandle);

// Methods PUBLIC


OCTopTools_HSequenceOfShape();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCTopoDS_Shape^ anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopTools_HSequenceOfShape^ aSequence) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopoDS_Shape^ anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopTools_HSequenceOfShape^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTopoDS_Shape^ anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTopTools_HSequenceOfShape^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTopoDS_Shape^ anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTopTools_HSequenceOfShape^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCTopTools_HSequenceOfShape^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, OCNaroWrappers::OCTopoDS_Shape^ anItem) ;


 /*instead*/  OCTopoDS_Shape^ Value(Standard_Integer anIndex) ;


 /*instead*/  OCTopoDS_Shape^ ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCTopTools_SequenceOfShape^ Sequence() ;


 /*instead*/  OCTopTools_SequenceOfShape^ ChangeSequence() ;


 /*instead*/  OCTopTools_HSequenceOfShape^ ShallowCopy() ;

~OCTopTools_HSequenceOfShape()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
