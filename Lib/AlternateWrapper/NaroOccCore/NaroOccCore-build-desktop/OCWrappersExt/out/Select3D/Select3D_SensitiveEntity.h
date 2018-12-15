// File generated by CPPExt (Transient)
//
#ifndef _Select3D_SensitiveEntity_OCWrappers_HeaderFile
#define _Select3D_SensitiveEntity_OCWrappers_HeaderFile

// include the wrapped class
#include <Select3D_SensitiveEntity.hxx>
#include "../Converter.h"

#include "../SelectBasics/SelectBasics_SensitiveEntity.h"



namespace OCNaroWrappers
{

ref class OCSelect3D_Projector;
ref class OCSelectBasics_EntityOwner;
ref class OCTopLoc_Location;
ref class OCTColgp_Array1OfPnt2d;
ref class OCBnd_Box2d;
ref class OCgp_Lin;


//!  Abstract framework to define 3D sensitive entities. <br>
//! As the selection process uses the principle of a <br>
//! projection of 3D shapes onto a 2D view where <br>
//! nearness to a rectangle determines whether a shape <br>
//! is picked or not, all 3D shapes need to be converted <br>
//! into 2D ones in order to be selected. <br>
public ref class OCSelect3D_SensitiveEntity : OCSelectBasics_SensitiveEntity {

protected:
  // dummy constructor;
  OCSelect3D_SensitiveEntity(OCDummy^) : OCSelectBasics_SensitiveEntity((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelect3D_SensitiveEntity(Handle(Select3D_SensitiveEntity)* nativeHandle);

// Methods PUBLIC


OCSelect3D_SensitiveEntity(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId);

//! Returns true if this framework needs conversion. <br>
virtual /*instead*/  System::Boolean NeedsConversion() ;

//! Returns true if this framework provides 3D information. <br>
virtual /*instead*/  System::Boolean Is3D() ;

//!Returns the projector aProjector. <br>
//!	 In classes inheriting this framework, you must <br>
//! redefine this function in order to get a sensitive 2D <br>
//! rectangle from a 3D entity. This rectangle is the <br>
//! sensitive zone which makes the 3D entity selectable. <br>
virtual /*instead*/  void Project(OCNaroWrappers::OCSelect3D_Projector^ aProjector) ;

//! Returns the max number of sensitive areas returned <br>
//!          by this class is 1 by default. <br>
//!          Else on must redefine this method. <br>
virtual /*instead*/  Standard_Integer MaxBoxes() ;

//! Originally this method intended to return sensitive <br>
//! entity with new location aLocation, but currently sensitive <br>
//! entities do not hold a location, instead HasLocation() and <br>
//! Location() methods call corresponding entity owner's methods. <br>
//! Thus all entities returned by GetConnected() share the same <br>
//! location propagated from corresponding selectable object. <br>
//! You must redefine this function for any type of <br>
//! sensitive entity which can accept another connected <br>
//! sensitive entity.//can be connected to another sensitive entity. <br>
virtual /*instead*/  OCSelect3D_SensitiveEntity^ GetConnected(OCNaroWrappers::OCTopLoc_Location^ aLocation) ;

//! Matches the coordinates X, Y with the entity found at <br>
//! that point within the tolerance aTol and the minimum depth DMin. <br>
//! You must redefine this function for every inheriting entity. <br>
//! You will have to call this framework inside the redefined function. <br>
virtual /*instead*/  System::Boolean Matches(Standard_Real X, Standard_Real Y, Standard_Real aTol, Standard_Real& DMin) ;

//! Matches the box defined by the coordinates Xmin, <br>
//! Ymin, Xmax, Ymax with the entity found at that point <br>
//! within the tolerance aTol. <br>
//! Xmin, YMin define the minimum point in the lower left <br>
//! hand corner of the box, and   XMax, YMax define the <br>
//! maximum point in the upper right hand corner of the box. <br>
//! You must redefine this function for every inheriting entity. <br>
//! You will have to call this framework inside the redefined function. <br>
virtual /*instead*/  System::Boolean Matches(Standard_Real XMin, Standard_Real YMin, Standard_Real XMax, Standard_Real YMax, Standard_Real aTol) ;

//! prevents from hiding virtual methods... <br>
virtual /*instead*/  System::Boolean Matches(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Polyline, OCNaroWrappers::OCBnd_Box2d^ aBox, Standard_Real aTol) ;

//! Returns the eye line for the point defined by the coordinates X,Y. <br>
 /*instead*/  OCgp_Lin^ GetEyeLine(Standard_Real X, Standard_Real Y) ;


virtual /*instead*/  Standard_Real Depth() override;

//! Returns true if this framework has a location defined. <br>
virtual /*instead*/  System::Boolean HasLocation() ;


virtual /*instead*/  OCTopLoc_Location^ Location() ;

//! sets the location to Identity <br>
virtual /*instead*/  void ResetLocation() ;


virtual /*instead*/  void SetLocation(OCNaroWrappers::OCTopLoc_Location^ aLoc) ;

//! 2 options : <br>
//!          <FullDump> = False -> general information <br>
//!	        <FullDump> = True  -> whole informtion 3D +2d ... <br>
virtual /*instead*/  void Dump(Standard_OStream& S, System::Boolean FullDump) ;


static /*instead*/  void DumpBox(Standard_OStream& S, OCNaroWrappers::OCBnd_Box2d^ abox) ;


 /*instead*/  void UpdateLocation(OCNaroWrappers::OCTopLoc_Location^ aLoc) ;


virtual /*instead*/  void SetLastPrj(OCNaroWrappers::OCSelect3D_Projector^ aPrj) ;

~OCSelect3D_SensitiveEntity()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
