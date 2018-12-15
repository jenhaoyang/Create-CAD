// File generated by CPPExt (Transient)
//
#ifndef _GeomFill_SectionLaw_OCWrappers_HeaderFile
#define _GeomFill_SectionLaw_OCWrappers_HeaderFile

// include the wrapped class
#include <GeomFill_SectionLaw.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCTColgp_Array1OfPnt;
ref class OCTColStd_Array1OfReal;
ref class OCTColgp_Array1OfVec;
ref class OCGeom_BSplineSurface;
ref class OCTColStd_Array1OfInteger;
ref class OCgp_Pnt;
ref class OCGeom_Curve;


//! To define section law in  sweeping <br>
public ref class OCGeomFill_SectionLaw : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCGeomFill_SectionLaw(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeomFill_SectionLaw(Handle(GeomFill_SectionLaw)* nativeHandle);

// Methods PUBLIC

//! compute the first  derivative in v direction  of the <br>
//!           section for v =  param <br>
//!  Warning : It used only for C1 or C2 aproximation <br>
virtual /*instead*/  System::Boolean D1(Standard_Real Param, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths) ;

//! compute the second derivative  in v direction of the <br>
//!          section  for v = param <br>
//!  Warning : It used only for C2 aproximation <br>
virtual /*instead*/  System::Boolean D2(Standard_Real Param, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfVec^ D2Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths, OCNaroWrappers::OCTColStd_Array1OfReal^ D2Weigths) ;

//! give if possible an bspline Surface, like iso-v are the <br>
//!          section.   If it is  not possible this  methode have to <br>
//!          get an Null Surface. It is the default  implementation. <br>
virtual /*instead*/  OCGeom_BSplineSurface^ BSplineSurface() ;

//! Is  usefull, if (me)  have to run  numerical <br>
//!          algorithm  to perform D0,  D1 or D2 <br>
//! The default implementation make nothing. <br>
virtual /*instead*/  void SetTolerance(Standard_Real Tol3d, Standard_Real Tol2d) ;

//!  Get the barycentre of Surface. <br>
//!          An   very  poor estimation is sufficent. <br>
//!          This information is usefull to perform well <br>
//!          conditioned rational approximation. <br>
//!  Warning: Used only if <me> IsRational <br>
virtual /*instead*/  OCgp_Pnt^ BarycentreOfSurf() ;

//! Compute the minimal value of weight for each poles <br>
//!          in all  sections. <br>
//!          This information is  usefull to control error <br>
//!          in rational approximation. <br>
//!  Warning: Used only if <me> IsRational <br>
virtual /*instead*/  void GetMinimalWeight(OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths) ;

//! Say if all sections are equals <br>
virtual /*instead*/  System::Boolean IsConstant(Standard_Real& Error) ;

//!  Return a  copy of the  constant Section,  if me <br>
//!          IsConstant <br>
//! <br>
virtual /*instead*/  OCGeom_Curve^ ConstantSection() ;

//!  Returns True if all section  are circle, with same <br>
//!          plane,same center and  linear  radius  evolution <br>
//!          Return False by Default. <br>
virtual /*instead*/  System::Boolean IsConicalLaw(Standard_Real& Error) ;

//!  Return the circle section  at parameter <Param>, if <br>
//!          <me> a  IsConicalLaw <br>
virtual /*instead*/  OCGeom_Curve^ CirclSection(Standard_Real Param) ;

~OCGeomFill_SectionLaw()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif