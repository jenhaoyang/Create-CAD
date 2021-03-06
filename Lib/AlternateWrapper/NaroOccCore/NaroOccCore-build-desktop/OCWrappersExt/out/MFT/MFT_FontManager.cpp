// File generated by CPPExt (CPP file)
//

#include "MFT_FontManager.h"
#include "../Converter.h"
#include "../Aspect/Aspect_FontStyle.h"
#include "MFT_TextManager.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCMFT_FontManager::OCMFT_FontManager(Handle(MFT_FontManager)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MFT_FontManager(*nativeHandle);
}

OCMFT_FontManager::OCMFT_FontManager(System::String^ anAliasName) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MFT_FontManager(new MFT_FontManager(OCConverter::StringToStandardCString(anAliasName)));
}

OCMFT_FontManager::OCMFT_FontManager(OCNaroWrappers::OCAspect_FontStyle^ aFont, OCOSD_OpenMode aFileMode, System::Boolean isComposite) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MFT_FontManager(new MFT_FontManager(*((Aspect_FontStyle*)aFont->Handle), (OSD_OpenMode)aFileMode, OCConverter::BooleanToStandardBoolean(isComposite)));
}

 void OCMFT_FontManager::SetFont(OCNaroWrappers::OCAspect_FontStyle^ aFont)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->SetFont(*((Aspect_FontStyle*)aFont->Handle));
}

 void OCMFT_FontManager::SetChar(Standard_Character aChar)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->SetChar(aChar);
}

 void OCMFT_FontManager::SetAccentChar(Standard_Character aChar)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->SetAccentChar(aChar);
}

 void OCMFT_FontManager::SetChar(Standard_ExtCharacter aChar)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->SetChar(aChar);
}

 void OCMFT_FontManager::SetEncoding(Standard_Integer aPosition, System::String^ anEncoding)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->SetEncoding(aPosition, OCConverter::StringToStandardCString(anEncoding));
}

 void OCMFT_FontManager::DelChar(Standard_Character aChar)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->DelChar(aChar);
}

 void OCMFT_FontManager::DelChar(Standard_ExtCharacter aChar)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->DelChar(aChar);
}

 void OCMFT_FontManager::AddCommand(OCMFT_TypeOfCommand aCommand)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->AddCommand((MFT_TypeOfCommand)aCommand);
}

 void OCMFT_FontManager::AddValue(Standard_Integer aValue)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->AddValue(aValue);
}

 void OCMFT_FontManager::AddValue(Standard_Real aValue)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->AddValue(aValue);
}

 void OCMFT_FontManager::AddValue(System::String^ aValue)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->AddValue(OCConverter::StringToStandardCString(aValue));
}

 void OCMFT_FontManager::SetBoundingBox(Standard_Integer aMinX, Standard_Integer aMinY, Standard_Integer aMaxX, Standard_Integer aMaxY)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->SetBoundingBox(aMinX, aMinY, aMaxX, aMaxY);
}

 void OCMFT_FontManager::SetFontMatrix(Standard_Real M1, Standard_Real M2, Standard_Real M3, Standard_Real M4, Standard_Real M5, Standard_Real M6)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->SetFontMatrix(M1, M2, M3, M4, M5, M6);
}

 void OCMFT_FontManager::SetPaintType(Standard_Integer aValue)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->SetPaintType(aValue);
}

 void OCMFT_FontManager::SetFixedPitch(System::Boolean aFlag)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->SetFixedPitch(OCConverter::BooleanToStandardBoolean(aFlag));
}

 void OCMFT_FontManager::SetItalicAngle(Quantity_PlaneAngle anAngle)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->SetItalicAngle(anAngle);
}

 void OCMFT_FontManager::ComputeBoundingBox()
{
  (*((Handle_MFT_FontManager*)nativeHandle))->ComputeBoundingBox();
}

 void OCMFT_FontManager::SetFontAttribs(Quantity_Length aWidth, Quantity_Length aHeight, Quantity_PlaneAngle aSlant, Quantity_Factor aPrecision, System::Boolean aCapsHeight)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->SetFontAttribs(aWidth, aHeight, aSlant, aPrecision, OCConverter::BooleanToStandardBoolean(aCapsHeight));
}

 void OCMFT_FontManager::DrawText(OCNaroWrappers::OCMFT_TextManager^ aTextManager, System::String^ aString, Quantity_Length anX, Quantity_Length anY, Quantity_PlaneAngle anOrientation)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->DrawText(*((Handle_MFT_TextManager*)aTextManager->Handle), OCConverter::StringToStandardCString(aString), anX, anY, anOrientation);
}

 void OCMFT_FontManager::DrawText(OCNaroWrappers::OCMFT_TextManager^ aTextManager, System::String^ aString, Quantity_Length anX, Quantity_Length anY, Quantity_PlaneAngle anOrientation)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->DrawText(*((Handle_MFT_TextManager*)aTextManager->Handle), OCConverter::StringToStandardExtString(aString), anX, anY, anOrientation);
}

 void OCMFT_FontManager::BoundingBox(Standard_Integer& aMinX, Standard_Integer& aMinY, Standard_Integer& aMaxX, Standard_Integer& aMaxY)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->BoundingBox(aMinX, aMinY, aMaxX, aMaxY);
}

 void OCMFT_FontManager::CharBoundingBox(Standard_Integer aPosition, Standard_Integer& aMinX, Standard_Integer& aMinY, Standard_Integer& aMaxX, Standard_Integer& aMaxY)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->CharBoundingBox(aPosition, aMinX, aMinY, aMaxX, aMaxY);
}

 Standard_Integer OCMFT_FontManager::PaintType()
{
  return (*((Handle_MFT_FontManager*)nativeHandle))->PaintType();
}

 System::Boolean OCMFT_FontManager::FixedPitch()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MFT_FontManager*)nativeHandle))->FixedPitch());
}

 Quantity_PlaneAngle OCMFT_FontManager::ItalicAngle()
{
  return (*((Handle_MFT_FontManager*)nativeHandle))->ItalicAngle();
}

 System::String^ OCMFT_FontManager::FontAttribs(Quantity_Length& aWidth, Quantity_Length& aHeight, Quantity_Length& aDescent, Quantity_PlaneAngle& aSlant, Quantity_Factor& aPrecision, System::Boolean& aCapsHeight)
{
  return OCConverter::StandardCStringToString((*((Handle_MFT_FontManager*)nativeHandle))->FontAttribs(aWidth, aHeight, aDescent, aSlant, aPrecision, (Standard_Boolean&)(aCapsHeight)));
}

 void OCMFT_FontManager::TextSize(System::String^ aString, Quantity_Length& aWidth, Quantity_Length& anAscent, Quantity_Length& aLbearing, Quantity_Length& aDescent)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->TextSize(OCConverter::StringToStandardCString(aString), aWidth, anAscent, aLbearing, aDescent);
}

 void OCMFT_FontManager::TextSize(System::String^ aString, Quantity_Length& aWidth, Quantity_Length& anAscent, Quantity_Length& aLbearing, Quantity_Length& aDescent)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->TextSize(OCConverter::StringToStandardExtString(aString), aWidth, anAscent, aLbearing, aDescent);
}

 System::Boolean OCMFT_FontManager::CharSize(Standard_Character aChar, Quantity_Length& aWidth, Quantity_Length& aLbearing, Quantity_Length& aRbearing, Quantity_Length& anAscent, Quantity_Length& aDescent)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MFT_FontManager*)nativeHandle))->CharSize(aChar, aWidth, aLbearing, aRbearing, anAscent, aDescent));
}

 System::Boolean OCMFT_FontManager::CharSize(Standard_ExtCharacter aChar, Quantity_Length& aWidth, Quantity_Length& aLbearing, Quantity_Length& aRbearing, Quantity_Length& anAscent, Quantity_Length& aDescent)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MFT_FontManager*)nativeHandle))->CharSize(aChar, aWidth, aLbearing, aRbearing, anAscent, aDescent));
}

OCAspect_FontStyle^ OCMFT_FontManager::Font()
{
  Aspect_FontStyle* tmp = new Aspect_FontStyle();
  *tmp = (*((Handle_MFT_FontManager*)nativeHandle))->Font();
  return gcnew OCAspect_FontStyle(tmp);
}

 System::Boolean OCMFT_FontManager::IsComposite()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MFT_FontManager*)nativeHandle))->IsComposite());
}

 System::Boolean OCMFT_FontManager::IsKnown(System::String^ anAliasName)
{
  return OCConverter::StandardBooleanToBoolean(MFT_FontManager::IsKnown(OCConverter::StringToStandardCString(anAliasName)));
}

OCAspect_FontStyle^ OCMFT_FontManager::Font(System::String^ anAliasName)
{
  Aspect_FontStyle* tmp = new Aspect_FontStyle();
  *tmp = MFT_FontManager::Font(OCConverter::StringToStandardCString(anAliasName));
  return gcnew OCAspect_FontStyle(tmp);
}

 Standard_Integer OCMFT_FontManager::FontNumber(System::String^ aFilter)
{
  return MFT_FontManager::FontNumber(OCConverter::StringToStandardCString(aFilter));
}

OCAspect_FontStyle^ OCMFT_FontManager::Font(Standard_Integer aRank)
{
  Aspect_FontStyle* tmp = new Aspect_FontStyle();
  *tmp = MFT_FontManager::Font(aRank);
  return gcnew OCAspect_FontStyle(tmp);
}

 Standard_Integer OCMFT_FontManager::MaxCommandValues()
{
  return MFT_FontManager::MaxCommandValues();
}

 System::String^ OCMFT_FontManager::Encoding(Standard_Integer aPosition)
{
  return OCConverter::StandardCStringToString((*((Handle_MFT_FontManager*)nativeHandle))->Encoding(aPosition));
}

 Standard_Integer OCMFT_FontManager::Encoding(System::String^ anEncoding)
{
  return (*((Handle_MFT_FontManager*)nativeHandle))->Encoding(OCConverter::StringToStandardCString(anEncoding));
}

 void OCMFT_FontManager::Dump()
{
  (*((Handle_MFT_FontManager*)nativeHandle))->Dump();
}

 void OCMFT_FontManager::Dump(Standard_Character aChar)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->Dump(aChar);
}

 void OCMFT_FontManager::Dump(Standard_ExtCharacter aChar)
{
  (*((Handle_MFT_FontManager*)nativeHandle))->Dump(aChar);
}

 System::Boolean OCMFT_FontManager::Save()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MFT_FontManager*)nativeHandle))->Save());
}

 System::Boolean OCMFT_FontManager::Restore(System::String^ anAliasName)
{
  return OCConverter::StandardBooleanToBoolean(MFT_FontManager::Restore(OCConverter::StringToStandardCString(anAliasName)));
}

 Quantity_Length OCMFT_FontManager::UnderlinePosition()
{
  return (*((Handle_MFT_FontManager*)nativeHandle))->UnderlinePosition();
}


