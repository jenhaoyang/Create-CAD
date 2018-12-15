// File generated by CPPExt (MPV)
//
#ifndef _TDF_AttributeSequence_OCWrappers_HeaderFile
#define _TDF_AttributeSequence_OCWrappers_HeaderFile

// include native header
#include <TDF_AttributeSequence.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCTDF_Attribute;
ref class OCTDF_SequenceNodeOfAttributeSequence;



public ref class OCTDF_AttributeSequence  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCTDF_AttributeSequence(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_AttributeSequence(TDF_AttributeSequence* nativeHandle);

// Methods PUBLIC


OCTDF_AttributeSequence();


 /*instead*/  OCTDF_AttributeSequence^ Assign(OCNaroWrappers::OCTDF_AttributeSequence^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTDF_Attribute^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCTDF_AttributeSequence^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTDF_Attribute^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTDF_AttributeSequence^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTDF_Attribute^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTDF_AttributeSequence^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTDF_Attribute^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTDF_AttributeSequence^ S) ;


 /*instead*/  OCTDF_Attribute^ First() ;


 /*instead*/  OCTDF_Attribute^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCTDF_AttributeSequence^ Sub) ;


 /*instead*/  OCTDF_Attribute^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTDF_Attribute^ I) ;


 /*instead*/  OCTDF_Attribute^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCTDF_AttributeSequence()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
