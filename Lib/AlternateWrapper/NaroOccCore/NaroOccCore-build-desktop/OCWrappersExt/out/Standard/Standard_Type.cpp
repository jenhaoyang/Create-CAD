// File generated by CPPExt (CPP file)
//

#include "Standard_Type.h"
#include "../Converter.h"
#include "Standard_AncestorIterator.h"


using namespace OCNaroWrappers;

OCStandard_Type::OCStandard_Type(Handle(Standard_Type)* nativeHandle) : OCStandard_Transient((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Standard_Type(*nativeHandle);
}

 System::String^ OCStandard_Type::Name()
{
  return OCConverter::StandardCStringToString((*((Handle_Standard_Type*)nativeHandle))->Name());
}

 Standard_Integer OCStandard_Type::Size()
{
  return (*((Handle_Standard_Type*)nativeHandle))->Size();
}

OCStandard_Type::OCStandard_Type(System::String^ aName, Standard_Integer aSize) : OCStandard_Transient((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Standard_Type(new Standard_Type(OCConverter::StringToStandardCString(aName), aSize));
}

OCStandard_Type::OCStandard_Type(System::String^ aName, Standard_Integer aSize, Standard_Integer aNumberOfParent, Standard_Address aAncestors) : OCStandard_Transient((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Standard_Type(new Standard_Type(OCConverter::StringToStandardCString(aName), aSize, aNumberOfParent, aAncestors));
}

OCStandard_Type::OCStandard_Type(System::String^ aName, Standard_Integer aSize, Standard_Integer aNumberOfElement, Standard_Integer aNumberOfParent, Standard_Address anAncestors, Standard_Address aElements) : OCStandard_Transient((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Standard_Type(new Standard_Type(OCConverter::StringToStandardCString(aName), aSize, aNumberOfElement, aNumberOfParent, anAncestors, aElements));
}

OCStandard_Type::OCStandard_Type(System::String^ aName, Standard_Integer aSize, Standard_Integer aNumberOfParent, Standard_Address anAncestors, Standard_Address aFields) : OCStandard_Transient((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Standard_Type(new Standard_Type(OCConverter::StringToStandardCString(aName), aSize, aNumberOfParent, anAncestors, aFields));
}

 System::Boolean OCStandard_Type::SubType(OCNaroWrappers::OCStandard_Type^ aOther)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Standard_Type*)nativeHandle))->SubType(*((Handle_Standard_Type*)aOther->Handle)));
}

 System::Boolean OCStandard_Type::SubType(System::String^ theName)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Standard_Type*)nativeHandle))->SubType(OCConverter::StringToStandardCString(theName)));
}

 System::Boolean OCStandard_Type::IsImported()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Standard_Type*)nativeHandle))->IsImported());
}

 System::Boolean OCStandard_Type::IsPrimitive()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Standard_Type*)nativeHandle))->IsPrimitive());
}

 System::Boolean OCStandard_Type::IsEnumeration()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Standard_Type*)nativeHandle))->IsEnumeration());
}

 System::Boolean OCStandard_Type::IsClass()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Standard_Type*)nativeHandle))->IsClass());
}

 Standard_Integer OCStandard_Type::NumberOfParent()
{
  return (*((Handle_Standard_Type*)nativeHandle))->NumberOfParent();
}

 Standard_Integer OCStandard_Type::NumberOfAncestor()
{
  return (*((Handle_Standard_Type*)nativeHandle))->NumberOfAncestor();
}

 void OCStandard_Type::ShallowDump()
{
  (*((Handle_Standard_Type*)nativeHandle))->ShallowDump();
}

 void OCStandard_Type::ShallowDump(Standard_OStream& S)
{
  (*((Handle_Standard_Type*)nativeHandle))->ShallowDump(S);
}

 void OCStandard_Type::Print(Standard_OStream& s)
{
  (*((Handle_Standard_Type*)nativeHandle))->Print(s);
}


