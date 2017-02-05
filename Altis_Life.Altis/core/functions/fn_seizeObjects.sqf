/*
	File: fn_seizeWeapon.sqf
	Author: Skalicon

	Description:

*/
_clear = nearestObjects [player,["weaponholder"],3];
_destroyed = 0;
for "_i" from 0 to count _clear - 1
do
{
	_destroyed = _destroyed + 1;
	deleteVehicle (_clear select _i);
	sleep 0.056;
};

titleText[format["Seized %1 Objects in the Vicinity", _destroyed],"PLAIN"];
[51, player, format["Seized %1 Objects in the Vicinity", _destroyed]] remoteExec ["STS_fnc_logIt",2];
