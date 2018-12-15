// File generated by CPPExt (MPV)
//
#ifndef _Quantity_Date_OCWrappers_HeaderFile
#define _Quantity_Date_OCWrappers_HeaderFile

// include native header
#include <Quantity_Date.hxx>
#include "../Converter.h"


#include "../Standard/Standard_Storable.h"


namespace OCNaroWrappers
{

ref class OCQuantity_Period;


//! This class provides services to manage date information. <br>
//!          A date represents the following time intervals: <br>
//! year, month, day, hour, minute, second, <br>
//! millisecond and microsecond. <br>
//! Current time is expressed in elapsed seconds <br>
//! and microseconds beginning from 00:00 GMT, <br>
//! January 1, 1979 (zero hour). The valid date can <br>
//! only be later than this one. <br>
//! Note: a Period object gives the interval between two dates. <br>
public ref class OCQuantity_Date  {

protected:
  Quantity_Date* nativeHandle;
  OCQuantity_Date(OCDummy^) {};

public:
  property Quantity_Date* Handle
  {
    Quantity_Date* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCQuantity_Date(Quantity_Date* nativeHandle);

// Methods PUBLIC

//!  Constructs a default date <br>
//! (00:00 GMT, January 1, 1979 (zero hour)); use the function <br>
//!   SetValues to define the required date; or <br>
OCQuantity_Date();

//!   Constructs a date from the year yyyy, the <br>
//! month mm, the day dd, the hour hh, the minute <br>
//! mn, the second ss, the millisecond mis <br>
//! (defaulted to 0) and the microsecond mics (defaulted to 0).. <br>
//!          With:      1 <= mm <= 12 <br>
//!                     1 <= dd <= max number of days of <mm> <br>
//!                     1979 <= yyyy <br>
//!                     0 <= hh <= 23 <br>
//!                     0 <= mn <= 59 <br>
//!                     0 <= ss <= 59 <br>
//!                     0 <= mis <= 999 <br>
//!                     0 <= mics <= 999 <br>
//! Exceptions <br>
//! Quantity_DateDefinitionError if mm, dd, hh, <br>
//! mn, ss, mis and mics are not the components of the valid date. <br>
OCQuantity_Date(Standard_Integer mm, Standard_Integer dd, Standard_Integer yyyy, Standard_Integer hh, Standard_Integer mn, Standard_Integer ss, Standard_Integer mis, Standard_Integer mics);

//! Gets a complete Date. <br>
//! -   in mm - the month, <br>
//! -   in dd - the day, <br>
//! -   in yyyy - the year, <br>
//! -   in hh - the hour, <br>
//! -   in mn - the minute, <br>
//! -   in ss - the second, <br>
//! -   in mis - the millisecond, and <br>
//! -   in mics - the microsecond <br>
 /*instead*/  void Values(Standard_Integer& mm, Standard_Integer& dd, Standard_Integer& yy, Standard_Integer& hh, Standard_Integer& mn, Standard_Integer& ss, Standard_Integer& mis, Standard_Integer& mics) ;

//! Assigns to this date the year yyyy, the month <br>
//! mm, the day dd, the hour hh, the minute mn, the <br>
//! second ss, the millisecond mis (defaulted to 0) <br>
//! and the microsecond mics (defaulted to 0). <br>
//! Exceptions <br>
//! Quantity_DateDefinitionError if mm, dd, hh, <br>
//! mn, ss, mis and mics are not components of a valid date. <br>
 /*instead*/  void SetValues(Standard_Integer mm, Standard_Integer dd, Standard_Integer yy, Standard_Integer hh, Standard_Integer mn, Standard_Integer ss, Standard_Integer mis, Standard_Integer mics) ;

//! Subtracts one Date from another one to find the period <br>
//!          between and returns the value. <br>
//!          The result is the absolute value between the difference <br>
//!          of two dates. <br>
 /*instead*/  OCQuantity_Period^ Difference(OCNaroWrappers::OCQuantity_Date^ anOther) ;

//! Subtracts a period from a Date and returns the new Date. <br>
//!          Raises an exception if the result date is anterior to <br>
//!          Jan 1, 1979. <br>
 /*instead*/  OCQuantity_Date^ Subtract(OCNaroWrappers::OCQuantity_Period^ aPeriod) ;

//! Adds a Period to a Date and returns the new Date. <br>
 /*instead*/  OCQuantity_Date^ Add(OCNaroWrappers::OCQuantity_Period^ aPeriod) ;

//! Returns year of a Date. <br>
 /*instead*/  Standard_Integer Year() ;

//! Returns month of a Date. <br>
 /*instead*/  Standard_Integer Month() ;

//! Returns Day of a Date. <br>
 /*instead*/  Standard_Integer Day() ;

//! Returns Hour of a Date. <br>
 /*instead*/  Standard_Integer Hour() ;

//! Returns minute of a Date. <br>
 /*instead*/  Standard_Integer Minute() ;

//! Returns seconde of a Date. <br>
 /*instead*/  Standard_Integer Second() ;

//! Returns millisecond of a Date. <br>
 /*instead*/  Standard_Integer MilliSecond() ;

//! Returns microsecond of a Date. <br>
 /*instead*/  Standard_Integer MicroSecond() ;

//! Returns TRUE if both <me> and <other> are equal. <br>
//! This method is an alias of operator ==. <br>
 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCQuantity_Date^ anOther) ;

//! Returns TRUE if <me> is earlier than <other>. <br>
 /*instead*/  System::Boolean IsEarlier(OCNaroWrappers::OCQuantity_Date^ anOther) ;

//! Returns TRUE if <me> is later then <other>. <br>
 /*instead*/  System::Boolean IsLater(OCNaroWrappers::OCQuantity_Date^ anOther) ;

//! Checks the validity of a date - returns true if a <br>
//! date defined from the year yyyy, the month mm, <br>
//! the day dd, the hour hh, the minute mn, the <br>
//! second ss, the millisecond mis (defaulted to 0) <br>
//! and the microsecond mics (defaulted to 0) is valid. <br>
//! A date must satisfy the conditions above: <br>
//! -   yyyy is greater than or equal to 1979, <br>
//! -   mm lies within the range [1, 12] (with 1 <br>
//!   corresponding to January and 12 to December), <br>
//! -   dd lies within a valid range for the month mm <br>
//!   (from 1 to 28, 29, 30 or 31 depending on <br>
//!   mm and whether yyyy is a leap year or not), <br>
//! -   hh lies within the range [0, 23], <br>
//! -   mn lies within the range [0, 59], <br>
//! -   ss lies within the range [0, 59], <br>
//! -   mis lies within the range [0, 999], <br>
//! -   mics lies within the range [0, 999].C <br>
static /*instead*/  System::Boolean IsValid(Standard_Integer mm, Standard_Integer dd, Standard_Integer yy, Standard_Integer hh, Standard_Integer mn, Standard_Integer ss, Standard_Integer mis, Standard_Integer mics) ;

//! Returns true if a year is a leap year. <br>
//!          The leap years are divisable by 4 and not by 100 except <br>
//!          the years divisable by 400. <br>
static /*instead*/  System::Boolean IsLeap(Standard_Integer yy) ;

~OCQuantity_Date()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif