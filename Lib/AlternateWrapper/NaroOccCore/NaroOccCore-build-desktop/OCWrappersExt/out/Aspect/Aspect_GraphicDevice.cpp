// File generated by CPPExt (CPP file)
//

#include "Aspect_GraphicDevice.h"
#include "../Converter.h"
#include "Aspect_GraphicDriver.h"


using namespace OCNaroWrappers;

OCAspect_GraphicDevice::OCAspect_GraphicDevice(Handle(Aspect_GraphicDevice)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Aspect_GraphicDevice(*nativeHandle);
}

OCAspect_GraphicDevice::OCAspect_GraphicDevice() : OCMMgt_TShared((OCDummy^)nullptr)

{}

