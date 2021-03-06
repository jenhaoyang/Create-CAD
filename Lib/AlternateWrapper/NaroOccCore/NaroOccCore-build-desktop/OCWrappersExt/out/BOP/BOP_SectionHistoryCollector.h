// File generated by CPPExt (Transient)
//
#ifndef _BOP_SectionHistoryCollector_OCWrappers_HeaderFile
#define _BOP_SectionHistoryCollector_OCWrappers_HeaderFile

// include the wrapped class
#include <BOP_SectionHistoryCollector.hxx>
#include "../Converter.h"

#include "BOP_HistoryCollector.h"



namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_IndexedMapOfShape;
ref class OCTopTools_IndexedDataMapOfShapeListOfShape;



public ref class OCBOP_SectionHistoryCollector : OCBOP_HistoryCollector {

protected:
  // dummy constructor;
  OCBOP_SectionHistoryCollector(OCDummy^) : OCBOP_HistoryCollector((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOP_SectionHistoryCollector(Handle(BOP_SectionHistoryCollector)* nativeHandle);

// Methods PUBLIC


OCBOP_SectionHistoryCollector(OCNaroWrappers::OCTopoDS_Shape^ theShape1, OCNaroWrappers::OCTopoDS_Shape^ theShape2);


virtual /*instead*/  void SetResult(OCNaroWrappers::OCTopoDS_Shape^ theResult, BOPTools_PDSFiller theDSFiller) override;

~OCBOP_SectionHistoryCollector()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
