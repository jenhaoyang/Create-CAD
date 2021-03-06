// File generated by CPPExt (MPV)
//
#ifndef _DBC_VArrayTNodeOfVArrayOfExtCharacter_OCWrappers_HeaderFile
#define _DBC_VArrayTNodeOfVArrayOfExtCharacter_OCWrappers_HeaderFile

// include native header
#include <DBC_VArrayTNodeOfVArrayOfExtCharacter.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCDBC_VArrayOfExtCharacter;
ref class OCDBC_VArrayNodeOfVArrayOfExtCharacter;



public ref class OCDBC_VArrayTNodeOfVArrayOfExtCharacter  {

protected:
  DBC_VArrayTNodeOfVArrayOfExtCharacter* nativeHandle;
  OCDBC_VArrayTNodeOfVArrayOfExtCharacter(OCDummy^) {};

public:
  property DBC_VArrayTNodeOfVArrayOfExtCharacter* Handle
  {
    DBC_VArrayTNodeOfVArrayOfExtCharacter* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCDBC_VArrayTNodeOfVArrayOfExtCharacter(DBC_VArrayTNodeOfVArrayOfExtCharacter* nativeHandle);

// Methods PUBLIC


OCDBC_VArrayTNodeOfVArrayOfExtCharacter();


OCDBC_VArrayTNodeOfVArrayOfExtCharacter(Standard_ExtCharacter aValue);


 /*instead*/  void SetValue(Standard_ExtCharacter aValue) ;


 /*instead*/  Standard_Address Value() ;

~OCDBC_VArrayTNodeOfVArrayOfExtCharacter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
