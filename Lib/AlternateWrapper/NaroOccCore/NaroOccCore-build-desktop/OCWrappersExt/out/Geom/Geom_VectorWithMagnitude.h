// File generated by CPPExt (Transient)
//
#ifndef _Geom_VectorWithMagnitude_OCWrappers_HeaderFile
#define _Geom_VectorWithMagnitude_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom_VectorWithMagnitude.hxx>
#include "../Converter.h"

#include "Geom_Vector.h"



namespace OCNaroWrappers
{

ref class OCgp_Vec;
ref class OCgp_Pnt;
ref class OCGeom_Vector;
ref class OCgp_Trsf;
ref class OCGeom_Geometry;



//!  Defines a vector with magnitude. <br>
//!  A vector with magnitude can have a zero length. <br>
public ref class OCGeom_VectorWithMagnitude : OCGeom_Vector {

protected:
  // dummy constructor;
  OCGeom_VectorWithMagnitude(OCDummy^) : OCGeom_Vector((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom_VectorWithMagnitude(Handle(Geom_VectorWithMagnitude)* nativeHandle);

// Methods PUBLIC

//! Creates a transient copy of V. <br>
OCGeom_VectorWithMagnitude(OCNaroWrappers::OCgp_Vec^ V);

//! Creates a vector with three cartesian coordinates. <br>
OCGeom_VectorWithMagnitude(Standard_Real X, Standard_Real Y, Standard_Real Z);


//!  Creates a vector from the point P1 to the point P2. <br>
//!  The magnitude of the vector is the distance between P1 and P2 <br>
OCGeom_VectorWithMagnitude(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2);

//!  Assigns the values X, Y and Z to the coordinates of this vector. <br>
 /*instead*/  void SetCoord(Standard_Real X, Standard_Real Y, Standard_Real Z) ;

//!  Converts the gp_Vec vector V into this vector. <br>
 /*instead*/  void SetVec(OCNaroWrappers::OCgp_Vec^ V) ;

//! Changes the X coordinate of <me>. <br>
 /*instead*/  void SetX(Standard_Real X) ;

//!  Changes the Y coordinate of <me> <br>
 /*instead*/  void SetY(Standard_Real Y) ;

//! Changes the Z coordinate of <me>. <br>
 /*instead*/  void SetZ(Standard_Real Z) ;

//! Returns the magnitude of <me>. <br>
 /*instead*/  Standard_Real Magnitude() ;

//! Returns the square magnitude of <me>. <br>
 /*instead*/  Standard_Real SquareMagnitude() ;


//!  Adds the Vector Other to <me>. <br>
 /*instead*/  void Add(OCNaroWrappers::OCGeom_Vector^ Other) ;


//!  Adds the vector Other to <me>. <br>
 /*instead*/  OCGeom_VectorWithMagnitude^ Added(OCNaroWrappers::OCGeom_Vector^ Other) ;


//!  Computes the cross product  between <me> and Other <br>
//!  <me> ^ Other. <br>
 /*instead*/  void Cross(OCNaroWrappers::OCGeom_Vector^ Other) ;


//!  Computes the cross product  between <me> and Other <br>
//!  <me> ^ Other. A new vector is returned. <br>
 /*instead*/  OCGeom_Vector^ Crossed(OCNaroWrappers::OCGeom_Vector^ Other) ;


//!  Computes the triple vector product  <me> ^ (V1 ^ V2). <br>
 /*instead*/  void CrossCross(OCNaroWrappers::OCGeom_Vector^ V1, OCNaroWrappers::OCGeom_Vector^ V2) ;


//!  Computes the triple vector product  <me> ^ (V1 ^ V2). <br>
//!  A new vector is returned. <br>
 /*instead*/  OCGeom_Vector^ CrossCrossed(OCNaroWrappers::OCGeom_Vector^ V1, OCNaroWrappers::OCGeom_Vector^ V2) ;

//! Divides <me> by a scalar. <br>
 /*instead*/  void Divide(Standard_Real Scalar) ;


//!  Divides <me> by a scalar. A new vector is returned. <br>
 /*instead*/  OCGeom_VectorWithMagnitude^ Divided(Standard_Real Scalar) ;


//!  Computes the product of the vector <me> by a scalar. <br>
//!  A new vector is returned. <br>
 /*instead*/  OCGeom_VectorWithMagnitude^ Multiplied(Standard_Real Scalar) ;


//!  Computes the product of the vector <me> by a scalar. <br>
 /*instead*/  void Multiply(Standard_Real Scalar) ;

//! Normalizes <me>. <br>
//!  Raised if the magnitude of the vector is lower or equal to <br>
//!  Resolution from package gp. <br>
 /*instead*/  void Normalize() ;

//! Returns a copy of <me> Normalized. <br>
//!  Raised if the magnitude of the vector is lower or equal to <br>
//!  Resolution from package gp. <br>
 /*instead*/  OCGeom_VectorWithMagnitude^ Normalized() ;

//! Subtracts the Vector Other to <me>. <br>
 /*instead*/  void Subtract(OCNaroWrappers::OCGeom_Vector^ Other) ;


//!  Subtracts the vector Other to <me>. A new vector is returned. <br>
 /*instead*/  OCGeom_VectorWithMagnitude^ Subtracted(OCNaroWrappers::OCGeom_Vector^ Other) ;

//! Applies the transformation T to this vector. <br>
 /*instead*/  void Transform(OCNaroWrappers::OCgp_Trsf^ T) ;

//! Creates a new object which is a copy of this vector. <br>
 /*instead*/  OCGeom_Geometry^ Copy() ;

~OCGeom_VectorWithMagnitude()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
