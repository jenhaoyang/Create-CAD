// File generated by CPPExt (Transient)
//
#ifndef _MAT_TListNodeOfListOfBisector_OCWrappers_HeaderFile
#define _MAT_TListNodeOfListOfBisector_OCWrappers_HeaderFile

// include the wrapped class
#include <MAT_TListNodeOfListOfBisector.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCMAT_Bisector;
ref class OCMAT_ListOfBisector;



public ref class OCMAT_TListNodeOfListOfBisector : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMAT_TListNodeOfListOfBisector(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT_TListNodeOfListOfBisector(Handle(MAT_TListNodeOfListOfBisector)* nativeHandle);

// Methods PUBLIC


OCMAT_TListNodeOfListOfBisector();


OCMAT_TListNodeOfListOfBisector(OCNaroWrappers::OCMAT_Bisector^ anitem);


 /*instead*/  OCMAT_Bisector^ GetItem() ;


 /*instead*/  OCMAT_TListNodeOfListOfBisector^ Next() ;


 /*instead*/  OCMAT_TListNodeOfListOfBisector^ Previous() ;


 /*instead*/  void SetItem(OCNaroWrappers::OCMAT_Bisector^ anitem) ;


 /*instead*/  void Next(OCNaroWrappers::OCMAT_TListNodeOfListOfBisector^ atlistnode) ;


 /*instead*/  void Previous(OCNaroWrappers::OCMAT_TListNodeOfListOfBisector^ atlistnode) ;


 /*instead*/  void Dummy() ;

~OCMAT_TListNodeOfListOfBisector()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
