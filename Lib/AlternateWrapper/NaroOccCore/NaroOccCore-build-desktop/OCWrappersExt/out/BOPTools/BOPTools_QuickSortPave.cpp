// File generated by CPPExt (CPP file)
//

#include "BOPTools_QuickSortPave.h"
#include "../Converter.h"
#include "BOPTools_Pave.h"
#include "BOPTools_Array1OfPave.h"
#include "BOPTools_ComparePave.h"


using namespace OCNaroWrappers;

OCBOPTools_QuickSortPave::OCBOPTools_QuickSortPave(BOPTools_QuickSortPave* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCBOPTools_QuickSortPave::Sort(OCNaroWrappers::OCBOPTools_Array1OfPave^ TheArray, OCNaroWrappers::OCBOPTools_ComparePave^ Comp)
{
  BOPTools_QuickSortPave::Sort(*((BOPTools_Array1OfPave*)TheArray->Handle), *((BOPTools_ComparePave*)Comp->Handle));
}


