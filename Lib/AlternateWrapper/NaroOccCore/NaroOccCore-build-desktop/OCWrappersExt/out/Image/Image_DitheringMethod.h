// File generated by CPPExt (Enum)

#ifndef _Image_DitheringMethod_OCWrappers_HeaderFile
#define _Image_DitheringMethod_OCWrappers_HeaderFile

namespace OCNaroWrappers
{

//! Type of orientation in a symmetry. <br>
//! - FT_HORIZONTAL : symmetry with respect to an horizontal axis. <br>
//! - FT_VERTICAL : symmetry with respect to a vertical axis. <br>
//! - FT_MAINDIAGONAL : symmetry with respect to a <br>
//!   diagonal oriented at 45 degrees. <br>
//! - FT_ANTIDIAGONAL : symmetry with respect to a <br>
//!   diagonal oriented at -45 degrees. <br>
//! - FT_CENTER : <br>
//! - FT_90 : rotation of 90 degrees. <br>
//! - FT_180 : rotation of 180 degrees. <br>
//! - FT_270 : rotation of -90 degrees. <br>
public enum class OCImage_DitheringMethod
{ 
 Image_DM_NearestColor,
Image_DM_ErrorDiffusion
};

}; // OCNaroWrappers

#endif
