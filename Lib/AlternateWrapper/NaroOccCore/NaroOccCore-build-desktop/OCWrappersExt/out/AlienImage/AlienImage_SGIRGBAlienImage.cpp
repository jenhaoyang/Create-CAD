// File generated by CPPExt (CPP file)
//

#include "AlienImage_SGIRGBAlienImage.h"
#include "../Converter.h"
#include "AlienImage_SGIRGBAlienData.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../Image/Image_Image.h"
#include "../OSD/OSD_File.h"


using namespace OCNaroWrappers;

OCAlienImage_SGIRGBAlienImage::OCAlienImage_SGIRGBAlienImage(Handle(AlienImage_SGIRGBAlienImage)* nativeHandle) : OCAlienImage_AlienUserImage((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AlienImage_SGIRGBAlienImage(*nativeHandle);
}

OCAlienImage_SGIRGBAlienImage::OCAlienImage_SGIRGBAlienImage() : OCAlienImage_AlienUserImage((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AlienImage_SGIRGBAlienImage(new AlienImage_SGIRGBAlienImage());
}

 void OCAlienImage_SGIRGBAlienImage::Clear()
{
  (*((Handle_AlienImage_SGIRGBAlienImage*)nativeHandle))->Clear();
}

 void OCAlienImage_SGIRGBAlienImage::SetName(OCNaroWrappers::OCTCollection_AsciiString^ aName)
{
  (*((Handle_AlienImage_SGIRGBAlienImage*)nativeHandle))->SetName(*((TCollection_AsciiString*)aName->Handle));
}

OCTCollection_AsciiString^ OCAlienImage_SGIRGBAlienImage::Name()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_AlienImage_SGIRGBAlienImage*)nativeHandle))->Name();
  return gcnew OCTCollection_AsciiString(tmp);
}

OCImage_Image^ OCAlienImage_SGIRGBAlienImage::ToImage()
{
  Handle(Image_Image) tmp = (*((Handle_AlienImage_SGIRGBAlienImage*)nativeHandle))->ToImage();
  return gcnew OCImage_Image(&tmp);
}

 void OCAlienImage_SGIRGBAlienImage::FromImage(OCNaroWrappers::OCImage_Image^ anImage)
{
  (*((Handle_AlienImage_SGIRGBAlienImage*)nativeHandle))->FromImage(*((Handle_Image_Image*)anImage->Handle));
}

 System::Boolean OCAlienImage_SGIRGBAlienImage::Read(OCNaroWrappers::OCOSD_File^ afile)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AlienImage_SGIRGBAlienImage*)nativeHandle))->Read(*((OSD_File*)afile->Handle)));
}

 System::Boolean OCAlienImage_SGIRGBAlienImage::Write(OCNaroWrappers::OCOSD_File^ afile)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AlienImage_SGIRGBAlienImage*)nativeHandle))->Write(*((OSD_File*)afile->Handle)));
}


