#include "funcs.h"

int getColorFromRGBS(int r, int g, int b, int s)
{
	int color = 7;
	if (s == 0)
	{
		if (r == 0 && g == 0 && b == 0)
			color = 0; // black
		else if (r == 0 && g == 0 && b == 1)
			color = 1; // blue
		else if (r == 0 && g == 1 && b == 0)
			color = 2; // green
		else if (r == 0 && g == 1 && b == 1)
			color = 3; // cyan
		else if (r == 1 && g == 0 && b == 0)
			color = 4; // red
		else if (r == 1 && g == 0 && b == 1)
			color = 5; // magenta
		else if (r == 1 && g == 1 && b == 0)
			color = 6; // yellow
		else if (r == 1 && g == 1 && b == 1)
			color = 7; // white
	}
	else
	{
		if (r == 0 && g == 0 && b == 0)
			color = 8; // black
		else if (r == 0 && g == 0 && b == 1)
			color = 9; // blue
		else if (r == 0 && g == 1 && b == 0)
			color = 10; // green
		else if (r == 0 && g == 1 && b == 1)
			color = 11; // cyan
		else if (r == 1 && g == 0 && b == 0)
			color = 12; // red
		else if (r == 1 && g == 0 && b == 1)
			color = 13; // magenta
		else if (r == 1 && g == 1 && b == 0)
			color = 14; // yellow
		else if (r == 1 && g == 1 && b == 1)
			color = 15; // white
	}
	return color;
}