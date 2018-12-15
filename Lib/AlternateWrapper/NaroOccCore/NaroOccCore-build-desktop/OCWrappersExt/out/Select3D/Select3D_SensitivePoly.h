// File generated by CPPExt (Transient)
//
#ifndef _Select3D_SensitivePoly_OCWrappers_HeaderFile
#define _Select3D_SensitivePoly_OCWrappers_HeaderFile

// include the wrapped class
#include <Select3D_SensitivePoly.hxx>
#include "../Converter.h"

#include "Select3D_SensitiveEntity.h"



namespace OCNaroWrappers
{

ref class OCSelectBasics_EntityOwner;
ref class OCTColgp_Array1OfPnt;
ref class OCTColgp_HArray1OfPnt;
ref class OCSelect3D_Projector;
ref class OCSelectBasics_ListOfBox2d;
ref class OCTColgp_Array1OfPnt2d;


//! Sensitive Entity to make a face selectable. <br>
//! In some cases this class can raise Standard_ConstructionError and <br>
//! Standard_OutOfRange exceptions from its member Select3D_PointData <br>
//! mypolyg. <br>
public ref class OCSelect3D_SensitivePoly : OCSelect3D_SensitiveEntity {

protected:
  // dummy constructor;
  OCSelect3D_SensitivePoly(OCDummy^) : OCSelect3D_SensitiveEntity((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelect3D_SensitivePoly(Handle(Select3D_SensitivePoly)* nativeHandle);

// Methods PUBLIC

//! Constructs a sensitive face object defined by the <br>
//! owner OwnerId, the array of points ThePoints, and <br>
//! the sensitivity type Sensitivity. <br>
//! The array of points is the outer polygon of the geometric face. <br>
OCSelect3D_SensitivePoly(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCTColgp_Array1OfPnt^ ThePoints);

//! Constructs a sensitive face object defined by the <br>
//! owner OwnerId, the array of points ThePoints, and <br>
//! the sensitivity type Sensitivity. <br>
//! The array of points is the outer polygon of the geometric face. <br>
OCSelect3D_SensitivePoly(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCTColgp_HArray1OfPnt^ ThePoints);

//! Constructs the sensitive circle object defined by the <br>
//! owner OwnerId, the circle Circle, the Boolean <br>
//! FilledCircle and the number of points NbOfPoints. <br>
OCSelect3D_SensitivePoly(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, Standard_Integer NbOfPoints);

//! projection of the sensitive primitive in order to <br>
//!          get 2D boxes for the Sort Algorithm <br>
virtual /*instead*/  void Project(OCNaroWrappers::OCSelect3D_Projector^ aProjector) override;

//! stores in <boxes> the 2D Boxes which represent the sensitive face <br>
//!          in the selection algorithm. <br>
virtual /*instead*/  void Areas(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ boxes) ;

//! Returns the 3D points of the array used at construction time. <br>
 /*instead*/  void Points3D(OCNaroWrappers::OCTColgp_HArray1OfPnt^ theHArrayOfPnt) ;

//! Returns the 2D points of the array used at construction time. <br>
 /*instead*/  void Points2D(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ theArrayOfPnt2d) ;

~OCSelect3D_SensitivePoly()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
