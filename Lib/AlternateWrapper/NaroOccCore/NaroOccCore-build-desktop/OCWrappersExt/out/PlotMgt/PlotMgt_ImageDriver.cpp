// File generated by CPPExt (CPP file)
//

#include "PlotMgt_ImageDriver.h"
#include "../Converter.h"
#include "PlotMgt_Plotter.h"


using namespace OCNaroWrappers;

OCPlotMgt_ImageDriver::OCPlotMgt_ImageDriver(Handle(PlotMgt_ImageDriver)* nativeHandle) : OCPlotMgt_PlotterDriver((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_PlotMgt_ImageDriver(*nativeHandle);
}

OCPlotMgt_ImageDriver::OCPlotMgt_ImageDriver(OCNaroWrappers::OCPlotMgt_Plotter^ aPlotter, System::String^ aName) : OCPlotMgt_PlotterDriver((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PlotMgt_ImageDriver(new PlotMgt_ImageDriver(*((Handle_PlotMgt_Plotter*)aPlotter->Handle), OCConverter::StringToStandardCString(aName)));
}

OCPlotMgt_ImageDriver::OCPlotMgt_ImageDriver(System::String^ aName) : OCPlotMgt_PlotterDriver((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PlotMgt_ImageDriver(new PlotMgt_ImageDriver(OCConverter::StringToStandardCString(aName)));
}

 void OCPlotMgt_ImageDriver::BeginDraw()
{
  (*((Handle_PlotMgt_ImageDriver*)nativeHandle))->BeginDraw();
}

 void OCPlotMgt_ImageDriver::EndDraw(System::Boolean dontFlush)
{
  (*((Handle_PlotMgt_ImageDriver*)nativeHandle))->EndDraw(OCConverter::BooleanToStandardBoolean(dontFlush));
}


