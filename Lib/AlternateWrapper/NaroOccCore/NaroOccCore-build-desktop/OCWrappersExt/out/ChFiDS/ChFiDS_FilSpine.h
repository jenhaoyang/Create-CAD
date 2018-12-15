// File generated by CPPExt (Transient)
//
#ifndef _ChFiDS_FilSpine_OCWrappers_HeaderFile
#define _ChFiDS_FilSpine_OCWrappers_HeaderFile

// include the wrapped class
#include <ChFiDS_FilSpine.hxx>
#include "../Converter.h"

#include "ChFiDS_Spine.h"

#include "../TColgp/TColgp_SequenceOfXY.h"
#include "../Law/Law_Laws.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Edge;
ref class OCTopoDS_Vertex;
ref class OCgp_XY;
ref class OCLaw_Function;
ref class OCLaw_Composite;
ref class OCChFiDS_HElSpine;


//! Provides  data specific to  the fillets - <br>
//!          vector or rule  of evolution (C2). <br>
//! <br>
public ref class OCChFiDS_FilSpine : OCChFiDS_Spine {

protected:
  // dummy constructor;
  OCChFiDS_FilSpine(OCDummy^) : OCChFiDS_Spine((OCDummy^)nullptr) {};

public:

// constructor from native
OCChFiDS_FilSpine(Handle(ChFiDS_FilSpine)* nativeHandle);

// Methods PUBLIC


OCChFiDS_FilSpine();


OCChFiDS_FilSpine(Standard_Real Tol);


virtual /*instead*/  void Reset(System::Boolean AllData) override;

//! initializes the constant vector on edge E. <br>
 /*instead*/  void SetRadius(Standard_Real Radius, OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! resets the constant vector  on   edge E. <br>
 /*instead*/  void UnSetRadius(OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! initializes the  vector on Vertex V. <br>
 /*instead*/  void SetRadius(Standard_Real Radius, OCNaroWrappers::OCTopoDS_Vertex^ V) ;

//! resets the vector on Vertex V. <br>
 /*instead*/  void UnSetRadius(OCNaroWrappers::OCTopoDS_Vertex^ V) ;

//! initializes the vector on the point of parameter W. <br>
 /*instead*/  void SetRadius(OCNaroWrappers::OCgp_XY^ UandR, Standard_Integer IinC) ;

//! initializes the constant vector on all spine. <br>
 /*instead*/  void SetRadius(Standard_Real Radius) ;

//! initializes the rule of evolution on all spine. <br>
 /*instead*/  void SetRadius(OCNaroWrappers::OCLaw_Function^ C, Standard_Integer IinC) ;

//! returns true if the radius is constant <br>
//!          all along the spine. <br>
 /*instead*/  System::Boolean IsConstant() ;

//! returns true if the radius is constant <br>
//!          all along the edge E. <br>
 /*instead*/  System::Boolean IsConstant(Standard_Integer IE) ;

//! returns the radius if the fillet is constant <br>
//!          all along the spine. <br>
 /*instead*/  Standard_Real Radius() ;

//! returns the radius if the fillet is constant <br>
//!          all along the edge E. <br>
 /*instead*/  Standard_Real Radius(Standard_Integer IE) ;

//! returns the radius if the fillet is constant <br>
//!          all along the edge E. <br>
 /*instead*/  Standard_Real Radius(OCNaroWrappers::OCTopoDS_Edge^ E) ;


virtual /*instead*/  void AppendElSpine(OCNaroWrappers::OCChFiDS_HElSpine^ Els) override;


 /*instead*/  OCLaw_Composite^ Law(OCNaroWrappers::OCChFiDS_HElSpine^ Els) ;

//! returns the elementary law <br>
 /*instead*/  OCLaw_Function^ ChangeLaw(OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! returns the maximum radius if the fillet is non-constant <br>
 /*instead*/  Standard_Real MaxRadFromSeqAndLaws() ;

~OCChFiDS_FilSpine()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
