// File generated by CPPExt (CPP file)
//

#include "TNaming_TranslateTool.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TColStd/TColStd_IndexedDataMapOfTransientTransient.h"


using namespace OCNaroWrappers;

OCTNaming_TranslateTool::OCTNaming_TranslateTool(Handle(TNaming_TranslateTool)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TNaming_TranslateTool(*nativeHandle);
}

 void OCTNaming_TranslateTool::Add(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->Add(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle));
}

 void OCTNaming_TranslateTool::MakeVertex(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->MakeVertex(*((TopoDS_Shape*)S->Handle));
}

 void OCTNaming_TranslateTool::MakeEdge(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->MakeEdge(*((TopoDS_Shape*)S->Handle));
}

 void OCTNaming_TranslateTool::MakeWire(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->MakeWire(*((TopoDS_Shape*)S->Handle));
}

 void OCTNaming_TranslateTool::MakeFace(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->MakeFace(*((TopoDS_Shape*)S->Handle));
}

 void OCTNaming_TranslateTool::MakeShell(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->MakeShell(*((TopoDS_Shape*)S->Handle));
}

 void OCTNaming_TranslateTool::MakeSolid(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->MakeSolid(*((TopoDS_Shape*)S->Handle));
}

 void OCTNaming_TranslateTool::MakeCompSolid(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->MakeCompSolid(*((TopoDS_Shape*)S->Handle));
}

 void OCTNaming_TranslateTool::MakeCompound(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->MakeCompound(*((TopoDS_Shape*)S->Handle));
}

 void OCTNaming_TranslateTool::UpdateVertex(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCTColStd_IndexedDataMapOfTransientTransient^ M)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->UpdateVertex(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle), *((TColStd_IndexedDataMapOfTransientTransient*)M->Handle));
}

 void OCTNaming_TranslateTool::UpdateEdge(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCTColStd_IndexedDataMapOfTransientTransient^ M)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->UpdateEdge(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle), *((TColStd_IndexedDataMapOfTransientTransient*)M->Handle));
}

 void OCTNaming_TranslateTool::UpdateFace(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCTColStd_IndexedDataMapOfTransientTransient^ M)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->UpdateFace(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle), *((TColStd_IndexedDataMapOfTransientTransient*)M->Handle));
}

 void OCTNaming_TranslateTool::UpdateShape(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2)
{
  (*((Handle_TNaming_TranslateTool*)nativeHandle))->UpdateShape(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle));
}


