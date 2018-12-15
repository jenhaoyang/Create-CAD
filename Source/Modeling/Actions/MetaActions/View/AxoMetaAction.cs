﻿#region Usings

using NaroCppCore.Occ.V3d;


#endregion

namespace MetaActions.View
{
    public class AxoMetaAction : ViewMetaAction
    {
        protected override void OnStepsCompleted()
        {
            View.SetProj(V3dTypeOfOrientation.V3d_XposYnegZpos);
        }
    }
}