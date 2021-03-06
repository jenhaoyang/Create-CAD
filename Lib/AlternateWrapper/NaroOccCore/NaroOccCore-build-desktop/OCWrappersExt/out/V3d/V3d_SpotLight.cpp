// File generated by CPPExt (CPP file)
//

#include "V3d_SpotLight.h"
#include "../Converter.h"
#include "V3d_Viewer.h"
#include "V3d_View.h"
#include "../Graphic3d/Graphic3d_Group.h"


using namespace OCNaroWrappers;

OCV3d_SpotLight::OCV3d_SpotLight(Handle(V3d_SpotLight)* nativeHandle) : OCV3d_PositionLight((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_V3d_SpotLight(*nativeHandle);
}

OCV3d_SpotLight::OCV3d_SpotLight(OCNaroWrappers::OCV3d_Viewer^ VM, V3d_Coordinate X, V3d_Coordinate Y, V3d_Coordinate Z, OCV3d_TypeOfOrientation Direction, OCQuantity_NameOfColor Color, Quantity_Coefficient Attenuation1, Quantity_Coefficient Attenuation2, Quantity_Coefficient Concentration, Quantity_PlaneAngle Angle) : OCV3d_PositionLight((OCDummy^)nullptr)

{
  nativeHandle = new Handle_V3d_SpotLight(new V3d_SpotLight(*((Handle_V3d_Viewer*)VM->Handle), X, Y, Z, (V3d_TypeOfOrientation)Direction, (Quantity_NameOfColor)Color, Attenuation1, Attenuation2, Concentration, Angle));
}

OCV3d_SpotLight::OCV3d_SpotLight(OCNaroWrappers::OCV3d_Viewer^ VM, V3d_Coordinate Xt, V3d_Coordinate Yt, V3d_Coordinate Zt, V3d_Coordinate Xp, V3d_Coordinate Yp, V3d_Coordinate Zp, OCQuantity_NameOfColor Color, Quantity_Coefficient Attenuation1, Quantity_Coefficient Attenuation2, Quantity_Coefficient Concentration, Quantity_PlaneAngle Angle) : OCV3d_PositionLight((OCDummy^)nullptr)

{
  nativeHandle = new Handle_V3d_SpotLight(new V3d_SpotLight(*((Handle_V3d_Viewer*)VM->Handle), Xt, Yt, Zt, Xp, Yp, Zp, (Quantity_NameOfColor)Color, Attenuation1, Attenuation2, Concentration, Angle));
}

 void OCV3d_SpotLight::SetPosition(V3d_Coordinate X, V3d_Coordinate Y, V3d_Coordinate Z)
{
  (*((Handle_V3d_SpotLight*)nativeHandle))->SetPosition(X, Y, Z);
}

 void OCV3d_SpotLight::SetDirection(Quantity_Parameter Vx, Quantity_Parameter Vy, Quantity_Parameter Vz)
{
  (*((Handle_V3d_SpotLight*)nativeHandle))->SetDirection(Vx, Vy, Vz);
}

 void OCV3d_SpotLight::SetDirection(OCV3d_TypeOfOrientation Orientation)
{
  (*((Handle_V3d_SpotLight*)nativeHandle))->SetDirection((V3d_TypeOfOrientation)Orientation);
}

 void OCV3d_SpotLight::SetAttenuation(Quantity_Coefficient A1, Quantity_Coefficient A2)
{
  (*((Handle_V3d_SpotLight*)nativeHandle))->SetAttenuation(A1, A2);
}

 void OCV3d_SpotLight::SetConcentration(Quantity_Coefficient C)
{
  (*((Handle_V3d_SpotLight*)nativeHandle))->SetConcentration(C);
}

 void OCV3d_SpotLight::SetAngle(Quantity_PlaneAngle Angle)
{
  (*((Handle_V3d_SpotLight*)nativeHandle))->SetAngle(Angle);
}

 void OCV3d_SpotLight::Display(OCNaroWrappers::OCV3d_View^ aView, OCV3d_TypeOfRepresentation Representation)
{
  (*((Handle_V3d_SpotLight*)nativeHandle))->Display(*((Handle_V3d_View*)aView->Handle), (V3d_TypeOfRepresentation)Representation);
}

 void OCV3d_SpotLight::Direction(Quantity_Parameter& Vx, Quantity_Parameter& Vy, Quantity_Parameter& Vz)
{
  (*((Handle_V3d_SpotLight*)nativeHandle))->Direction(Vx, Vy, Vz);
}

 void OCV3d_SpotLight::Position(V3d_Coordinate& X, V3d_Coordinate& Y, V3d_Coordinate& Z)
{
  (*((Handle_V3d_SpotLight*)nativeHandle))->Position(X, Y, Z);
}

 void OCV3d_SpotLight::Attenuation(Quantity_Coefficient& A1, Quantity_Coefficient& A2)
{
  (*((Handle_V3d_SpotLight*)nativeHandle))->Attenuation(A1, A2);
}

 Quantity_Coefficient OCV3d_SpotLight::Concentration()
{
  return (*((Handle_V3d_SpotLight*)nativeHandle))->Concentration();
}

 Quantity_PlaneAngle OCV3d_SpotLight::Angle()
{
  return (*((Handle_V3d_SpotLight*)nativeHandle))->Angle();
}


