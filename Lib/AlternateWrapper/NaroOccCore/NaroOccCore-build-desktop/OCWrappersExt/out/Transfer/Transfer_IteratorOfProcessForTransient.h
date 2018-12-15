// File generated by CPPExt (MPV)
//
#ifndef _Transfer_IteratorOfProcessForTransient_OCWrappers_HeaderFile
#define _Transfer_IteratorOfProcessForTransient_OCWrappers_HeaderFile

// include native header
#include <Transfer_IteratorOfProcessForTransient.hxx>
#include "../Converter.h"

#include "Transfer_TransferIterator.h"

#include "Transfer_TransferIterator.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HSequenceOfTransient;
ref class OCStandard_Transient;
ref class OCTColStd_MapTransientHasher;
ref class OCTransfer_ProcessForTransient;
ref class OCTransfer_TransferMapOfProcessForTransient;
ref class OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient;
ref class OCTransfer_ActorOfProcessForTransient;
ref class OCTransfer_Binder;



public ref class OCTransfer_IteratorOfProcessForTransient  : public OCTransfer_TransferIterator {

protected:
  // dummy constructor;
  OCTransfer_IteratorOfProcessForTransient(OCDummy^) : OCTransfer_TransferIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_IteratorOfProcessForTransient(Transfer_IteratorOfProcessForTransient* nativeHandle);

// Methods PUBLIC


OCTransfer_IteratorOfProcessForTransient(System::Boolean withstarts);


 /*instead*/  void Add(OCNaroWrappers::OCTransfer_Binder^ binder) ;


 /*instead*/  void Add(OCNaroWrappers::OCTransfer_Binder^ binder, OCNaroWrappers::OCStandard_Transient^ start) ;


 /*instead*/  void Filter(OCNaroWrappers::OCTColStd_HSequenceOfTransient^ list, System::Boolean keep) ;


 /*instead*/  System::Boolean HasStarting() ;


 /*instead*/  OCStandard_Transient^ Starting() ;

~OCTransfer_IteratorOfProcessForTransient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
