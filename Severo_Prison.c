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
SpawnObject("Land_Mil_Airfield_HQ", "8346.309570 115.202003 12802.700195", "-1.500000 -1.000000 0.076411");
SpawnObject("Land_Mil_Barracks3", "8291.129883 111.814003 12767.900391", "0.000000 0.381901 0.992984");
SpawnObject("Land_Mil_Guardhouse1", "8276.250000 112.290001 12763.599609", "-90.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Guardhouse2", "8268.219727 111.255997 12760.200195", "-90.000000 0.763782 0.687485");
SpawnObject("Land_Wall_Gate_IndCnc4", "8267.969727 110.828003 12748.700195", "90.000000 -1.221480 -0.992780");
SpawnObject("Land_Wall_FenForest_Gate", "8263.860352 110.669998 12761.799805", "0.000000 0.000000 0.000000");
SpawnObject("Land_Wall_FenForest_Gate", "8281.559570 110.550003 12761.599609", "0.000000 0.000000 0.000000");
SpawnObject("Land_BusStop_Village2", "8294.500000 110.580002 12761.099609", "0.000000 0.381902 0.992984");
SpawnObject("Land_Mil_GuardBox_Smooth", "8269.410156 111.328003 12745.500000", "0.000000 -1.145220 1.374560");
SpawnObject("Land_Radio_building", "8257.629883 114.473999 12791.000000", "-90.000000 0.076348 0.534742");
SpawnObject("Land_Tower_TC4_Base", "8263.080078 131.438004 12788.500000", "0.000000 0.000000 0.000000");
SpawnObject("Land_Tower_TC4_Mid", "8263.179688 174.889999 12788.400391", "0.000000 0.000000 0.000000");
SpawnObject("Land_Tower_TC4_Top", "8263.049805 215.350006 12788.500000", "0.000000 0.000000 0.000000");
SpawnObject("Land_Prison_Wall_Large", "8275.980469 112.998001 12811.400391", "152.999985 -0.166925 0.513767");
SpawnObject("Land_Prison_Wall_Large", "8307.879883 113.149002 12813.000000", "172.499985 0.000000 0.000000");
SpawnObject("Land_Prison_Side", "8323.929688 116.255997 12799.200195", "88.999893 0.000000 0.000000");
SpawnObject("Land_Castle_Stairs", "8313.200195 111.150002 12803.000000", "90.000000 0.000000 0.000000");
SpawnObject("Land_City_PoliceStation", "8309.599609 115.929001 12768.599609", "0.000000 0.000000 0.000000");
SpawnObject("Land_Wall_Gate_IndCnc4", "8319.330078 110.139000 12779.299805", "-90.000000 1.526470 -0.992711");
SpawnObject("Land_Misc_Calvary1", "8320.440430 111.056000 12782.000000", "0.000000 0.992337 1.527270");
SpawnObject("Land_Chapel2_Yellow", "8333.200195 112.195000 12783.799805", "0.000000 2.364160 -0.152632");
SpawnObject("Land_Church4_Lightblue", "8338.299805 122.971001 12769.799805", "-90.999786 0.916172 -1.374660");
SpawnObject("Land_Ruin_HouseSmall2_NoIvy", "8346.589844 111.893997 12785.099609", "-1.500000 0.000000 0.000000");


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
