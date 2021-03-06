// File generated by CPPExt (MPV)
//
#ifndef _MDF_DriverListOfASDriverTable_OCWrappers_HeaderFile
#define _MDF_DriverListOfASDriverTable_OCWrappers_HeaderFile

// include native header
#include <MDF_DriverListOfASDriverTable.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCMDF_ListIteratorOfDriverListOfASDriverTable;
ref class OCMDF_ASDriver;
ref class OCMDF_ListNodeOfDriverListOfASDriverTable;



public ref class OCMDF_DriverListOfASDriverTable  {

protected:
  MDF_DriverListOfASDriverTable* nativeHandle;
  OCMDF_DriverListOfASDriverTable(OCDummy^) {};

public:
  property MDF_DriverListOfASDriverTable* Handle
  {
    MDF_DriverListOfASDriverTable* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCMDF_DriverListOfASDriverTable(MDF_DriverListOfASDriverTable* nativeHandle);

// Methods PUBLIC


OCMDF_DriverListOfASDriverTable();


 /*instead*/  void Assign(OCNaroWrappers::OCMDF_DriverListOfASDriverTable^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMDF_ASDriver^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMDF_ASDriver^ I, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfASDriverTable^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMDF_DriverListOfASDriverTable^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCMDF_ASDriver^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCMDF_ASDriver^ I, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfASDriverTable^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCMDF_DriverListOfASDriverTable^ Other) ;


 /*instead*/  OCMDF_ASDriver^ First() ;


 /*instead*/  OCMDF_ASDriver^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfASDriverTable^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCMDF_ASDriver^ I, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfASDriverTable^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCMDF_DriverListOfASDriverTable^ Other, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfASDriverTable^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCMDF_ASDriver^ I, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfASDriverTable^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCMDF_DriverListOfASDriverTable^ Other, OCNaroWrappers::OCMDF_ListIteratorOfDriverListOfASDriverTable^ It) ;

~OCMDF_DriverListOfASDriverTable()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
