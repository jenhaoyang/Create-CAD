// File generated by CPPExt (MPV)
//
#ifndef _OSD_File_OCWrappers_HeaderFile
#define _OSD_File_OCWrappers_HeaderFile

// include native header
#include <OSD_File.hxx>
#include "../Converter.h"

#include "OSD_FileNode.h"

#include "OSD_LockType.h"
#include "OSD_OpenMode.h"
#include "OSD_FileNode.h"
#include "OSD_FromWhere.h"
#include "OSD_KindFile.h"


namespace OCNaroWrappers
{

ref class OCOSD_Path;
ref class OCOSD_Protection;
ref class OCTCollection_AsciiString;
ref class OCOSD_Printer;


//! Basic tools to manage files <br>
//!  Warning: 'ProgramError' is raised when somebody wants to use the methods <br>
//!          Read, Write, Seek, Close when File is not open. <br>
public ref class OCOSD_File  : public OCOSD_FileNode {

protected:
  // dummy constructor;
  OCOSD_File(OCDummy^) : OCOSD_FileNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCOSD_File(OSD_File* nativeHandle);

// Methods PUBLIC

//! Creates File object. <br>
OCOSD_File();

//! Instantiates the object file, storing its name <br>
OCOSD_File(OCNaroWrappers::OCOSD_Path^ Name);

//! CREATES a file if it doesn't already exists or empties <br>
//!          an existing file. <br>
//!          After 'Build', the file is open. <br>
//!          If no name was given, ProgramError is raised. <br>
 /*instead*/  void Build(OCOSD_OpenMode Mode, OCNaroWrappers::OCOSD_Protection^ Protect) ;

//! Opens a File with specific attributes <br>
//!          This works only on already existing file. <br>
//!          If no name was given, ProgramError is raised. <br>
 /*instead*/  void Open(OCOSD_OpenMode Mode, OCNaroWrappers::OCOSD_Protection^ Protect) ;

//! Appends data to an existing file. <br>
//!          If file doesn't exist, creates it first. <br>
//!          After 'Append', the file is open. <br>
//!          If no name was given, ProgramError is raised. <br>
 /*instead*/  void Append(OCOSD_OpenMode Mode, OCNaroWrappers::OCOSD_Protection^ Protect) ;

//! Attempts to read Nbyte bytes from the file associated with <br>
//!          the object file. <br>
//!          Upon successful completion, Read returns the number of <br>
//!          bytes actually read and placed in the Buffer. This number <br>
//!          may be less than Nbyte if the number of bytes left in the file <br>
//!          is less than Nbyte bytes. In this case only number of read <br>
//!          bytes will be placed in the buffer. <br>
 /*instead*/  void Read(OCNaroWrappers::OCTCollection_AsciiString^ Buffer, Standard_Integer Nbyte) ;

//!  Reads bytes from the data pointed to by the object file <br>
//!           into the buffer <Buffer>. <br>
//!           Data is read until <NByte-1> bytes have been read, <br>
//!           until	a newline character is read and transferred into <br>
//!           <Buffer>, or until an EOF (End-of-File) condition is <br>
//!           encountered. <br>
//!           Upon successful completion, Read returns the number of <br>
//!           bytes actually read into <NByteRead> and placed into the <br>
//!           Buffer <Buffer>. <br>
 /*instead*/  void ReadLine(OCNaroWrappers::OCTCollection_AsciiString^ Buffer, Standard_Integer NByte, Standard_Integer& NbyteRead) ;

//! Attempts to read Nbyte bytes from the files associated with <br>
//!          the object File. <br>
//!          Upon successful completion, Read returns the number of <br>
//!          bytes actually read and placed in the Buffer. This number <br>
//!          may be less than Nbyte if the number of bytes left in the file <br>
//!          is less than Nbyte bytes. For this reason the output <br>
//!          parameter Readbyte will contain the number of read bytes. <br>
 /*instead*/  void Read(Standard_Address& Buffer, Standard_Integer Nbyte, Standard_Integer& Readbyte) ;

//! Attempts to write Nbyte bytes from the AsciiString to the file <br>
//!          associated to the object File. <br>
 /*instead*/  void Write(OCNaroWrappers::OCTCollection_AsciiString^ Buffer, Standard_Integer Nbyte) ;

//! Attempts to write Nbyte bytes from the buffer pointed <br>
//!          to by Buffer to the file associated to the object File. <br>
 /*instead*/  void Write(Standard_Address Buffer, Standard_Integer Nbyte) ;

//! Sets the seek pointer associated with the open file <br>
 /*instead*/  void Seek(Standard_Integer Offset, OCOSD_FromWhere Whence) ;

//! Closes the file (and deletes a descriptor) <br>
 /*instead*/  void Close() ;

//! Returns TRUE if the seek pointer is at end of file. <br>
 /*instead*/  System::Boolean IsAtEnd() ;

//! Returns the kind of file. A file can be a <br>
//!          file, a directory or a link. <br>
 /*instead*/  OCOSD_KindFile KindOfFile() ;

//! Makes a temporary File <br>
//!          This returned file is already open ! <br>
//!          This file is non-persistent and will be automatically <br>
//!          removed when its process finishes. <br>
static /*instead*/  OCOSD_File^ BuildTemporary() ;

//! Locks current file <br>
 /*instead*/  void SetLock(OCOSD_LockType Lock) ;

//! Unlocks current file <br>
 /*instead*/  void UnLock() ;

//! Returns the current lock state <br>
 /*instead*/  OCOSD_LockType GetLock() ;

//! Returns TRUE if this file is locked. <br>
 /*instead*/  System::Boolean IsLocked() ;

//! Returns actual number of bytes of <me>. <br>
 /*instead*/  Standard_Integer Size() ;

//! Prints a file on selected printer. <br>
 /*instead*/  void Print(OCNaroWrappers::OCOSD_Printer^ WhichPrinter) ;

//! Returns TRUE if <me> is open. <br>
 /*instead*/  System::Boolean IsOpen() ;

//! returns TRUE if the file exists and if the user <br>
//!          has the autorization to read it. <br>
 /*instead*/  System::Boolean IsReadable() ;

//! returns TRUE if the file can be read and overwritten. <br>
 /*instead*/  System::Boolean IsWriteable() ;

//! returns TRUE if the file can be executed. <br>
 /*instead*/  System::Boolean IsExecutable() ;

//! Enables to emulate unix "tail -f" command. <br>
//! If a line is available in the file <me> returns it. <br>
//! Otherwise attemps to read again aNbTries times in the file <br>
//! waiting aDelay seconds between each read. <br>
//! If meanwhile the file increases returns the next line, otherwise <br>
//! returns FALSE. <br>
 /*instead*/  System::Boolean ReadLastLine(OCNaroWrappers::OCTCollection_AsciiString^ aLine, Standard_Integer aDelay, Standard_Integer aNbTries) ;

//! find an editor on the system and edit the given file <br>
 /*instead*/  System::Boolean Edit() ;

~OCOSD_File()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
