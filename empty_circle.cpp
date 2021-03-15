#include "funcs.h"
int empty_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c) {
	int x = 0;
	int y = radius;
	int delta = 1 - 2 * radius;
	int error = 0;

	if (radius == 2) {
		field[x0 + radius][y0] = c;
		field[x0 - radius][y0] = c;
	}
	else {
		field[x0 + radius + 1][y0] = c;
		field[x0 - radius - 1][y0] = c;
	}
	
	while (y > 0) {
		field[x0 + x][y0 + y] = c;
		field[x0 + x][y0 - y] = c;
		field[x0 - x][y0 + y] = c;
		field[x0 - x][y0 - y] = c;
		error = 2 * (delta + y) - 1;
		if (delta < 0 && error <= 0) {
			++x;
			delta += 2 * x + 1;
			continue;
		}
		error = 2 * (delta - x) - 1;
		if (delta > 0 && error > 0) {
			--y;
			delta += 1 - 2 * y;
			continue;
		}
		x++;
		delta += 2 * (x - y);
		y--;
	}
	

	return 1;
}