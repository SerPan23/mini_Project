#include "funcs.h"
int background(vector <vector <char>>& field, int w, int h, char c, vector <vector <int>>& colorsfield)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			field[i][j] = c;
			colorsfield[i][j] = 7;
		}
	}
	return 1;
}
