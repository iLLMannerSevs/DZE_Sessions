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
SpawnObject("CamoNetShelter", "4631.379883 340.000000 10137.599609", "54.000000 1.274210 4.349690");
SpawnObject("DebugCylinder", "6.538830 3.224440 -5.559180", "0.000000 0.000000 0.000000");
SpawnObject("DebugCylinder", "4636.292480 341.541046 10143.773438", "54.626301 0.857440 -0.000000");
SpawnObject("DebugCylinder", "4615.274414 341.267273 10127.580078", "103.288216 -1.068002 -0.000000");
SpawnObject("DebugCylinder", "4632.886719 341.744904 10149.878906", "-20.482023 0.550337 -0.000000");
SpawnObject("DebugCylinder", "4620.539551 341.658051 10145.158203", "69.641792 0.504195 0.000000");
SpawnObject("DebugCylinder", "4625.310547 341.061462 10127.665039", "138.432098 -0.163529 -0.000000");
SpawnObject("DebugCylinder", "4613.365723 341.412323 10147.868164", "106.426125 -0.680529 -0.000000");
SpawnObject("DebugCylinder", "4635.532715 341.488312 10142.269531", "-22.091061 0.407193 -0.000000");
SpawnObject("DebugCylinder", "4640.711426 341.463104 10156.339844", "159.076706 -0.839482 -0.000000");
SpawnObject("DebugCylinder", "4613.496094 341.431549 10144.895508", "-171.789337 -1.822969 -0.000000");
SpawnObject("DebugCylinder", "4617.753906 341.461975 10151.101563", "46.336739 0.808924 -0.000000");
SpawnObject("DebugCylinder", "4635.318359 341.230408 10138.207031", "-6.474427 0.788940 0.000000");
SpawnObject("DebugCylinder", "4624.720703 341.372650 10133.050781", "-66.804085 -1.211804 -0.000000");
SpawnObject("DebugCylinder", "4624.072754 341.765564 10150.535156", "-23.715202 -0.883705 -0.000000");
SpawnObject("DebugCylinder", "4612.413574 341.426392 10143.453125", "166.365219 -1.560111 0.000000");
SpawnObject("DebugCylinder", "4642.616699 341.406372 10149.225586", "49.711842 -0.670779 -0.000000");
SpawnObject("DebugCylinder", "4637.492188 340.266876 10127.086914", "129.385895 -2.377810 0.000000");
SpawnObject("DebugCylinder", "4627.424316 341.346008 10134.836914", "-155.736572 -0.489960 0.000000");
SpawnObject("DebugCylinder", "4631.778320 341.660492 10142.861328", "-51.597271 0.930336 -0.000000");
SpawnObject("DebugCylinder", "4612.904297 341.430756 10132.698242", "90.558617 -0.277854 -0.000000");
SpawnObject("DebugCylinder", "4635.681641 341.126068 10137.049805", "-144.954880 0.310103 -0.000000");
SpawnObject("DebugCylinder", "4633.474609 340.907776 10132.551758", "-35.290867 0.935550 -0.000000");
SpawnObject("DebugCylinder", "4627.313477 341.292450 10133.652344", "-127.689110 -0.077579 -0.000000");
SpawnObject("DebugCylinder", "4620.723145 341.557343 10138.431641", "-20.900560 -0.945703 -0.000000");
SpawnObject("DebugCylinder", "4622.734375 341.598633 10152.482422", "-130.506119 0.999780 -0.000000");
SpawnObject("DebugCylinder", "4628.904785 341.532379 10156.663086", "-29.596573 -0.790954 -0.000000");
SpawnObject("DebugCylinder", "4624.567383 341.427063 10136.541016", "143.153809 1.614742 -0.000000");
SpawnObject("DebugCylinder", "4623.797852 341.409760 10156.847656", "114.306351 0.081084 -0.000000");
SpawnObject("DebugCylinder", "4616.926758 341.293488 10154.239258", "29.790819 0.001519 -0.000000");
SpawnObject("DebugCylinder", "4613.825195 341.292969 10152.000000", "63.420971 0.858263 -0.000000");
SpawnObject("DebugCylinder", "4629.541016 341.478912 10139.375000", "98.743874 -0.177792 -0.000000");
SpawnObject("DebugCylinder", "4613.117188 341.412659 10146.217773", "144.793777 0.381067 0.000000");
SpawnObject("DebugCylinder", "4623.390137 341.434235 10134.763672", "71.147606 1.110996 -0.000000");
SpawnObject("DebugCylinder", "4642.441895 340.055573 10127.915039", "115.202286 1.096495 0.000000");
SpawnObject("DebugCylinder", "4634.528320 341.588196 10143.259766", "-68.096962 -2.104356 -0.000000");
SpawnObject("DebugCylinder", "4639.671387 341.358337 10143.444336", "75.247375 1.145301 -0.000000");
SpawnObject("DebugCylinder", "4641.942383 340.919952 10138.240234", "177.943359 0.459352 -0.000000");
SpawnObject("DebugCylinder", "4613.035645 341.271698 10151.691406", "-106.725098 -0.633581 -0.000000");
SpawnObject("DebugCylinder", "4627.940918 341.242340 10133.096680", "80.901787 1.763123 -0.000000");
SpawnObject("DebugCylinder", "4622.337891 341.588165 10140.096680", "22.947563 -1.083732 -0.000000");
SpawnObject("DebugCylinder", "4615.240723 341.361176 10129.670898", "-101.813950 0.295817 -0.000000");
SpawnObject("DebugCylinder", "4634.903320 341.309998 10139.028320", "-105.751022 1.821453 -0.000000");
SpawnObject("DebugCylinder", "4639.945313 340.503967 10131.667969", "-66.123093 0.293687 -0.000000");
SpawnObject("CamoNetShelter", "4577.600098 340.000000 10136.000000", "-108.000000 -1.588790 -3.413050");
SpawnObject("CamoNetShelter", "4754.450195 339.000000 10190.099609", "-117.000008 0.000000 0.000000");
SpawnObject("CamoNetShelter", "4752.120117 339.000000 10131.799805", "0.000000 0.000000 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4637.673340 350.353516 10192.795898", "35.334614 -1.191917 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1f", "4633.500000 342.052551 10199.935547", "29.944971 0.698419 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4634.178223 350.898499 10182.964844", "125.532913 -1.503123 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1f", "4614.042480 342.845642 10177.875977", "47.016457 1.646080 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1f", "4622.836914 342.282227 10189.581055", "-41.035309 0.529033 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4640.716797 350.355774 10193.396484", "173.192352 1.134363 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2fb", "4637.441406 350.746735 10187.660156", "15.860031 0.494182 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1s", "4624.571777 341.317688 10178.867188", "-165.824692 -0.739203 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4617.507324 350.694946 10172.200195", "38.293545 -0.021571 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4635.567383 350.011902 10196.427734", "132.700653 -0.614309 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4629.731934 349.610260 10197.405273", "-143.893204 -1.694602 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4615.590820 350.207611 10181.847656", "-118.832039 -0.655245 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4619.821289 350.484741 10181.178711", "167.414383 1.110298 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1f", "4622.152832 342.006470 10191.451172", "161.082336 -1.539530 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4616.967285 349.395844 10190.915039", "-133.194824 0.480262 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1f", "4634.405762 342.603577 10193.993164", "-128.462265 0.022444 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4606.541504 350.507294 10121.309570", "102.406708 -0.331892 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4584.750488 350.231537 10122.936523", "-76.016449 0.811886 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4597.937500 350.440704 10118.727539", "-62.136112 -0.298254 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2s", "4603.922363 346.860840 10104.766602", "-163.906662 -0.858537 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4607.705078 350.269653 10112.053711", "-21.987968 0.926153 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1f", "4580.604980 341.771240 10092.579102", "-41.126694 0.063705 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1s", "4578.975098 339.662811 10092.083008", "50.953423 0.883798 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4576.866211 349.113220 10092.191406", "-19.359222 0.180759 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2fb", "4588.416504 349.635193 10093.084961", "128.342484 0.202687 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4599.633789 350.472992 10122.592773", "0.657848 0.108969 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4591.020020 350.210480 10104.366211", "121.977905 1.080745 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1sb", "4580.354492 340.411041 10108.515625", "-26.806051 -1.026686 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4596.542480 350.304504 10106.596680", "146.159683 -1.098859 0.000000");
SpawnObject("bldr_plnt_t_piceaabies_2d", "4590.272949 346.292480 10095.236328", "79.528130 1.143112 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4589.465820 350.048828 10100.780273", "112.947006 0.452335 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1f", "4583.374023 342.535278 10109.275391", "-51.528446 -1.373894 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2fb", "4666.861328 349.919922 10138.393555", "-45.093845 0.492549 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4661.232910 350.404846 10162.370117", "-108.451706 0.479292 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4654.248535 350.569550 10146.745117", "72.731430 0.036506 0.000000");
SpawnObject("bldr_plnt_t_piceaabies_2d", "4655.717285 346.237518 10133.506836", "41.995708 0.493087 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4675.341797 349.629639 10149.062500", "160.441666 -1.584889 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1s", "4663.247559 340.118713 10134.849609", "163.640060 0.315736 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1s", "4657.155762 341.071320 10152.715820", "9.146852 0.386503 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2fb", "4656.604980 350.233734 10140.141602", "-149.360962 1.251301 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1s", "4673.711914 339.992798 10158.300781", "-42.552525 -2.393359 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4676.104492 349.554382 10149.722656", "-28.234991 1.130729 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4680.768555 348.982056 10163.220703", "-138.493881 0.570161 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4657.614258 350.636261 10161.652344", "81.451927 -0.070821 0.000000");
SpawnObject("bldr_plnt_t_piceaabies_2d", "4663.520508 346.789551 10146.413086", "-150.862045 0.045418 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4675.028320 349.656860 10137.743164", "-151.950165 1.327445 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4663.805176 350.294189 10148.114258", "120.383476 0.168707 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1sb", "4658.591797 340.960999 10149.547852", "145.437042 -0.898802 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4557.001953 349.312805 10130.627930", "-70.810989 0.105966 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4582.340820 350.742950 10150.887695", "33.055828 -0.557091 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4566.145020 350.313171 10153.438477", "168.621063 -0.286368 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1f", "4559.065430 341.744141 10126.330078", "150.033066 -0.022429 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4561.631836 349.826996 10136.424805", "-109.435341 0.868253 0.000000");
SpawnObject("bldr_plnt_t_piceaabies_2d", "4567.604004 346.670868 10133.523438", "98.525223 -0.861123 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4548.656250 349.018372 10131.164063", "-156.223267 0.656056 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4549.941406 349.045166 10159.869141", "-45.754219 -0.274370 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4553.985840 349.381989 10141.142578", "-17.065348 1.118166 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1sb", "4569.343262 340.824066 10136.571289", "45.264664 0.267454 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4572.740723 350.862061 10142.863281", "45.463806 1.301927 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4566.170898 350.547028 10150.385742", "-118.168770 -0.291683 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4601.101074 349.477448 10186.080078", "98.300156 -1.821719 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1sb", "4610.451172 341.175110 10169.820313", "-135.018127 -0.263642 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4595.005371 349.125214 10189.516602", "42.167503 1.054623 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4606.178711 350.580353 10172.079102", "153.586182 -1.616150 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4585.406738 349.259827 10175.815430", "-175.052444 0.822086 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4586.121582 350.405121 10162.191406", "65.385948 1.110495 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4578.964844 350.668396 10152.353516", "134.393799 -0.366493 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1s", "4594.215332 341.472687 10153.091797", "-24.737186 -0.214506 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4682.681152 348.997803 10151.923828", "149.052216 0.271516 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2s", "4667.202148 346.946777 10155.801758", "-145.675323 0.719560 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2s", "4671.632324 346.448883 10163.148438", "135.169815 1.724519 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4663.541992 350.237091 10164.677734", "136.011536 -0.184245 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4615.040527 350.996216 10128.745117", "31.404661 -0.257589 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4628.789063 350.262817 10122.037109", "-75.618690 0.764561 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2s", "4613.563965 347.992462 10135.644531", "-95.753105 1.218187 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4624.991699 350.646027 10125.154297", "46.293736 1.295950 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4647.398438 350.779968 10184.511719", "36.545624 -0.508941 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4643.825684 350.926178 10184.740234", "14.780410 -0.810805 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1f", "4642.608398 341.898132 10208.910156", "35.586514 0.937594 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_1f", "4633.321777 342.383545 10195.873047", "110.442032 -1.010425 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4600.333008 349.288788 10189.178711", "47.517426 -1.068952 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2fb", "4592.364258 349.351776 10180.370117", "-145.430771 -0.332334 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4599.600586 350.451599 10171.844727", "172.788742 -0.949907 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4605.673828 349.876984 10182.945313", "133.784546 -0.933380 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2fb", "4676.773438 349.038116 10177.992188", "0.091384 0.620270 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2s", "4667.433105 345.921356 10182.389648", "92.585587 1.043870 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4676.149902 349.030182 10171.443359", "103.230751 -0.948274 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4671.205078 349.597809 10164.256836", "-132.903595 -1.269588 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4169.727539 342.238068 9540.543945", "168.837784 1.170331 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4178.170898 342.658966 9530.990234", "-7.427425 1.260876 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4164.761230 341.879913 9529.849609", "152.492462 0.751998 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4169.579590 341.963898 9529.072266", "144.908112 1.540779 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4154.035156 344.987000 9529.501953", "-107.974792 -1.326110 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4157.458496 343.950775 9528.217773", "-96.008675 -0.314168 0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4175.724121 342.257813 9532.118164", "83.915619 -1.137265 -0.000000");
SpawnObject("bldr_plnt_t_PiceaAbies_2f", "4154.207031 346.832031 9545.692383", "-62.469101 0.937332 -0.000000");
SpawnObject("Land_Mil_Airfield_HQ", "4696.470215 344.730011 10232.700195", "153.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks_Round", "4328.049805 340.000000 10302.599609", "-34.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks_Round", "4315.189941 340.000000 10294.000000", "-33.999989 0.000000 0.000000");
SpawnObject("Land_Mil_Guardhouse2", "4387.149902 340.250000 10247.400391", "59.999996 0.000000 0.000000");
SpawnObject("Land_Mil_Guardhouse1", "4351.013184 341.519348 10177.235352", "54.000038 -0.061865 0.044947");
SpawnObject("Land_Mil_Guardhouse1", "4330.160156 341.519989 10195.200195", "144.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Tower_Small", "4341.290039 342.770996 10206.500000", "54.000099 0.000000 0.000000");
SpawnObject("Land_Mil_GuardTower", "4365.830078 345.200012 10169.799805", "-125.999977 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks6", "4659.020020 339.101013 10371.099609", "150.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks6", "4673.713379 339.106750 10346.293945", "150.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks5", "4636.390137 344.600006 10305.200195", "59.999996 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks6", "4706.100098 339.101013 10317.000000", "59.999996 0.000000 0.000000");
SpawnObject("Land_Mil_Tower_Small", "4499.629883 343.770844 10193.289063", "0.000000 -0.000000 -0.000000");


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);