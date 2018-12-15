// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_Area1dBuilder_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_Area1dBuilder_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_Area1dBuilder.hxx>
#include "../Converter.h"

#include "TopOpeBRepBuild_AreaBuilder.h"

#include "TopOpeBRepBuild_AreaBuilder.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepBuild_PaveSet;
ref class OCTopOpeBRepBuild_PaveClassifier;
ref class OCTopOpeBRepBuild_LoopSet;
ref class OCTopOpeBRepBuild_LoopClassifier;
ref class OCTopOpeBRepBuild_Loop;
ref class OCTopOpeBRepBuild_ListOfLoop;
ref class OCTopOpeBRepBuild_ListIteratorOfListOfLoop;



public ref class OCTopOpeBRepBuild_Area1dBuilder  : public OCTopOpeBRepBuild_AreaBuilder {

protected:
  // dummy constructor;
  OCTopOpeBRepBuild_Area1dBuilder(OCDummy^) : OCTopOpeBRepBuild_AreaBuilder((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepBuild_Area1dBuilder(TopOpeBRepBuild_Area1dBuilder* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepBuild_Area1dBuilder();

//! Creates a Area1dBuilder to find the areas of <br>
//! the shapes described by <LS> using the classifier <LC>. <br>
OCTopOpeBRepBuild_Area1dBuilder(OCNaroWrappers::OCTopOpeBRepBuild_PaveSet^ LS, OCNaroWrappers::OCTopOpeBRepBuild_PaveClassifier^ LC, System::Boolean ForceClass);

//! Sets a Area1dBuilder to find the areas of <br>
//! the shapes described by <LS> using the classifier <LC>. <br>
virtual /*instead*/  void InitAreaBuilder(OCNaroWrappers::OCTopOpeBRepBuild_LoopSet^ LS, OCNaroWrappers::OCTopOpeBRepBuild_LoopClassifier^ LC, System::Boolean ForceClass) override;


virtual /*instead*/  void ADD_Loop_TO_LISTOFLoop(OCNaroWrappers::OCTopOpeBRepBuild_Loop^ L, OCNaroWrappers::OCTopOpeBRepBuild_ListOfLoop^ LOL, Standard_Address s) override;


virtual /*instead*/  void REM_Loop_FROM_LISTOFLoop(OCNaroWrappers::OCTopOpeBRepBuild_ListIteratorOfListOfLoop^ ITLOL, OCNaroWrappers::OCTopOpeBRepBuild_ListOfLoop^ LOL, Standard_Address s) override;


virtual /*instead*/  void ADD_LISTOFLoop_TO_LISTOFLoop(OCNaroWrappers::OCTopOpeBRepBuild_ListOfLoop^ LOL1, OCNaroWrappers::OCTopOpeBRepBuild_ListOfLoop^ LOL2, Standard_Address s, Standard_Address s1, Standard_Address s2) override;


static /*instead*/  void DumpList(OCNaroWrappers::OCTopOpeBRepBuild_ListOfLoop^ L) ;

~OCTopOpeBRepBuild_Area1dBuilder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
