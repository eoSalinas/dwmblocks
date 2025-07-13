
static const Block blocks[] = {
	/*Icon, Command, Update Interval, Update Signal*/
    {"cpu: ", "top -bn1 | grep 'Cpu(s)' | sed 's/.*, *\\([0-9.]*\\)%* id.*/\\1/' | awk '{print 100 - $1 \"%\"}'", 3, 0},
	{"ram: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 5, 0},
    {"battery: ", "$XDG_CONFIG_HOME/scripts/dwmblocks-battery", 30, 0},
	{"", "date '+%B %d - %I:%M%P '", 60, 0},
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
