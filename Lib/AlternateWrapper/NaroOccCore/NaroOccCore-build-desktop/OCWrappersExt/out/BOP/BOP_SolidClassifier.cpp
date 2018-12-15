// File generated by CPPExt (CPP file)
//

#include "BOP_SolidClassifier.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Solid.h"
#include "../gp/gp_Pnt.h"
#include "../TopoDS/TopoDS_Shell.h"


using namespace OCNaroWrappers;

OCBOP_SolidClassifier::OCBOP_SolidClassifier(BOP_SolidClassifier* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOP_SolidClassifier::OCBOP_SolidClassifier() 
{
  nativeHandle = new BOP_SolidClassifier();
}

 void OCBOP_SolidClassifier::Clear()
{
  ((BOP_SolidClassifier*)nativeHandle)->Clear();
}

 void OCBOP_SolidClassifier::LoadSolid(OCNaroWrappers::OCTopoDS_Solid^ aS)
{
  ((BOP_SolidClassifier*)nativeHandle)->LoadSolid(*((TopoDS_Solid*)aS->Handle));
}

 OCTopAbs_State OCBOP_SolidClassifier::Classify(OCNaroWrappers::OCTopoDS_Solid^ aS, OCNaroWrappers::OCgp_Pnt^ aP, Standard_Real aTol)
{
  return (OCTopAbs_State)(((BOP_SolidClassifier*)nativeHandle)->Classify(*((TopoDS_Solid*)aS->Handle), *((gp_Pnt*)aP->Handle), aTol));
}

 void OCBOP_SolidClassifier::LoadShell(OCNaroWrappers::OCTopoDS_Shell^ S)
{
  ((BOP_SolidClassifier*)nativeHandle)->LoadShell(*((TopoDS_Shell*)S->Handle));
}

 OCTopAbs_State OCBOP_SolidClassifier::Classify(OCNaroWrappers::OCTopoDS_Shell^ aS, OCNaroWrappers::OCgp_Pnt^ aP, Standard_Real aTol)
{
  return (OCTopAbs_State)(((BOP_SolidClassifier*)nativeHandle)->Classify(*((TopoDS_Shell*)aS->Handle), *((gp_Pnt*)aP->Handle), aTol));
}

 OCTopAbs_State OCBOP_SolidClassifier::State()
{
  return (OCTopAbs_State)(((BOP_SolidClassifier*)nativeHandle)->State());
}

 void OCBOP_SolidClassifier::Destroy()
{
  ((BOP_SolidClassifier*)nativeHandle)->Destroy();
}


