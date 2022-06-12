// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
<<<<<<< HEAD
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/

    {"", "bar_update_datetime", 60, 6},
    {"", "bar_update_capslock", 1, 14},
    {"", "bar_update_packages", 12 * 60 * 60, 8},
    {"", "bar_update_battery", 60, 1},
    {"", "bar_update_microphone", 0, 7},
    {"", "bar_update_volume", 0, 11},
    {"", "bar_update_bluetooth", 0, 2},
    {"", "bar_update_wifi", 60, 12},
=======
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "bar_update_packages",      12*60*60,		8},
	{"", "bar_update_cpu",                  1,		4},
	{"", "bar_update_ram",                  1,		9},
	{"", "bar_update_vpn",                  1,		9},
	{"", "bar_update_capslock",             1,		13},
	{"", "bar_update_datetime",            60,		6},
>>>>>>> 28b40c4052fa8b2a731aaf7e6f49ba7bf512bffa
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
