// File generated by CPPExt (Transient)
//
#ifndef _PCollection_HExtendedString_OCWrappers_HeaderFile
#define _PCollection_HExtendedString_OCWrappers_HeaderFile

// include the wrapped class
#include <PCollection_HExtendedString.hxx>
#include "../Converter.h"

#include "../Standard/Standard_Persistent.h"

#include "../DBC/DBC_VArrayOfExtCharacter.h"


namespace OCNaroWrappers
{

ref class OCTCollection_ExtendedString;
ref class OCPCollection_HAsciiString;
ref class OCDBC_VArrayOfExtCharacter;


//! Describes a persistent Unicode character string <br>
//! of a variable length. <br>
public ref class OCPCollection_HExtendedString : OCStandard_Persistent {

protected:
  // dummy constructor;
  OCPCollection_HExtendedString(OCDummy^) : OCStandard_Persistent((OCDummy^)nullptr) {};

public:

// constructor from native
OCPCollection_HExtendedString(Handle(PCollection_HExtendedString)* nativeHandle);

// Methods PUBLIC

//! Creation and initialization with the string S from <br>
//! TCollection. <br>
OCPCollection_HExtendedString(OCNaroWrappers::OCTCollection_ExtendedString^ S);

//! Creation and initialisation with the character C <br>
OCPCollection_HExtendedString(Standard_ExtCharacter C);

//! Creation of a sub-string of the string S <br>
//! the sub-string starts at the index Fromindex and ends <br>
//! at the index ToIndex. <br>
//! Raises an exception if ToIndex is less than FromIndex <br>
OCPCollection_HExtendedString(OCNaroWrappers::OCPCollection_HExtendedString^ S, Standard_Integer FromIndex, Standard_Integer ToIndex);

//! Creation by converting a CString to an extended string. <br>
OCPCollection_HExtendedString(System::String^ astring);

//! Creation by converting a normal Ascii string to an extended string. <br>
OCPCollection_HExtendedString(OCNaroWrappers::OCPCollection_HAsciiString^ S);

//! Pushing a string at the end of the string me. <br>
 /*instead*/  void Append(OCNaroWrappers::OCPCollection_HExtendedString^ S) ;

//! Center. <br>
//! Length becomes equal to Width and the new characters are <br>
//! equal to Filler. <br>
//! Raises an exception if Width is less than zero. <br>
//! If Width < Length nothing happens. <br>
 /*instead*/  void Center(Standard_Integer Width, Standard_ExtCharacter Filler) ;

//! Substitutes all the characters equal to C by NewC in the <br>
//! string <me>. <br>
 /*instead*/  void ChangeAll(Standard_ExtCharacter C, Standard_ExtCharacter NewC) ;

//! Removes all characters in the string <me>. <br>
//! Length is equal to zero now. <br>
 /*instead*/  void Clear() ;

//! Converts a persistent HExtendedString to a non <br>
//! persistent ExtendedString. <br>
 /*instead*/  OCTCollection_ExtendedString^ Convert() ;

//! Returns the index of the first character of <Set> founded in <me>. <br>
//! The search begins to the index FromIndex and ends to the index ToIndex. <br>
//! Returns zero if failure. <br>
//! Raises an exception if FromIndex or ToIndex is out of range. <br>
 /*instead*/  Standard_Integer FirstLocationInSet(OCNaroWrappers::OCPCollection_HExtendedString^ Set, Standard_Integer FromIndex, Standard_Integer ToIndex) ;

//! Returns the index of the first character of <me> <br>
//! that is not present in the set <Set>. <br>
//! The search begins to the index FromIndex and ends to the <br>
//! the index ToIndex in <me>. Returns zero if failure. <br>
//! Raises an exception if FromIndex or ToIndex is out of range. <br>
 /*instead*/  Standard_Integer FirstLocationNotInSet(OCNaroWrappers::OCPCollection_HExtendedString^ Set, Standard_Integer FromIndex, Standard_Integer ToIndex) ;

//! Pushing a string after a specific index in the string <me>. <br>
//! Raises an exception if Index is out of bounds. <br>
 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCPCollection_HExtendedString^ S) ;

//! Pushing a string before a specific index in the string <me>. <br>
//! Raises an exception if Index is out of bounds. <br>
 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCPCollection_HExtendedString^ S) ;

//! Returns True if the string <me> is in the "Ascii range". <br>
 /*instead*/  System::Boolean IsAscii() ;

//! Test if characters are different between <me> and <other>. <br>
 /*instead*/  System::Boolean IsDifferent(OCNaroWrappers::OCPCollection_HExtendedString^ other) ;

//! Returns True if the string <me> contains zero character. <br>
 /*instead*/  System::Boolean IsEmpty() ;

//! Returns TRUE if <me> is greater than <other>. <br>
 /*instead*/  System::Boolean IsGreater(OCNaroWrappers::OCPCollection_HExtendedString^ other) ;

//! Returns TRUE if <me> is less than <other>. <br>
 /*instead*/  System::Boolean IsLess(OCNaroWrappers::OCPCollection_HExtendedString^ other) ;

//! Returns True if two strings are equal. <br>
//! The comparison is case sensitive if the flag is set. <br>
 /*instead*/  System::Boolean IsSameString(OCNaroWrappers::OCPCollection_HExtendedString^ S) ;

//! Removes all space characters in the begining of the string. <br>
//! Raises an exception if the string <me> is not in the "Ascii range". <br>
 /*instead*/  void LeftAdjust() ;

//! Left justify. <br>
//! Length becomes equal to Width and the new characters are <br>
//! equal to Filler. <br>
//! If Width < Length nothing happens. <br>
//! Raises an exception if Width is less than zero. <br>
 /*instead*/  void LeftJustify(Standard_Integer Width, Standard_ExtCharacter Filler) ;

//! Number of characters of the String <br>
 /*instead*/  Standard_Integer Length() ;

//! Returns the index of the nth occurence of the character C <br>
//! in the string <me> from the starting index FromIndex to the <br>
//! ending index ToIndex. Returns zero if failure. <br>
//! Raises an exception if FromIndex or ToIndex is out of range <br>
 /*instead*/  Standard_Integer Location(Standard_Integer N, Standard_ExtCharacter C, Standard_Integer FromIndex, Standard_Integer ToIndex) ;

//! Returns an index in the string <me> of the first occurence <br>
//! of the string S in the string <me> from the starting index. <br>
//! FromIndex to the ending index ToIndex. <br>
//! Returns zero if failure. <br>
//! Raises an exception if FromIndex or ToIndex is out of range. <br>
 /*instead*/  Standard_Integer Location(OCNaroWrappers::OCPCollection_HExtendedString^ S, Standard_Integer FromIndex, Standard_Integer ToIndex) ;

//! Pushing a string at the begining of the string <me>. <br>
 /*instead*/  void Prepend(OCNaroWrappers::OCPCollection_HExtendedString^ S) ;

//! Prints the content of <me> on the stream S. <br>
 /*instead*/  void Print(Standard_OStream& S) ;

//! Removes the character located at the index Index in the string. <br>
//! Raises an exception if Index is out of bounds. <br>
 /*instead*/  void Remove(Standard_Integer Index) ;

//! Removes all the characters from the index FromIndex to the <br>
//! index ToIndex. <br>
//! Raises an exception if FromIndex or ToIndex is out of bounds. <br>
 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

//! Removes all the occurences of the character C in the string. <br>
 /*instead*/  void RemoveAll(Standard_ExtCharacter C) ;

//! Removes all space characters at the end of the string. <br>
//! Raises an exception if the string <me> is not in the Unicod "Ascii range". <br>
 /*instead*/  void RightAdjust() ;

//! Right justify. <br>
//! Length becomes equal to Width and the new characters are <br>
//! equal to Filler. <br>
//! If Width < Length nothing happens. <br>
//! Raises an exception if Width is less than zero. <br>
 /*instead*/  void RightJustify(Standard_Integer Width, Standard_ExtCharacter Filler) ;

//! Substitutes the character located to the position Index <br>
//! by the character C. <br>
//! Raises an exception if the Index is out of bounds <br>
 /*instead*/  void SetValue(Standard_Integer Index, Standard_ExtCharacter C) ;

//! Substitutes from the index Index to the end by the string S. <br>
//! Raises an exception if Index is out of bounds. <br>
 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCPCollection_HExtendedString^ S) ;

//! Splits a string of characters into two sub-strings. <br>
 /*instead*/  OCPCollection_HExtendedString^ Split(Standard_Integer Index) ;

//! Creation of a sub-string of the string <me>. <br>
//! The sub-string starts to the index FromIndex and ends <br>
//! to the index ToIndex. <br>
//! Raises an exception if ToIndex or FromIndex is out of bounds. <br>
 /*instead*/  OCPCollection_HExtendedString^ SubString(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

//! Length of the string ignoring all spaces (' ') and the <br>
//! control character at the end. <br>
//! Raises an exception if the string <me> is not in the "Ascii range". <br>
 /*instead*/  Standard_Integer UsefullLength() ;

//! Returns the character of index Index of the string. <br>
 /*instead*/  Standard_ExtCharacter Value(Standard_Integer Index) ;


virtual /*instead*/  void ShallowDump(Standard_OStream& s) override;

~OCPCollection_HExtendedString()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
