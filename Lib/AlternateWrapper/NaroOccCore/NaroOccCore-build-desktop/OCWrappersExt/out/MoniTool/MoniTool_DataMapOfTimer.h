// File generated by CPPExt (MPV)
//
#ifndef _MoniTool_DataMapOfTimer_OCWrappers_HeaderFile
#define _MoniTool_DataMapOfTimer_OCWrappers_HeaderFile

// include native header
#include <MoniTool_DataMapOfTimer.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCMoniTool_Timer;
ref class OCMoniTool_MTHasher;
ref class OCMoniTool_DataMapNodeOfDataMapOfTimer;
ref class OCMoniTool_DataMapIteratorOfDataMapOfTimer;



public ref class OCMoniTool_DataMapOfTimer  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCMoniTool_DataMapOfTimer(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCMoniTool_DataMapOfTimer(MoniTool_DataMapOfTimer* nativeHandle);

// Methods PUBLIC


OCMoniTool_DataMapOfTimer(Standard_Integer NbBuckets);


 /*instead*/  OCMoniTool_DataMapOfTimer^ Assign(OCNaroWrappers::OCMoniTool_DataMapOfTimer^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(System::String^ K, OCNaroWrappers::OCMoniTool_Timer^ I) ;


 /*instead*/  System::Boolean IsBound(System::String^ K) ;


 /*instead*/  System::Boolean UnBind(System::String^ K) ;


 /*instead*/  OCMoniTool_Timer^ Find(System::String^ K) ;


 /*instead*/  OCMoniTool_Timer^ ChangeFind(System::String^ K) ;


 /*instead*/  Standard_Address Find1(System::String^ K) ;


 /*instead*/  Standard_Address ChangeFind1(System::String^ K) ;

~OCMoniTool_DataMapOfTimer()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
