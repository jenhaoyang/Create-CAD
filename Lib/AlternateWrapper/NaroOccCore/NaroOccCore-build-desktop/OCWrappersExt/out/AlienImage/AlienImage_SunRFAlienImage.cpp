// File generated by CPPExt (CPP file)
//

#include "AlienImage_SunRFAlienImage.h"
#include "../Converter.h"
#include "AlienImage_SunRFAlienData.h"
#include "../Image/Image_Image.h"
#include "../OSD/OSD_File.h"


using namespace OCNaroWrappers;

OCAlienImage_SunRFAlienImage::OCAlienImage_SunRFAlienImage(Handle(AlienImage_SunRFAlienImage)* nativeHandle) : OCAlienImage_AlienUserImage((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AlienImage_SunRFAlienImage(*nativeHandle);
}

OCAlienImage_SunRFAlienImage::OCAlienImage_SunRFAlienImage() : OCAlienImage_AlienUserImage((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AlienImage_SunRFAlienImage(new AlienImage_SunRFAlienImage());
}

 void OCAlienImage_SunRFAlienImage::Clear()
{
  (*((Handle_AlienImage_SunRFAlienImage*)nativeHandle))->Clear();
}

OCImage_Image^ OCAlienImage_SunRFAlienImage::ToImage()
{
  Handle(Image_Image) tmp = (*((Handle_AlienImage_SunRFAlienImage*)nativeHandle))->ToImage();
  return gcnew OCImage_Image(&tmp);
}

 void OCAlienImage_SunRFAlienImage::FromImage(OCNaroWrappers::OCImage_Image^ anImage)
{
  (*((Handle_AlienImage_SunRFAlienImage*)nativeHandle))->FromImage(*((Handle_Image_Image*)anImage->Handle));
}

 System::Boolean OCAlienImage_SunRFAlienImage::Read(OCNaroWrappers::OCOSD_File^ afile)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AlienImage_SunRFAlienImage*)nativeHandle))->Read(*((OSD_File*)afile->Handle)));
}

 System::Boolean OCAlienImage_SunRFAlienImage::Write(OCNaroWrappers::OCOSD_File^ afile)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AlienImage_SunRFAlienImage*)nativeHandle))->Write(*((OSD_File*)afile->Handle)));
}

 void OCAlienImage_SunRFAlienImage::SetFormat(OCAlienImage_SUNRFFormat aFormat)
{
  (*((Handle_AlienImage_SunRFAlienImage*)nativeHandle))->SetFormat((AlienImage_SUNRFFormat)aFormat);
}

 OCAlienImage_SUNRFFormat OCAlienImage_SunRFAlienImage::Format()
{
  return (OCAlienImage_SUNRFFormat)((*((Handle_AlienImage_SunRFAlienImage*)nativeHandle))->Format());
}

