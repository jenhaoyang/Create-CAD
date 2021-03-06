// File generated by CPPExt (Transient)
//
#ifndef _TDocStd_Owner_OCWrappers_HeaderFile
#define _TDocStd_Owner_OCWrappers_HeaderFile

// include the wrapped class
#include <TDocStd_Owner.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"



namespace OCNaroWrappers
{

ref class OCTDocStd_Document;
ref class OCStandard_GUID;
ref class OCTDF_Data;
ref class OCTDF_Attribute;
ref class OCTDF_RelocationTable;



public ref class OCTDocStd_Owner : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDocStd_Owner(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDocStd_Owner(Handle(TDocStd_Owner)* nativeHandle);

// Methods PUBLIC

//! class methods <br>
//!          ============= <br>
static /*instead*/  OCStandard_GUID^ GetID() ;


static /*instead*/  void SetDocument(OCNaroWrappers::OCTDF_Data^ indata, OCNaroWrappers::OCTDocStd_Document^ doc) ;

//! Owner methods <br>
//!          =============== <br>
static /*instead*/  OCTDocStd_Document^ GetDocument(OCNaroWrappers::OCTDF_Data^ ofdata) ;


OCTDocStd_Owner();


 /*instead*/  void SetDocument(OCNaroWrappers::OCTDocStd_Document^ document) ;


 /*instead*/  OCTDocStd_Document^ GetDocument() ;


 /*instead*/  OCStandard_GUID^ ID() ;


 /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ With) ;


 /*instead*/  OCTDF_Attribute^ NewEmpty() ;


 /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT) ;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& anOS) override;

~OCTDocStd_Owner()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
