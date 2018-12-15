// File generated by CPPExt (CPP file)
//

#include "GeomPlate_SequenceNodeOfSequenceOfAij.h"
#include "../Converter.h"
#include "GeomPlate_Aij.h"
#include "GeomPlate_SequenceOfAij.h"


using namespace OCNaroWrappers;

OCGeomPlate_SequenceNodeOfSequenceOfAij::OCGeomPlate_SequenceNodeOfSequenceOfAij(Handle(GeomPlate_SequenceNodeOfSequenceOfAij)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_GeomPlate_SequenceNodeOfSequenceOfAij(*nativeHandle);
}

OCGeomPlate_SequenceNodeOfSequenceOfAij::OCGeomPlate_SequenceNodeOfSequenceOfAij(OCNaroWrappers::OCGeomPlate_Aij^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_GeomPlate_SequenceNodeOfSequenceOfAij(new GeomPlate_SequenceNodeOfSequenceOfAij(*((GeomPlate_Aij*)I->Handle), n, p));
}

OCGeomPlate_Aij^ OCGeomPlate_SequenceNodeOfSequenceOfAij::Value()
{
  GeomPlate_Aij* tmp = new GeomPlate_Aij();
  *tmp = (*((Handle_GeomPlate_SequenceNodeOfSequenceOfAij*)nativeHandle))->Value();
  return gcnew OCGeomPlate_Aij(tmp);
}


