#include "funcs.h"
int empty_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height )
{
	line(field, x, y, x + width, y, r);
	line(field, x + width, y, x + width, y + height, r);
	line(field, x + width, y + height, x, y + height, r);
	line(field, x, y + height, x, y, r);
	return 1;
}