// File generated by CPPExt (Transient)
//
#ifndef _Storage_Data_OCWrappers_HeaderFile
#define _Storage_Data_OCWrappers_HeaderFile

// include the wrapped class
#include <Storage_Data.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Storage_Error.h"
#include "../TCollection/TCollection_AsciiString.h"


namespace OCNaroWrappers
{

ref class OCStorage_HeaderData;
ref class OCStorage_RootData;
ref class OCStorage_TypeData;
ref class OCStorage_InternalData;
ref class OCStorage_Schema;
ref class OCTCollection_AsciiString;
ref class OCTCollection_ExtendedString;
ref class OCTColStd_SequenceOfAsciiString;
ref class OCTColStd_SequenceOfExtendedString;
ref class OCStandard_Persistent;
ref class OCStorage_HSeqOfRoot;
ref class OCStorage_Root;
ref class OCTColStd_HSequenceOfAsciiString;


//! A picture memorizing the data stored in a <br>
//! container (for example, in a file). <br>
//! A Storage_Data object represents either: <br>
//! -   persistent data to be written into a container, <br>
//!   or <br>
//! -   persistent data which are read from a container. <br>
//! A Storage_Data object is used in both the <br>
//! storage and retrieval operations: <br>
//! -   Storage mechanism: create an empty <br>
//!   Storage_Data object, then add successively <br>
//!   persistent objects (roots) to be stored using <br>
//!   the function AddRoot. When the set of data is <br>
//!   complete, write it to a container using the <br>
//!   function Write in your Storage_Schema <br>
//!   storage/retrieval algorithm. <br>
//! -   Retrieval mechanism: a Storage_Data <br>
//!   object is returned by the Read function from <br>
//!   your Storage_Schema storage/retrieval <br>
//!   algorithm. Use the functions NumberOfRoots <br>
//!   and Roots to find the roots which were stored <br>
//!   in the read container. <br>
//! The roots of a Storage_Data object may share <br>
//! references on objects. The shared internal <br>
//! references of a Storage_Data object are <br>
//! maintained by the storage/retrieval mechanism. <br>
//! Note: References shared by objects which are <br>
//! contained in two distinct Storage_Data objects <br>
//! are not maintained by the storage/retrieval <br>
//! mechanism: external references are not <br>
//! supported by Storage_Schema algorithm <br>
public ref class OCStorage_Data : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStorage_Data(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStorage_Data(Handle(Storage_Data)* nativeHandle);

// Methods PUBLIC


//! Creates an empty set of data. <br>
//! You explicitly create a Storage_Data object <br>
//! when preparing the set of objects to be stored <br>
//! together in a container (for example, in a file). <br>
//! Then use the function AddRoot to add <br>
//! persistent objects to the set of data. <br>
//! A Storage_Data object is also returned by the <br>
//! Read function of a Storage_Schema <br>
//! storage/retrieval algorithm. Use the functions <br>
//! NumberOfRoots and Roots to find the roots <br>
//! which were stored in the read container. <br>
OCStorage_Data();

//! Returns Storage_VSOk if <br>
//! -   the last storage operation performed with the <br>
//!   function Read, or <br>
//! -   the last retrieval operation performed with the function Write <br>
//!  by a Storage_Schema algorithm, on this set of data was successful. <br>
//! If the storage or retrieval operation was not <br>
//! performed, the returned error status indicates the <br>
//! reason why the operation failed. The algorithm <br>
//! stops its analysis at the first detected error <br>
 /*instead*/  OCStorage_Error ErrorStatus() ;


//! Clears the error status positioned either by: <br>
//! -   the last storage operation performed with the <br>
//!   Read function, or <br>
//! -   the last retrieval operation performed with the Write function <br>
//!   by a Storage_Schema algorithm, on this set of data. <br>
//! This error status may be read by the function ErrorStatus. <br>
 /*instead*/  void ClearErrorStatus() ;


 /*instead*/  OCTCollection_AsciiString^ ErrorStatusExtension() ;

//! return the creation date <br>
 /*instead*/  OCTCollection_AsciiString^ CreationDate() ;

//! return the Storage package version <br>
 /*instead*/  OCTCollection_AsciiString^ StorageVersion() ;

//! get the version of the schema <br>
 /*instead*/  OCTCollection_AsciiString^ SchemaVersion() ;

//! get the schema's name <br>
 /*instead*/  OCTCollection_AsciiString^ SchemaName() ;

//! set the version of the application <br>
 /*instead*/  void SetApplicationVersion(OCNaroWrappers::OCTCollection_AsciiString^ aVersion) ;

//! get the version of the application <br>
 /*instead*/  OCTCollection_AsciiString^ ApplicationVersion() ;

//! set the name of the application <br>
 /*instead*/  void SetApplicationName(OCNaroWrappers::OCTCollection_ExtendedString^ aName) ;

//! get the name of the application <br>
 /*instead*/  OCTCollection_ExtendedString^ ApplicationName() ;

//! set the data type <br>
 /*instead*/  void SetDataType(OCNaroWrappers::OCTCollection_ExtendedString^ aType) ;

//! returns data type <br>
 /*instead*/  OCTCollection_ExtendedString^ DataType() ;

//! add <theUserInfo> to the user informations <br>
 /*instead*/  void AddToUserInfo(OCNaroWrappers::OCTCollection_AsciiString^ anInfo) ;

//! return the user informations <br>
 /*instead*/  OCTColStd_SequenceOfAsciiString^ UserInfo() ;

//! add <theUserInfo> to the user informations <br>
 /*instead*/  void AddToComments(OCNaroWrappers::OCTCollection_ExtendedString^ aComment) ;

//! return the user informations <br>
 /*instead*/  OCTColStd_SequenceOfExtendedString^ Comments() ;

//! the the number of persistent objects <br>
//!  Return: <br>
//!   the number of persistent objects readed <br>
 /*instead*/  Standard_Integer NumberOfObjects() ;

//! Returns the number of root objects in this set of data. <br>
//! -   When preparing a storage operation, the <br>
//!   result is the number of roots inserted into this <br>
//!   set of data with the function AddRoot. <br>
//! -   When retrieving an object, the result is the <br>
//!   number of roots stored in the read container. <br>
//!   Use the Roots function to get these roots in a sequence. <br>
 /*instead*/  Standard_Integer NumberOfRoots() ;

//! add a persistent root to write. the name of the root <br>
//!          is a driver reference number. <br>
 /*instead*/  void AddRoot(OCNaroWrappers::OCStandard_Persistent^ anObject) ;

//! Adds the root anObject to this set of data. <br>
//! The name of the root is aName if given; if not, it <br>
//! will be a reference number assigned by the driver <br>
//! when writing the set of data into the container. <br>
//! When naming the roots, it is easier to retrieve <br>
//! objects by significant references rather than by <br>
//! references without any semantic values. <br>
 /*instead*/  void AddRoot(OCNaroWrappers::OCTCollection_AsciiString^ aName, OCNaroWrappers::OCStandard_Persistent^ anObject) ;

//! Removes from this set of data the root object named aName. <br>
//! Warning <br>
//! Nothing is done if there is no root object whose <br>
//! name is aName in this set of data. <br>
 /*instead*/  void RemoveRoot(OCNaroWrappers::OCTCollection_AsciiString^ aName) ;

//! Returns the roots of this set of data in a sequence. <br>
//! -   When preparing a storage operation, the <br>
//!   sequence contains the roots inserted into this <br>
//!   set of data with the function AddRoot. <br>
//! -   When retrieving an object, the sequence <br>
//!   contains the roots stored in the container read. <br>
//! -   An empty sequence is returned if there is no root in this set of data. <br>
 /*instead*/  OCStorage_HSeqOfRoot^ Roots() ;

//! Gives the root object whose name is aName in <br>
//! this set of data. The returned object is a <br>
//! Storage_Root object, from which the object it <br>
//! encapsulates may be extracted. <br>
//! Warning <br>
//! A null handle is returned if there is no root object <br>
//! whose name is aName in this set of data. <br>
 /*instead*/  OCStorage_Root^ Find(OCNaroWrappers::OCTCollection_AsciiString^ aName) ;

//! returns Standard_True if <me> contains a root named <aName> <br>
 /*instead*/  System::Boolean IsRoot(OCNaroWrappers::OCTCollection_AsciiString^ aName) ;

//! Returns the number of types of objects used in this set of data. <br>
 /*instead*/  Standard_Integer NumberOfTypes() ;

//! Returns true if this set of data contains an object of type aName. <br>
//! Persistent objects from this set of data must <br>
//! have types which are recognized by the <br>
//! Storage_Schema algorithm used to store or retrieve them. <br>
 /*instead*/  System::Boolean IsType(OCNaroWrappers::OCTCollection_AsciiString^ aName) ;


//! Gives the list of types of objects used in this set of data in a sequence. <br>
 /*instead*/  OCTColStd_HSequenceOfAsciiString^ Types() ;

~OCStorage_Data()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
