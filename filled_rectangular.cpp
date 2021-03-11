#include "funcs.h"
void filled_rectangular(vector <vector <char>>& field, char r, int x, int y, int width, int height) {
	for (int i = 0; i < height; i++)
	{
		line(field, 0, i, width - 1, i, r);
	}
}