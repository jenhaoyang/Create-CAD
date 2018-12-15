// File generated by CPPExt (MPV)
//
#ifndef _Transfer_TransferMapOfProcessForTransient_OCWrappers_HeaderFile
#define _Transfer_TransferMapOfProcessForTransient_OCWrappers_HeaderFile

// include native header
#include <Transfer_TransferMapOfProcessForTransient.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTransfer_Binder;
ref class OCTColStd_MapTransientHasher;
ref class OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient;



public ref class OCTransfer_TransferMapOfProcessForTransient  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTransfer_TransferMapOfProcessForTransient(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_TransferMapOfProcessForTransient(Transfer_TransferMapOfProcessForTransient* nativeHandle);

// Methods PUBLIC


OCTransfer_TransferMapOfProcessForTransient(Standard_Integer NbBuckets);


 /*instead*/  OCTransfer_TransferMapOfProcessForTransient^ Assign(OCNaroWrappers::OCTransfer_TransferMapOfProcessForTransient^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCStandard_Transient^ K, OCNaroWrappers::OCTransfer_Binder^ I) ;


 /*instead*/  void Substitute(Standard_Integer I, OCNaroWrappers::OCStandard_Transient^ K, OCNaroWrappers::OCTransfer_Binder^ T) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCStandard_Transient^ K) ;


 /*instead*/  OCStandard_Transient^ FindKey(Standard_Integer I) ;


 /*instead*/  OCTransfer_Binder^ FindFromIndex(Standard_Integer I) ;


 /*instead*/  OCTransfer_Binder^ ChangeFromIndex(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(OCNaroWrappers::OCStandard_Transient^ K) ;


 /*instead*/  OCTransfer_Binder^ FindFromKey(OCNaroWrappers::OCStandard_Transient^ K) ;


 /*instead*/  OCTransfer_Binder^ ChangeFromKey(OCNaroWrappers::OCStandard_Transient^ K) ;


 /*instead*/  Standard_Address FindFromKey1(OCNaroWrappers::OCStandard_Transient^ K) ;


 /*instead*/  Standard_Address ChangeFromKey1(OCNaroWrappers::OCStandard_Transient^ K) ;

~OCTransfer_TransferMapOfProcessForTransient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif