// File generated by CPPExt (MPV)
//
#ifndef _gp_Mat_OCWrappers_HeaderFile
#define _gp_Mat_OCWrappers_HeaderFile

// include native header
#include <gp_Mat.hxx>
#include "../Converter.h"


#include "../Standard/Standard_Storable.h"


namespace OCNaroWrappers
{

ref class OCgp_XYZ;
ref class OCgp_Trsf;
ref class OCgp_GTrsf;



//! Describes a three column, three row matrix. This sort of <br>
//! object is used in various vectorial or matrix computations. <br>
public ref class OCgp_Mat  {

protected:
  gp_Mat* nativeHandle;
  OCgp_Mat(OCDummy^) {};

public:
  property gp_Mat* Handle
  {
    gp_Mat* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCgp_Mat(gp_Mat* nativeHandle);

// Methods PUBLIC

//! creates  a matrix with null coefficients. <br>
OCgp_Mat();


OCgp_Mat(Standard_Real a11, Standard_Real a12, Standard_Real a13, Standard_Real a21, Standard_Real a22, Standard_Real a23, Standard_Real a31, Standard_Real a32, Standard_Real a33);

//! Creates a matrix. <br>
//!  Col1, Col2, Col3 are the 3 columns of the matrix. <br>
OCgp_Mat(OCNaroWrappers::OCgp_XYZ^ Col1, OCNaroWrappers::OCgp_XYZ^ Col2, OCNaroWrappers::OCgp_XYZ^ Col3);

//! Assigns the three coordinates of Value to the column of index <br>
//!   Col of this matrix. <br>
//! Raises OutOfRange if Col < 1 or Col > 3. <br>
 /*instead*/  void SetCol(Standard_Integer Col, OCNaroWrappers::OCgp_XYZ^ Value) ;

//! Assigns the number triples Col1, Col2, Col3 to the three <br>
//!   columns of this matrix. <br>
 /*instead*/  void SetCols(OCNaroWrappers::OCgp_XYZ^ Col1, OCNaroWrappers::OCgp_XYZ^ Col2, OCNaroWrappers::OCgp_XYZ^ Col3) ;


//!  Modifies the matrix  M so that applying it to any number <br>
//! triple (X, Y, Z) produces the same result as the cross <br>
//! product of Ref and the number triple (X, Y, Z): <br>
//! i.e.: M * {X,Y,Z}t = Ref.Cross({X, Y ,Z}) <br>
//!  this matrix is anti symmetric. To apply this matrix to the <br>
//!  triplet  {XYZ} is the same as to do the cross product between the <br>
//!  triplet Ref and the triplet {XYZ}. <br>
//! Note: this matrix is anti-symmetric. <br>
 /*instead*/  void SetCross(OCNaroWrappers::OCgp_XYZ^ Ref) ;


//!  Modifies the main diagonal of the matrix. <br>
//!  <me>.Value (1, 1) = X1 <br>
//!  <me>.Value (2, 2) = X2 <br>
//!  <me>.Value (3, 3) = X3 <br>
//!  The other coefficients of the matrix are not modified. <br>
 /*instead*/  void SetDiagonal(Standard_Real X1, Standard_Real X2, Standard_Real X3) ;


//!  Modifies this matrix so that applying it to any number <br>
//! triple (X, Y, Z) produces the same result as the scalar <br>
//! product of Ref and the number triple (X, Y, Z): <br>
//! this * (X,Y,Z) = Ref.(X,Y,Z) <br>
//! Note: this matrix is symmetric. <br>
 /*instead*/  void SetDot(OCNaroWrappers::OCgp_XYZ^ Ref) ;

//! Modifies this matrix so that it represents the Identity matrix. <br>
 /*instead*/  void SetIdentity() ;


//!  Modifies this matrix so that it represents a rotation. Ang is the angular value in <br>
//!  radians and the XYZ axis gives the direction of the <br>
//!  rotation. <br>
//!  Raises ConstructionError if XYZ.Modulus() <= Resolution() <br>
 /*instead*/  void SetRotation(OCNaroWrappers::OCgp_XYZ^ Axis, Standard_Real Ang) ;

//! Assigns the three coordinates of Value to the row of index <br>
//!   Row of this matrix. Raises OutOfRange if Row < 1 or Row > 3. <br>
 /*instead*/  void SetRow(Standard_Integer Row, OCNaroWrappers::OCgp_XYZ^ Value) ;

//! Assigns the number triples Row1, Row2, Row3 to the three <br>
//!   rows of this matrix. <br>
 /*instead*/  void SetRows(OCNaroWrappers::OCgp_XYZ^ Row1, OCNaroWrappers::OCgp_XYZ^ Row2, OCNaroWrappers::OCgp_XYZ^ Row3) ;


//!  Modifies the the matrix so that it represents <br>
//! a scaling transformation, where S is the scale factor. : <br>
//!           | S    0.0  0.0 | <br>
//!   <me> =  | 0.0   S   0.0 | <br>
//!           | 0.0  0.0   S  | <br>
 /*instead*/  void SetScale(Standard_Real S) ;

//! Assigns <Value> to the coefficient of row Row, column Col of   this matrix. <br>
//! Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 3 <br>
 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, Standard_Real Value) ;

//! Returns the column of Col index. <br>
//!   Raises OutOfRange if Col < 1 or Col > 3 <br>
 /*instead*/  OCgp_XYZ^ Column(Standard_Integer Col) ;

//! Computes the determinant of the matrix. <br>
 /*instead*/  Standard_Real Determinant() ;

//! Returns the main diagonal of the matrix. <br>
 /*instead*/  OCgp_XYZ^ Diagonal() ;

//! returns the row of Row index. <br>
//!  Raises OutOfRange if Row < 1 or Row > 3 <br>
 /*instead*/  OCgp_XYZ^ Row(Standard_Integer Row) ;

//! Returns the coefficient of range (Row, Col) <br>
//!  Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 3 <br>
 /*instead*/  Standard_Real Value(Standard_Integer Row, Standard_Integer Col) ;

//! Returns the coefficient of range (Row, Col) <br>
//!  Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 3 <br>
 /*instead*/  Standard_Real ChangeValue(Standard_Integer Row, Standard_Integer Col) ;


//!  The Gauss LU decomposition is used to invert the matrix <br>
//!  (see Math package) so the matrix is considered as singular if <br>
//!  the largest pivot found is lower or equal to Resolution from gp. <br>
 /*instead*/  System::Boolean IsSingular() ;


 /*instead*/  void Add(OCNaroWrappers::OCgp_Mat^ Other) ;

//! Computes the sum of this matrix and <br>
//!  the matrix Other for each coefficient of the matrix : <br>
//!  <me>.Coef(i,j) + <Other>.Coef(i,j) <br>
 /*instead*/  OCgp_Mat^ Added(OCNaroWrappers::OCgp_Mat^ Other) ;


 /*instead*/  void Divide(Standard_Real Scalar) ;

//! Divides all the coefficients of the matrix by Scalar <br>
 /*instead*/  OCgp_Mat^ Divided(Standard_Real Scalar) ;


 /*instead*/  void Invert() ;


//!  Inverses the matrix and raises if the matrix is singular. <br>
//! -   Invert assigns the result to this matrix, while <br>
//! -   Inverted creates a new one. <br>
//! Warning <br>
//! The Gauss LU decomposition is used to invert the matrix. <br>
//! Consequently, the matrix is considered as singular if the <br>
//! largest pivot found is less than or equal to gp::Resolution(). <br>
//! Exceptions <br>
//! Standard_ConstructionError if this matrix is singular, <br>
//! and therefore cannot be inverted. <br>
 /*instead*/  OCgp_Mat^ Inverted() ;


//!  Computes  the product of two matrices <me> * <Other> <br>
 /*instead*/  OCgp_Mat^ Multiplied(OCNaroWrappers::OCgp_Mat^ Other) ;

//! Computes the product of two matrices <me> = <Other> * <me>. <br>
 /*instead*/  void Multiply(OCNaroWrappers::OCgp_Mat^ Other) ;


 /*instead*/  void PreMultiply(OCNaroWrappers::OCgp_Mat^ Other) ;


 /*instead*/  OCgp_Mat^ Multiplied(Standard_Real Scalar) ;


//!  Multiplies all the coefficients of the matrix by Scalar <br>
 /*instead*/  void Multiply(Standard_Real Scalar) ;


 /*instead*/  void Power(Standard_Integer N) ;


//!  Computes <me> = <me> * <me> * .......* <me>,   N time. <br>
//!  if N = 0 <me> = Identity <br>
//!  if N < 0 <me> = <me>.Invert() *...........* <me>.Invert(). <br>
//!  If N < 0 an exception will be raised if the matrix is not <br>
//!  inversible <br>
 /*instead*/  OCgp_Mat^ Powered(Standard_Integer N) ;


 /*instead*/  void Subtract(OCNaroWrappers::OCgp_Mat^ Other) ;


//!  cOmputes for each coefficient of the matrix : <br>
//!  <me>.Coef(i,j) - <Other>.Coef(i,j) <br>
 /*instead*/  OCgp_Mat^ Subtracted(OCNaroWrappers::OCgp_Mat^ Other) ;


 /*instead*/  void Transpose() ;


//!  Transposes the matrix. A(j, i) -> A (i, j) <br>
 /*instead*/  OCgp_Mat^ Transposed() ;

~OCgp_Mat()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
