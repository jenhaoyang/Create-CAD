// File generated by CPPExt (CPP file)
//

#include "Select2D_SensitiveCircle.h"
#include "../Converter.h"
#include "../SelectBasics/SelectBasics_EntityOwner.h"
#include "../gp/gp_Circ2d.h"
#include "../SelectBasics/SelectBasics_ListOfBox2d.h"


using namespace OCNaroWrappers;

OCSelect2D_SensitiveCircle::OCSelect2D_SensitiveCircle(Handle(Select2D_SensitiveCircle)* nativeHandle) : OCSelect2D_SensitiveEntity((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Select2D_SensitiveCircle(*nativeHandle);
}

OCSelect2D_SensitiveCircle::OCSelect2D_SensitiveCircle(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCgp_Circ2d^ TheCirc, OCSelect2D_TypeOfSelection TheType) : OCSelect2D_SensitiveEntity((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Select2D_SensitiveCircle(new Select2D_SensitiveCircle(*((Handle_SelectBasics_EntityOwner*)OwnerId->Handle), *((gp_Circ2d*)TheCirc->Handle), (Select2D_TypeOfSelection)TheType));
}

 void OCSelect2D_SensitiveCircle::Areas(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ aresul)
{
  (*((Handle_Select2D_SensitiveCircle*)nativeHandle))->Areas(*((SelectBasics_ListOfBox2d*)aresul->Handle));
}

 System::Boolean OCSelect2D_SensitiveCircle::Matches(Standard_Real X, Standard_Real Y, Standard_Real aTol, Standard_Real& DMin)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select2D_SensitiveCircle*)nativeHandle))->Matches(X, Y, aTol, DMin));
}

 System::Boolean OCSelect2D_SensitiveCircle::Matches(Standard_Real XMin, Standard_Real YMin, Standard_Real XMax, Standard_Real YMax, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select2D_SensitiveCircle*)nativeHandle))->Matches(XMin, YMin, XMax, YMax, aTol));
}

OCgp_Circ2d^ OCSelect2D_SensitiveCircle::Circle()
{
  gp_Circ2d* tmp = new gp_Circ2d();
  *tmp = (*((Handle_Select2D_SensitiveCircle*)nativeHandle))->Circle();
  return gcnew OCgp_Circ2d(tmp);
}

 void OCSelect2D_SensitiveCircle::SetTypeOfSelection(OCSelect2D_TypeOfSelection aType)
{
  (*((Handle_Select2D_SensitiveCircle*)nativeHandle))->SetTypeOfSelection((Select2D_TypeOfSelection)aType);
}

 OCSelect2D_TypeOfSelection OCSelect2D_SensitiveCircle::Selection()
{
  return (OCSelect2D_TypeOfSelection)((*((Handle_Select2D_SensitiveCircle*)nativeHandle))->Selection());
}


