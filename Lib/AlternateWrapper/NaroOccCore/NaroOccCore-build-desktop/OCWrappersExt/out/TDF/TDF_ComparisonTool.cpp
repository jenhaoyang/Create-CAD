// File generated by CPPExt (CPP file)
//

#include "TDF_ComparisonTool.h"
#include "../Converter.h"
#include "TDF_DataSet.h"
#include "TDF_IDFilter.h"
#include "TDF_RelocationTable.h"
#include "TDF_Label.h"


using namespace OCNaroWrappers;

OCTDF_ComparisonTool::OCTDF_ComparisonTool(TDF_ComparisonTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCTDF_ComparisonTool::Compare(OCNaroWrappers::OCTDF_DataSet^ aSourceDataSet, OCNaroWrappers::OCTDF_DataSet^ aTargetDataSet, OCNaroWrappers::OCTDF_IDFilter^ aFilter, OCNaroWrappers::OCTDF_RelocationTable^ aRelocationTable)
{
  TDF_ComparisonTool::Compare(*((Handle_TDF_DataSet*)aSourceDataSet->Handle), *((Handle_TDF_DataSet*)aTargetDataSet->Handle), *((TDF_IDFilter*)aFilter->Handle), *((Handle_TDF_RelocationTable*)aRelocationTable->Handle));
}

 System::Boolean OCTDF_ComparisonTool::SourceUnbound(OCNaroWrappers::OCTDF_DataSet^ aRefDataSet, OCNaroWrappers::OCTDF_RelocationTable^ aRelocationTable, OCNaroWrappers::OCTDF_IDFilter^ aFilter, OCNaroWrappers::OCTDF_DataSet^ aDiffDataSet, Standard_Integer anOption)
{
  return OCConverter::StandardBooleanToBoolean(TDF_ComparisonTool::SourceUnbound(*((Handle_TDF_DataSet*)aRefDataSet->Handle), *((Handle_TDF_RelocationTable*)aRelocationTable->Handle), *((TDF_IDFilter*)aFilter->Handle), *((Handle_TDF_DataSet*)aDiffDataSet->Handle), anOption));
}

 System::Boolean OCTDF_ComparisonTool::TargetUnbound(OCNaroWrappers::OCTDF_DataSet^ aRefDataSet, OCNaroWrappers::OCTDF_RelocationTable^ aRelocationTable, OCNaroWrappers::OCTDF_IDFilter^ aFilter, OCNaroWrappers::OCTDF_DataSet^ aDiffDataSet, Standard_Integer anOption)
{
  return OCConverter::StandardBooleanToBoolean(TDF_ComparisonTool::TargetUnbound(*((Handle_TDF_DataSet*)aRefDataSet->Handle), *((Handle_TDF_RelocationTable*)aRelocationTable->Handle), *((TDF_IDFilter*)aFilter->Handle), *((Handle_TDF_DataSet*)aDiffDataSet->Handle), anOption));
}

 void OCTDF_ComparisonTool::Cut(OCNaroWrappers::OCTDF_DataSet^ aDataSet)
{
  TDF_ComparisonTool::Cut(*((Handle_TDF_DataSet*)aDataSet->Handle));
}

 System::Boolean OCTDF_ComparisonTool::IsSelfContained(OCNaroWrappers::OCTDF_Label^ aLabel, OCNaroWrappers::OCTDF_DataSet^ aDataSet)
{
  return OCConverter::StandardBooleanToBoolean(TDF_ComparisonTool::IsSelfContained(*((TDF_Label*)aLabel->Handle), *((Handle_TDF_DataSet*)aDataSet->Handle)));
}


