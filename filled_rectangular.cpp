#include "funcs.h"
int filled_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height) {
	for (int i = y; i < height; i++)
	{
		line(field, x, i, width - 1, i, r);
	}
	return 1;
}