#include "funcs.h"
int background(vector <vector <char>>& field, int w, int h, char c)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			field[i][j] = c;
		}
	}
	return 1;
}
