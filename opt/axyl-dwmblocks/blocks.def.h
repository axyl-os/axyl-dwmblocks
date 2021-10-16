
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
/*    {"  ", "uname -r", 360, 0}, */

    {" ﬙ ", "/opt/axyl-dwmblocks/scripts/cpu",        3,        0},

	{" ", "/opt/axyl-dwmblocks/scripts/ram",	      3,		0},

    {" ", "/opt/axyl-dwmblocks/scripts/storage",     3,        0},
    
    {" ", "/opt/axyl-dwmblocks/scripts/packages",    5,        0},

	{" ", "/opt/axyl-dwmblocks/scripts/date",		360,		0},

	{" ", "/opt/axyl-dwmblocks/scripts/time",		  1,		0},
    
    {"", "/opt/axyl-dwmblocks/scripts/uptime",       30,        0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
