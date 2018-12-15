// File generated by CPPExt (MPV)
//
#ifndef _math_Function_OCWrappers_HeaderFile
#define _math_Function_OCWrappers_HeaderFile

// include native header
#include <math_Function.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{



//! This abstract class describes the virtual functions <br>
//!          associated with a Function of a single variable. <br>
public ref class OCmath_Function  {

protected:
  math_Function* nativeHandle;
  OCmath_Function(OCDummy^) {};

public:
  property math_Function* Handle
  {
    math_Function* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_Function(math_Function* nativeHandle);

// Methods PUBLIC

//! returns the state of the function corresponding to the <br>
//!          latest call of any methods associated with the function. <br>
//!          This function is called by each of the algorithms <br>
//!          described later which defined the function Integer <br>
//!          Algorithm::StateNumber(). The algorithm has the <br>
//!          responsibility to call this function when it has found <br>
//!          a solution (i.e. a root or a minimum) and has to maintain <br>
//!          the association between the solution found and this <br>
//!          StateNumber. <br>
//!          Byu default, this method returns 0 (which means for the <br>
//!          algorithm: no state has been saved). It is the <br>
//!          responsibility of the programmer to decide if he needs <br>
//!          to save the current state of the function and to return <br>
//!          an Integer that allows retrieval of the state. <br>
virtual /*instead*/  Standard_Integer GetStateNumber() ;

~OCmath_Function()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
