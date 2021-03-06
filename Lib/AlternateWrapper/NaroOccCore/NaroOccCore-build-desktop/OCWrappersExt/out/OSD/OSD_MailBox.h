// File generated by CPPExt (MPV)
//
#ifndef _OSD_MailBox_OCWrappers_HeaderFile
#define _OSD_MailBox_OCWrappers_HeaderFile

// include native header
#include <OSD_MailBox.hxx>
#include "../Converter.h"


#include "../TCollection/TCollection_AsciiString.h"
#include "OSD_Error.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;


//! Establishes a mailbox with VMS-like-features and with <br>
//!          asynchronous functions. <br>
//!          The mail boxes are used to communicate asynchronously <br>
//!          between processes. <br>
//!          Basically MailBox facilities provide tools to communicate <br>
//!          between a client process and a server process. <br>
//!          The client process puts data/requests into the mail-box and <br>
//!          the server process gets these data/requests. In this context <br>
//!          client and server must run on the same machine. <br>
//!  Warning: On VMS, you need TMPMBX privilege. <br>
public ref class OCOSD_MailBox  {

protected:
  OSD_MailBox* nativeHandle;
  OCOSD_MailBox(OCDummy^) {};

public:
  property OSD_MailBox* Handle
  {
    OSD_MailBox* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCOSD_MailBox(OSD_MailBox* nativeHandle);

// Methods PUBLIC

//! To be used with 'Open'. <br>
//!          It just allocates room for 'myName'. <br>
//!          This is for a client process. <br>
OCOSD_MailBox();

//! Instantiates MailBox object with a name, size required <br>
//!          and a function to read mail boxes asynchronously. <br>
//!          Each process working with the same MailBox must use <br>
//!          a common known access : the mail-box's name. <br>
OCOSD_MailBox(OCNaroWrappers::OCTCollection_AsciiString^ name, Standard_Integer Size, OSD_Function Async_function);

//! Builds (physically) <me> into system. <br>
//!          <me> is created and ready to run. <br>
//!          This can be seen as an asynchronous server. <br>
 /*instead*/  void Build() ;

//! Opens mail box, and is ready to communicate with an <br>
//!          already created mailbox. <br>
//!          Raises NullObject when the name is a null string. <br>
//!          Raises ConstructionError when the name contains characters not <br>
//!          in range of ' '...'~'. <br>
//!          Raises ProgramError when the mail box has a null size. <br>
//!          This can be seen as a client. <br>
 /*instead*/  void Open(OCNaroWrappers::OCTCollection_AsciiString^ name, Standard_Integer Size) ;

//! Removes the mail box from system. <br>
//!          This is used only by server process ! <br>
//!          Raises ProgramError when the mail box is already deleted. <br>
 /*instead*/  void Delete() ;

//! Writes a message of specified length into mail box. <br>
//!          <Message> is used as a buffer, not as a common string. <br>
//!          So this can be not null terminated like a 'char *'. <br>
//!          This is why <Length> is useful. <br>
//!          Raises ProgramError when the length of the data is either <br>
//!          negative or zero. <br>
//! <br>
 /*instead*/  void Write(OCNaroWrappers::OCTCollection_AsciiString^ Message, Standard_Integer Length) ;

//! Returns TRUE if an error occurs <br>
 /*instead*/  System::Boolean Failed() ;

//! Resets error counter to zero <br>
 /*instead*/  void Reset() ;

//! Raises OSD_Error <br>
 /*instead*/  void Perror() ;

//! Returns error number if 'Failed' is TRUE. <br>
 /*instead*/  Standard_Integer Error() ;

~OCOSD_MailBox()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
