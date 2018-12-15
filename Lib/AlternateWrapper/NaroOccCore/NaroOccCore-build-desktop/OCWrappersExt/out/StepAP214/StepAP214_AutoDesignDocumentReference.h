// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_AutoDesignDocumentReference_OCWrappers_HeaderFile
#define _StepAP214_AutoDesignDocumentReference_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include "../Converter.h"

#include "../StepBasic/StepBasic_DocumentReference.h"



namespace OCNaroWrappers
{

ref class OCStepAP214_HArray1OfAutoDesignReferencingItem;
ref class OCStepBasic_Document;
ref class OCTCollection_HAsciiString;
ref class OCStepAP214_AutoDesignReferencingItem;



public ref class OCStepAP214_AutoDesignDocumentReference : OCStepBasic_DocumentReference {

protected:
  // dummy constructor;
  OCStepAP214_AutoDesignDocumentReference(OCDummy^) : OCStepBasic_DocumentReference((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_AutoDesignDocumentReference(Handle(StepAP214_AutoDesignDocumentReference)* nativeHandle);

// Methods PUBLIC


OCStepAP214_AutoDesignDocumentReference();


 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Document^ aAssignedDocument, OCNaroWrappers::OCTCollection_HAsciiString^ aSource, OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignReferencingItem^ aItems) ;


 /*instead*/  OCStepAP214_HArray1OfAutoDesignReferencingItem^ Items() ;


 /*instead*/  void SetItems(OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignReferencingItem^ aItems) ;


 /*instead*/  OCStepAP214_AutoDesignReferencingItem^ ItemsValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbItems() ;

~OCStepAP214_AutoDesignDocumentReference()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
