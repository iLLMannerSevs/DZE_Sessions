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
SpawnObject("Land_House_1W05", "6852.609863 464.278015 1131.109985", "144.000000 0.000000 0.000000");
SpawnObject("Land_House_1W10", "6835.120117 463.299988 1129.239990", "-36.000000 0.000000 0.000000");
SpawnObject("Land_House_1W09", "6828.069824 464.270996 1106.239990", "62.999901 0.083192 0.163273");
SpawnObject("Land_House_1W10_Brown", "6819.979980 463.372009 1094.140015", "-117.000008 0.000000 0.000000");
SpawnObject("Land_House_1W12_Brown", "6841.700195 464.539001 1090.930054", "63.000099 0.000000 0.000000");
SpawnObject("Land_Misc_Greenhouse", "6797.450195 462.949005 1132.939941", "-155.000000 0.000000 0.000000");
SpawnObject("Land_Misc_Greenhouse", "6793.649902 463.532013 1128.170044", "-155.000000 0.000000 0.000000");
SpawnObject("Land_Misc_Toilet_Dry", "6789.359863 462.240997 1147.530029", "117.000008 0.000000 0.000000");
SpawnObject("Land_Misc_DogHouse", "6811.740234 462.566986 1117.319946", "-144.000000 -0.693921 0.175604");
SpawnObject("Land_Misc_FeedShack", "6824.370117 461.472992 1193.079956", "-44.999901 0.000000 0.000000");
SpawnObject("Land_Village_HealthCare", "6914.439941 465.484009 1094.699951", "-126.000000 0.519165 -0.377207");
SpawnObject("Land_Misc_TrailRoof_Big", "6781.310059 465.700012 1106.119995", "-162.000000 0.000000 0.000000");
SpawnObject("Land_Misc_Well_Pump_Blue", "6802.850098 461.899994 1111.800049", "0.000000 0.000000 0.000000");
SpawnObject("Land_Misc_TrailRoof_Small", "6808.574707 463.002625 1107.765747", "-117.000015 -0.000000 -0.000000");
SpawnObject("Land_Misc_TrailRoof_Small", "6809.698730 463.076569 1120.868042", "-26.999819 0.975193 -1.114147");
SpawnObject("Land_Shed_W4", "6816.939941 463.350006 1114.300049", "-35.999905 0.000000 0.000000");
SpawnObject("Land_Shed_W2", "6834.569824 461.359009 1139.449951", "-27.000099 0.000000 0.000000");
SpawnObject("Land_Shed_M1", "6843.520020 462.850006 1105.359985", "153.000000 0.000000 0.000000");
SpawnObject("Land_Misc_Well_Pump_Blue", "9150.879883 256.260010 378.213989", "0.000000 2.014270 0.366539");
SpawnObject("Land_Radio_building", "4037.570068 243.149994 10330.799805", "45.000000 0.000000 0.000000");
SpawnObject("Land_FuelStation_Build", "3962.459961 240.216003 10154.900391", "-135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_GuardBox_Brown", "3992.110107 239.942993 10159.599609", "117.000008 0.000000 0.000000");
SpawnObject("Land_Tisy_Barracks", "4030.669922 242.445999 10400.299805", "-45.000305 0.000000 0.000000");
SpawnObject("Land_Tisy_Barracks", "4017.110107 242.445999 10352.000000", "135.000015 0.000000 0.000000");
SpawnObject("Land_Airfield_Radar_Tall", "4111.270020 260.950989 10388.099609", "-135.000015 0.000000 0.000000");
SpawnObject("Land_Tisy_RadarB_Base", "4035.570068 237.757996 10268.200195", "-45.000000 0.000000 0.000000");
SpawnObject("Land_Rail_Warehouse_Small", "4096.919922 241.279999 10276.599609", "-135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_Guardhouse2", "4083.800049 239.528000 10298.200195", "45.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Guardhouse2", "4073.330078 239.528000 10308.900391", "-135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Small", "4078.870117 238.945007 10314.599609", "-135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_Tower_Small", "4076.129883 241.931000 10301.000000", "45.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Small", "4089.550049 238.945007 10303.400391", "-135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "4097.839844 240.639008 10302.000000", "135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_Tent_Big4", "4123.729980 240.149994 10309.500000", "-135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_Tent_Big3", "4122.700195 239.449997 10290.599609", "-135.000015 0.000000 0.000000");
SpawnObject("Land_Guardhouse", "4070.500000 239.050003 10295.299805", "-45.000095 0.000000 0.000000");
SpawnObject("Land_Misc_Scaffolding", "4098.350098 240.860992 10244.599609", "45.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks6", "4234.930176 238.261002 10440.099609", "135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks6", "4195.390137 238.343994 10399.099609", "135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Big", "4247.009766 239.069000 10491.799805", "-135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Big", "4279.529785 239.567993 10525.599609", "-45.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Big", "4240.140137 239.067993 10567.599609", "135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Big", "4210.629883 239.069000 10547.099609", "135.000015 0.000000 0.000000");
SpawnObject("Land_Mil_GuardTower", "4229.258789 245.000443 10504.697266", "-135.000031 0.388854 -0.777776");
SpawnObject("Land_Mil_GuardTower", "4221.574707 245.069214 10510.208984", "45.000038 -0.000000 -0.000000");


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
