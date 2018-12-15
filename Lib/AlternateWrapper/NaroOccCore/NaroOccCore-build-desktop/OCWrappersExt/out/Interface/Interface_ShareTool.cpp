// File generated by CPPExt (CPP file)
//

#include "Interface_ShareTool.h"
#include "../Converter.h"
#include "Interface_HGraph.h"
#include "Interface_InterfaceModel.h"
#include "Interface_GeneralLib.h"
#include "Interface_GTool.h"
#include "Interface_Protocol.h"
#include "Interface_Graph.h"
#include "Interface_EntityIterator.h"
#include "../Standard/Standard_Transient.h"
#include "../Standard/Standard_Type.h"
#include "../Message/Message_Messenger.h"


using namespace OCNaroWrappers;

OCInterface_ShareTool::OCInterface_ShareTool(Interface_ShareTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCInterface_ShareTool::OCInterface_ShareTool(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_GeneralLib^ lib) 
{
  nativeHandle = new Interface_ShareTool(*((Handle_Interface_InterfaceModel*)amodel->Handle), *((Interface_GeneralLib*)lib->Handle));
}

OCInterface_ShareTool::OCInterface_ShareTool(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_GTool^ gtool) 
{
  nativeHandle = new Interface_ShareTool(*((Handle_Interface_InterfaceModel*)amodel->Handle), *((Handle_Interface_GTool*)gtool->Handle));
}

OCInterface_ShareTool::OCInterface_ShareTool(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_Protocol^ protocol) 
{
  nativeHandle = new Interface_ShareTool(*((Handle_Interface_InterfaceModel*)amodel->Handle), *((Handle_Interface_Protocol*)protocol->Handle));
}

OCInterface_ShareTool::OCInterface_ShareTool(OCNaroWrappers::OCInterface_InterfaceModel^ amodel) 
{
  nativeHandle = new Interface_ShareTool(*((Handle_Interface_InterfaceModel*)amodel->Handle));
}

OCInterface_ShareTool::OCInterface_ShareTool(OCNaroWrappers::OCInterface_Graph^ agraph) 
{
  nativeHandle = new Interface_ShareTool(*((Interface_Graph*)agraph->Handle));
}

OCInterface_ShareTool::OCInterface_ShareTool(OCNaroWrappers::OCInterface_HGraph^ ahgraph) 
{
  nativeHandle = new Interface_ShareTool(*((Handle_Interface_HGraph*)ahgraph->Handle));
}

OCInterface_InterfaceModel^ OCInterface_ShareTool::Model()
{
  Handle(Interface_InterfaceModel) tmp = ((Interface_ShareTool*)nativeHandle)->Model();
  return gcnew OCInterface_InterfaceModel(&tmp);
}

OCInterface_Graph^ OCInterface_ShareTool::Graph()
{
  Interface_Graph* tmp = new Interface_Graph(123abc, 123abc, 0);
  *tmp = ((Interface_ShareTool*)nativeHandle)->Graph();
  return gcnew OCInterface_Graph(tmp);
}

OCInterface_EntityIterator^ OCInterface_ShareTool::RootEntities()
{
  Interface_EntityIterator* tmp = new Interface_EntityIterator();
  *tmp = ((Interface_ShareTool*)nativeHandle)->RootEntities();
  return gcnew OCInterface_EntityIterator(tmp);
}

 System::Boolean OCInterface_ShareTool::IsShared(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return OCConverter::StandardBooleanToBoolean(((Interface_ShareTool*)nativeHandle)->IsShared(*((Handle_Standard_Transient*)ent->Handle)));
}

OCInterface_EntityIterator^ OCInterface_ShareTool::Shareds(OCNaroWrappers::OCStandard_Transient^ ent)
{
  Interface_EntityIterator* tmp = new Interface_EntityIterator();
  *tmp = ((Interface_ShareTool*)nativeHandle)->Shareds(*((Handle_Standard_Transient*)ent->Handle));
  return gcnew OCInterface_EntityIterator(tmp);
}

OCInterface_EntityIterator^ OCInterface_ShareTool::Sharings(OCNaroWrappers::OCStandard_Transient^ ent)
{
  Interface_EntityIterator* tmp = new Interface_EntityIterator();
  *tmp = ((Interface_ShareTool*)nativeHandle)->Sharings(*((Handle_Standard_Transient*)ent->Handle));
  return gcnew OCInterface_EntityIterator(tmp);
}

 Standard_Integer OCInterface_ShareTool::NbTypedSharings(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCStandard_Type^ atype)
{
  return ((Interface_ShareTool*)nativeHandle)->NbTypedSharings(*((Handle_Standard_Transient*)ent->Handle), *((Handle_Standard_Type*)atype->Handle));
}

OCStandard_Transient^ OCInterface_ShareTool::TypedSharing(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCStandard_Type^ atype)
{
  Handle(Standard_Transient) tmp = ((Interface_ShareTool*)nativeHandle)->TypedSharing(*((Handle_Standard_Transient*)ent->Handle), *((Handle_Standard_Type*)atype->Handle));
  return gcnew OCStandard_Transient(&tmp);
}

OCInterface_EntityIterator^ OCInterface_ShareTool::All(OCNaroWrappers::OCStandard_Transient^ ent, System::Boolean rootlast)
{
  Interface_EntityIterator* tmp = new Interface_EntityIterator();
  *tmp = ((Interface_ShareTool*)nativeHandle)->All(*((Handle_Standard_Transient*)ent->Handle), OCConverter::BooleanToStandardBoolean(rootlast));
  return gcnew OCInterface_EntityIterator(tmp);
}

 void OCInterface_ShareTool::Print(OCNaroWrappers::OCInterface_EntityIterator^ iter, OCNaroWrappers::OCMessage_Messenger^ S)
{
  ((Interface_ShareTool*)nativeHandle)->Print(*((Interface_EntityIterator*)iter->Handle), *((Handle_Message_Messenger*)S->Handle));
}


