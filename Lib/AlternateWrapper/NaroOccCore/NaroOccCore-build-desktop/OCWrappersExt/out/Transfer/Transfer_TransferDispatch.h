// File generated by CPPExt (MPV)
//
#ifndef _Transfer_TransferDispatch_OCWrappers_HeaderFile
#define _Transfer_TransferDispatch_OCWrappers_HeaderFile

// include native header
#include <Transfer_TransferDispatch.hxx>
#include "../Converter.h"

#include "../Interface/Interface_CopyTool.h"

#include "../Interface/Interface_CopyTool.h"


namespace OCNaroWrappers
{

ref class OCInterface_InterfaceModel;
ref class OCInterface_GeneralLib;
ref class OCInterface_Protocol;
ref class OCTransfer_TransientProcess;
ref class OCStandard_Transient;


//! A TransferDispatch is aimed to dispatch Entities between two <br>
//!           Interface Models, by default by copying them, as CopyTool, but <br>
//!           with more capabilities of adapting : Copy is redefined to <br>
//!           firstly pass the hand to a TransferProcess. If this gives no <br>
//!           result, standard Copy is called. <br>
//! <br>
//!           This allow, for instance, to modify the copied Entity (such as <br>
//!           changing a Name for a VDA Entity), or to do a deeper work <br>
//!           (such as Substituting a kind of Entity to another one). <br>
//! <br>
//!           For these reasons, TransferDispatch is basically a CopyTool, <br>
//!           but uses a more sophiscated control, which is TransferProcess, <br>
//!           and its method Copy is redefined <br>
public ref class OCTransfer_TransferDispatch  : public OCInterface_CopyTool {

protected:
  // dummy constructor;
  OCTransfer_TransferDispatch(OCDummy^) : OCInterface_CopyTool((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_TransferDispatch(Transfer_TransferDispatch* nativeHandle);

// Methods PUBLIC

//! Creates a TransferDispatch from a Model. Works with a General <br>
//!           Service Library, given as an Argument <br>
//!           A TransferDispatch is created as a CopyTool in which the <br>
//!           Control is set to TransientProcess <br>
OCTransfer_TransferDispatch(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_GeneralLib^ lib);

//! Same as above, but Library is defined through a Protocol <br>
OCTransfer_TransferDispatch(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_Protocol^ protocol);

//! Same as above, but works with the Active Protocol <br>
OCTransfer_TransferDispatch(OCNaroWrappers::OCInterface_InterfaceModel^ amodel);

//! Returns the content of Control Object, as a TransientProcess <br>
 /*instead*/  OCTransfer_TransientProcess^ TransientProcess() ;

//! Copies an Entity by calling the method Transferring from the <br>
//!           TransferProcess. If this called produces a Null Binder, then <br>
//!           the standard, inherited Copy is called <br>
virtual /*instead*/  System::Boolean Copy(OCNaroWrappers::OCStandard_Transient^ entfrom, OCNaroWrappers::OCStandard_Transient^ entto, System::Boolean mapped, System::Boolean errstat) override;

~OCTransfer_TransferDispatch()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
