#include "funcs.h"
int filled_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height) {
	if (x != 0 || y != 0)
		height++;
		

	for (int i = y; i < height; i++)
	{
		line(field, x, i, x + width-1, i, r);
		//line(field, x, width, width - 1, i, r);
	}
	return 1;
}