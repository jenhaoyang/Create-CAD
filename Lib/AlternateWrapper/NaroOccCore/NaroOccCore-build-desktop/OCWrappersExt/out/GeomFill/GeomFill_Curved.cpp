// File generated by CPPExt (CPP file)
//

#include "GeomFill_Curved.h"
#include "../Converter.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "../TColStd/TColStd_Array1OfReal.h"


using namespace OCNaroWrappers;

OCGeomFill_Curved::OCGeomFill_Curved(GeomFill_Curved* nativeHandle) : OCGeomFill_Filling((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGeomFill_Curved::OCGeomFill_Curved() : OCGeomFill_Filling((OCDummy^)nullptr)

{
  nativeHandle = new GeomFill_Curved();
}

OCGeomFill_Curved::OCGeomFill_Curved(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2, OCNaroWrappers::OCTColgp_Array1OfPnt^ P3, OCNaroWrappers::OCTColgp_Array1OfPnt^ P4) : OCGeomFill_Filling((OCDummy^)nullptr)

{
  nativeHandle = new GeomFill_Curved(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle), *((TColgp_Array1OfPnt*)P3->Handle), *((TColgp_Array1OfPnt*)P4->Handle));
}

OCGeomFill_Curved::OCGeomFill_Curved(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2, OCNaroWrappers::OCTColgp_Array1OfPnt^ P3, OCNaroWrappers::OCTColgp_Array1OfPnt^ P4, OCNaroWrappers::OCTColStd_Array1OfReal^ W1, OCNaroWrappers::OCTColStd_Array1OfReal^ W2, OCNaroWrappers::OCTColStd_Array1OfReal^ W3, OCNaroWrappers::OCTColStd_Array1OfReal^ W4) : OCGeomFill_Filling((OCDummy^)nullptr)

{
  nativeHandle = new GeomFill_Curved(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle), *((TColgp_Array1OfPnt*)P3->Handle), *((TColgp_Array1OfPnt*)P4->Handle), *((TColStd_Array1OfReal*)W1->Handle), *((TColStd_Array1OfReal*)W2->Handle), *((TColStd_Array1OfReal*)W3->Handle), *((TColStd_Array1OfReal*)W4->Handle));
}

OCGeomFill_Curved::OCGeomFill_Curved(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2, OCNaroWrappers::OCTColgp_Array1OfPnt^ P3) : OCGeomFill_Filling((OCDummy^)nullptr)

{
  nativeHandle = new GeomFill_Curved(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle), *((TColgp_Array1OfPnt*)P3->Handle));
}

OCGeomFill_Curved::OCGeomFill_Curved(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2, OCNaroWrappers::OCTColgp_Array1OfPnt^ P3, OCNaroWrappers::OCTColStd_Array1OfReal^ W1, OCNaroWrappers::OCTColStd_Array1OfReal^ W2, OCNaroWrappers::OCTColStd_Array1OfReal^ W3) : OCGeomFill_Filling((OCDummy^)nullptr)

{
  nativeHandle = new GeomFill_Curved(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle), *((TColgp_Array1OfPnt*)P3->Handle), *((TColStd_Array1OfReal*)W1->Handle), *((TColStd_Array1OfReal*)W2->Handle), *((TColStd_Array1OfReal*)W3->Handle));
}

OCGeomFill_Curved::OCGeomFill_Curved(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2) : OCGeomFill_Filling((OCDummy^)nullptr)

{
  nativeHandle = new GeomFill_Curved(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle));
}

OCGeomFill_Curved::OCGeomFill_Curved(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2, OCNaroWrappers::OCTColStd_Array1OfReal^ W1, OCNaroWrappers::OCTColStd_Array1OfReal^ W2) : OCGeomFill_Filling((OCDummy^)nullptr)

{
  nativeHandle = new GeomFill_Curved(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle), *((TColStd_Array1OfReal*)W1->Handle), *((TColStd_Array1OfReal*)W2->Handle));
}

 void OCGeomFill_Curved::Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2, OCNaroWrappers::OCTColgp_Array1OfPnt^ P3, OCNaroWrappers::OCTColgp_Array1OfPnt^ P4)
{
  ((GeomFill_Curved*)nativeHandle)->Init(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle), *((TColgp_Array1OfPnt*)P3->Handle), *((TColgp_Array1OfPnt*)P4->Handle));
}

 void OCGeomFill_Curved::Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2, OCNaroWrappers::OCTColgp_Array1OfPnt^ P3, OCNaroWrappers::OCTColgp_Array1OfPnt^ P4, OCNaroWrappers::OCTColStd_Array1OfReal^ W1, OCNaroWrappers::OCTColStd_Array1OfReal^ W2, OCNaroWrappers::OCTColStd_Array1OfReal^ W3, OCNaroWrappers::OCTColStd_Array1OfReal^ W4)
{
  ((GeomFill_Curved*)nativeHandle)->Init(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle), *((TColgp_Array1OfPnt*)P3->Handle), *((TColgp_Array1OfPnt*)P4->Handle), *((TColStd_Array1OfReal*)W1->Handle), *((TColStd_Array1OfReal*)W2->Handle), *((TColStd_Array1OfReal*)W3->Handle), *((TColStd_Array1OfReal*)W4->Handle));
}

 void OCGeomFill_Curved::Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2, OCNaroWrappers::OCTColgp_Array1OfPnt^ P3)
{
  ((GeomFill_Curved*)nativeHandle)->Init(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle), *((TColgp_Array1OfPnt*)P3->Handle));
}

 void OCGeomFill_Curved::Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2, OCNaroWrappers::OCTColgp_Array1OfPnt^ P3, OCNaroWrappers::OCTColStd_Array1OfReal^ W1, OCNaroWrappers::OCTColStd_Array1OfReal^ W2, OCNaroWrappers::OCTColStd_Array1OfReal^ W3)
{
  ((GeomFill_Curved*)nativeHandle)->Init(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle), *((TColgp_Array1OfPnt*)P3->Handle), *((TColStd_Array1OfReal*)W1->Handle), *((TColStd_Array1OfReal*)W2->Handle), *((TColStd_Array1OfReal*)W3->Handle));
}

 void OCGeomFill_Curved::Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2)
{
  ((GeomFill_Curved*)nativeHandle)->Init(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle));
}

 void OCGeomFill_Curved::Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ P1, OCNaroWrappers::OCTColgp_Array1OfPnt^ P2, OCNaroWrappers::OCTColStd_Array1OfReal^ W1, OCNaroWrappers::OCTColStd_Array1OfReal^ W2)
{
  ((GeomFill_Curved*)nativeHandle)->Init(*((TColgp_Array1OfPnt*)P1->Handle), *((TColgp_Array1OfPnt*)P2->Handle), *((TColStd_Array1OfReal*)W1->Handle), *((TColStd_Array1OfReal*)W2->Handle));
}


