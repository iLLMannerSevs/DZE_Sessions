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
SpawnObject("TacticalGloves_Green", "4676.549805 340.100006 9492.790039", "-0.000005 90.000000 -180.000000");
SpawnObject("OMNOGloves_Gray", "4675.799805 340.100006 9492.759766", "-3.500000 86.999969 -179.499985");
SpawnObject("SodaCan_Fronta", "4675.919434 339.070190 9495.142578", "0.000000 0.000000 -0.000000");
SpawnObject("PlateCarrierVest", "4676.459961 340.520996 9492.730469", "90.499992 -12.000000 -94.499985");
SpawnObject("PlateCarrierVest", "4675.799805 340.500000 9492.740234", "90.000000 -11.400000 -90.000000");
SpawnObject("PlateCarrierVest", "4677.649902 340.529999 9492.750000", "78.999992 -9.000000 -87.500000");
SpawnObject("PlateCarrierVest", "4677.080078 340.502014 9492.759766", "82.500000 -11.800000 -90.000000");
SpawnObject("MilitaryBelt", "4677.709961 340.239990 9492.839844", "-10.000006 -89.000046 -0.500006");
SpawnObject("MilitaryBelt", "4677.149902 340.204987 9492.730469", "2.500000 -89.499924 1.000000");
SpawnObject("MilitaryBelt", "4676.490234 340.204987 9492.740234", "-178.499985 -90.000000 -180.000000");
SpawnObject("MilitaryBelt", "4675.819824 340.209015 9492.740234", "-178.000000 -90.000000 -180.000000");
SpawnObject("Mich2001Helmet", "4677.640137 340.981995 9492.709961", "0.000000 -60.000000 0.000000");
SpawnObject("Mich2001Helmet", "4677.029785 340.984985 9492.730469", "0.000000 -60.000000 0.000000");
SpawnObject("Mich2001Helmet", "4676.399902 340.984985 9492.709961", "0.000000 -60.000000 0.000000");
SpawnObject("Mich2001Helmet", "4675.669922 340.984985 9492.690430", "0.000000 -60.000000 0.000000");
SpawnObject("bldr_prop_TacticalGloves_Beige", "4677.759766 340.100006 9492.830078", "156.999985 -90.000000 -178.000000");
SpawnObject("bldr_prop_TacticalGloves_Black", "4677.140137 340.100006 9492.750000", "175.000000 -90.000000 -180.000000");


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
