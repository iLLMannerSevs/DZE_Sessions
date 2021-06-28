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
SpawnObject("Land_Construction_Building", "5747.790039 423.500000 4123.680176", "-81.000198 0.000000 0.000000");
SpawnObject("Land_Tisy_KitchenRoom", "5729.979980 422.179993 4069.909912", "-170.997986 0.000000 0.000000");
SpawnObject("Land_Misc_Polytunnel", "5765.299805 418.000000 4058.500000", "-81.000000 0.000000 0.000000");
SpawnObject("Land_Misc_Polytunnel", "5768.959961 418.000000 4080.760010", "-81.000000 0.000000 0.000000");
SpawnObject("Land_Tower_TC5", "5705.009766 439.298004 3755.550049", "-36.000000 0.074238 -0.053937");
SpawnObject("bldr_mil_camonet_roof_nato", "5707.784180 416.741730 3942.043213", "-99.000015 8.386796 -2.806443");
SpawnObject("bldr_mil_camonet_roof_nato", "5706.780762 417.692139 3953.265625", "-17.999990 10.917226 4.144256");
SpawnObject("bldr_mil_camonet_big_nato", "6068.825195 372.498901 3838.393799", "107.999779 -4.843000 4.935238");
SpawnObject("bldr_mil_camonet_big_nato", "6092.725586 370.948944 3834.426025", "0.000065 2.831848 3.109975");
SpawnObject("bldr_mil_camonet_side_nato", "6081.860352 373.066650 3819.830811", "-170.999954 14.315434 -5.808264");
SpawnObject("bldr_mil_camonet_side_nato", "6055.422363 375.786865 3816.656738", "-153.659424 13.275624 -0.650546");
SpawnObject("bldr_mil_camonet_side_nato", "6070.762695 376.346771 3810.642822", "162.000076 9.718534 -7.729565");
SpawnObject("bldr_mil_fortified_nest_big", "5630.779785 423.000000 3911.719971", "135.000015 2.132760 -3.429100");
SpawnObject("bldr_mil_fortified_nest_small", "5929.089844 384.299988 4431.830078", "-108.000000 -0.240254 -6.353540");
SpawnObject("bldr_roadblock_pillbox", "5945.575684 383.481995 4422.738770", "-116.999947 2.243351 -5.246289");
SpawnObject("bldr_roadblock_cncblocks_long", "5934.153809 383.754700 4428.248047", "62.999977 -2.543514 3.863566");
SpawnObject("bldr_roadblock_cncblocks_short", "5941.766602 383.148712 4422.071289", "-117.000053 -1.172170 -3.512015");
SpawnObject("bldr_rock_bright_wallh3", "7326.809570 249.143341 6014.214844", "170.999954 6.323432 1.668402");
SpawnObject("bldr_rock_bright_monolith3", "7034.488770 254.525528 6398.382324", "0.000000 1.822643 5.753090");
SpawnObject("bldr_rock_bright_monolith1", "7303.580078 226.977005 6144.399902", "17.999899 -5.876309 -3.066480");
SpawnObject("Land_Mil_ControlTower", "3950.360107 245.850006 10159.400391", "45.000198 1.000000 0.000000");
SpawnObject("bldr_mil_blastcover4", "3949.169922 239.158005 10201.500000", "137.000000 0.064784 0.453698");
SpawnObject("bldr_mil_blastcover3", "3993.330078 239.123993 10251.700195", "45.000000 0.647873 -1.814310");
SpawnObject("bldr_mil_artilery_rampart", "3907.860107 238.565002 10164.599609", "-126.000000 0.107791 0.148361");
SpawnObject("bldr_mil_artillery_nest", "3895.709961 238.171005 10170.400391", "-8.000001 -1.373930 -1.466060");
SpawnObject("bldr_mil_camonet_tent2", "3944.482178 241.090393 10150.487305", "44.999805 0.000000 -0.000000");
SpawnObject("Land_Mil_Barracks6", "3891.020020 238.261002 10108.200195", "-38.999901 0.000000 0.000000");
SpawnObject("Land_Mil_GuardHouse3", "3921.419922 240.154999 10169.200195", "-133.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Airfield_HQ", "3993.469971 244.210007 10185.299805", "135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks_Round", "3940.479980 239.046997 10216.799805", "135.000015 0.648156 0.648199");
SpawnObject("Land_Mil_Barracks_Round", "3929.889893 238.923004 10207.599609", "135.000015 0.194457 0.194458");
SpawnObject("Land_Mil_Tent_Big3", "3898.060059 239.238007 10206.200195", "45.000000 0.129565 0.648238");
SpawnObject("Land_Mil_Barracks5", "3926.810059 244.531998 10286.200195", "-45.000000 0.000000 0.000000");
SpawnObject("Land_Mil_ATC_Big", "3993.129883 254.556000 10322.599609", "-135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_ATC_Small", "3860.510010 248.921005 10092.200195", "54.000099 0.000000 0.000000");
SpawnObject("Land_Mil_GuardTower", "3660.390869 244.882614 10076.565430", "-135.000015 -1.425413 -0.518419");
SpawnObject("Land_Sawmill_Illuminanttower", "4022.219971 247.927994 10168.599609", "0.000000 0.183384 0.000000");
SpawnObject("Land_Sawmill_Building", "4021.979980 244.658997 10222.200195", "45.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks6", "3859.770020 238.261002 10207.599609", "44.999901 0.000000 0.000000");


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
