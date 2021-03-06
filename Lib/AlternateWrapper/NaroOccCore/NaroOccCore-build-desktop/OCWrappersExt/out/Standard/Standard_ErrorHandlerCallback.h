// File generated by CPPExt (MPV)
//
#ifndef _Standard_ErrorHandlerCallback_OCWrappers_HeaderFile
#define _Standard_ErrorHandlerCallback_OCWrappers_HeaderFile

// include native header
#include <Standard_ErrorHandlerCallback.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStandard_ErrorHandler;


//! Defines a base class for callback objects that can be registered <br>
//!          in the OCC error handler (the class simulating C++ exceptions) <br>
//!          so as to be correctly destroyed when error handler is activated. <br>
public ref class OCStandard_ErrorHandlerCallback  {

protected:
  Standard_ErrorHandlerCallback* nativeHandle;
  OCStandard_ErrorHandlerCallback(OCDummy^) {};

public:
  property Standard_ErrorHandlerCallback* Handle
  {
    Standard_ErrorHandlerCallback* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStandard_ErrorHandlerCallback(Standard_ErrorHandlerCallback* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStandard_ErrorHandlerCallback();

//! Registers this callback object in the current error handler <br>
//!          (if found). <br>
 /*instead*/  void RegisterCallback() ;

//! Unregisters this callback object from the error handler. <br>
 /*instead*/  void UnregisterCallback() ;

~OCStandard_ErrorHandlerCallback()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
