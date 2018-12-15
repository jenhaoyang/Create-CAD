// File generated by CPPExt (MPV)
//
#ifndef _AlienImage_MemoryOperations_OCWrappers_HeaderFile
#define _AlienImage_MemoryOperations_OCWrappers_HeaderFile

// include native header
#include <AlienImage_MemoryOperations.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{



//! This class defines class method for <br>
//!          memory mangement . <br>
public ref class OCAlienImage_MemoryOperations  {

protected:
  AlienImage_MemoryOperations* nativeHandle;
  OCAlienImage_MemoryOperations(OCDummy^) {};

public:
  property AlienImage_MemoryOperations* Handle
  {
    AlienImage_MemoryOperations* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCAlienImage_MemoryOperations(AlienImage_MemoryOperations* nativeHandle);

// Methods PUBLIC

//! Swap byte in a long word ( 32 Bit ) <br>
//!	       Size is the number of long word to swap <br>
//!          ex : SwapLong( "abcd". 1 ) gives "dcba" <br>
//! <br>
static /*instead*/  void SwapLong(Standard_Address Data, Standard_Integer Size) ;

//! Swap byte in a short word ( 16 Bit ) <br>
//!	       Size is the number of short word to swap <br>
//!          ex : SwapShort( "ab". 1 ) gives "ba" <br>
//! <br>
static /*instead*/  void SwapShort(Standard_Address Data, Standard_Integer Size) ;

~OCAlienImage_MemoryOperations()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
