//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	//{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
	//{"", "hibernate_on_low_power", 60, 0},
	//{"", "checkupdates 2> /dev/null | wc -l | sed 's/[0]//g'", 3600, 0},
	//{"", "playerctl --ignore-player=chromium metadata --format '{{ artist }} - {{ title }}' 2> /dev/null", 5, 12},
	//{"", "wifistatus", 5, 0},
	//{"", "bandwidth", 5, 0},
	//{"", "free -h | awk '/Mem:/{print $3}' | sed 's/i//'", 5, 0},
	//{"", "mpstat 1 1 | awk 'END{print 100-$NF\"%\"}'", 5, 0},
	{"", "sensors | awk '/Package id 0:/{print $4}' | sed 's/+//'", 5, 0},
	{"","pactl list sources | awk '/Mute/ {print $2 }' | tail -1", 0, 10},
	{"", "pamixer --get-volume-human", 0, 10},
	{"", "light | awk '{b=int($1+0.5);print b\"%\"}'", 0, 11},
	{"", "acpi | awk '{print $3$4$5}' | sed 's/Charging,//; s/Discharging,//; s/Unknown,//; s/Full,//; s/,/ /'", 60, 0}, 
	{"", "date '+%a %d/%m %H:%M:%S'", 5, 0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
