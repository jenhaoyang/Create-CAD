// File generated by CPPExt (CPP file)
//

#include "AdvApp2Var_SequenceOfNode.h"
#include "../Converter.h"
#include "AdvApp2Var_Node.h"
#include "AdvApp2Var_SequenceNodeOfSequenceOfNode.h"


using namespace OCNaroWrappers;

OCAdvApp2Var_SequenceOfNode::OCAdvApp2Var_SequenceOfNode(AdvApp2Var_SequenceOfNode* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAdvApp2Var_SequenceOfNode::OCAdvApp2Var_SequenceOfNode() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new AdvApp2Var_SequenceOfNode();
}

OCAdvApp2Var_SequenceOfNode^ OCAdvApp2Var_SequenceOfNode::Assign(OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ Other)
{
  AdvApp2Var_SequenceOfNode* tmp = new AdvApp2Var_SequenceOfNode();
  *tmp = ((AdvApp2Var_SequenceOfNode*)nativeHandle)->Assign(*((AdvApp2Var_SequenceOfNode*)Other->Handle));
  return gcnew OCAdvApp2Var_SequenceOfNode(tmp);
}

 void OCAdvApp2Var_SequenceOfNode::Append(OCNaroWrappers::OCAdvApp2Var_Node^ T)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->Append(*((AdvApp2Var_Node*)T->Handle));
}

 void OCAdvApp2Var_SequenceOfNode::Append(OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ S)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->Append(*((AdvApp2Var_SequenceOfNode*)S->Handle));
}

 void OCAdvApp2Var_SequenceOfNode::Prepend(OCNaroWrappers::OCAdvApp2Var_Node^ T)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->Prepend(*((AdvApp2Var_Node*)T->Handle));
}

 void OCAdvApp2Var_SequenceOfNode::Prepend(OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ S)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->Prepend(*((AdvApp2Var_SequenceOfNode*)S->Handle));
}

 void OCAdvApp2Var_SequenceOfNode::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Node^ T)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->InsertBefore(Index, *((AdvApp2Var_Node*)T->Handle));
}

 void OCAdvApp2Var_SequenceOfNode::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ S)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->InsertBefore(Index, *((AdvApp2Var_SequenceOfNode*)S->Handle));
}

 void OCAdvApp2Var_SequenceOfNode::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Node^ T)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->InsertAfter(Index, *((AdvApp2Var_Node*)T->Handle));
}

 void OCAdvApp2Var_SequenceOfNode::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ S)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->InsertAfter(Index, *((AdvApp2Var_SequenceOfNode*)S->Handle));
}

OCAdvApp2Var_Node^ OCAdvApp2Var_SequenceOfNode::First()
{
  AdvApp2Var_Node* tmp = new AdvApp2Var_Node();
  *tmp = ((AdvApp2Var_SequenceOfNode*)nativeHandle)->First();
  return gcnew OCAdvApp2Var_Node(tmp);
}

OCAdvApp2Var_Node^ OCAdvApp2Var_SequenceOfNode::Last()
{
  AdvApp2Var_Node* tmp = new AdvApp2Var_Node();
  *tmp = ((AdvApp2Var_SequenceOfNode*)nativeHandle)->Last();
  return gcnew OCAdvApp2Var_Node(tmp);
}

 void OCAdvApp2Var_SequenceOfNode::Split(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ Sub)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->Split(Index, *((AdvApp2Var_SequenceOfNode*)Sub->Handle));
}

OCAdvApp2Var_Node^ OCAdvApp2Var_SequenceOfNode::Value(Standard_Integer Index)
{
  AdvApp2Var_Node* tmp = new AdvApp2Var_Node();
  *tmp = ((AdvApp2Var_SequenceOfNode*)nativeHandle)->Value(Index);
  return gcnew OCAdvApp2Var_Node(tmp);
}

 void OCAdvApp2Var_SequenceOfNode::SetValue(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Node^ I)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->SetValue(Index, *((AdvApp2Var_Node*)I->Handle));
}

OCAdvApp2Var_Node^ OCAdvApp2Var_SequenceOfNode::ChangeValue(Standard_Integer Index)
{
  AdvApp2Var_Node* tmp = new AdvApp2Var_Node();
  *tmp = ((AdvApp2Var_SequenceOfNode*)nativeHandle)->ChangeValue(Index);
  return gcnew OCAdvApp2Var_Node(tmp);
}

 void OCAdvApp2Var_SequenceOfNode::Remove(Standard_Integer Index)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->Remove(Index);
}

 void OCAdvApp2Var_SequenceOfNode::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((AdvApp2Var_SequenceOfNode*)nativeHandle)->Remove(FromIndex, ToIndex);
}


