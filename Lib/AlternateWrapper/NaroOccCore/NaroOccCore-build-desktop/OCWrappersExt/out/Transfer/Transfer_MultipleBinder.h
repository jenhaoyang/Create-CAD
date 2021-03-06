// File generated by CPPExt (Transient)
//
#ifndef _Transfer_MultipleBinder_OCWrappers_HeaderFile
#define _Transfer_MultipleBinder_OCWrappers_HeaderFile

// include the wrapped class
#include <Transfer_MultipleBinder.hxx>
#include "../Converter.h"

#include "Transfer_Binder.h"



namespace OCNaroWrappers
{

ref class OCTColStd_HSequenceOfTransient;
ref class OCStandard_Type;
ref class OCStandard_Transient;


//! Allows direct binding between a starting Object and the Result <br>
//!           of its transfer, when it can be made of several Transient <br>
//!           Objects. Compared to a Transcriptor, it has no Transfer Action <br>
//! <br>
//!           Result is a list of Transient Results. Unique Result is not <br>
//!           available : SetResult is redefined to start the list on the <br>
//!           first call, and refuse the other times. <br>
//! <br>
//!           rr <br>
//! <br>
//!           Remark : MultipleBinder itself is intended to be created and <br>
//!           filled by TransferProcess itself (method Bind). In particular, <br>
//!           conflicts between Unique (Standard) result and Multiple result <br>
//!           are avoided through management made by TransferProcess. <br>
//! <br>
//!           Also, a Transcriptor (with an effective Transfer Method) which <br>
//!           can produce a Multiple Result, may be defined as a sub-class <br>
//!           of MultipleBinder by redefining method Transfer. <br>
public ref class OCTransfer_MultipleBinder : OCTransfer_Binder {

protected:
  // dummy constructor;
  OCTransfer_MultipleBinder(OCDummy^) : OCTransfer_Binder((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_MultipleBinder(Handle(Transfer_MultipleBinder)* nativeHandle);

// Methods PUBLIC

//! normal standard constructor, creates an empty MultipleBinder <br>
OCTransfer_MultipleBinder();

//! Returns True if a starting object is bound with SEVERAL <br>
//!           results : Here, returns allways True <br>
virtual /*instead*/  System::Boolean IsMultiple() override;

//! Returns the Type permitted for Results, i.e. here Transient <br>
 /*instead*/  OCStandard_Type^ ResultType() ;

//! Returns the Name of the Type which characterizes the Result <br>
//!           Here, returns "(list)" <br>
 /*instead*/  System::String^ ResultTypeName() ;

//! Adds a new Item to the Multiple Result <br>
 /*instead*/  void AddResult(OCNaroWrappers::OCStandard_Transient^ res) ;

//! Returns the actual count of recorded (Transient) results <br>
 /*instead*/  Standard_Integer NbResults() ;

//! Returns the value of the recorded result n0 <num> <br>
 /*instead*/  OCStandard_Transient^ ResultValue(Standard_Integer num) ;

//! Returns the Multiple Result, if it is defined (at least one <br>
//!           Item). Else, returns a Null Handle <br>
 /*instead*/  OCTColStd_HSequenceOfTransient^ MultipleResult() ;

//! Defines a Binding with a Multiple Result, given as a Sequence <br>
//!           Error if a Unique Result has yet been defined <br>
 /*instead*/  void SetMultipleResult(OCNaroWrappers::OCTColStd_HSequenceOfTransient^ mulres) ;

~OCTransfer_MultipleBinder()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
