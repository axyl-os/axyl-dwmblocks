
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
/*    {"  ", "uname -r", 360, 0}, */

    {" ﬙ ", "./.config/dwmblocks/scripts/cpu",        3,        0},

	{" ", "./.config/dwmblocks/scripts/ram",	      3,		0},

    {" ", "./.config/dwmblocks/scripts/storage",     3,        0},
    
    {" ", "./.config/dwmblocks/scripts/packages",    5,        0},

	{" ", "./.config/dwmblocks/scripts/date",		360,		0},

	{" ", "./.config/dwmblocks/scripts/time",		  1,		0},
    
    {"", "./.config/dwmblocks/scripts/uptime",       30,        0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
