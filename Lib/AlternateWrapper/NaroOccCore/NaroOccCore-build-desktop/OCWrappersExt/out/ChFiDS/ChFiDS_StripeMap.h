// File generated by CPPExt (MPV)
//
#ifndef _ChFiDS_StripeMap_OCWrappers_HeaderFile
#define _ChFiDS_StripeMap_OCWrappers_HeaderFile

// include native header
#include <ChFiDS_StripeMap.hxx>
#include "../Converter.h"


#include "ChFiDS_IndexedDataMapOfVertexListOfStripe.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Vertex;
ref class OCChFiDS_Stripe;
ref class OCChFiDS_ListOfStripe;



public ref class OCChFiDS_StripeMap  {

protected:
  ChFiDS_StripeMap* nativeHandle;
  OCChFiDS_StripeMap(OCDummy^) {};

public:
  property ChFiDS_StripeMap* Handle
  {
    ChFiDS_StripeMap* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCChFiDS_StripeMap(ChFiDS_StripeMap* nativeHandle);

// Methods PUBLIC


OCChFiDS_StripeMap();


 /*instead*/  void Add(OCNaroWrappers::OCTopoDS_Vertex^ V, OCNaroWrappers::OCChFiDS_Stripe^ F) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  OCChFiDS_ListOfStripe^ FindFromKey(OCNaroWrappers::OCTopoDS_Vertex^ V) ;


 /*instead*/  OCChFiDS_ListOfStripe^ FindFromIndex(Standard_Integer I) ;


 /*instead*/  OCTopoDS_Vertex^ FindKey(Standard_Integer I) ;


 /*instead*/  void Clear() ;

~OCChFiDS_StripeMap()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
