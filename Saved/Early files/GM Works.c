static void SpawnObject(string type, vector position, vector orientation)
{
    auto obj = GetGame().CreateObjectEx(type, position, ECE_SETUP | ECE_UPDATEPATHGRAPH | ECE_CREATEPHYSICS);
    obj.SetPosition(position);
    obj.SetOrientation(orientation);
    obj.SetOrientation(obj.GetOrientation());
    obj.SetFlags(EntityFlags.STATIC, false);
    obj.Update();
	obj.SetAffectPathgraph(true, false);
	if (obj.CanAffectPathgraph()) GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
}

// Paste anything below this line into the bottom of your 'void main()' function


// Created Objects
SpawnObject("Land_Ruin_HouseBig3", "3938.600098 315.545013 8703.429688", "17.999905 2.599288 0.088931");
SpawnObject("Land_HouseBlock_2F4", "3622.540039 304.656006 8517.469727", "-45.000095 0.000000 0.000000");
SpawnObject("Land_HouseBlock_2F4", "3630.780029 304.656006 8529.379883", "135.000015 0.000000 0.000000");
SpawnObject("Land_HouseBlock_2F8", "3610.639893 304.503998 8552.860352", "40.000000 0.123729 0.089894");
SpawnObject("Land_Misc_Scaffolding", "3614.248535 303.500671 8537.651367", "45.000164 -0.000000 -0.000000");
SpawnObject("Barrel_Red", "3718.511475 402.502563 5960.513672", "0.000000 -0.000000 -0.000000");
SpawnObject("Barrel_Blue", "3720.818115 402.497223 5954.608398", "0.000000 0.458316 0.152700");
SpawnObject("Barrel_Red", "3717.762207 402.502563 5963.733887", "0.000000 0.000000 -0.000000");
SpawnObject("Barrel_Green", "3695.503662 402.502563 5967.155273", "0.000000 -0.000000 -0.000000");
SpawnObject("Barrel_Green", "3693.150146 402.502625 5966.387695", "0.000000 0.000000 -0.000000");
SpawnObject("Barrel_Green", "3692.354248 402.502563 5965.093750", "0.000000 0.000000 -0.000000");
SpawnObject("Barrel_Green", "3690.929932 402.502991 5963.359863", "0.000000 0.000000 0.000000");
SpawnObject("Barrel_Green", "3689.929932 405.000000 5961.419922", "0.000000 0.000000 0.000000");
SpawnObject("Barrel_Green", "3695.741943 402.108917 5974.831543", "0.000000 0.000000 -0.000000");
SpawnObject("Barrel_Green", "3698.071289 402.108917 5975.591797", "0.000000 0.000000 -0.000000");
SpawnObject("Barrel_Green", "3698.890869 402.108917 5976.881348", "0.000000 -0.000000 -0.000000");
SpawnObject("Barrel_Green", "3697.854004 402.179016 5972.050293", "0.000000 0.000000 -0.000000");
SpawnObject("Barrel_Green", "3698.856934 402.179016 5973.978027", "0.000000 0.000000 -0.000000");
SpawnObject("DryBag_Yellow", "3701.550049 403.000000 6009.500000", "68.000000 -55.500004 -18.000000");
SpawnObject("Land_Misc_Scaffolding", "3676.209961 404.700012 5996.970215", "72.000198 0.000000 0.000000");


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
