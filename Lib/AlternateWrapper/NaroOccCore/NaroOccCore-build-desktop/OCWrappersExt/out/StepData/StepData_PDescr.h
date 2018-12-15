// File generated by CPPExt (Transient)
//
#ifndef _StepData_PDescr_OCWrappers_HeaderFile
#define _StepData_PDescr_OCWrappers_HeaderFile

// include the wrapped class
#include <StepData_PDescr.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TCollection/TCollection_AsciiString.h"
#include "StepData_EnumTool.h"


namespace OCNaroWrappers
{

ref class OCStandard_Type;
ref class OCStepData_EDescr;
ref class OCStepData_Field;
ref class OCInterface_Check;


//! This class is intended to describe the authorized form for a <br>
//!           parameter, as a type or a value for a field <br>
//! <br>
//!           A PDescr firstly describes a type, which can be SELECT, i.e. <br>
//!           have several members <br>
public ref class OCStepData_PDescr : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepData_PDescr(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepData_PDescr(Handle(StepData_PDescr)* nativeHandle);

// Methods PUBLIC


OCStepData_PDescr();


 /*instead*/  void SetName(System::String^ name) ;


 /*instead*/  System::String^ Name() ;

//! Declares this PDescr to be a Select, hence to have members <br>
//!           <me> itself can be the first member <br>
 /*instead*/  void SetSelect() ;

//! Adds a member to a SELECT description <br>
 /*instead*/  void AddMember(OCNaroWrappers::OCStepData_PDescr^ member) ;

//! Sets a name for SELECT member. To be used if a member is for <br>
//!           an immediate type <br>
 /*instead*/  void SetMemberName(System::String^ memname) ;

//! Sets <me> for an Integer value <br>
 /*instead*/  void SetInteger() ;

//! Sets <me> for a Real value <br>
 /*instead*/  void SetReal() ;

//! Sets <me> for a String value <br>
 /*instead*/  void SetString() ;

//! Sets <me> for a Boolean value (false,true) <br>
 /*instead*/  void SetBoolean() ;

//! Sets <me> for a Logical value (false,true,unknown) <br>
 /*instead*/  void SetLogical() ;

//! Sets <me> for an Enum value <br>
//!           Then, call AddEnumDef ordered from the first one (value 0) <br>
 /*instead*/  void SetEnum() ;

//! Adds an enum value as a string <br>
 /*instead*/  void AddEnumDef(System::String^ enumdef) ;

//! Sets <me> for an Entity which must match a Type (early-bound) <br>
 /*instead*/  void SetType(OCNaroWrappers::OCStandard_Type^ atype) ;

//! Sets <me> for a Described Entity, whose Description must match <br>
//!           the type name  <dscnam> <br>
 /*instead*/  void SetDescr(System::String^ dscnam) ;

//! Adds an arity count to <me>, by default 1 <br>
//!           1 : a simple field passes to a LIST/ARRAY etc <br>
//!               or a LIST to a LIST OF LIST <br>
//!           2 : a simple field passes to a LIST OF LIST <br>
 /*instead*/  void AddArity(Standard_Integer arity) ;

//! Directly sets the arity count <br>
//!           0 : simple field <br>
//!           1 : LIST or ARRAY etc <br>
//!           2 : LIST OF LIST <br>
 /*instead*/  void SetArity(Standard_Integer arity) ;

//! Sets <me> as <other> but duplicated <br>
//!           Hence, some definition may be changed <br>
 /*instead*/  void SetFrom(OCNaroWrappers::OCStepData_PDescr^ other) ;

//! Sets/Unsets <me> to accept undefined values <br>
 /*instead*/  void SetOptional(System::Boolean opt) ;

//! Sets/Unsets <me> to be for a derived field <br>
 /*instead*/  void SetDerived(System::Boolean der) ;

//! Sets <me> to describe a field of an entity <br>
//!           With a name and a rank <br>
 /*instead*/  void SetField(System::String^ name, Standard_Integer rank) ;

//! Tells if <me> is for a SELECT <br>
 /*instead*/  System::Boolean IsSelect() ;

//! For a SELECT, returns the member whose name matches <name> <br>
//!           To this member, the following question can then be asked <br>
//!           Null Handle if <name> not matched or <me> not a SELECT <br>
//! <br>
//!           Remark : not to be asked for an entity type <br>
//!           Hence, following IsInteger .. Enum* only apply on <me> and <br>
//!           require Member <br>
//!           While IsType applies on <me> and all Select Members <br>
 /*instead*/  OCStepData_PDescr^ Member(System::String^ name) ;

//! Tells if <me> is for an Integer <br>
 /*instead*/  System::Boolean IsInteger() ;

//! Tells if <me> is for a Real value <br>
 /*instead*/  System::Boolean IsReal() ;

//! Tells if <me> is for a String value <br>
 /*instead*/  System::Boolean IsString() ;

//! Tells if <me> is for a Boolean value (false,true) <br>
 /*instead*/  System::Boolean IsBoolean() ;

//! Tells if <me> is for a Logical value (false,true,unknown) <br>
 /*instead*/  System::Boolean IsLogical() ;

//! Tells if <me> is for an Enum value <br>
//!           Then, call AddEnumDef ordered from the first one (value 0) <br>
//!           Managed by an EnumTool <br>
 /*instead*/  System::Boolean IsEnum() ;

//! Returns the maximum integer for a suitable value (count - 1) <br>
 /*instead*/  Standard_Integer EnumMax() ;

//! Returns the numeric value found for an enum text <br>
//!           The text must be in capitals and limited by dots <br>
//!           A non-suitable text gives a negative value to be returned <br>
 /*instead*/  Standard_Integer EnumValue(System::String^ name) ;

//! Returns the text which corresponds to a numeric value, <br>
//!           between 0 and EnumMax. It is limited by dots <br>
 /*instead*/  System::String^ EnumText(Standard_Integer val) ;

//! Tells if <me> is for an Entity, either Described or CDL Type <br>
 /*instead*/  System::Boolean IsEntity() ;

//! Tells if <me> is for an entity of a given CDL type (early-bnd) <br>
//!           (works for <me> + nexts if <me> is a Select) <br>
 /*instead*/  System::Boolean IsType(OCNaroWrappers::OCStandard_Type^ atype) ;

//! Returns the type to match (IsKind), for a CDL Entity <br>
//!           (else, null handle) <br>
 /*instead*/  OCStandard_Type^ Type() ;

//! Tells if <me> is for a Described entity of a given EDescr <br>
//!           (does this EDescr match description name ?). For late-bnd <br>
//!           (works for <me> + nexts if <me> is a Select) <br>
 /*instead*/  System::Boolean IsDescr(OCNaroWrappers::OCStepData_EDescr^ descr) ;

//! Returns the description (type name) to match, for a Described <br>
//!           (else, empty string) <br>
 /*instead*/  System::String^ DescrName() ;

//! Returns the arity of <me> <br>
 /*instead*/  Standard_Integer Arity() ;

//! For a LIST or LIST OF LIST, Returns the PDescr for the simpler <br>
//!           PDescr. Else, returns <me> <br>
//!           This allows to have different attributes for Optional for <br>
//!           instance, on a field, and on the parameter of a LIST : <br>
//!           [OPTIONAL] LIST OF [OPTIONAL] ... <br>
 /*instead*/  OCStepData_PDescr^ Simple() ;

//! Tells if <me> is Optional <br>
 /*instead*/  System::Boolean IsOptional() ;

//! Tells if <me> is Derived <br>
 /*instead*/  System::Boolean IsDerived() ;

//! Tells if <me> is a Field. Else it is a Type <br>
 /*instead*/  System::Boolean IsField() ;


 /*instead*/  System::String^ FieldName() ;


 /*instead*/  Standard_Integer FieldRank() ;

//! Semantic Check of a Field : does it complies with the given <br>
//!           description ? <br>
virtual /*instead*/  void Check(OCNaroWrappers::OCStepData_Field^ afild, OCNaroWrappers::OCInterface_Check^ ach) ;

~OCStepData_PDescr()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
