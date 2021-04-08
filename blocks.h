//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "bar_update_battery",			   60,		1},
	{"", "bar_update_brightness",           0,		3},
	{"", "bar_update_microphone",           0,		7},
	{"", "bar_update_volume",               0,		11},
	{"", "bar_update_bluetooth",            0,		2},
	{"", "bar_update_wifi",                60,		12},
	{"", "bar_update_capslock",             1,		14},
	{"", "bar_update_datetime",            60,		6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ] [ ";
static unsigned int delimLen = 5;
