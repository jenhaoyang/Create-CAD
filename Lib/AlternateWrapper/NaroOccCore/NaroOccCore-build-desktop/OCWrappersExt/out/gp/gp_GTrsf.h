// File generated by CPPExt (MPV)
//
#ifndef _gp_GTrsf_OCWrappers_HeaderFile
#define _gp_GTrsf_OCWrappers_HeaderFile

// include native header
#include <gp_GTrsf.hxx>
#include "../Converter.h"


#include "gp_Mat.h"
#include "gp_XYZ.h"
#include "gp_TrsfForm.h"
#include "../Standard/Standard_Storable.h"
#include "gp_Trsf.h"


namespace OCNaroWrappers
{

ref class OCgp_Trsf;
ref class OCgp_Mat;
ref class OCgp_XYZ;
ref class OCgp_Ax1;
ref class OCgp_Ax2;



//!  Defines a non-persistent transformation in 3D space. <br>
//!  This transformation is a general transformation. <br>
//!  It can be a Trsf from gp, an affinity, or you can define <br>
//!  your own transformation giving the matrix of transformation. <br>
//! <br>
//!  With a Gtrsf you can transform only a triplet of coordinates <br>
//!  XYZ. It is not possible to transform other geometric objects <br>
//!  because these transformations can change the nature of non- <br>
//!  elementary geometric objects. <br>
//!  The transformation GTrsf can be represented as follow : <br>
//! <br>
//!       V1   V2   V3    T       XYZ        XYZ <br>
//!    | a11  a12  a13   a14 |   | x |      | x'| <br>
//!    | a21  a22  a23   a24 |   | y |      | y'| <br>
//!    | a31  a32  a33   a34 |   | z |   =  | z'| <br>
//!    |  0    0    0     1  |   | 1 |      | 1 | <br>
public ref class OCgp_GTrsf  {

protected:
  gp_GTrsf* nativeHandle;
  OCgp_GTrsf(OCDummy^) {};

public:
  property gp_GTrsf* Handle
  {
    gp_GTrsf* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCgp_GTrsf(gp_GTrsf* nativeHandle);

// Methods PUBLIC

//! Returns the Identity transformation. <br>
OCgp_GTrsf();


//!  Converts the gp_Trsf transformation T into a <br>
//!   general transformation, i.e. Returns a GTrsf with <br>
//! the same matrix of coefficients as the Trsf T. <br>
OCgp_GTrsf(OCNaroWrappers::OCgp_Trsf^ T);


//!  Creates a transformation based on the matrix M and the <br>
//!    vector V where M defines the vectorial part of <br>
//!    the transformation, and V the translation part, or <br>
OCgp_GTrsf(OCNaroWrappers::OCgp_Mat^ M, OCNaroWrappers::OCgp_XYZ^ V);

//! Changes this transformation into an affinity of ratio Ratio <br>
//! with respect to the axis A1. <br>
//!   Note: an affinity is a point-by-point transformation that <br>
//! transforms any point P into a point P' such that if H is <br>
//! the orthogonal projection of P on the axis A1 or the <br>
//! plane A2, the vectors HP and HP' satisfy: <br>
//! HP' = Ratio * HP. <br>
 /*instead*/  void SetAffinity(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ratio) ;

//! Changes this transformation into an affinity of ratio Ratio <br>
//! with respect to  the plane defined by the origin, the "X Direction" and <br>
//!   the "Y Direction" of coordinate system A2. <br>
//!   Note: an affinity is a point-by-point transformation that <br>
//! transforms any point P into a point P' such that if H is <br>
//! the orthogonal projection of P on the axis A1 or the <br>
//! plane A2, the vectors HP and HP' satisfy: <br>
//! HP' = Ratio * HP. <br>
 /*instead*/  void SetAffinity(OCNaroWrappers::OCgp_Ax2^ A2, Standard_Real Ratio) ;


//!  Replaces  the coefficient (Row, Col) of the matrix representing <br>
//! this transformation by Value.  Raises OutOfRange <br>
//! if  Row < 1 or Row > 3 or Col < 1 or Col > 4 <br>
 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, Standard_Real Value) ;

//! Replaces the vectorial part of this transformation by Matrix. <br>
 /*instead*/  void SetVectorialPart(OCNaroWrappers::OCgp_Mat^ Matrix) ;

//! Replaces the translation part of <br>
//! this transformation by the coordinates of the number triple Coord. <br>
 /*instead*/  void SetTranslationPart(OCNaroWrappers::OCgp_XYZ^ Coord) ;

//!  Assigns the vectorial and translation parts of T to this transformation. <br>
 /*instead*/  void SetTrsf(OCNaroWrappers::OCgp_Trsf^ T) ;


//!   Returns true if the determinant of the vectorial part of <br>
//! this transformation is negative. <br>
 /*instead*/  System::Boolean IsNegative() ;


//!  Returns true if this transformation is singular (and <br>
//! therefore, cannot be inverted). <br>
//! Note: The Gauss LU decomposition is used to invert the <br>
//! transformation matrix. Consequently, the transformation <br>
//! is considered as singular if the largest pivot found is less <br>
//! than or equal to gp::Resolution(). <br>
//! Warning <br>
//! If this transformation is singular, it cannot be inverted. <br>
 /*instead*/  System::Boolean IsSingular() ;


//!  Returns the nature of the transformation.  It can be an <br>
//! identity transformation, a rotation, a translation, a mirror <br>
//! transformation (relative to a point, an axis or a plane), a <br>
//! scaling transformation, a compound transformation or <br>
//! some other type of transformation. <br>
 /*instead*/  OCgp_TrsfForm Form() ;


//!  verify and set the shape of the GTrsf Other or CompoundTrsf <br>
//!  Ex : <br>
//!  myGTrsf.SetValue(row1,col1,val1); <br>
//!  myGTrsf.SetValue(row2,col2,val2); <br>
//!  ... <br>
//!  myGTrsf.SetForm(); <br>
 /*instead*/  void SetForm() ;

//!  Returns the translation part of the GTrsf. <br>
 /*instead*/  OCgp_XYZ^ TranslationPart() ;


//!  Computes the vectorial part of the GTrsf. The returned Matrix <br>
//!  is a  3*3 matrix. <br>
 /*instead*/  OCgp_Mat^ VectorialPart() ;


//!  Returns the coefficients of the global matrix of transformation. <br>
//! Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 4 <br>
 /*instead*/  Standard_Real Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  void Invert() ;


//!  Computes the reverse transformation. <br>
//!  Raises an exception if the matrix of the transformation <br>
//!  is not inversible. <br>
 /*instead*/  OCgp_GTrsf^ Inverted() ;


//!  Computes the transformation composed from T and <me>. <br>
//!  In a C++ implementation you can also write Tcomposed = <me> * T. <br>
//! Example : <br>
//!      GTrsf T1, T2, Tcomp; ............... <br>
//!      //composition : <br>
//!        Tcomp = T2.Multiplied(T1);         // or   (Tcomp = T2 * T1) <br>
//!      // transformation of a point <br>
//!        XYZ P(10.,3.,4.); <br>
//!        XYZ P1(P); <br>
//!        Tcomp.Transforms(P1);               //using Tcomp <br>
//!        XYZ P2(P); <br>
//!        T1.Transforms(P2);                  //using T1 then T2 <br>
//!        T2.Transforms(P2);                  // P1 = P2 !!! <br>
//! C++: alias operator *= <br>
 /*instead*/  void Multiply(OCNaroWrappers::OCgp_GTrsf^ T) ;


//!  Computes the transformation composed with <me> and T. <br>
//!  <me> = T * <me> <br>
 /*instead*/  OCgp_GTrsf^ Multiplied(OCNaroWrappers::OCgp_GTrsf^ T) ;


//! Computes the product of the transformation T and this <br>
//! transformation and assigns the result to this transformation. <br>
//! this = T * this <br>
 /*instead*/  void PreMultiply(OCNaroWrappers::OCgp_GTrsf^ T) ;


 /*instead*/  void Power(Standard_Integer N) ;


//!  Computes: <br>
//!  -   the product of this transformation multiplied by itself <br>
//!   N times, if N is positive, or <br>
//! -   the product of the inverse of this transformation <br>
//!   multiplied by itself |N| times, if N is negative. <br>
//!   If N equals zero, the result is equal to the Identity <br>
//!  transformation. <br>
//!  I.e.:  <me> * <me> * .......* <me>, N time. <br>
//!  if N =0 <me> = Identity <br>
//!  if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse(). <br>
 /*instead*/  OCgp_GTrsf^ Powered(Standard_Integer N) ;


 /*instead*/  void Transforms(OCNaroWrappers::OCgp_XYZ^ Coord) ;

//! Transforms a triplet XYZ with a GTrsf. <br>
 /*instead*/  void Transforms(Standard_Real& X, Standard_Real& Y, Standard_Real& Z) ;


 /*instead*/  OCgp_Trsf^ Trsf() ;

~OCgp_GTrsf()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
