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
SpawnObject("Barrel_Blue", "6200.153809 301.093872 7725.615723", "0.000000 0.000000 -0.000000");
SpawnObject("Chainsaw", "6201.000000 302.708008 7726.799805", "-149.999985 0.000000 -0.000000");
SpawnObject("Hacksaw", "6199.000000 302.574005 7724.520020", "35.999096 0.000000 0.000000");
SpawnObject("HandSaw", "6198.970215 302.350006 7724.430176", "33.499596 0.000000 6.500000");
SpawnObject("Chainsaw", "6200.959961 302.208008 7726.810059", "-152.999985 0.000000 0.000000");
SpawnObject("CanisterGasoline", "6198.660156 301.420013 7725.209961", "-54.000195 0.000000 0.000000");
SpawnObject("CanisterGasoline", "6198.509766 301.420013 7725.319824", "-54.000095 0.000000 0.000000");
SpawnObject("LargeGasCanister", "6198.290039 301.420013 7725.330078", "0.000000 0.000000 0.000000");
SpawnObject("MediumGasCanister", "6198.370117 301.399994 7725.459961", "0.000000 0.000000 0.000000");
SpawnObject("SmallGasCanister", "6198.220215 301.359985 7725.500000", "0.000000 0.000000 0.000000");
SpawnObject("BatteryCharger", "6199.390137 301.100006 7724.459961", "35.999596 0.000000 0.000000");
SpawnObject("TruckBattery", "6200.060059 301.095001 7723.959961", "-144.000000 0.000000 0.000000");
SpawnObject("CarBattery", "6199.689941 301.089996 7724.250000", "-54.000195 0.000000 0.000000");
SpawnObject("Battery9V", "6202.089844 302.367004 7724.200195", "0.000000 0.000000 0.000000");
SpawnObject("WoodAxe", "6199.850098 302.415985 7727.620117", "-54.000301 0.000000 0.000000");
SpawnObject("FirefighterAxe_Black", "6200.129883 301.984985 7727.459961", "-50.000099 0.000000 0.000000");
SpawnObject("Pickaxe", "6201.859863 302.549988 7726.299805", "-54.000599 0.000000 0.000000");
SpawnObject("Iceaxe", "6199.790039 301.700012 7727.700195", "26.999897 0.000000 0.000000");
SpawnObject("PipeWrench", "6200.080078 302.307007 7723.669922", "-54.000393 0.000000 0.000000");
SpawnObject("LugWrench", "6200.359863 302.332001 7723.479980", "-152.999985 0.000000 0.000000");
SpawnObject("Wrench", "6199.850098 302.752991 7724.020020", "-170.999985 0.000000 0.000000");
SpawnObject("TrashCan", "6200.759766 301.190002 7723.319824", "0.000000 0.000000 0.000000");


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
