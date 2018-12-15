// File generated by CPPExt (MPV)
//
#ifndef _IntTools_SequenceOfCurves_OCWrappers_HeaderFile
#define _IntTools_SequenceOfCurves_OCWrappers_HeaderFile

// include native header
#include <IntTools_SequenceOfCurves.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCIntTools_Curve;
ref class OCIntTools_SequenceNodeOfSequenceOfCurves;



public ref class OCIntTools_SequenceOfCurves  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCIntTools_SequenceOfCurves(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntTools_SequenceOfCurves(IntTools_SequenceOfCurves* nativeHandle);

// Methods PUBLIC


OCIntTools_SequenceOfCurves();


 /*instead*/  OCIntTools_SequenceOfCurves^ Assign(OCNaroWrappers::OCIntTools_SequenceOfCurves^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntTools_Curve^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntTools_SequenceOfCurves^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntTools_Curve^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntTools_SequenceOfCurves^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntTools_Curve^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfCurves^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntTools_Curve^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfCurves^ S) ;


 /*instead*/  OCIntTools_Curve^ First() ;


 /*instead*/  OCIntTools_Curve^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfCurves^ Sub) ;


 /*instead*/  OCIntTools_Curve^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCIntTools_Curve^ I) ;


 /*instead*/  OCIntTools_Curve^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCIntTools_SequenceOfCurves()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
