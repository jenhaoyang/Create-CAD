// File generated by CPPExt (MPV)
//
#ifndef _Visual3d_SetIteratorOfSetOfClipPlane_OCWrappers_HeaderFile
#define _Visual3d_SetIteratorOfSetOfClipPlane_OCWrappers_HeaderFile

// include native header
#include <Visual3d_SetIteratorOfSetOfClipPlane.hxx>
#include "../Converter.h"


#include "Visual3d_ListIteratorOfSetListOfSetOfClipPlane.h"


namespace OCNaroWrappers
{

ref class OCVisual3d_ClipPlane;
ref class OCVisual3d_SetOfClipPlane;
ref class OCVisual3d_SetListOfSetOfClipPlane;
ref class OCVisual3d_ListNodeOfSetListOfSetOfClipPlane;
ref class OCVisual3d_ListIteratorOfSetListOfSetOfClipPlane;



public ref class OCVisual3d_SetIteratorOfSetOfClipPlane  {

protected:
  Visual3d_SetIteratorOfSetOfClipPlane* nativeHandle;
  OCVisual3d_SetIteratorOfSetOfClipPlane(OCDummy^) {};

public:
  property Visual3d_SetIteratorOfSetOfClipPlane* Handle
  {
    Visual3d_SetIteratorOfSetOfClipPlane* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCVisual3d_SetIteratorOfSetOfClipPlane(Visual3d_SetIteratorOfSetOfClipPlane* nativeHandle);

// Methods PUBLIC


OCVisual3d_SetIteratorOfSetOfClipPlane();


OCVisual3d_SetIteratorOfSetOfClipPlane(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ S);


 /*instead*/  void Initialize(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ S) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCVisual3d_ClipPlane^ Value() ;

~OCVisual3d_SetIteratorOfSetOfClipPlane()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
