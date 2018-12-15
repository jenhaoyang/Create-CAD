// File generated by CPPExt (MPV)
//
#ifndef _TopTools_SequenceOfShape_OCWrappers_HeaderFile
#define _TopTools_SequenceOfShape_OCWrappers_HeaderFile

// include native header
#include <TopTools_SequenceOfShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_SequenceNodeOfSequenceOfShape;



public ref class OCTopTools_SequenceOfShape  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCTopTools_SequenceOfShape(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopTools_SequenceOfShape(TopTools_SequenceOfShape* nativeHandle);

// Methods PUBLIC


OCTopTools_SequenceOfShape();


 /*instead*/  OCTopTools_SequenceOfShape^ Assign(OCNaroWrappers::OCTopTools_SequenceOfShape^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopoDS_Shape^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopTools_SequenceOfShape^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopoDS_Shape^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopTools_SequenceOfShape^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTopoDS_Shape^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTopTools_SequenceOfShape^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTopoDS_Shape^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTopTools_SequenceOfShape^ S) ;


 /*instead*/  OCTopoDS_Shape^ First() ;


 /*instead*/  OCTopoDS_Shape^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCTopTools_SequenceOfShape^ Sub) ;


 /*instead*/  OCTopoDS_Shape^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTopoDS_Shape^ I) ;


 /*instead*/  OCTopoDS_Shape^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCTopTools_SequenceOfShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
