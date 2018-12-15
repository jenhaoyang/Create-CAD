// File generated by CPPExt (MPV)
//
#ifndef _MeshVS_SequenceOfPrsBuilder_OCWrappers_HeaderFile
#define _MeshVS_SequenceOfPrsBuilder_OCWrappers_HeaderFile

// include native header
#include <MeshVS_SequenceOfPrsBuilder.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCMeshVS_PrsBuilder;
ref class OCMeshVS_SequenceNodeOfSequenceOfPrsBuilder;



public ref class OCMeshVS_SequenceOfPrsBuilder  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCMeshVS_SequenceOfPrsBuilder(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_SequenceOfPrsBuilder(MeshVS_SequenceOfPrsBuilder* nativeHandle);

// Methods PUBLIC


OCMeshVS_SequenceOfPrsBuilder();


 /*instead*/  OCMeshVS_SequenceOfPrsBuilder^ Assign(OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCMeshVS_PrsBuilder^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMeshVS_PrsBuilder^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMeshVS_PrsBuilder^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMeshVS_PrsBuilder^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ S) ;


 /*instead*/  OCMeshVS_PrsBuilder^ First() ;


 /*instead*/  OCMeshVS_PrsBuilder^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ Sub) ;


 /*instead*/  OCMeshVS_PrsBuilder^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCMeshVS_PrsBuilder^ I) ;


 /*instead*/  OCMeshVS_PrsBuilder^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCMeshVS_SequenceOfPrsBuilder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif