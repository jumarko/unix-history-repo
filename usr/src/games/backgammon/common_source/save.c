static char sccsid[] = "	save.c	1.1	82/05/11	";

#include "back.h"

extern int	errno;

int	code[] = {
	0000413, 0000000, 0004000, 0000000, 0002000, 0000000, 0002620, 0000000,
	0001100, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000,
	0000000, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000,
/* *, */
	0000000, 0004302, 0150136, 0004256, 0117156, 0006256, 0150120, 0127120,
	0152404, 0011200, 0150774, 0137120, 0014404, 0152402, 0150160, 0127120,
	0150010, 0167520, 0003730, 0000000, 0001773, 0006757, 0000000, 0156400,
	0175520, 0167401, 0000134, 0000000, 0000674, 0000000, 0000000, 0000335,
	0136335, 0157410, 0156357, 0000007, 0157400, 0145757, 0000007, 0157400,
	0127757, 0000007, 0175400, 0167405, 0000004, 0000000, 0000004, 0000000,
	0000000, 0126237, 0156410, 0002254, 0001373, 0000757, 0000000, 0002000,
	0000000, 0167735, 0003610, 0000000, 0126335, 0156410, 0002254, 0001773,
	0001757, 0000000, 0002000, 0000000, 0000000, 0035674, 0167427, 0000016,
	0000000, 0000000, 0000000, 0000373, 0106757, 0000001, 0136000, 0000001,
	0050320, 0160757, 0000010, 0147000, 0050001, 0000004, 0007400, 0002302,
	0150136, 0004254, 0160133, 0125401, 0050014, 0000716, 0002120, 0054724,
	0054720, 0030530, 0000207, 0126366, 0126404, 0150377, 0054001, 0054335,
	0126737, 0114377, 0006653, 0175576, 0167403, 0002312, 0000000, 0050320,
	0010531, 0114152, 0056357, 0000007, 0077000, 0000773, 0141757, 0000001,
	0152400, 0011520, 0104005, 0100217, 0006253, 0167736, 0004220, 0000000,
	0004253, 0167736, 0004210, 0000000, 0002253, 0003741, 0006253, 0150102,
	0004253, 0173132, 0002254, 0002273, 0125726, 0140404, 0000217, 0000004,
	0055000, 0150520, 0002253, 0014120, 0150406, 0002254, 0011012, 0141617,
	0125532, 0050004, 0050320, 0156530, 0156520, 0114132, 0006653, 0175576,
	0167403, 0002142, 0000000, 0050320, 0150131, 0125532, 0152004, 0010553,
	0160556, 0125402, 0001414, 0066461, 0150377, 0004253, 0011132, 0150463,
	0107533, 0004070, 0000000, 0001422, 0074061, 0156777, 0000217, 0000004,
	0175400, 0167401, 0000630, 0000000, 0050320, 0150132, 0125532, 0011010,
	0104006, 0125404, 0010414, 0104203, 0125410, 0152014, 0150131, 0054131,
	0020021, 0055303, 0002253, 0150131, 0054131, 0013025, 0055320, 0002253,
	0054735, 0055335, 0125630, 0077015, 0001773, 0174757, 0000003, 0150000,
	0054520, 0107462, 0001777, 0173153, 0002254, 0150212, 0125532, 0150404,
	0054530, 0003423, 0020210, 0006253, 0167461, 0150376, 0002254, 0002120,
	0007000, 0126320, 0055404, 0125630, 0050014, 0107712, 0177771, 0177777,
	0150520, 0001120, 0040022, 0125720, 0055010, 0035023, 0055303, 0002253,
	0012531, 0150063, 0125532, 0111404, 0102217, 0006253, 0002023, 0050324,
	0002421, 0107462, 0002000, 0150120, 0065520, 0054735, 0055335, 0125630,
	0077015, 0001773, 0107757, 0000003, 0150400, 0054520, 0004023, 0020210,
	0006253, 0000716, 0002120, 0050324, 0000004, 0004000, 0167736, 0002766,
	0000000, 0010533, 0156414, 0175533, 0167401, 0000016, 0000000, 0010300,
	0150533, 0167533, 0003440, 0000000, 0165431, 0000004, 0006000, 0126320,
	0055404, 0000716, 0111532, 0125403, 0011414, 0160074, 0125406, 0033414,
	0055735, 0000773, 0063757, 0177777, 0150377, 0055120, 0125630, 0077015,
	0000773, 0026757, 0000000, 0152400, 0014120, 0147003, 0055001, 0001741,
	0006253, 0156412, 0004253, 0000773, 0167757, 0000001, 0111400, 0106217,
	0006253, 0001423, 0125724, 0105010, 0177617, 0006253, 0065724, 0055320,
	0002120, 0000000, 0000000, 0003274, 0003036, 0167427, 0176760, 0177777,
	0050324, 0000004, 0000000, 0004302, 0157536, 0175255, 0126335, 0175404,
	0167402, 0000044, 0000000, 0050325, 0001430, 0050324, 0150004, 0050001,
	0000004, 0000000, 0000000, 0126335, 0156410, 0004617, 0000164, 0156400,
	0002254, 0001773, 0013757, 0000000, 0002000, 0000000, 0126335, 0156410,
	0004217, 0000164, 0156400, 0002254, 0001773, 0000757, 0000000, 0002000,
	0000000, 0033274, 0003036, 0167427, 0176624, 0177777, 0000004, 0000000,
	0007000, 0167725, 0003124, 0000000, 0027022, 0000711, 0070217, 0000011,
	0167400, 0003106, 0000000, 0000711, 0066217, 0000011, 0167400, 0003076,
	0000000, 0167736, 0003070, 0000000, 0035757, 0000006, 0157000, 0024757,
	0000006, 0167400, 0003054, 0000000, 0002335, 0003701, 0002254, 0175576,
	0167402, 0001052, 0000000, 0050320, 0150131, 0012757, 0000006, 0055400,
	0167724, 0003032, 0000000, 0065751, 0010405, 0150044, 0065552, 0065720,
	0164532, 0173552, 0001170, 0050131, 0055700, 0150520, 0050132, 0007431,
	0001170, 0050131, 0055700, 0150520, 0055520, 0001431, 0134461, 0150000,
	0055133, 0000713, 0055553, 0055721, 0012132, 0150713, 0167532, 0002726,
	0000000, 0004422, 0055721, 0066217, 0000011, 0011400, 0152003, 0002120,
	0000761, 0167401, 0002710, 0000000, 0177654, 0107701, 0000400, 0000000,
	0050131, 0107706, 0000400, 0000000, 0074120, 0050010, 0127757, 0000005,
	0156400, 0175400, 0167401, 0000542, 0000000, 0050320, 0074132, 0167402,
	0002634, 0000000, 0140120, 0050132, 0050321, 0014532, 0074300, 0167402,
	0002614, 0000000, 0175576, 0167401, 0000500, 0000000, 0050320, 0150532,
	0107532, 0177777, 0177777, 0122423, 0055320, 0064777, 0000005, 0140400,
	0167404, 0002542, 0000000, 0150520, 0050132, 0003423, 0000710, 0052777,
	0000005, 0074000, 0167402, 0002526, 0000000, 0140120, 0050132, 0002303,
	0065120, 0065320, 0037757, 0000005, 0144400, 0107401, 0004554, 0000000,
	0031777, 0000005, 0030400, 0177430, 0001170, 0050131, 0055701, 0167520,
	0002440, 0000000, 0055321, 0014757, 0000005, 0012400, 0150022, 0010777,
	0000005, 0167400, 0002424, 0000000, 0065720, 0002777, 0000005, 0144400,
	0167401, 0002376, 0000000, 0140553, 0055404, 0002120, 0006000, 0126320,
	0055404, 0055720, 0141132, 0055004, 0055320, 0162757, 0000004, 0145400,
	0065001, 0150120, 0065120, 0000004, 0007000, 0006302, 0150136, 0002254,
	0164533, 0176253, 0156411, 0175533, 0167401, 0177716, 0177777, 0055703,
	0176253, 0143520, 0050004, 0172255, 0126335, 0175410, 0167401, 0177116,
	0177777, 0050320, 0011532, 0150405, 0055532, 0002022, 0055320, 0002120,
	0055720, 0176255, 0055320, 0174255, 0002335, 0001701, 0004254, 0175576,
	0167402, 0000232, 0000000, 0050320, 0150531, 0126531, 0017364, 0150031,
	0126531, 0010764, 0150023, 0176255, 0150120, 0174255, 0150121, 0060540,
	0002300, 0176255, 0002300, 0174255, 0126720, 0050364, 0126727, 0152764,
	0011120, 0150742, 0055532, 0132030, 0001170, 0050131, 0055300, 0150520,
	0055520, 0124031, 0001170, 0050131, 0055300, 0141120, 0050133, 0002306,
	0150120, 0042757, 0000004, 0040000, 0010552, 0000221, 0000000, 0167701,
	0002100, 0000000, 0002254, 0156576, 0150001, 0051534, 0057320, 0136134,
	0017021, 0013406, 0043757, 0177773, 0150377, 0022757, 0000004, 0050000,
	0121700, 0167404, 0002034, 0000000, 0000004, 0136000, 0017021, 0013406,
	0025757, 0177773, 0150377, 0002254, 0003757, 0000004, 0152000, 0002120,
	0000000, 0126320, 0050004, 0126320, 0051010, 0002423, 0051321, 0012401,
	0152010, 0075521, 0050122, 0051120, 0011404, 0150413, 0051120, 0001436,
	0050324, 0150004, 0050001, 0000004, 0000000, 0002274, 0003036, 0167427,
	0175354, 0177777, 0000004, 0000000, 0000000, 0000000, 0000000, 0000000,
	0000000, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000,
/* *, */
	0000000, 0000000, 0072457, 0071163, 0063457, 0066541, 0071545, 0061057,
	0061541, 0063553, 0066541, 0067555, 0000156, 0060542, 0065543, 0060547,
	0066555, 0067157, 0071400, 0000000, 0000000, 0000000, 0006620, 0000000,
	0006620, 0000000, 0000001, 0000000, 0000000, 0000000, 0000000, 0000000,
	0000000, 0000000, 0000402, 0000000, 0000000, 0000000, 0000000, 0000000,
	0000000, 0000000, 0001006, 0000000, 0000000, 0000000, 0000000, 0000000,
	0000000, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000,
/* *, */
	0000000, 0000000, 0000000, 0000000, 0004550, 0000000, 0000000, 0000000,
	0000000, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000,
	0000000, 0000000, 0010620, 0000000, 0000000, 0000000, 0000000, 0000000,
	0000000, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000, 0000000,
/* *, */
	0000004, 0000000, 0000004, 0000013, 0000000, 0000000, 0000013, 0000000,
	0000002, 0000000, 0000001, 0000000, 0000020, 0000000, 0000004, 0000000,
	0000074, 0000000, 0000030, 0000000, 0000004, 0000000, 0000140, 0000000,
	0000040, 0000000, 0000004, 0000005, 0000160, 0000000, 0000050, 0000000,
	0000004, 0000007, 0000210, 0000000, 0000061, 0000000, 0000004, 0000001,
	0000224, 0000000, 0000070, 0000000, 0000004, 0000013, 0000240, 0000000,
	0000101, 0000000, 0000004, 0000013, 0000254, 0000000, 0000112, 0000000,
	0000004, 0000001, 0001244, 0000000, 0000121, 0000000, 0000004, 0000007,
	0001244, 0000000, 0000131, 0000000, 0000004, 0000001, 0001264, 0000000,
	0000142, 0000000, 0000004, 0000002, 0001324, 0000000, 0000151, 0000000,
	0000004, 0000002, 0001400, 0000000, 0000161, 0000000, 0000004, 0000001,
	0001420, 0000000, 0000172, 0000000, 0000004, 0000004, 0002474, 0000000,
	0000201, 0000000, 0000004, 0000005, 0002600, 0000000, 0000210, 0000000,
	0000004, 0000000, 0002650, 0000000, 0000220, 0000000, 0000005, 0001640,
	0000224, 0000000, 0000226, 0000000, 0000005, 0002416, 0000000, 0000000,
	0000234, 0000000, 0000005, 0001576, 0000074, 0000000, 0000242, 0000000,
	0000007, 0002562, 0004000, 0000000, 0000253, 0000000, 0000005, 0003572,
	0000140, 0000000, 0000262, 0000000, 0000005, 0003604, 0000160, 0000000,
	0000271, 0000000, 0000005, 0003317, 0000210, 0000000, 0000301, 0000000,
	0000005, 0004034, 0000240, 0000000, 0000310, 0000000, 0000005, 0001626,
	0001052, 0000000, 0000322, 0000000, 0000011, 0003627, 0004610, 0000000,
	0000331, 0000000, 0000005, 0001146, 0000254, 0000000, 0000342, 0000000,
	0000005, 0004225, 0002650, 0000000, 0000351, 0000000, 0000007, 0001456,
	0004050, 0000000, 0000357, 0000000, 0000005, 0003463, 0001264, 0000000,
	0000367, 0000000, 0000011, 0003012, 0004620, 0000000, 0000377, 0000000,
	0000005, 0003253, 0001420, 0000000, 0000407, 0000000, 0000005, 0003114,
	0000720, 0000000, 0000417, 0000000, 0000005, 0003001, 0001114, 0000000,
	0000427, 0000000, 0000007, 0002664, 0004550, 0000000, 0000441, 0000000,
	0000005, 0003473, 0001244, 0000000, 0000450, 0000000, 0000005, 0001571,
	0002174, 0000000, 0000456, 0000000, 0000011, 0002732, 0006620, 0000000,
	0000466, 0000000, 0000005, 0001673, 0001352, 0000000, 0000474, 0000000,
	0000005, 0002033, 0001324, 0000000, 0000502, 0000000, 0000005, 0003614,
	0001400, 0000000, 0000511, 0000000, 0000005, 0003200, 0002600, 0000000,
	0000516, 0000000, 0000005, 0001701, 0002474, 0000000, 0000524, 0000000,
	0000005, 0003067, 0002230, 0000000, 0000535, 0000000, 0000011, 0002714,
	0010620, 0000000, 0000542, 0000000, 0000005, 0002717, 0002551, 0000000,
	0000547, 0000000, 0071143, 0030164, 0067456, 0062400, 0064570, 0000164,
	0074145, 0061545, 0027154, 0000157, 0074145, 0061545, 0027154, 0000157,
	0074145, 0061545, 0027166, 0000157, 0074145, 0061545, 0062566, 0067456,
	0062400, 0064570, 0027164, 0000157, 0062543, 0071162, 0071157, 0067456,
	0063000, 0071554, 0072542, 0027146, 0000157, 0060544, 0060564, 0067456,
	0061400, 0067554, 0062563, 0067456, 0064400, 0060563, 0072164, 0027171,
	0000157, 0072163, 0074564, 0067456, 0064400, 0061557, 0066164, 0067456,
	0066400, 0066141, 0067554, 0027143, 0000157, 0061163, 0065562, 0067456,
	0072400, 0064544, 0027166, 0000157, 0071167, 0072151, 0027145, 0000157,
	0062537, 0064570, 0000164, 0072163, 0071141, 0000164, 0066537, 0064541,
	0000156, 0062537, 0073156, 0071151, 0067157, 0057400, 0074145, 0061545,
	0000154, 0062537, 0062570, 0073143, 0057400, 0074145, 0061545, 0062566,
	0061400, 0071145, 0067562, 0000162, 0057537, 0066143, 0060545, 0072556,
	0000160, 0062537, 0071162, 0067556, 0057400, 0063137, 0071554, 0072542,
	0000146, 0073537, 0064562, 0062564, 0057400, 0064537, 0061157, 0057400,
	0071551, 0072141, 0074564, 0057400, 0071537, 0061157, 0063165, 0057400,
	0060555, 0066154, 0061557, 0057400, 0063146, 0072554, 0064163, 0057400,
	0061546, 0067554, 0062563, 0057400, 0066137, 0071541, 0061164, 0063165,
	0057400, 0066143, 0071557, 0000145, 0063137, 0062562, 0000145, 0057537,
	0064563, 0072542, 0000146, 0063537, 0072164, 0000171, 0071537, 0072164,
	0000171, 0064537, 0061557, 0066164, 0072400, 0064544, 0000166, 0071537,
	0071142, 0000153, 0071137, 0060545, 0066154, 0061557, 0057400, 0067145,
	0000144, 0061137, 0065562, 0000000,
};

static char	confirm[] = "Are you sure you want to leave now?";
static char	prompt[] = "Enter a file name:  ";
static char	exist1[] = "The file '";
static char	exist2[] =
	"' already exists.\nAre you sure you want to use this file?";
static char	cantuse[] = "\nCan't use ";
static char	saved[] = "This file has been saved on the file '";
static char	type[] = "'.\nType '";
static char	rec[] = "' to recover your game.\n\n";
static char	cantrec[] = "Can't recover file:  ";

save (n)
register int	n;

{
	register int	fdesc;
	register char	*fs;
	char		fname[50];

	if (n)  {
		if (tflag)  {
			curmove (20,0);
			clend();
		} else
			writec ('\n');
		writel (confirm);
		if (! yorn(0))
			return;
	}
	cflag = 1;
	for (;;)  {
		writel (prompt);
		fs = fname;
		while ((*fs = readc()) != '\n')  {
			if (*fs == tty.sg_erase)  {
				if (fs > fname)  {
					fs--;
					if (tflag)
						curmove (curr,curc-1);
					else
						writec (*fs);
				} else
					writec ('\007');
				continue;
			}
			writec (*fs++);
		}
		*fs = '\0';
		if ((fdesc = open(fname,2)) == -1 && errno == 2)  {
			if ((fdesc = creat (fname,0700)) != -1)
			break;
		}
		if (fdesc != -1)  {
			if (tflag)  {
				curmove (18,0);
				clend();
			} else
				writec ('\n');
			writel (exist1);
			writel (fname);
			writel (exist2);
			cflag = 0;
			close (fdesc);
			if (yorn (0))  {
				unlink (fname);
				fdesc = creat (fname,0700);
				break;
			} else  {
				cflag = 1;
				continue;
			}
		}
		writel (cantuse);
		writel (fname);
		writel (".\n");
		close (fdesc);
		cflag = 1;
	}
	write (fdesc,code,sizeof code);
	write (fdesc,board,52);
	write (fdesc,off,4);
	write (fdesc,in,4);
	write (fdesc,dice,4);
	write (fdesc,&cturn,2);
	write (fdesc,&dlast,2);
	write (fdesc,&pnum,2);
	write (fdesc,&rscore,2);
	write (fdesc,&wscore,2);
	write (fdesc,&gvalue,2);
	write (fdesc,&raflag,2);
	close (fdesc);
	if (tflag)
		curmove (18,0);
	writel (saved);
	writel (fname);
	writel (type);
	writel (fname);
	writel (rec);
	if (tflag)
		clend();
	getout ();
}

recover (s)
char	*s;

{
	register int	i;
	int		fdesc;

	if ((fdesc = open (s,0)) == -1)
		norec (s);
	read (fdesc,board,52);
	for (i = 0; i < 26; i++)
		if (board[i] != code[i])
			norec (s);
	if (lseek (fdesc,(long) sizeof code,0) == -1)
		norec (s);
	read (fdesc,board,52);
	read (fdesc,off,4);
	read (fdesc,in,4);
	read (fdesc,dice,4);
	read (fdesc,&cturn,2);
	read (fdesc,&dlast,2);
	read (fdesc,&pnum,2);
	read (fdesc,&rscore,2);
	read (fdesc,&wscore,2);
	read (fdesc,&gvalue,2);
	read (fdesc,&raflag,2);
	close (fdesc);
	rflag = 1;
}

norec (s)
register char	*s;

{
	register char	*c;

	tflag = 0;
	writel (cantrec);
	c = s;
	while (*c != '\0')
		writec (*c++);
	getout ();
}
