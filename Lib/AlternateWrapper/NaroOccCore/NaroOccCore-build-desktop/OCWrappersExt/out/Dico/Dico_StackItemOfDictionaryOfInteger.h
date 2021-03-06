// File generated by CPPExt (Transient)
//
#ifndef _Dico_StackItemOfDictionaryOfInteger_OCWrappers_HeaderFile
#define _Dico_StackItemOfDictionaryOfInteger_OCWrappers_HeaderFile

// include the wrapped class
#include <Dico_StackItemOfDictionaryOfInteger.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCDico_DictionaryOfInteger;
ref class OCDico_IteratorOfDictionaryOfInteger;



public ref class OCDico_StackItemOfDictionaryOfInteger : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCDico_StackItemOfDictionaryOfInteger(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCDico_StackItemOfDictionaryOfInteger(Handle(Dico_StackItemOfDictionaryOfInteger)* nativeHandle);

// Methods PUBLIC


OCDico_StackItemOfDictionaryOfInteger();


OCDico_StackItemOfDictionaryOfInteger(OCNaroWrappers::OCDico_StackItemOfDictionaryOfInteger^ previous);


 /*instead*/  OCDico_StackItemOfDictionaryOfInteger^ Previous() ;


 /*instead*/  OCDico_DictionaryOfInteger^ Value() ;


 /*instead*/  void SetValue(OCNaroWrappers::OCDico_DictionaryOfInteger^ cval) ;

~OCDico_StackItemOfDictionaryOfInteger()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
