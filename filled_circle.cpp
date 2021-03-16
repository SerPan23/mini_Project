#include "funcs.h"

void printar(vector <vector <char>> field) {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << (char)field[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int filled_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c) {
	int x = 0;
	int y = radius;
	int delta = 1 - 2 * radius;
	int error = 0;
	while (y > 0) {
		
		for (int i = x0-(x-1); i < x0+x; i++)
		{
			for (int j = y0-y; j <= y0+y; j++)
			{
				field[i][j] = c;
			}
			
		}
		/*field[x0 + x][y0 - y] = c;
		field[x0 - x][y0 + y] = c;
		field[x0 - x][y0 - y] = c;*/
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
		++x;
		delta += 2 * (x - y);
		--y;
	}
	return 1;
}

int filled_circle(vector <vector <char>>& field, int x0, int y0, int radius, char c, int color, vector <vector <int>>& colorsfield) {
	int x = 0;
	int y = radius;
	int delta = 1 - 2 * radius;
	int error = 0;
	while (y > 0) {

		for (int i = x0 - (x - 1); i < x0 + x; i++)
		{
			for (int j = y0 - y; j <= y0 + y; j++)
			{
				field[i][j] = c;

				colorsfield[i][j] = color;
			}

		}
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
		++x;
		delta += 2 * (x - y);
		--y;
	}
	return 1;
}