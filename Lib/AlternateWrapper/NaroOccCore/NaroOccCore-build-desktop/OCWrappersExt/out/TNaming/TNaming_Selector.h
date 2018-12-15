// File generated by CPPExt (MPV)
//
#ifndef _TNaming_Selector_OCWrappers_HeaderFile
#define _TNaming_Selector_OCWrappers_HeaderFile

// include native header
#include <TNaming_Selector.hxx>
#include "../Converter.h"


#include "../TDF/TDF_Label.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTopoDS_Shape;
ref class OCTNaming_NamedShape;
ref class OCTDF_LabelMap;
ref class OCTDF_AttributeMap;


//! This class provides a single API for selection of shapes. <br>
//!          This involves both identification and selection of <br>
//!          shapes in the data framework. <br>
//!          If the selected shape is modified, this selector will <br>
//!          solve its identifications. <br>
//!          This class is the user interface for topological <br>
//!          naming resources. <br>
//!          * The   <IsIdentified> method returns  (if exists) <br>
//!          the NamedShape which  contains a given shape. The <br>
//!          definition of  an  identified shape is :   a Shape <br>
//!           handled by a NamedShape  (this shape  is the only <br>
//!          one stored) , which  has the TNaming_PRImITIVE evolution <br>
//! <br>
//!           *  The   <Select> method  returns   ALWAYS a  new <br>
//!          NamedShape at the given  label, which contains the <br>
//!           argument  selected  shape.    When  calling  this <br>
//!          method, the sub-hierarchy of <label> is first cleared, <br>
//!           then a TNaming_NamedShape   is ALWAYS created  at <br>
//!          this <label>, with the TNaming_SELECTED evolution. <br>
//!          The <Naming attribute> is associated to the selected <br>
//!          shape which store the arguments of the selection . <br>
//!          If the given selected shape was already identified <br>
//!           (method IsIdentified)   , this   Naming attribute <br>
//!            contains  the reference (Identity  code)  to the <br>
//!          argument shape. <br>
public ref class OCTNaming_Selector  {

protected:
  TNaming_Selector* nativeHandle;
  OCTNaming_Selector(OCDummy^) {};

public:
  property TNaming_Selector* Handle
  {
    TNaming_Selector* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTNaming_Selector(TNaming_Selector* nativeHandle);

// Methods PUBLIC

//! To know if a shape is already identified (not selected) <br>
//!          ======================================================= <br>
//! The label access defines the point of access to the data framework. <br>
//! selection is the shape for which we want to know <br>
//! whether it is identified or not. <br>
//! If true, NS is returned as the identity of selection. <br>
//! If Geometry is true, NS will be the named shape <br>
//! containing the first appearance of selection and <br>
//! not any other shape. In other words, selection <br>
//! must be the only shape stored in NS. <br>
static /*instead*/  System::Boolean IsIdentified(OCNaroWrappers::OCTDF_Label^ access, OCNaroWrappers::OCTopoDS_Shape^ selection, OCNaroWrappers::OCTNaming_NamedShape^ NS, System::Boolean Geometry) ;

//!  Create a selector on this label <br>//!  to select a shape. <br>
//!           ================== <br>
OCTNaming_Selector(OCNaroWrappers::OCTDF_Label^ aLabel);


//! Creates a topological naming on the label <br>
//! aLabel given as an argument at construction time. <br>
//! If successful, the shape Selection - found in the <br>
//! shape Context - is now identified in the named <br>
//! shape returned in NamedShape. <br>
//! If Geometry is true, NamedShape contains the <br>
//! first appearance of Selection. <br>
//! This syntax is more robust than the previous <br>
//! syntax for this method. <br>
 /*instead*/  System::Boolean Select(OCNaroWrappers::OCTopoDS_Shape^ Selection, OCNaroWrappers::OCTopoDS_Shape^ Context, System::Boolean Geometry, System::Boolean KeepOrientatation) ;


//! Creates a topological naming on the label <br>
//! aLabel given as an argument at construction time. <br>
//! If successful, the shape Selection is now <br>
//! identified in the named shape returned in NamedShape. <br>
//! If Geometry is true, NamedShape contains the <br>
//! first appearance of Selection. <br>
 /*instead*/  System::Boolean Select(OCNaroWrappers::OCTopoDS_Shape^ Selection, System::Boolean Geometry, System::Boolean KeepOrientatation) ;


//! Updates the topological naming on the label <br>
//! aLabel given as an argument at construction time. <br>
//! The underlying shape returned in the method <br>
//! NamedShape is updated. <br>
//! To read this shape, use the method TNaming_Tool::GetShape <br>
 /*instead*/  System::Boolean Solve(OCNaroWrappers::OCTDF_LabelMap^ Valid) ;

//! Returns the attribute list args. <br>
//! This list contains the named shape on which the topological naming was built. <br>
 /*instead*/  void Arguments(OCNaroWrappers::OCTDF_AttributeMap^ args) ;

//! Returns the NamedShape build or under construction, <br>
//! which contains the topological naming.. <br>
 /*instead*/  OCTNaming_NamedShape^ NamedShape() ;

~OCTNaming_Selector()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
