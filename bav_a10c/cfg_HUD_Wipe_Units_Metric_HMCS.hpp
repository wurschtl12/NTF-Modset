class Airspeed_Number_HMCS
{
	type="text";
	align="left";
	scale=1;
	source="speed";
	width = 2.0;
	sourceScale=3.6;
	pos[]=
	{
		{0.15,0.40},
		1
	};
	right[]=
	{
		{0.20,0.40},
		1
	};
	down[]=
	{
		{0.15,0.45},
		1
	};
};
class Altitude_MSL_Number_HMCS
{
	type="text";
	scale=1;
	align="right";
	source="altitudeASL";
	sourceScale=1;
	pos[]=
	{
		{0.85,0.40},
		1
	};
	right[]=
	{
		{0.90,0.40},
		1
	};
	down[]=
	{
		{0.85,0.45},
		1
	};
};
class Radar_Altitude_Number_HMCS
{
	type="text";
	source="altitudeAGL";
	sourceScale=1;
	align="right";
	scale=1;
	pos[]=
	{
		{0.871,0.48},
		1
	};
	right[]=
	{
		{0.901,0.48},
		1
	};
	down[]=
	{
		{0.871,0.51},
		1
	};
};
