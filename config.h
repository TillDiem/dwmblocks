//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
 	{"",	"music",	1,	11},
 	{"",	"appointments notif",	300,	7},
	/*{"",	"pacpackages",	0,	8},*/
	{"",	"news",		30,	6},
	{"",	"mailbox",	60,	12},
/*	{"",    "stocks_bar ",  300,     6},*/
/*	{"",	"crypto",	0,	13},*/
	/*{"",	"torrent",	20,	7},*/
	/* {"",	"memory",	10,	14}, */
/*	{"",	"cpu",		10,	13},*/
	/* {"",	"moonphase",	18000,	5}, */
	/*{"",	"weather",	18000,	5},*/
	/* {"", 	"corona" , 	18000,	 5}, */
/*	{"",	"nettraf",	1,	16},*/
	{"",	"volume",	30,	10},
	{"",	"headset-connect",	30,	10},
	{"",	"battery | tr \'\n\' \' \'",	5,	3},
	{"",	"internet",	5,	4},
	{"",	"clock",	60,	1},
	/*{"",	"help-icon",	0,	15},*/
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
